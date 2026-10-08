#include "psprecomp/decoder.hpp"
#include "psprecomp/codegen_policy.hpp"
#include "psprecomp/elf32.hpp"
#include "psprecomp/guest_memory.hpp"
#include "psprecomp/deflate.hpp"
#include "psprecomp/hle_sas.hpp"
#include "psprecomp/nid_registry.hpp"
#include "psprecomp/program_analysis.hpp"
#include "psprecomp/parallel_work.hpp"
#include "../tools/aot_output.hpp"
#include "psprecomp/runtime.hpp"
#include "psprecomp/sha256.hpp"

#include <array>
#include <bit>
#include <cmath>
#include <cstdlib>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>
#include <utility>

static void require(bool condition, const char *message) {
    if (!condition) throw std::runtime_error(message);
}

static int same_pc_redispatch_count = 0;
static void same_pc_redispatch_test(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx) {
    ++same_pc_redispatch_count;
    if (same_pc_redispatch_count == 3) runtime.stop("same-pc redispatch complete");
    else ctx.pc = 0x08804000u;
}

static std::uint32_t post_dispatch_observed_pc = 0u;
static std::int32_t post_dispatch_observed_uid = 0;
static std::uint32_t post_dispatch_count = 0u;
static void post_dispatch_observer(psprecomp::Runtime &, psprecomp::AllegrexContext &,
                                   std::uint32_t dispatch_pc, std::int32_t dispatch_thread_uid) {
    ++post_dispatch_count;
    post_dispatch_observed_pc = dispatch_pc;
    post_dispatch_observed_uid = dispatch_thread_uid;
}
static void post_dispatch_source(psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
    ctx.pc = 0x08804010u;
}
static void post_dispatch_stop(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &) {
    runtime.stop("post-dispatch hook complete");
}

static void chained_same_context(psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
    ctx.pc = 0x08804120u;
}

static std::uint32_t chained_tick_count = 0u;
static bool chained_tick_switch_context = false;
static void chained_tick(psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
    ++chained_tick_count;
    if (chained_tick_switch_context) {
        psprecomp::set_runtime_thread_identity(7, "timer-target");
        ctx.pc = 0x08804120u;
    }
}

static void chained_switch_context(psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
    // Scheduler regression: a guest callee reaches an HLE wait and the
    // scheduler restores another PSP thread while native caller frames remain
    // on the host stack.  Even if that thread happens to resume at the caller's
    // return PC, the old native frame must not consume its registers.
    psprecomp::set_runtime_thread_identity(5, "UmdStreamThread");
    ctx.pc = 0x08804120u;
}

static void test_chained_call_context_guard() {
    psprecomp::Runtime runtime;
    runtime.register_function(0x08804100u, &chained_same_context, "recomp_unit_chain_same");
    runtime.register_function(0x08804110u, &chained_switch_context, "recomp_unit_chain_switch");
    psprecomp::AllegrexContext ctx{};

    psprecomp::set_runtime_thread_identity(3, "threadmain");
    ctx.pc = 0x08804100u;
    require(runtime.invoke_chained_call(ctx),
            "Same-thread chained guest call was rejected");
    require(ctx.pc == 0x08804120u,
            "Same-thread chained guest call did not preserve its return PC");

    ctx.pc = 0x08804110u;
    require(!runtime.invoke_chained_call(ctx),
            "Thread-switched chained guest call retained ownership of its native caller frame");
    require(ctx.pc == 0x08804120u,
            "Thread-switched chained guest call test did not reproduce matching return PC");

    // Chained units are real guest dispatch work.  Their boundaries must feed
    // the execution-driven PSP clock, and a preemption from that boundary must
    // invalidate the native caller exactly like an HLE-triggered switch.
    chained_tick_count = 0u;
    chained_tick_switch_context = false;
    psprecomp::set_runtime_starvation_hook(&chained_tick, 1u);
    psprecomp::set_runtime_thread_identity(3, "threadmain");
    ctx.pc = 0x08804100u;
    require(runtime.invoke_chained_call(ctx),
            "Same-thread chained dispatch was rejected while accounting time");
    require(chained_tick_count == 1u,
            "Chained dispatch did not advance execution-driven scheduler work");

    chained_tick_switch_context = true;
    ctx.pc = 0x08804100u;
    require(!runtime.invoke_chained_call(ctx),
            "Timer preemption inside a chained boundary retained a stale native frame");
    require(chained_tick_count == 2u && psprecomp::runtime_thread_uid() == 7,
            "Chained-boundary timer preemption did not switch to the expected context");
    psprecomp::set_runtime_starvation_hook(nullptr, 0u);
    chained_tick_switch_context = false;
    psprecomp::set_runtime_thread_identity(-1, "none");

    // Dense unit chaining must bypass the large per-PC table for a
    // clean generated bucket, but an import/host override in that bucket must
    // force the exact lookup path and therefore remain non-chainable.
    psprecomp::Runtime unit_runtime;
    unit_runtime.register_generated_unit(0u, 0x08804000u, 0x4000u, &chained_same_context);
    unit_runtime.register_function(0x08804100u, &chained_same_context, "recomp_unit_0000");
    psprecomp::set_runtime_thread_identity(3, "threadmain");
    ctx.pc = 0x08804100u;
    require(unit_runtime.invoke_chained_unit(ctx, 0u),
            "Clean generated-unit fast path was rejected");
    require(ctx.pc == 0x08804120u,
            "Generated-unit fast path did not execute its target");
    unit_runtime.register_function(0x08804100u, &chained_switch_context, "host_override");
    ctx.pc = 0x08804100u;
    require(!unit_runtime.invoke_chained_unit(ctx, 0u),
            "Overridden generated unit bypassed exact non-chainable lookup");
    psprecomp::set_runtime_thread_identity(-1, "none");
}


// Direct-chain regression: the compile-time direct chain once guarded only the
// scheduler boundary that actually performed a switch. An outer native direct
// chain could therefore return true after a descendant had already changed the
// PSP execution context. If the new thread happened to hold a plausible return
// PC, stale native caller code could resume against the new thread's registers.
static std::uint32_t nested_direct_tick_count = 0u;
static bool nested_direct_middle_resumed = false;
static void nested_direct_tick(psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
    ++nested_direct_tick_count;
    if (nested_direct_tick_count == 1u) {
        psprecomp::set_runtime_thread_identity(7, "nested-direct-target");
        ctx.pc = 0x08801020u;
    }
}
static void nested_direct_leaf(psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
    ctx.pc = 0x08801020u;
}
static void nested_direct_middle(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx) {
    if (!runtime.invoke_chained_direct<&nested_direct_leaf, 1u>(ctx)) return;
    nested_direct_middle_resumed = true;
}
static void test_nested_direct_chain_context_guard() {
    psprecomp::Runtime runtime;
    constexpr std::uint32_t base = 0x08800000u;
    constexpr std::uint32_t span = 0x00004000u;
    runtime.register_generated_unit(0u, base, span, &nested_direct_middle);
    runtime.register_generated_unit(1u, base + span, span, &nested_direct_leaf);

    nested_direct_tick_count = 0u;
    nested_direct_middle_resumed = false;
    psprecomp::set_runtime_starvation_hook(&nested_direct_tick, 1u);
    psprecomp::set_runtime_thread_identity(3, "threadmain");
    psprecomp::AllegrexContext ctx{};
    ctx.pc = base;

    require(!runtime.invoke_chained_direct<&nested_direct_middle, 0u>(ctx),
            "Nested direct chain retained ownership after descendant PSP thread switch");
    require(psprecomp::runtime_thread_uid() == 7,
            "Nested direct-chain regression did not switch to expected PSP thread");
    require(nested_direct_tick_count == 1u,
            "Stale outer direct-chain frame executed another scheduler boundary");
    require(!nested_direct_middle_resumed,
            "Nested direct-chain caller resumed after losing PSP execution context");

    psprecomp::set_runtime_starvation_hook(nullptr, 0u);
    psprecomp::set_runtime_thread_identity(-1, "none");
}

static void test_import_return_context_guard() {
    psprecomp::set_runtime_thread_identity(5, "UmdStreamThread");
    const auto worker_context = psprecomp::capture_runtime_execution_context();
    require(psprecomp::runtime_execution_context_matches(worker_context),
            "Fresh import execution-context token did not match");

    // Updating diagnostic metadata for the same PSP thread is not a context
    // switch and must not suppress the wrapper's normal return-to-RA path.
    psprecomp::set_runtime_thread_identity(5, "UmdStreamThread/read");
    require(psprecomp::runtime_execution_context_matches(worker_context),
            "Same-thread identity refresh invalidated import context");

    // HLE scheduling regression: the wait switches to threadmain,
    // whose saved continuation may be the exact same import stub address.
    // The token, rather than ctx.pc alone, must reject the worker's stale RA.
    psprecomp::set_runtime_thread_identity(3, "threadmain");
    require(!psprecomp::runtime_execution_context_matches(worker_context),
            "Thread switch did not invalidate import return context");

    // Switching back to the same UID later must not resurrect an old token.
    psprecomp::set_runtime_thread_identity(5, "UmdStreamThread");
    require(!psprecomp::runtime_execution_context_matches(worker_context),
            "Stale import context became valid after switching back to its UID");
    psprecomp::set_runtime_thread_identity(-1, "none");
}

static void put16(std::vector<std::uint8_t> &bytes, std::size_t offset, std::uint16_t value) {
    bytes[offset] = static_cast<std::uint8_t>(value);
    bytes[offset + 1] = static_cast<std::uint8_t>(value >> 8u);
}

static void put32(std::vector<std::uint8_t> &bytes, std::size_t offset, std::uint32_t value) {
    bytes[offset] = static_cast<std::uint8_t>(value);
    bytes[offset + 1] = static_cast<std::uint8_t>(value >> 8u);
    bytes[offset + 2] = static_cast<std::uint8_t>(value >> 16u);
    bytes[offset + 3] = static_cast<std::uint8_t>(value >> 24u);
}


static std::vector<std::uint8_t> make_branch_delay_test_elf() {
    std::vector<std::uint8_t> bytes(0xA0u, 0u);
    bytes[0] = 0x7Fu; bytes[1] = 'E'; bytes[2] = 'L'; bytes[3] = 'F';
    bytes[4] = 1u; bytes[5] = 1u; bytes[6] = 1u;
    put16(bytes, 16u, 2u);          // ET_EXEC
    put16(bytes, 18u, 8u);          // EM_MIPS
    put32(bytes, 20u, 1u);
    put32(bytes, 24u, 0x08804000u);
    put32(bytes, 28u, 52u);
    put16(bytes, 40u, 52u);
    put16(bytes, 42u, 32u);
    put16(bytes, 44u, 1u);
    put16(bytes, 46u, 40u);

    put32(bytes, 52u, 1u);          // PT_LOAD
    put32(bytes, 56u, 0x80u);
    put32(bytes, 60u, 0x08804000u);
    put32(bytes, 64u, 0x08804000u);
    put32(bytes, 68u, 0x1Cu);
    put32(bytes, 72u, 0x1Cu);
    put32(bytes, 76u, 5u);
    put32(bytes, 80u, 16u);

    const std::uint32_t code[] = {
        0x24080000u, // addiu t0, zero, 0
        0x11000002u, // beq   t0, zero, target
        0x25080001u, // addiu t0, t0, 1 (delay slot changes condition source)
        0x24020001u, // addiu v0, zero, 1
        0x24020002u, // target: addiu v0, zero, 2
        0x03E00008u, // jr ra
        0x00000000u, // nop
    };
    for (std::size_t i = 0; i < std::size(code); ++i) put32(bytes, 0x80u + i * 4u, code[i]);
    return bytes;
}

static std::vector<std::uint8_t> make_cross_unit_branch_test_elf() {
    std::vector<std::uint8_t> bytes(0xC8u, 0u);
    bytes[0] = 0x7Fu; bytes[1] = 'E'; bytes[2] = 'L'; bytes[3] = 'F';
    bytes[4] = 1u; bytes[5] = 1u; bytes[6] = 1u;
    put16(bytes, 16u, 2u);          // ET_EXEC
    put16(bytes, 18u, 8u);          // EM_MIPS
    put32(bytes, 20u, 1u);
    put32(bytes, 24u, 0x08804000u);
    put32(bytes, 28u, 52u);
    put16(bytes, 40u, 52u);
    put16(bytes, 42u, 32u);
    put16(bytes, 44u, 1u);
    put16(bytes, 46u, 40u);

    put32(bytes, 52u, 1u);          // PT_LOAD
    put32(bytes, 56u, 0x80u);
    put32(bytes, 60u, 0x08804000u);
    put32(bytes, 64u, 0x08804000u);
    put32(bytes, 68u, 0x48u);
    put32(bytes, 72u, 0x48u);
    put32(bytes, 76u, 5u);
    put32(bytes, 80u, 16u);

    // With a 64-byte automatic partition, the taken target belongs to unit 1
    // while the branch and its fallthrough remain in unit 0.
    put32(bytes, 0x80u, 0x1000000Fu); // beq zero, zero, 0x08804040
    put32(bytes, 0x84u, 0x00000000u); // nop
    put32(bytes, 0x88u, 0x03E00008u); // jr ra (fallthrough CFG)
    put32(bytes, 0x8Cu, 0x00000000u); // nop
    put32(bytes, 0xC0u, 0x03E00008u); // target: jr ra
    put32(bytes, 0xC4u, 0x00000000u); // nop
    return bytes;
}

static std::vector<std::uint8_t> make_vfpu_branch_test_elf() {
    auto bytes = make_branch_delay_test_elf();
    const std::uint32_t code[] = {
        0x24080000u, // addiu t0, zero, 0
        0x49110002u, // bvt cc4, target
        0x25080001u, // addiu t0, t0, 1 (delay slot)
        0x24020001u, // fallthrough
        0x24020002u, // target
        0x03E00008u, // jr ra
        0x00000000u,
    };
    for (std::size_t i = 0; i < std::size(code); ++i) put32(bytes, 0x80u + i * 4u, code[i]);
    return bytes;
}

static std::vector<std::uint8_t> make_link_branch_test_elf() {
    auto bytes = make_branch_delay_test_elf();
    const std::uint32_t code[] = {
        0x240AFFFFu, // addiu t2, zero, -1
        0x05500002u, // bltzal t2, target
        0x27E80000u, // addiu t0, ra, 0 (delay slot must see new RA)
        0x24020001u, // fallthrough
        0x24020002u, // target
        0x03E00008u, // jr ra
        0x00000000u,
    };
    for (std::size_t i = 0; i < std::size(code); ++i) put32(bytes, 0x80u + i * 4u, code[i]);
    return bytes;
}

static std::vector<std::uint8_t> make_divzero_codegen_test_elf() {
    auto bytes = make_branch_delay_test_elf();
    const std::uint32_t code[] = {
        0x0080001Au, // div  a0, zero
        0x0080001Bu, // divu a0, zero
        0x03E00008u, // jr ra
        0x00000000u, // nop
    };
    for (std::size_t i = 0; i < std::size(code); ++i) put32(bytes, 0x80u + i * 4u, code[i]);
    return bytes;
}

static std::vector<std::uint8_t> make_vh2f_test_elf() {
    auto bytes = make_branch_delay_test_elf();
    const std::uint32_t code[] = {
        0xD0330000u, // vh2f.p C000, S000
        0xD2830182u, // vi2f.p C002, C001, 3
        0xD2202020u, // vf2iz.s S032, S032, 0
        0xD03B0280u, // vs2i.p C000, C002
        0xD047A408u, // vavg.t S008, C440
        0xD03200C0u, // vf2h.p S064, C000
        0x03E00008u, // jr ra
        0x00000000u, // nop
    };
    for (std::size_t i = 0; i < std::size(code); ++i) put32(bytes, 0x80u + i * 4u, code[i]);
    return bytes;
}

static std::string shell_quote(const std::filesystem::path &path) {
#ifdef _WIN32
    std::string value = path.string();
    std::string escaped = "\"";
    for (const char c : value) escaped += c == '"' ? "\\\"" : std::string(1, c);
    return escaped + "\"";
#else
    std::string value = path.string();
    std::string escaped = "'";
    for (const char c : value) escaped += c == '\'' ? "'\\''" : std::string(1, c);
    return escaped + "'";
#endif
}

// std::system runs the line through `cmd /c` on Windows, and cmd strips the
// outermost quote pair when the line starts with one.  A build directory such
// as "Nova pasta (4)" then splits at the first space and the tool is not found.
// Wrapping the whole line in one more quote pair is the documented workaround.
static std::string shell_command(const std::string &command) {
#ifdef _WIN32
    return "\"" + command + "\"";
#else
    return command;
#endif
}

static void test_codegen_branch_before_delay_slot() {
#ifndef PSPRECOMP_CODEGEN_PATH
    throw std::runtime_error("PSPRECOMP_CODEGEN_PATH was not provided by CMake");
#else
    const auto root = std::filesystem::temp_directory_path() / "psprecomp_branch_codegen_test";
    std::filesystem::remove_all(root);
    std::filesystem::create_directories(root);
    const auto elf_path = root / "branch_delay.elf";
    const auto csv_path = root / "functions.csv";
    const auto cpp_path = root / "generated.cpp";

    const auto bytes = make_branch_delay_test_elf();
    { std::ofstream out(elf_path, std::ios::binary); out.write(reinterpret_cast<const char *>(bytes.data()), static_cast<std::streamsize>(bytes.size())); }
    { std::ofstream out(csv_path); out << "name,address,size\nbranch_delay_test,0x08804000,0x0000001C\n"; }

    const std::filesystem::path codegen_path = PSPRECOMP_CODEGEN_PATH;
    const std::string command = shell_quote(codegen_path) + " " + shell_quote(elf_path) + " " + shell_quote(csv_path) + " " + shell_quote(cpp_path);
    require(std::system(shell_command(command).c_str()) == 0, "psp_recomp branch fixture generation failed");

    // The stream must be closed before remove_all(): Windows refuses to delete
    // a file that still has an open handle.
    std::string text;
    {
        std::ifstream generated(cpp_path);
        text.assign((std::istreambuf_iterator<char>(generated)), std::istreambuf_iterator<char>());
    }
    const auto condition = text.find("const bool branch_taken = ctx.gpr[8] == 0u");
    const auto delay_slot = text.find("ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1))");
    require(condition != std::string::npos, "Generated branch condition was not found");
    require(delay_slot != std::string::npos, "Generated delay-slot instruction was not found");
    require(condition < delay_slot, "Branch condition must be captured before executing the delay slot");
    require(text.find("LOCAL_DISPATCH:") != std::string::npos &&
                text.find("++local_transfers < 2048u") != std::string::npos,
            "Generated unit did not include bounded same-unit call/return chaining");
    std::filesystem::remove_all(root);
#endif
}



static void test_codegen_vfpu_branch_before_delay_slot() {
#ifndef PSPRECOMP_CODEGEN_PATH
    throw std::runtime_error("PSPRECOMP_CODEGEN_PATH was not provided by CMake");
#else
    const auto root = std::filesystem::temp_directory_path() / "psprecomp_vfpu_branch_codegen_test";
    std::filesystem::remove_all(root);
    std::filesystem::create_directories(root);
    const auto elf_path = root / "vfpu_branch.elf";
    const auto csv_path = root / "functions.csv";
    const auto cpp_path = root / "generated.cpp";

    const auto bytes = make_vfpu_branch_test_elf();
    { std::ofstream out(elf_path, std::ios::binary); out.write(reinterpret_cast<const char *>(bytes.data()), static_cast<std::streamsize>(bytes.size())); }
    { std::ofstream out(csv_path); out << "name,address,size\nvfpu_branch_test,0x08804000,0x0000001C\n"; }

    const std::filesystem::path codegen_path = PSPRECOMP_CODEGEN_PATH;
    const std::string command = shell_quote(codegen_path) + " " + shell_quote(elf_path) + " " + shell_quote(csv_path) + " " + shell_quote(cpp_path);
    require(std::system(shell_command(command).c_str()) == 0, "psp_recomp VFPU branch fixture generation failed");

    // The stream must be closed before remove_all(): Windows refuses to delete
    // a file that still has an open handle.
    std::string text;
    {
        std::ifstream generated(cpp_path);
        text.assign((std::istreambuf_iterator<char>(generated)), std::istreambuf_iterator<char>());
    }
    const auto condition = text.find("const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 4u) & 1u) != 0u");
    const auto delay_slot = text.find("ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1))");
    require(condition != std::string::npos && delay_slot != std::string::npos && condition < delay_slot,
            "VFPU branch condition was not captured before its delay slot");
    std::filesystem::remove_all(root);
#endif
}

static void test_codegen_link_branch_before_delay_slot() {
#ifndef PSPRECOMP_CODEGEN_PATH
    throw std::runtime_error("PSPRECOMP_CODEGEN_PATH was not provided by CMake");
#else
    const auto root = std::filesystem::temp_directory_path() / "psprecomp_link_branch_codegen_test";
    std::filesystem::remove_all(root);
    std::filesystem::create_directories(root);
    const auto elf_path = root / "link_branch.elf";
    const auto csv_path = root / "functions.csv";
    const auto cpp_path = root / "generated.cpp";

    const auto bytes = make_link_branch_test_elf();
    { std::ofstream out(elf_path, std::ios::binary); out.write(reinterpret_cast<const char *>(bytes.data()), static_cast<std::streamsize>(bytes.size())); }
    { std::ofstream out(csv_path); out << "name,address,size\nlink_branch_test,0x08804000,0x0000001C\n"; }

    const std::filesystem::path codegen_path = PSPRECOMP_CODEGEN_PATH;
    const std::string command = shell_quote(codegen_path) + " " + shell_quote(elf_path) + " " + shell_quote(csv_path) + " " + shell_quote(cpp_path);
    require(std::system(shell_command(command).c_str()) == 0, "psp_recomp link-branch fixture generation failed");

    // The stream must be closed before remove_all(): Windows refuses to delete
    // a file that still has an open handle.
    std::string text;
    {
        std::ifstream generated(cpp_path);
        text.assign((std::istreambuf_iterator<char>(generated)), std::istreambuf_iterator<char>());
    }
    const auto link = text.find("ctx.set_gpr(31, 0x0880400Cu)");
    const auto condition = text.find("const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0");
    const auto delay_slot = text.find("ctx.set_gpr(8, ctx.gpr[31] + static_cast<std::uint32_t>(0))");
    require(link != std::string::npos, "Generated BLTZAL link write was not found");
    require(condition != std::string::npos, "Generated BLTZAL condition was not found");
    require(delay_slot != std::string::npos, "Generated BLTZAL delay slot was not found");
    require(link < condition && condition < delay_slot,
            "BLTZAL must write RA before capturing the condition and executing the delay slot");
    std::filesystem::remove_all(root);
#endif
}

static void test_codegen_zero_divisor_constant_folding() {
#ifndef PSPRECOMP_CODEGEN_PATH
    throw std::runtime_error("PSPRECOMP_CODEGEN_PATH was not provided by CMake");
#else
    const auto root = std::filesystem::temp_directory_path() / "psprecomp_divzero_codegen_test";
    std::filesystem::remove_all(root);
    std::filesystem::create_directories(root);
    const auto elf_path = root / "divzero.elf";
    const auto csv_path = root / "functions.csv";
    const auto cpp_path = root / "generated.cpp";

    const auto bytes = make_divzero_codegen_test_elf();
    { std::ofstream out(elf_path, std::ios::binary); out.write(reinterpret_cast<const char *>(bytes.data()), static_cast<std::streamsize>(bytes.size())); }
    { std::ofstream out(csv_path); out << "name,address,size\ndivzero_test,0x08804000,0x00000010\n"; }

    const std::filesystem::path codegen_path = PSPRECOMP_CODEGEN_PATH;
    const std::string command = shell_quote(codegen_path) + " " + shell_quote(elf_path) + " " + shell_quote(csv_path) + " " + shell_quote(cpp_path);
    require(std::system(shell_command(command).c_str()) == 0, "psp_recomp DIV/DIVU-zero fixture generation failed");

    std::string text;
    {
        std::ifstream generated(cpp_path);
        text.assign((std::istreambuf_iterator<char>(generated)), std::istreambuf_iterator<char>());
    }
    require(text.find("const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u") != std::string::npos,
            "DIV with $zero divisor did not lower directly to Allegrex divide-by-zero semantics");
    require(text.find("const std::uint32_t dividend = ctx.gpr[4]; ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend") != std::string::npos,
            "DIVU with $zero divisor did not lower directly to Allegrex divide-by-zero semantics");
    require(text.find("divisor = static_cast<std::int32_t>(0u)") == std::string::npos &&
                text.find("const std::uint32_t divisor = 0u") == std::string::npos,
            "$zero divisor must never be materialized as a compile-time zero divisor");
    std::filesystem::remove_all(root);
#endif
}

static void test_codegen_vh2f_lowering() {
#ifndef PSPRECOMP_CODEGEN_PATH
    throw std::runtime_error("PSPRECOMP_CODEGEN_PATH was not provided by CMake");
#else
    const auto root = std::filesystem::temp_directory_path() / "psprecomp_vh2f_codegen_test";
    std::filesystem::remove_all(root);
    std::filesystem::create_directories(root);
    const auto elf_path = root / "vh2f.elf";
    const auto csv_path = root / "functions.csv";
    const auto cpp_path = root / "generated.cpp";

    const auto bytes = make_vh2f_test_elf();
    { std::ofstream out(elf_path, std::ios::binary); out.write(reinterpret_cast<const char *>(bytes.data()), static_cast<std::streamsize>(bytes.size())); }
    { std::ofstream out(csv_path); out << "name,address,size\nvh2f_test,0x08804000,0x00000020\n"; }

    const std::filesystem::path codegen_path = PSPRECOMP_CODEGEN_PATH;
    const std::string command = shell_quote(codegen_path) + " " + shell_quote(elf_path) + " " + shell_quote(csv_path) + " " + shell_quote(cpp_path);
    require(std::system(shell_command(command).c_str()) == 0, "psp_recomp VH2F fixture generation failed");

    // The stream must be closed before remove_all(): Windows refuses to delete
    // a file that still has an open handle.
    std::string text;
    {
        std::ifstream generated(cpp_path);
        text.assign((std::istreambuf_iterator<char>(generated)), std::istreambuf_iterator<char>());
    }
    require(text.find("ctx.execute_vfpu_vh2f(0u, 0u, 1u)") != std::string::npos,
            "VH2F was not lowered to the dedicated AOT helper");
    require(text.find("const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u))") != std::string::npos,
            "VI2F scale was not lowered into generated AOT code");
    require(text.find("static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]))") != std::string::npos,
            "VI2F did not reinterpret source lanes as signed integers");
    require(text.find("vh2f not lowered yet") == std::string::npos,
            "VH2F codegen retained an unsupported fallback");
    require(text.find("vi2f not lowered yet") == std::string::npos,
            "VI2F codegen retained an unsupported fallback");
    require(text.find("case 17u: vfpu_rounded = std::trunc(vfpu_scaled)") != std::string::npos,
            "VF2IZ did not lower to truncation semantics");
    require(text.find("std::numeric_limits<std::int32_t>::max()") != std::string::npos,
            "VF2I saturation/NaN handling was not generated");
    require(text.find("vf2iz not lowered yet") == std::string::npos,
            "VF2IZ codegen retained an unsupported fallback");
    require(text.find("ctx.execute_vfpu_vx2i(0u, 2u, 2u, 3u)") != std::string::npos,
            "VS2I.P was not lowered to the dedicated AOT helper");
    require(text.find("ctx.execute_vfpu_horizontal(8u, 36u, 3u, true)") != std::string::npos,
            "VAVG.T was not lowered to the dedicated AOT helper");
    require(text.find("ctx.execute_vfpu_vf2h(64u, 0u, 2u)") != std::string::npos,
            "VF2H.P was not lowered to the dedicated AOT helper");
    require(text.find("vfpu4 not lowered yet") == std::string::npos,
            "VFPU horizontal codegen retained the generic VFPU4 fallback");
    std::filesystem::remove_all(root);
#endif
}

static std::vector<std::uint8_t> make_function_pointer_test_elf() {
    std::vector<std::uint8_t> bytes(0xB0u, 0u);
    bytes[0] = 0x7Fu; bytes[1] = 'E'; bytes[2] = 'L'; bytes[3] = 'F';
    bytes[4] = 1u; bytes[5] = 1u; bytes[6] = 1u;
    put16(bytes, 16u, 2u);
    put16(bytes, 18u, 8u);
    put32(bytes, 20u, 1u);
    put32(bytes, 24u, 0x08804000u);
    put32(bytes, 28u, 52u);
    put16(bytes, 40u, 52u);
    put16(bytes, 42u, 32u);
    put16(bytes, 44u, 1u);
    put16(bytes, 46u, 40u);

    put32(bytes, 52u, 1u);
    put32(bytes, 56u, 0x80u);
    put32(bytes, 60u, 0x08804000u);
    put32(bytes, 64u, 0x08804000u);
    put32(bytes, 68u, 0x30u);
    put32(bytes, 72u, 0x30u);
    put32(bytes, 76u, 5u);
    put32(bytes, 80u, 16u);

    const std::uint32_t code[] = {
        0x3C080880u, // lui   t0, 0x0880
        0x25054020u, // addiu a1, t0, 0x4020 -> executable callback pointer
        0x03E00008u, // jr ra
        0x00000000u, // nop
        0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u,
        0x24020007u, // callback: addiu v0, zero, 7
        0x03E00008u, // jr ra
        0x00000000u, // nop
        0x00000000u,
    };
    for (std::size_t i = 0; i < std::size(code); ++i) put32(bytes, 0x80u + i * 4u, code[i]);
    return bytes;
}

static void test_materialized_function_pointer_discovery() {
    auto elf = psprecomp::Elf32Image::from_bytes(make_function_pointer_test_elf(), "function_pointer.elf");
    psprecomp::GuestMemory memory;
    (void)elf.load_and_relocate(memory, psprecomp::kDefaultPspUserLoadBase);
    const auto program = psprecomp::analyze_program(elf, memory, psprecomp::kDefaultPspUserLoadBase);
    const auto it = program.seeds.find(0x08804020u);
    require(it != program.seeds.end(), "Materialized executable pointer was not discovered");
    require(it->second == "materialized_code_pointer", "Materialized executable pointer source was not classified");
}

static void test_vfpu_branch_cfg_discovery() {
    const auto bytes = make_vfpu_branch_test_elf();
    auto elf = psprecomp::Elf32Image::from_bytes(bytes, "vfpu_branch_cfg.elf");
    psprecomp::GuestMemory memory;
    (void)elf.load_and_relocate(memory, psprecomp::kDefaultPspUserLoadBase);
    const auto program = psprecomp::analyze_program(elf, memory, psprecomp::kDefaultPspUserLoadBase);
    require(program.functions.size() == 1u, "VFPU branch CFG should keep one synthetic function");
    const auto &function = program.functions.front();
    require(function.entry_labels.contains(0x0880400Cu), "VFPU branch CFG missed fallthrough entry");
    require(function.entry_labels.contains(0x08804010u), "VFPU branch CFG missed taken target entry");
    require(program.covered_entry_labels.contains(0x08804010u),
            "VFPU branch target was not exported as a dispatcher entry");
}

static void test_automatic_cfg_and_codegen() {
#ifndef PSPRECOMP_CODEGEN_PATH
    throw std::runtime_error("PSPRECOMP_CODEGEN_PATH was not provided by CMake");
#else
    const auto bytes = make_branch_delay_test_elf();
    auto elf = psprecomp::Elf32Image::from_bytes(bytes, "automatic_cfg.elf");
    psprecomp::GuestMemory memory;
    (void)elf.load_and_relocate(memory, psprecomp::kDefaultPspUserLoadBase);
    const auto program = psprecomp::analyze_program(elf, memory, psprecomp::kDefaultPspUserLoadBase);
    require(program.functions.size() == 1u, "Automatic CFG should discover the synthetic entry function");
    require(program.covered_labels.size() == 5u, "Automatic CFG label coverage failed");
    require(program.functions.front().labels.contains(0x08804000u), "Automatic CFG missed function entry");
    require(program.functions.front().labels.contains(0x0880400Cu), "Automatic CFG missed branch fallthrough");
    require(program.functions.front().labels.contains(0x08804010u), "Automatic CFG missed branch target");

    const auto root = std::filesystem::temp_directory_path() / "psprecomp_auto_codegen_test";
    std::filesystem::remove_all(root);
    std::filesystem::create_directories(root);
    const auto elf_path = root / "automatic_cfg.elf";
    const auto generated_dir = root / "generated";
    { std::ofstream out(elf_path, std::ios::binary); out.write(reinterpret_cast<const char *>(bytes.data()), static_cast<std::streamsize>(bytes.size())); }

    const std::filesystem::path codegen_path = PSPRECOMP_CODEGEN_PATH;
    const std::string command = shell_quote(codegen_path) + " " + shell_quote(elf_path) +
        " --auto " + shell_quote(generated_dir) + " 0x08804000 64";
    require(std::system(shell_command(command).c_str()) == 0, "psp_recomp automatic generation failed");
    require(std::filesystem::exists(generated_dir / "generated_registry.cpp"), "Automatic registry was not generated");
    require(std::filesystem::exists(generated_dir / "generated_unit_0000.cpp"), "Automatic source unit was not generated");
    require(std::filesystem::exists(generated_dir / "auto_codegen_report.json"), "Automatic codegen report was not generated");

    // Closed before remove_all() so Windows can delete the directory.
    std::string text;
    {
        std::ifstream generated(generated_dir / "generated_unit_0000.cpp");
        text.assign((std::istreambuf_iterator<char>(generated)), std::istreambuf_iterator<char>());
    }
    // Block-local caching may keep r8 in a host register. The semantic
    // requirement is unchanged: capture the branch condition before executing
    // the delay-slot increment, then commit the dirty cached value before either
    // branch path leaves the guest label.
    auto condition = text.find("const bool branch_taken = ctx.gpr[8] == 0u");
    auto delay_slot = text.find("ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1))");
    if (condition == std::string::npos) condition = text.find("const bool branch_taken = g8 == 0u");
    if (delay_slot == std::string::npos) delay_slot = text.find("g8 = (g8 + static_cast<std::uint32_t>(1))");
    require(condition != std::string::npos && delay_slot != std::string::npos && condition < delay_slot,
            "Automatic codegen lost branch-before-delay-slot semantics");
    if (text.find("std::uint32_t g8 = ctx.gpr[8]") != std::string::npos) {
        const auto commit = text.find("ctx.gpr[8] = g8", delay_slot);
        const auto branch = text.find("if (branch_taken)", delay_slot);
        require(commit != std::string::npos && branch != std::string::npos && commit < branch,
                "AOT GPR cache did not commit the delay-slot write before branching");
    }
    require(text.find("ctx.set_gpr(") == std::string::npos,
            "Automatic codegen retained set_gpr helper calls instead of direct constant GPR writes");
    std::filesystem::remove_all(root);
#endif
}

static void test_automatic_cross_unit_tail_chaining() {
#ifndef PSPRECOMP_CODEGEN_PATH
    throw std::runtime_error("PSPRECOMP_CODEGEN_PATH was not provided by CMake");
#else
    const auto root = std::filesystem::temp_directory_path() / "psprecomp_cross_unit_tail_test";
    std::filesystem::remove_all(root);
    std::filesystem::create_directories(root);
    const auto elf_path = root / "cross_unit_tail.elf";
    const auto generated_dir = root / "generated";
    const auto bytes = make_cross_unit_branch_test_elf();
    { std::ofstream out(elf_path, std::ios::binary); out.write(reinterpret_cast<const char *>(bytes.data()), static_cast<std::streamsize>(bytes.size())); }

    const std::filesystem::path codegen_path = PSPRECOMP_CODEGEN_PATH;
    const std::string command = shell_quote(codegen_path) + " " + shell_quote(elf_path) +
        " --auto " + shell_quote(generated_dir) + " 0x08804000 64";
    require(std::system(shell_command(command).c_str()) == 0,
            "psp_recomp cross-unit tail fixture generation failed");
    require(std::filesystem::exists(generated_dir / "generated_unit_0000.cpp"),
            "Cross-unit source unit 0 was not generated");
    require(std::filesystem::exists(generated_dir / "generated_unit_0001.cpp"),
            "Cross-unit source unit 1 was not generated");

    std::string text;
    {
        std::ifstream generated(generated_dir / "generated_unit_0000.cpp");
        text.assign((std::istreambuf_iterator<char>(generated)), std::istreambuf_iterator<char>());
    }
    require(text.find("(void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 1u, 0x08804040u>(ctx, &aot_mem); return;") != std::string::npos,
            "Automatic codegen did not emit a direct-entry native chain across AOT units");
    require(text.find("ctx.pc = 0x08804040u; (void)rt.invoke_chained_direct") == std::string::npos,
            "Direct-entry chain still dirties ctx.pc on its successful hot path");
    require(text.find("GuestMemory::AotFastView &aot_mem)") != std::string::npos &&
            text.find("_entry(rt, ctx, 0u, aot_mem)") != std::string::npos,
            "Shared AOT memory was not threaded across generated-unit direct chains");
    // The register-cache lowering passes were removed: generated units must
    // address AllegrexContext directly rather than a second long-lived cache
    // object, which is what made MSVC's optimizer non-convergent on this corpus.
    require(text.find("AotHotRegisterCache") == std::string::npos &&
            text.find("hot_regs") == std::string::npos,
            "Generated unit still carries the removed hot-register cache");
    require(text.find("#include \"generated_units.hpp\"") != std::string::npos,
            "Automatic codegen did not include cross-unit native declarations");
    require(text.find("runtime.register_generated_unit(0u, 0x08804000u, 64u, &recomp_unit_0000, &recomp_unit_0000_entry);") != std::string::npos,
            "Automatic codegen did not register the dense generated-unit fast table");
    std::filesystem::remove_all(root);
#endif
}

static void test_parallel_work_and_atomic_output() {
    require(psprecomp::effective_jobs(0u, 0u) == 1u, "Unknown hardware concurrency must use one worker");
    require(psprecomp::effective_jobs(0u, 20u) == 20u && psprecomp::effective_jobs(4u, 20u) == 4u,
            "Worker selection ignored explicit or automatic concurrency");
    const auto caller = std::this_thread::get_id();
    psprecomp::parallel_work(10u, 1u, [&](std::size_t) {
        require(std::this_thread::get_id() == caller, "--jobs 1 must execute on the calling thread");
    }, [] {});
    std::vector<std::size_t> values(1000u);
    psprecomp::parallel_work(values.size(), 4u, [&](std::size_t i) { values[i] = i * i; }, [] {});
    for (std::size_t i = 0u; i < values.size(); ++i) require(values[i] == i * i, "Parallel aggregation lost a result");
    std::atomic<unsigned> active{0u};
    std::atomic<bool> start{false};
    std::atomic<unsigned> completed{0u};
    bool caught = false;
    try {
        psprecomp::parallel_work(4u, 4u, [&](std::size_t i) {
            ++active;
            struct Exit { std::atomic<unsigned> &active; ~Exit() { --active; } } exit{active};
            if (i == 0u) {
                while (active != 4u) std::this_thread::yield();
                start = true;
            } else {
                while (!start) std::this_thread::yield();
            }
            if (i == 0u) throw std::runtime_error("worker failure");
            std::this_thread::sleep_for(std::chrono::milliseconds(20));
            ++completed;
        }, [] {});
    } catch (const std::runtime_error &error) { caught = std::string(error.what()) == "worker failure"; }
    require(caught && active == 0u && completed == 3u, "Worker exception was lost or workers were not joined");
    psprecomp::parallel_work(0u, 0u, [](std::size_t) { throw std::runtime_error("empty work ran"); }, [] {});

    const auto root = std::filesystem::temp_directory_path() / "psprecomp_atomic_output_test";
    std::filesystem::remove_all(root);
    std::filesystem::create_directories(root);
    const auto final = root / "unit.cpp";
    { psprecomp::AtomicTextFile file(final); file.stream() << "old"; require(file.commit(), "Initial file was not published"); }
    const auto stamp = std::filesystem::last_write_time(final);
    { psprecomp::AtomicTextFile file(final); file.stream() << "old"; require(!file.commit(), "Unchanged output was rewritten"); }
    require(std::filesystem::last_write_time(final) == stamp, "Unchanged output timestamp changed");
    { psprecomp::AtomicTextFile file(final); file.stream() << "new"; require(file.commit(), "Existing output replacement failed"); }
    bool write_failed = false;
    try {
        psprecomp::AtomicTextFile file(final);
        file.stream() << "partial";
        file.stream().setstate(std::ios::badbit);
        (void)file.commit();
    } catch (const psprecomp::Error &) { write_failed = true; }
    require(write_failed && !std::filesystem::exists(final.string() + ".tmp"), "Failed output left a temporary file");
    std::string preserved;
    { std::ifstream file(final); file >> preserved; }
    require(preserved == "new", "Failed output overwrote the completed file");
    const auto fresh = root / "fresh.cpp";
    { psprecomp::AtomicTextFile file(fresh); file.stream() << "partial"; }
    require(!std::filesystem::exists(fresh) && !std::filesystem::exists(fresh.string() + ".tmp"),
            "Uncommitted output left a partial final or temporary file");
    std::filesystem::remove_all(root);
}

static void test_parallel_codegen_determinism_and_failure() {
#ifdef PSPRECOMP_CODEGEN_PATH
    const auto root = std::filesystem::temp_directory_path() / "psprecomp_parallel_codegen_test";
    std::filesystem::remove_all(root);
    std::filesystem::create_directories(root);
    const auto elf_path = root / "parallel.elf";
    const auto bytes = make_cross_unit_branch_test_elf();
    { std::ofstream out(elf_path, std::ios::binary); out.write(reinterpret_cast<const char *>(bytes.data()), static_cast<std::streamsize>(bytes.size())); }
    const std::string base = shell_quote(std::filesystem::path(PSPRECOMP_CODEGEN_PATH)) + " " + shell_quote(elf_path) + " --auto ";
    std::map<std::string, std::string> reference;
    for (const unsigned jobs : {1u, 4u, 20u, 0u}) {
        const auto output = root / ("jobs_" + std::to_string(jobs));
        const auto command = base + shell_quote(output) + " --jobs " + std::to_string(jobs) + " 0x08804000 64";
        require(std::system(shell_command(command).c_str()) == 0, "Parallel CLI generation failed");
        std::map<std::string, std::string> files;
        for (const auto &entry : std::filesystem::directory_iterator(output)) {
            require(entry.path().extension() != ".tmp", "Successful generation left a temporary file");
            std::ifstream in(entry.path(), std::ios::binary);
            files[entry.path().filename().string()] = std::string(std::istreambuf_iterator<char>(in), {});
        }
        if (jobs == 1u) reference = files;
        else require(files == reference, "Generated units, header, registry or report depend on worker count");
        require(files.at("generated_units.hpp").find("recomp_unit_0000(") < files.at("generated_units.hpp").find("recomp_unit_0001("),
                "Unit declarations lost address ordering");
    }
    const auto failed = root / "failed";
    std::filesystem::create_directories(failed / "generated_unit_0000.cpp"); // Force a worker publication error.
    const auto command = base + shell_quote(failed) + " 0x08804000 64 --jobs 4";
    require(std::system(shell_command(command).c_str()) != 0, "Worker output error was silently ignored");
    require(std::filesystem::is_directory(failed / "generated_unit_0000.cpp"), "Failure replaced the conflicting destination");
    require(!std::filesystem::exists(failed / "generated_registry.cpp") && !std::filesystem::exists(failed / "auto_codegen_report.json"),
            "Failed run published a success manifest");
    for (const auto &entry : std::filesystem::directory_iterator(failed))
        require(entry.path().extension() != ".tmp", "Worker error left a temporary file");
    for (const auto *args : {"--jobs", "--jobs -1", "--jobs 1x", "--jobs 4294967296", "--jobs 2 --jobs 3", "--unknown"}) {
        require(std::system(shell_command(base + shell_quote(root / "invalid") + " " + args).c_str()) != 0,
                "Invalid CLI arguments were accepted");
    }
    require(!std::filesystem::exists(root / "invalid"), "Invalid CLI arguments started generation");
    std::filesystem::remove_all(root);
#endif
}

static std::vector<std::uint8_t> make_relocation_test_prx() {
    std::vector<std::uint8_t> bytes(0x1B8u, 0u);
    bytes[0] = 0x7Fu; bytes[1] = 'E'; bytes[2] = 'L'; bytes[3] = 'F';
    bytes[4] = 1u; bytes[5] = 1u; bytes[6] = 1u;
    put16(bytes, 16u, psprecomp::kElfTypePspPrx);
    put16(bytes, 18u, 8u);
    put32(bytes, 20u, 1u);
    put32(bytes, 24u, 0u);
    put32(bytes, 28u, 52u);
    put32(bytes, 32u, 0x140u);
    put16(bytes, 40u, 52u);
    put16(bytes, 42u, 32u);
    put16(bytes, 44u, 1u);
    put16(bytes, 46u, 40u);
    put16(bytes, 48u, 3u);
    put16(bytes, 50u, 0u);

    put32(bytes, 52u, 1u);       // PT_LOAD
    put32(bytes, 56u, 0x100u);
    put32(bytes, 60u, 0u);
    put32(bytes, 64u, 0u);
    put32(bytes, 68u, 16u);
    put32(bytes, 72u, 16u);
    put32(bytes, 76u, 5u);
    put32(bytes, 80u, 16u);

    put32(bytes, 0x100u, 0x00000020u); // R_MIPS_32
    put32(bytes, 0x104u, 0x0C000000u); // R_MIPS_26 (jal)
    put32(bytes, 0x108u, 0x3C020000u); // R_MIPS_HI16
    put32(bytes, 0x10Cu, 0x24421234u); // R_MIPS_LO16

    const std::uint32_t types[4] = {2u, 4u, 5u, 6u};
    for (std::uint32_t i = 0; i < 4u; ++i) {
        put32(bytes, 0x110u + i * 8u, i * 4u);
        put32(bytes, 0x114u + i * 8u, types[i]);
    }

    // Section 1: loaded text.
    const std::size_t sh1 = 0x140u + 40u;
    put32(bytes, sh1 + 4u, 1u);
    put32(bytes, sh1 + 8u, 6u);
    put32(bytes, sh1 + 16u, 0x100u);
    put32(bytes, sh1 + 20u, 16u);
    put32(bytes, sh1 + 32u, 4u);

    // Section 2: PSP relocation records.
    const std::size_t sh2 = 0x140u + 80u;
    put32(bytes, sh2 + 4u, psprecomp::kSectionTypePspRel);
    put32(bytes, sh2 + 16u, 0x110u);
    put32(bytes, sh2 + 20u, 32u);
    put32(bytes, sh2 + 28u, 1u);
    put32(bytes, sh2 + 32u, 4u);
    put32(bytes, sh2 + 36u, 8u);
    return bytes;
}

static std::vector<std::uint8_t> make_vfpu_relocation_test_prx(std::uint32_t low_instruction) {
    auto bytes=make_relocation_test_prx();
    const std::vector<std::uint8_t> sections(bytes.begin()+0x140,bytes.end());
    bytes.resize(0x1F8,0);
    std::copy(sections.begin(),sections.end(),bytes.begin()+0x180);
    put32(bytes,32,0x180); // relocated section table, beyond five REL entries
    put32(bytes,68,20);put32(bytes,72,20);
    put32(bytes,0x108,0x3C040002); // lui a0, 2
    put32(bytes,0x10C,low_instruction);
    put32(bytes,0x110,0x24421234); // later, unrelated LO16 must not pair with a0
    const std::uint32_t types[]{2,4,5,1,6};
    for(std::uint32_t i=0;i<5;++i){put32(bytes,0x120+i*8,i*4);put32(bytes,0x124+i*8,types[i]);}
    put32(bytes,0x180+40+20,20);
    put32(bytes,0x180+80+16,0x120);put32(bytes,0x180+80+20,40);
    return bytes;
}

static void test_sce_sas_hle() {
    constexpr std::uint32_t kNidInit = 0x42778A9Fu;
    constexpr std::uint32_t kNidSetVoice = 0x99944089u;
    constexpr std::uint32_t kNidSetVoicePcm = 0xE1CD9561u;
    constexpr std::uint32_t kNidSetPitch = 0xAD84D37Fu;
    constexpr std::uint32_t kNidSetVolume = 0x440CA7D8u;
    constexpr std::uint32_t kNidKeyOn = 0x76F01ACAu;
    constexpr std::uint32_t kNidKeyOff = 0xA0CF2FA4u;
    constexpr std::uint32_t kNidGetEndFlag = 0x68A46B95u;
    constexpr std::uint32_t kNidCore = 0xA3589D81u;
    constexpr std::uint32_t kNidGetOutputMode = 0xE175EF66u;
    constexpr std::uint32_t kNidSetOutputMode = 0xE855BF76u;
    constexpr std::uint32_t kNidGetGrain = 0xBD11B7C2u;
    constexpr std::uint32_t kNidSetGrain = 0xD1E0A01Eu;
    constexpr std::uint32_t kNidGetAllEnvelopeHeights = 0x07F58C24u;

    constexpr std::uint32_t kCore = 0x08810000u;
    constexpr std::uint32_t kVagData = 0x08811000u;
    constexpr std::uint32_t kPcmData = 0x08811100u;
    constexpr std::uint32_t kOutput = 0x08812000u;

    psprecomp::Runtime runtime;
    psprecomp::install_sce_sas_core_hle(runtime);
    auto &memory = runtime.memory();

    const auto sas = [&](std::uint32_t nid, std::uint32_t a0 = 0u, std::uint32_t a1 = 0u,
                         std::uint32_t a2 = 0u, std::uint32_t a3 = 0u, std::uint32_t a4 = 0u,
                         std::uint32_t a5 = 0u) {
        psprecomp::AllegrexContext call{};
        call.set_gpr(4u, a0);
        call.set_gpr(5u, a1);
        call.set_gpr(6u, a2);
        call.set_gpr(7u, a3);
        call.set_gpr(8u, a4);
        call.set_gpr(9u, a5);
        runtime.invoke_import("sceSasCore", nid, call);
        return call.gpr[2];
    };

    // Invalid initialization values must be rejected with PSP error codes.
    require(sas(kNidInit, 0x08810001u, 256u, 32u, 0u, 44100u) == 0x80420005u,
            "sceSasInit accepted a misaligned core address");
    require(sas(kNidInit, kCore, 256u, 0u, 0u, 44100u) == 0x80420002u,
            "sceSasInit accepted maxvoices=0");
    require(sas(kNidInit, kCore, 0x30u, 32u, 0u, 44100u) == 0x80420001u,
            "sceSasInit accepted an invalid grain size");
    require(sas(kNidInit, kCore, 256u, 32u, 2u, 44100u) == 0x80420003u,
            "sceSasInit accepted an invalid output mode");
    require(sas(kNidInit, kCore, 256u, 32u, 0u, 22050u) == 0x80420004u,
            "sceSasInit accepted an invalid sample rate");

    // Valid initialization.
    require(sas(kNidInit, kCore, 256u, 32u, 0u, 44100u) == 0u, "sceSasInit rejected a valid configuration");
    {
        auto &state = psprecomp::sas_hle_state();
        require(state.initialized && state.core_address == kCore && state.grain_size == 256u &&
                    state.max_voices == 32u && state.output_mode == 0u && state.sample_rate == 44100u,
                "sceSasInit did not record the SAS context fields");
    }

    // Output mode and grain accessors.
    require(sas(kNidGetOutputMode, kCore) == 0u, "sceSasGetOutputmode returned the wrong mode");
    require(sas(kNidSetOutputMode, kCore, 1u) == 0u, "sceSasSetOutputmode rejected mode 1");
    require(sas(kNidGetOutputMode, kCore) == 1u, "sceSasSetOutputmode did not take effect");
    require(sas(kNidSetOutputMode, kCore, 2u) == 0x80420003u, "sceSasSetOutputmode accepted mode 2");
    require(sas(kNidSetOutputMode, kCore, 0u) == 0u, "sceSasSetOutputmode could not restore mode 0");
    require(sas(kNidGetGrain, kCore) == 256u, "sceSasGetGrain returned the wrong grain");
    require(sas(kNidSetGrain, kCore, 0x30u) == 0x80420001u, "sceSasSetGrain accepted an invalid grain");
    require(sas(kNidSetGrain, kCore, 128u) == 0u && sas(kNidGetGrain, kCore) == 128u,
            "sceSasSetGrain did not take effect");
    require(sas(kNidSetGrain, kCore, 256u) == 0u, "sceSasSetGrain could not restore the grain");

    // Invalid context and voice handling.
    require(sas(kNidSetVolume, 0x08820000u, 0u, 0x1000u, 0x1000u, 0u, 0u) == 0x80420100u,
            "SAS call with an unknown core did not report NOT_INITIALIZED");
    require(sas(kNidSetVolume, kCore, 32u, 0u, 0u, 0u, 0u) == 0x80420010u,
            "sceSasSetVolume accepted voice 32");
    require(sas(kNidSetPitch, kCore, 0u, 0x4001u) == 0x80420012u,
            "sceSasSetPitch accepted an out-of-range pitch");
    require(sas(kNidSetVolume, kCore, 0u, 0x1001u, 0u, 0u, 0u) == 0x80420018u,
            "sceSasSetVolume accepted an out-of-range volume");
    require(sas(kNidSetPitch, kCore, 0u, 0x1000u) == 0u, "sceSasSetPitch rejected 1x pitch");
    require(sas(kNidSetVolume, kCore, 0u, 0x1000u, 0x1000u, 0u, 0u) == 0u,
            "sceSasSetVolume rejected unity volume");

    // VAG voice: deterministic two-block fixture (the second block is terminal).
    for (std::uint32_t index = 0u; index < 15u; ++index)
        memory.store8(kVagData + 2u + index, 0x11u);
    memory.store8(kVagData + 16u, 0x00u);
    memory.store8(kVagData + 17u, 0x07u);
    require(sas(kNidGetEndFlag, kCore) == 0xFFFFFFFFu, "fresh SAS voices were not reported as ended");
    require(sas(kNidSetVoice, kCore, 0u, kVagData, 0x20u, 0u) == 0u, "sceSasSetVoice rejected a valid VAG");
    require(sas(kNidKeyOn, kCore, 0u) == 0u, "sceSasSetKeyOn failed");
    require(sas(kNidKeyOn, kCore, 0u) == 0x80420016u, "sceSasSetKeyOn succeeded twice");
    require((sas(kNidGetEndFlag, kCore) & 1u) == 0u, "keyed-on SAS voice was reported as ended");
    memory.zero(kOutput, 256u);
    require(sas(kNidCore, kCore, kOutput) == 0u, "sceSasCore failed");
    {
        bool any_nonzero = false;
        for (std::uint32_t frame = 0u; frame < 64u; ++frame)
            any_nonzero = any_nonzero ||
                memory.load16(kOutput + frame * 4u) != 0u || memory.load16(kOutput + frame * 4u + 2u) != 0u;
        require(any_nonzero, "sceSasCore rendered only silence for an active VAG voice");
    }
    require((sas(kNidGetEndFlag, kCore) & 1u) != 0u, "finite SAS voice never reached its end flag");
    require(sas(kNidKeyOff, kCore, 0u) == 0x80420016u, "sceSasSetKeyOff succeeded on an ended voice");

    // Key-off while sounding must release the envelope and retire the voice.
    require(sas(kNidSetVoice, kCore, 0u, kVagData, 0x20u, 1u) == 0u, "sceSasSetVoice loop setup failed");
    require(sas(kNidKeyOn, kCore, 0u) == 0u, "sceSasSetKeyOn (loop) failed");
    require(sas(kNidKeyOff, kCore, 0u) == 0u, "sceSasSetKeyOff failed");
    for (std::uint32_t call = 0u; call < 8u && (sas(kNidGetEndFlag, kCore) & 1u) == 0u; ++call)
        require(sas(kNidCore, kCore, kOutput) == 0u, "sceSasCore failed during release");
    require((sas(kNidGetEndFlag, kCore) & 1u) != 0u, "keyed-off SAS voice never retired");

    // PCM voices: 16 deterministic samples, no loop.
    for (std::uint32_t index = 0u; index < 16u; ++index)
        memory.store16(kPcmData + index * 2u, static_cast<std::uint16_t>((index + 1u) * 100u));
    require(sas(kNidSetVoicePcm, kCore, 1u, kPcmData, 0u, 0u) == 0x8042001Au,
            "sceSasSetVoicePCM accepted a zero sample count");
    require(sas(kNidSetVoicePcm, kCore, 1u, kPcmData, 17u, 17u) == 0x80420015u,
            "sceSasSetVoicePCM accepted a loop position past the end");
    require(sas(kNidSetVoicePcm, kCore, 1u, kPcmData, 16u, 0xFFFFFFFFu) == 0u,
            "sceSasSetVoicePCM rejected valid PCM");
    require(sas(kNidSetVolume, kCore, 1u, 0x1000u, 0x1000u, 0u, 0u) == 0u, "PCM voice volume setup failed");
    require(sas(kNidKeyOn, kCore, 1u) == 0u, "PCM voice KeyOn failed");
    memory.zero(kOutput, 256u);
    require(sas(kNidCore, kCore, kOutput) == 0u, "sceSasCore failed for PCM voice");
    require((sas(kNidGetEndFlag, kCore) & 2u) != 0u, "finite PCM voice never reached its end flag");
    {
        bool any_nonzero = false;
        for (std::uint32_t frame = 0u; frame < 64u; ++frame)
            any_nonzero = any_nonzero ||
                memory.load16(kOutput + frame * 4u) != 0u || memory.load16(kOutput + frame * 4u + 2u) != 0u;
        require(any_nonzero, "sceSasCore rendered only silence for an active PCM voice");
    }

    // Output buffer contract: exactly grain*4 bytes are written; a silent core
    // (fresh init, no voices) writes deterministic zeros and nothing past the
    // buffer.
    require(sas(kNidInit, kCore, 64u, 32u, 0u, 44100u) == 0u, "sceSasInit (grain 64) failed");
    for (std::uint32_t index = 0u; index < 320u; ++index) memory.store8(kOutput + index, 0xAAu);
    require(sas(kNidCore, kCore, kOutput) == 0u, "sceSasCore (silent) failed");
    for (std::uint32_t index = 0u; index < 256u; ++index)
        require(memory.load8(kOutput + index) == 0u, "silent sceSasCore did not write deterministic zeros");
    for (std::uint32_t index = 256u; index < 320u; ++index)
        require(memory.load8(kOutput + index) == 0xAAu, "sceSasCore wrote past its output buffer");

    // All-envelope-heights reporting.
    {
        constexpr std::uint32_t kHeights = 0x08812100u;
        for (std::uint32_t index = 0u; index < 32u; ++index) memory.store32(kHeights + index * 4u, 0xDEADBEEFu);
        require(sas(kNidGetAllEnvelopeHeights, kCore, kHeights) == 0u, "sceSasGetAllEnvelopeHeights failed");
        for (std::uint32_t index = 0u; index < 32u; ++index)
            require(memory.load32(kHeights + index * 4u) == 0u,
                    "sceSasGetAllEnvelopeHeights did not report silent heights");
        require(sas(kNidGetAllEnvelopeHeights, kCore, 0xFFFFFFFFu) == 0x80420014u,
                "sceSasGetAllEnvelopeHeights accepted a bad destination");
    }

    // The envelope fallback defaults must fall (not rise) during release.
    {
        psprecomp::SasVoiceState voice{};
        require(voice.adsr_modes[0] == 0 && voice.adsr_modes[1] == 1 && voice.adsr_modes[2] == 1 &&
                    voice.adsr_modes[3] == 1,
                "default SAS ADSR curve modes are wrong");
        voice.adsr_configured = true;
        voice.playing = true;
        voice.on = false;
        voice.envelope_height = psprecomp::kSasEnvelopeMaximum;
        voice.envelope_phase = psprecomp::SasEnvelopePhase::Release;
        voice.adsr_rates[3] = 0x10000000;
        std::uint32_t steps = 0u;
        while (voice.playing && steps < 64u) {
            psprecomp::sas_step_envelope(voice);
            ++steps;
        }
        require(!voice.playing, "keyed-off SAS envelope never released");
    }

    psprecomp::reset_sas_hle_state();
}

int main() {
    try {
        test_import_return_context_guard();
        test_chained_call_context_guard();
        test_nested_direct_chain_context_guard();

        // Shared sceSasCore HLE: valid/invalid init, voice state, key on/off,
        // volume/pitch, end flags, output buffer sizing and deterministic
        // (silent or rendered) output.
        test_sce_sas_hle();

        psprecomp::GuestMemory mem;
        mem.store32(0x08800000u, 0x12345678u);
        require(mem.load32(0x88800000u) == 0x12345678u, "RAM alias translation failed");
        require(!mem.contains(0x0A000000u), "RAM upper bound failed");
        mem.store16(0x08800010u, 0xA55Au);
        require(mem.load16(0x08800010u) == 0xA55Au, "Halfword memory access failed");

        {
            psprecomp::Runtime redispatch_runtime;
            same_pc_redispatch_count = 0;
            redispatch_runtime.register_function(0x08804000u, &same_pc_redispatch_test, "same_pc_redispatch_test");
            redispatch_runtime.run(0x08804000u, 8u);
            require(same_pc_redispatch_count == 3, "Runtime rejected a legitimate same-PC redispatch");
            require(redispatch_runtime.stop_reason() == "same-pc redispatch complete",
                    "Same-PC redispatch test did not reach its explicit stop");
        }

        {
            psprecomp::Runtime dispatch_runtime;
            post_dispatch_count = 0u;
            post_dispatch_observed_pc = 0u;
            post_dispatch_observed_uid = 0;
            psprecomp::set_runtime_post_dispatch_hook(&post_dispatch_observer);
            dispatch_runtime.register_function(0x08804000u, &post_dispatch_source, "post_dispatch_source");
            dispatch_runtime.register_function(0x08804010u, &post_dispatch_stop, "post_dispatch_stop");
            dispatch_runtime.run(0x08804000u, 2u);
            psprecomp::set_runtime_post_dispatch_hook(nullptr);
            require(post_dispatch_count == 1u && post_dispatch_observed_pc == 0x08804000u &&
                        post_dispatch_observed_uid == -1,
                    "Runtime post-dispatch hook did not report the completed outer dispatch");
        }

        const auto addiu = psprecomp::decode_allegrex(0x24820001u);
        require(addiu.kind == psprecomp::OpcodeKind::Addiu && addiu.rs == 4u && addiu.rt == 2u && addiu.immediate == 1,
                "ADDIU decode failed");
        const auto jr = psprecomp::decode_allegrex(0x03E00008u);
        require(jr.kind == psprecomp::OpcodeKind::Jr && jr.has_delay_slot(), "JR decode failed");
        require(psprecomp::decode_allegrex(0xA6A200B0u).kind == psprecomp::OpcodeKind::Sh, "SH decode failed");
        require(psprecomp::decode_allegrex(0x88C80003u).kind == psprecomp::OpcodeKind::Lwl, "LWL decode failed");
        // Allegrex multiply-accumulate (SPECIAL 0x1C/0x1D/0x2E/0x2F): the multiplayer lobby's 64-bit math
        // (e.g. 0x08A449B0 in MotorStorm) used to stop the run as "special? not lowered yet".
        {
            const auto madd = psprecomp::decode_allegrex(0x0083001Cu);
            require(madd.kind == psprecomp::OpcodeKind::Madd && madd.rs == 4u && madd.rt == 3u, "MADD decode failed");
            require(psprecomp::decode_allegrex(0x0083001Du).kind == psprecomp::OpcodeKind::Maddu, "MADDU decode failed");
            require(psprecomp::decode_allegrex(0x0083002Eu).kind == psprecomp::OpcodeKind::Msub, "MSUB decode failed");
            require(psprecomp::decode_allegrex(0x0083002Fu).kind == psprecomp::OpcodeKind::Msubu, "MSUBU decode failed");
            require(psprecomp::decode_allegrex(0x00830018u).kind == psprecomp::OpcodeKind::Mult, "MULT decode regressed");
        }
        require(psprecomp::decode_allegrex(0x98C80001u).kind == psprecomp::OpcodeKind::Lwr, "LWR decode failed");
        require(psprecomp::decode_allegrex(0xA8C80003u).kind == psprecomp::OpcodeKind::Swl, "SWL decode failed");
        require(psprecomp::decode_allegrex(0xB8C80000u).kind == psprecomp::OpcodeKind::Swr, "SWR decode failed");
        require(psprecomp::decode_allegrex(0x7CA8FE04u).kind == psprecomp::OpcodeKind::Ins, "INS decode failed");
        require(psprecomp::decode_allegrex(0x7CA83A00u).kind == psprecomp::OpcodeKind::Ext, "EXT decode failed");
        require(psprecomp::decode_allegrex(0x0000000Fu).kind == psprecomp::OpcodeKind::Sync, "SYNC decode failed");
        const auto vflush = psprecomp::decode_allegrex(0xFFFF0000u);
        require(vflush.kind == psprecomp::OpcodeKind::Vflush && vflush.mnemonic == "vflush",
                "VFLUSH decode failed");
        require(psprecomp::decode_allegrex(0xFC000000u).kind == psprecomp::OpcodeKind::Vflush,
                "VFPU sync/no-op decode failed");
        require(psprecomp::decode_allegrex(0x01A67804u).kind == psprecomp::OpcodeKind::Sllv,
                "SLLV decode failed");
        require(psprecomp::decode_allegrex(0x03381006u).kind == psprecomp::OpcodeKind::Srlv,
                "SRLV decode failed");
        require(psprecomp::decode_allegrex(0x00901007u).kind == psprecomp::OpcodeKind::Srav,
                "SRAV decode failed");
        require(psprecomp::decode_allegrex(0x00221842u).kind == psprecomp::OpcodeKind::Rotr,
                "ROTR decode failed");
        require(psprecomp::decode_allegrex(0x03381046u).kind == psprecomp::OpcodeKind::Rotrv,
                "ROTRV decode failed");
        const auto clz = psprecomp::decode_allegrex(0x00405016u);
        require(clz.kind == psprecomp::OpcodeKind::Clz && clz.rs == 2u && clz.rd == 10u,
                "CLZ decode failed");
        require(psprecomp::decode_allegrex(0x00405017u).kind == psprecomp::OpcodeKind::Clo,
                "CLO decode failed");
        require(std::countl_zero(std::uint32_t{0}) == 32 && std::countl_one(0xFFFFFFFFu) == 32,
                "C++20 CLZ/CLO zero/all-one semantics failed");
        const auto max_op = psprecomp::decode_allegrex(0x0062502Cu);
        require(max_op.kind == psprecomp::OpcodeKind::Max && max_op.rs == 3u && max_op.rt == 2u && max_op.rd == 10u,
                "MAX decode failed");
        require(psprecomp::decode_allegrex(0x0062502Du).kind == psprecomp::OpcodeKind::Min,
                "MIN decode failed");
        const auto movn = psprecomp::decode_allegrex(0x0142580Bu);
        require(movn.kind == psprecomp::OpcodeKind::Movn && movn.rs == 10u && movn.rt == 2u && movn.rd == 11u,
                "MOVN decode failed");
        require(psprecomp::decode_allegrex(0x0142580Au).kind == psprecomp::OpcodeKind::Movz,
                "MOVZ decode failed");
        const auto bitrev = psprecomp::decode_allegrex(0x7C021520u);
        require(bitrev.kind == psprecomp::OpcodeKind::Bitrev && bitrev.rt == 2u && bitrev.rd == 2u,
                "BITREV decode failed");
        require(psprecomp::decode_allegrex(0x7C0210A0u).kind == psprecomp::OpcodeKind::Wsbh,
                "WSBH decode failed");
        require(psprecomp::decode_allegrex(0x7C0210E0u).kind == psprecomp::OpcodeKind::Wsbw,
                "WSBW decode failed");
        require(psprecomp::decode_allegrex(0x7C021420u).kind == psprecomp::OpcodeKind::Seb,
                "SEB decode failed");
        require(psprecomp::decode_allegrex(0x7C021620u).kind == psprecomp::OpcodeKind::Seh,
                "SEH decode failed");
        const auto cache = psprecomp::decode_allegrex(0xBC9E00A0u);
        require(cache.kind == psprecomp::OpcodeKind::Cache && cache.rs == 4u && cache.rt == 30u &&
                    cache.immediate == static_cast<std::int16_t>(0x00A0),
                "CACHE decode failed");
        const auto sync_codegen = psprecomp::codegen::memory_ordering_statement(psprecomp::OpcodeKind::Sync);
        const auto cache_codegen = psprecomp::codegen::memory_ordering_statement(psprecomp::OpcodeKind::Cache);
        require(sync_codegen.find("memory_barrier") != std::string_view::npos,
                "SYNC codegen must retain a host memory fence");
        require(cache_codegen.find("memory_barrier") == std::string_view::npos,
                "CACHE codegen must remain a coherent-memory no-op");
        const auto bltzal = psprecomp::decode_allegrex(0x05500027u);
        require(bltzal.kind == psprecomp::OpcodeKind::Bltzal && bltzal.rs == 10u && bltzal.has_delay_slot(),
                "BLTZAL decode failed");
        require(psprecomp::decode_allegrex(0x05510027u).kind == psprecomp::OpcodeKind::Bgezal,
                "BGEZAL decode failed");
        require(psprecomp::decode_allegrex(0x05520027u).kind == psprecomp::OpcodeKind::Bltzall,
                "BLTZALL decode failed");
        require(psprecomp::decode_allegrex(0x05530027u).kind == psprecomp::OpcodeKind::Bgezall,
                "BGEZALL decode failed");
        require(psprecomp::decode_allegrex(0x1A60000Fu).kind == psprecomp::OpcodeKind::Blez, "BLEZ decode failed");
        const auto add = psprecomp::decode_allegrex(0x01094020u);
        require(add.kind == psprecomp::OpcodeKind::Add && add.rs == 8u && add.rt == 9u && add.rd == 8u,
                "ADD decode failed");
        const auto sub = psprecomp::decode_allegrex(0x01094022u);
        require(sub.kind == psprecomp::OpcodeKind::Sub && sub.rs == 8u && sub.rt == 9u && sub.rd == 8u,
                "SUB decode failed");
        require(psprecomp::decode_allegrex(0x0085001Au).kind == psprecomp::OpcodeKind::Div, "DIV decode failed");
        require(psprecomp::decode_allegrex(0x00C40018u).kind == psprecomp::OpcodeKind::Mult, "MULT decode failed");
        require(psprecomp::decode_allegrex(0xC4AC000Cu).kind == psprecomp::OpcodeKind::Lwc1, "LWC1 decode failed");
        require(psprecomp::decode_allegrex(0xE7B40020u).kind == psprecomp::OpcodeKind::Swc1, "SWC1 decode failed");
        const auto mfc1 = psprecomp::decode_allegrex(0x44056000u);
        require(mfc1.kind == psprecomp::OpcodeKind::Mfc1 && mfc1.rt == 5u && mfc1.rd == 12u, "MFC1 decode failed");
        const auto mtc1 = psprecomp::decode_allegrex(0x44856000u);
        require(mtc1.kind == psprecomp::OpcodeKind::Mtc1 && mtc1.rt == 5u && mtc1.rd == 12u, "MTC1 decode failed");
        const auto cfc1 = psprecomp::decode_allegrex(0x4448F800u);
        require(cfc1.kind == psprecomp::OpcodeKind::Cfc1 && cfc1.rt == 8u && cfc1.rd == 31u, "CFC1 decode failed");
        const auto ctc1 = psprecomp::decode_allegrex(0x44C8F800u);
        require(ctc1.kind == psprecomp::OpcodeKind::Ctc1 && ctc1.rt == 8u && ctc1.rd == 31u, "CTC1 decode failed");
        const auto vmidt = psprecomp::decode_allegrex(0xF38380A0u);
        require(vmidt.kind == psprecomp::OpcodeKind::VmidT && vmidt.mnemonic == "vmidt", "VMIDT classification failed");
        const auto vpfxt = psprecomp::decode_allegrex(0xDD0010E5u);
        require(vpfxt.kind == psprecomp::OpcodeKind::Vpfx && vpfxt.mnemonic == "vpfxt",
                "VPFXT classification failed");
        const auto viim = psprecomp::decode_allegrex(0xDF201234u);
        require(viim.kind == psprecomp::OpcodeKind::Viim && viim.mnemonic == "viim.s",
                "VIIM.S classification failed");
        const auto vfim = psprecomp::decode_allegrex(0xDFA03C00u);
        require(vfim.kind == psprecomp::OpcodeKind::Vfim && vfim.mnemonic == "vfim.s",
                "VFIM.S classification failed");
        const auto vh2f = psprecomp::decode_allegrex(0xD0330000u);
        require(vh2f.kind == psprecomp::OpcodeKind::Vh2f && vh2f.mnemonic == "vh2f",
                "VH2F classification failed");
        const auto vi2f = psprecomp::decode_allegrex(0xD2830182u);
        require(vi2f.kind == psprecomp::OpcodeKind::Vi2f && vi2f.mnemonic == "vi2f",
                "VI2F.P classification failed");
        const auto vf2iz = psprecomp::decode_allegrex(0xD2202020u);
        require(vf2iz.kind == psprecomp::OpcodeKind::Vf2i && vf2iz.mnemonic == "vf2iz",
                "VF2IZ.S classification failed");
        require(psprecomp::decode_allegrex(0xD2002020u).mnemonic == "vf2in" &&
                psprecomp::decode_allegrex(0xD2402020u).mnemonic == "vf2iu" &&
                psprecomp::decode_allegrex(0xD2602020u).mnemonic == "vf2id",
                "VF2I rounding-family classification failed");
        const auto vzero = psprecomp::decode_allegrex(0xD00680A3u);
        require(vzero.kind == psprecomp::OpcodeKind::VfpuVectorInit && vzero.mnemonic == "vzero",
                "VZERO.Q classification failed");
        const auto vone = psprecomp::decode_allegrex(0xD00780A3u);
        require(vone.kind == psprecomp::OpcodeKind::VfpuVectorInit && vone.mnemonic == "vone",
                "VONE.Q classification failed");
        const auto vcst = psprecomp::decode_allegrex(0xD0650020u);
        require(vcst.kind == psprecomp::OpcodeKind::Vcst && vcst.mnemonic == "vcst", "VCST classification failed");
        const auto vocp = psprecomp::decode_allegrex(0xD0440020u);
        require(vocp.kind == psprecomp::OpcodeKind::Vocp && vocp.mnemonic == "vocp",
                "VOCP.S classification failed");
        const auto vsgn = psprecomp::decode_allegrex(0xD04A0C0Cu);
        require(vsgn.kind == psprecomp::OpcodeKind::Vsgn && vsgn.mnemonic == "vsgn",
                "VSGN.Q classification failed");
        const auto vi2uc = psprecomp::decode_allegrex(0xD03C85CBu);
        require(vi2uc.kind == psprecomp::OpcodeKind::Vi2x && vi2uc.mnemonic == "vi2uc",
                "VI2UC.Q classification failed");
        const auto vtfm = psprecomp::decode_allegrex(0xF104A003u);
        require(vtfm.kind == psprecomp::OpcodeKind::Vtfm && vtfm.mnemonic == "vtfm",
                "VTFM3.T classification failed");
        const auto vmscl = psprecomp::decode_allegrex(0xF208A420u);
        require(vmscl.kind == psprecomp::OpcodeKind::Vmscl && vmscl.mnemonic == "vmscl",
                "VMSCL.T classification failed");
        const auto vmmov = psprecomp::decode_allegrex(0xF380A8A0u);
        require(vmmov.kind == psprecomp::OpcodeKind::Vmmov && vmmov.mnemonic == "vmmov",
                "VMMOV.Q classification failed");
        require(psprecomp::decode_allegrex(0xF38680A0u).kind == psprecomp::OpcodeKind::VfpuMatrixInit &&
                    psprecomp::decode_allegrex(0xF38680A0u).mnemonic == "vmzero",
                "VMZERO.Q classification failed");
        require(psprecomp::decode_allegrex(0xF38780A0u).kind == psprecomp::OpcodeKind::VfpuMatrixInit &&
                    psprecomp::decode_allegrex(0xF38780A0u).mnemonic == "vmone",
                "VMONE.Q classification failed");
        const auto vrot = psprecomp::decode_allegrex(0xF3A44081u);
        require(vrot.kind == psprecomp::OpcodeKind::Vrot && vrot.mnemonic == "vrot", "VROT classification failed");
        require(psprecomp::decode_allegrex(0x64200040u).kind == psprecomp::OpcodeKind::VfpuVec3, "VMUL.S classification failed");
        const auto vdot = psprecomp::decode_allegrex(0x6481811Cu);
        require(vdot.kind == psprecomp::OpcodeKind::Vdot && vdot.mnemonic == "vdot",
                "VDOT.T classification failed");
        const auto vhdp = psprecomp::decode_allegrex(0x663481A2u);
        require(vhdp.kind == psprecomp::OpcodeKind::Vhdp && vhdp.mnemonic == "vhdp",
                "VHDP.Q classification failed");
        const auto vcmp = psprecomp::decode_allegrex(0x6C201C03u);
        require(vcmp.kind == psprecomp::OpcodeKind::Vcmp && vcmp.mnemonic == "vcmp",
                "VCMP.S LE classification failed");
        const auto vmin = psprecomp::decode_allegrex(0x6D018002u);
        require(vmin.kind == psprecomp::OpcodeKind::Vminmax && vmin.mnemonic == "vmin",
                "VMIN.T classification failed");
        const auto vmax = psprecomp::decode_allegrex(0x6D818002u);
        require(vmax.kind == psprecomp::OpcodeKind::Vminmax && vmax.mnemonic == "vmax",
                "VMAX.T classification failed");
        const auto vscmp = psprecomp::decode_allegrex(0x6E82850Cu);
        require(vscmp.kind == psprecomp::OpcodeKind::VfpuCompare3 && vscmp.mnemonic == "vscmp",
                "VSCMP.T classification failed");
        const auto vsge = psprecomp::decode_allegrex(0x6F02850Cu);
        require(vsge.kind == psprecomp::OpcodeKind::VfpuCompare3 && vsge.mnemonic == "vsge",
                "VSGE.T classification failed");
        const auto vslt = psprecomp::decode_allegrex(0x6F82850Cu);
        require(vslt.kind == psprecomp::OpcodeKind::VfpuCompare3 && vslt.mnemonic == "vslt",
                "VSLT.T classification failed");
        const auto vcmov = psprecomp::decode_allegrex(0xD2A08001u);
        require(vcmov.kind == psprecomp::OpcodeKind::Vcmov && vcmov.mnemonic == "vcmovt",
                "VCMOVT.T classification failed");
        const auto vscl = psprecomp::decode_allegrex(0x651C8000u);
        require(vscl.kind == psprecomp::OpcodeKind::Vscl && vscl.mnemonic == "vscl",
                "VSCL.T classification failed");
        require(psprecomp::decode_allegrex(0xD0124001u).kind == psprecomp::OpcodeKind::VfpuUnary, "VSIN.S classification failed");
        require(psprecomp::decode_allegrex(0xD0134001u).kind == psprecomp::OpcodeKind::VfpuUnary, "VCOS.S classification failed");
        require(psprecomp::decode_allegrex(0xD00380A7u).kind == psprecomp::OpcodeKind::Vidt, "VIDT.Q classification failed");
        require(psprecomp::decode_allegrex(0xF02884A0u).kind == psprecomp::OpcodeKind::Vmmul, "VMMUL.Q classification failed");
        const auto vcrsp = psprecomp::decode_allegrex(0xF2828100u);
        require(vcrsp.kind == psprecomp::OpcodeKind::VcrossQuat && vcrsp.mnemonic == "vcrsp",
                "VCRSP.T classification failed");
        const auto vqmul = psprecomp::decode_allegrex(0xF2828180u);
        require(vqmul.kind == psprecomp::OpcodeKind::VcrossQuat && vqmul.mnemonic == "vqmul",
                "VQMUL.Q classification failed");
        const auto mtv = psprecomp::decode_allegrex(0x48E50021u);
        require(mtv.kind == psprecomp::OpcodeKind::Mtv && mtv.rt == 5u, "MTV classification failed");
        const auto lvs = psprecomp::decode_allegrex(0xC8A00000u);
        require(lvs.kind == psprecomp::OpcodeKind::Lvs && lvs.rs == 5u, "LV.S classification failed");
        const auto svs = psprecomp::decode_allegrex(0xE8A00000u);
        require(svs.kind == psprecomp::OpcodeKind::Svs && svs.rs == 5u, "SV.S classification failed");
        const auto lvq = psprecomp::decode_allegrex(0xD8A00000u);
        require(lvq.kind == psprecomp::OpcodeKind::Lvq && lvq.rs == 5u, "LV.Q classification failed");
        const auto svq = psprecomp::decode_allegrex(0xF8810010u);
        require(svq.kind == psprecomp::OpcodeKind::Svq && svq.rs == 4u, "SV.Q classification failed");

        psprecomp::AllegrexContext vcst_context{};
        vcst_context.eat_vfpu_prefixes();
        const float vcst_value[4]{0.6366197466850281f, 0.6366197466850281f, 0.6366197466850281f, 0.6366197466850281f};
        vcst_context.write_vfpu_vector_with_destination_prefix(vcst_value, 0x20u, 1u);
        require(vcst_context.vfpu_scalar_bits(0x20u) == 0x3F22F983u, "VCST destination write failed");
        vcst_context.set_vfpu_scalar_bits(0x20u, 0xBF800000u);
        vcst_context.vfpu_ctrl[2] = 0x00000101u; // saturate lane 0 to [0,1], then mask it.
        vcst_context.write_vfpu_vector_with_destination_prefix(vcst_value, 0x20u, 1u);
        require(vcst_context.vfpu_scalar_bits(0x20u) == 0xBF800000u, "VFPU destination mask failed");

        psprecomp::AllegrexContext vrot_context{};
        vrot_context.eat_vfpu_prefixes();
        vrot_context.set_vfpu_scalar_bits(64u, std::bit_cast<std::uint32_t>(0.5f));
        vrot_context.execute_vfpu_vrot(1u, 64u, 2u, 4u);
        float vrot_result[4]{};
        vrot_context.read_vfpu_vector(vrot_result, 1u, 2u);
        require(std::fabs(vrot_result[0] - 0.70710677f) < 0.000001f &&
                    std::fabs(vrot_result[1] - 0.70710677f) < 0.000001f,
                "VROT.P cosine/sine lanes failed");

        psprecomp::AllegrexContext vdot_context{};
        vdot_context.eat_vfpu_prefixes();
        const float vdot_source[4]{1.0f, 2.0f, 3.0f, 0.0f};
        const float vdot_target[4]{4.0f, 5.0f, 6.0f, 0.0f};
        vdot_context.write_vfpu_vector(vdot_source, 0u, 3u);
        vdot_context.write_vfpu_vector(vdot_target, 4u, 3u);
        // Reverse S while leaving T untouched: [3,2,1] dot [4,5,6] = 28.
        vdot_context.vfpu_ctrl[0] = 0x00000006u;
        vdot_context.execute_vfpu_vdot(0x1Cu, 0u, 4u, 3u);
        require(std::fabs(std::bit_cast<float>(vdot_context.vfpu_scalar_bits(0x1Cu)) - 28.0f) < 0.000001f,
                "VDOT.T prefix or accumulation failed");
        require(vdot_context.vfpu_ctrl[0] == 0xE4u && vdot_context.vfpu_ctrl[1] == 0xE4u &&
                    vdot_context.vfpu_ctrl[2] == 0u,
                "VDOT.T did not consume VFPU prefixes");

        psprecomp::AllegrexContext vhdp_context{};
        vhdp_context.eat_vfpu_prefixes();
        const float vhdp_source[4]{2.0f, 3.0f, 4.0f, 5.0f};
        const float vhdp_target[4]{10.0f, 20.0f, 30.0f, 40.0f};
        vhdp_context.write_vfpu_vector(vhdp_source, 0u, 4u);
        vhdp_context.write_vfpu_vector(vhdp_target, 4u, 4u);
        vhdp_context.execute_vfpu_vhdp(0x1Du, 0u, 4u, 4u);
        require(std::fabs(std::bit_cast<float>(vhdp_context.vfpu_scalar_bits(0x1Du)) - 240.0f) < 0.000001f,
                "VHDP.Q did not force the final source lane to one");

        // The source-prefix negate bit for the forced lane remains active,
        // turning the homogeneous coordinate into -1.0.
        vhdp_context.vfpu_ctrl[0] = 0xE4u | (1u << 19u);
        vhdp_context.execute_vfpu_vhdp(0x1Du, 0u, 4u, 4u);
        require(std::fabs(std::bit_cast<float>(vhdp_context.vfpu_scalar_bits(0x1Du)) - 160.0f) < 0.000001f,
                "VHDP.Q source-prefix rewrite failed");
        require(vhdp_context.vfpu_ctrl[0] == 0xE4u && vhdp_context.vfpu_ctrl[1] == 0xE4u &&
                    vhdp_context.vfpu_ctrl[2] == 0u,
                "VHDP.Q did not consume VFPU prefixes");

        psprecomp::AllegrexContext cross_context{};
        cross_context.eat_vfpu_prefixes();
        const float cross_source[4]{1.0f, 2.0f, 3.0f, 0.0f};
        const float cross_target[4]{4.0f, 5.0f, 6.0f, 0.0f};
        cross_context.write_vfpu_vector(cross_source, 0u, 3u);
        cross_context.write_vfpu_vector(cross_target, 1u, 3u);
        cross_context.execute_vfpu_cross_quat(2u, 0u, 1u, 3u);
        float cross_result[4]{};
        cross_context.read_vfpu_vector(cross_result, 2u, 3u);
        require(cross_result[0] == -3.0f && cross_result[1] == 6.0f && cross_result[2] == -3.0f,
                "VCRSP.T cross-product semantics failed");
        require(cross_context.vfpu_ctrl[0] == 0xE4u && cross_context.vfpu_ctrl[1] == 0xE4u &&
                    cross_context.vfpu_ctrl[2] == 0u,
                "VCRSP.T did not consume VFPU prefixes");

        cross_context.eat_vfpu_prefixes();
        const float quat_source[4]{1.0f, 2.0f, 3.0f, 4.0f};
        const float quat_target[4]{5.0f, 6.0f, 7.0f, 8.0f};
        cross_context.write_vfpu_vector(quat_source, 0u, 4u);
        cross_context.write_vfpu_vector(quat_target, 1u, 4u);
        cross_context.execute_vfpu_cross_quat(2u, 0u, 1u, 4u);
        cross_context.read_vfpu_vector(cross_result, 2u, 4u);
        require(cross_result[0] == 24.0f && cross_result[1] == 48.0f &&
                    cross_result[2] == 48.0f && cross_result[3] == -6.0f,
                "VQMUL.Q quaternion-product semantics failed");

        // D-prefix lane 0 is remapped to only the final output lane.
        cross_context.eat_vfpu_prefixes();
        cross_context.write_vfpu_vector(cross_source, 0u, 3u);
        cross_context.write_vfpu_vector(cross_target, 1u, 3u);
        const float preserved_cross[4]{90.0f, 91.0f, 92.0f, 0.0f};
        cross_context.write_vfpu_vector(preserved_cross, 2u, 3u);
        cross_context.vfpu_ctrl[2] = 1u << 8u;
        cross_context.execute_vfpu_cross_quat(2u, 0u, 1u, 3u);
        cross_context.read_vfpu_vector(cross_result, 2u, 3u);
        require(cross_result[0] == -3.0f && cross_result[1] == 6.0f && cross_result[2] == 92.0f,
                "VCRSP.T destination-prefix last-lane mapping failed");

        psprecomp::AllegrexContext vminmax_context{};
        vminmax_context.eat_vfpu_prefixes();
        const float vmin_source[4]{3.0f, -2.0f, 7.0f, 0.0f};
        const float vmin_target[4]{1.0f, 4.0f, 7.0f, 0.0f};
        vminmax_context.write_vfpu_vector(vmin_source, 0u, 3u);
        vminmax_context.write_vfpu_vector(vmin_target, 1u, 3u);
        vminmax_context.execute_vfpu_vminmax(2u, 0u, 1u, 3u, false);
        float vmin_result[4]{};
        vminmax_context.read_vfpu_vector(vmin_result, 2u, 3u);
        require(vmin_result[0] == 1.0f && vmin_result[1] == -2.0f && vmin_result[2] == 7.0f,
                "VMIN.T component selection failed");
        require(vminmax_context.vfpu_ctrl[0] == 0xE4u && vminmax_context.vfpu_ctrl[1] == 0xE4u &&
                    vminmax_context.vfpu_ctrl[2] == 0u,
                "VMIN.T did not consume VFPU prefixes");

        // Equal finite values take T, including its signed-zero bit.
        vminmax_context.eat_vfpu_prefixes();
        vminmax_context.set_vfpu_scalar_bits(0x1Cu, 0x00000000u);
        vminmax_context.set_vfpu_scalar_bits(0x20u, 0x80000000u);
        vminmax_context.execute_vfpu_vminmax(0x24u, 0x1Cu, 0x20u, 1u, false);
        require(vminmax_context.vfpu_scalar_bits(0x24u) == 0x80000000u,
                "VMIN.S did not preserve T signed zero");

        // Allegrex orders NaN/Inf by raw signed representation rather than
        // using the host fmin/fmax NaN rules.
        vminmax_context.eat_vfpu_prefixes();
        vminmax_context.set_vfpu_scalar_bits(0x1Cu, 0x7FC00001u);
        vminmax_context.set_vfpu_scalar_bits(0x20u, 0x7F800000u);
        vminmax_context.execute_vfpu_vminmax(0x24u, 0x1Cu, 0x20u, 1u, false);
        require(vminmax_context.vfpu_scalar_bits(0x24u) == 0x7F800000u,
                "VMIN.S NaN/Inf ordering failed");
        vminmax_context.eat_vfpu_prefixes();
        vminmax_context.execute_vfpu_vminmax(0x24u, 0x1Cu, 0x20u, 1u, true);
        require(vminmax_context.vfpu_scalar_bits(0x24u) == 0x7FC00001u,
                "VMAX.S NaN/Inf ordering failed");

        // Invalid source swizzles force an exact +0 result for min/max.
        vminmax_context.eat_vfpu_prefixes();
        vminmax_context.set_vfpu_scalar_bits(0x1Cu, std::bit_cast<std::uint32_t>(-5.0f));
        vminmax_context.set_vfpu_scalar_bits(0x20u, std::bit_cast<std::uint32_t>(-2.0f));
        vminmax_context.vfpu_ctrl[0] = 1u; // Scalar lane 0 swizzles invalid lane 1.
        vminmax_context.execute_vfpu_vminmax(0x24u, 0x1Cu, 0x20u, 1u, false);
        require(vminmax_context.vfpu_scalar_bits(0x24u) == 0x00000000u,
                "VMIN.S invalid swizzle retention failed");

        psprecomp::AllegrexContext compare3_context{};
        compare3_context.eat_vfpu_prefixes();
        const float compare3_source[4]{1.0f, 4.0f, -2.0f, 0.0f};
        const float compare3_target[4]{2.0f, 4.0f, -3.0f, 0.0f};
        compare3_context.write_vfpu_vector(compare3_source, 0u, 3u);
        compare3_context.write_vfpu_vector(compare3_target, 1u, 3u);
        compare3_context.execute_vfpu_compare3(2u, 0u, 1u, 3u, 7u);
        float compare3_result[4]{};
        compare3_context.read_vfpu_vector(compare3_result, 2u, 3u);
        require(compare3_result[0] == 1.0f && compare3_result[1] == 0.0f && compare3_result[2] == 0.0f,
                "VSLT.T comparison failed");

        compare3_context.eat_vfpu_prefixes();
        compare3_context.execute_vfpu_compare3(2u, 0u, 1u, 3u, 6u);
        compare3_context.read_vfpu_vector(compare3_result, 2u, 3u);
        require(compare3_result[0] == 0.0f && compare3_result[1] == 1.0f && compare3_result[2] == 1.0f,
                "VSGE.T comparison failed");

        compare3_context.eat_vfpu_prefixes();
        compare3_context.execute_vfpu_compare3(2u, 0u, 1u, 3u, 5u);
        compare3_context.read_vfpu_vector(compare3_result, 2u, 3u);
        require(compare3_result[0] == -1.0f && compare3_result[1] == 0.0f && compare3_result[2] == 1.0f,
                "VSCMP.T finite ordering failed");

        compare3_context.eat_vfpu_prefixes();
        compare3_context.set_vfpu_scalar_bits(0x1Cu, 0x7FC00001u);
        compare3_context.set_vfpu_scalar_bits(0x20u, 0x7F800000u);
        compare3_context.execute_vfpu_compare3(0x24u, 0x1Cu, 0x20u, 1u, 5u);
        require(compare3_context.vfpu_scalar_bits(0x24u) == std::bit_cast<std::uint32_t>(1.0f),
                "VSCMP.S NaN/Inf ordered-magnitude comparison failed");

        compare3_context.eat_vfpu_prefixes();
        compare3_context.set_vfpu_scalar_bits(0x1Cu, 0x7FC00001u);
        compare3_context.set_vfpu_scalar_bits(0x20u, std::bit_cast<std::uint32_t>(4.0f));
        compare3_context.execute_vfpu_compare3(0x24u, 0x1Cu, 0x20u, 1u, 6u);
        require(compare3_context.vfpu_scalar_bits(0x24u) == 0x00000000u,
                "VSGE.S NaN handling failed");
        compare3_context.eat_vfpu_prefixes();
        compare3_context.execute_vfpu_compare3(0x24u, 0x1Cu, 0x20u, 1u, 7u);
        require(compare3_context.vfpu_scalar_bits(0x24u) == 0x00000000u,
                "VSLT.S NaN handling failed");
        require(compare3_context.vfpu_ctrl[0] == 0xE4u && compare3_context.vfpu_ctrl[1] == 0xE4u &&
                    compare3_context.vfpu_ctrl[2] == 0u,
                "VFPU3 compare family did not consume prefixes");

        psprecomp::AllegrexContext vcmp_context{};
        vcmp_context.eat_vfpu_prefixes();
        vcmp_context.set_vfpu_scalar_bits(0x1Cu, std::bit_cast<std::uint32_t>(1.0f));
        vcmp_context.set_vfpu_scalar_bits(0x20u, std::bit_cast<std::uint32_t>(2.0f));
        vcmp_context.vfpu_ctrl[3] = 1u << 2u; // Preserve an untouched Z condition bit.
        vcmp_context.execute_vfpu_vcmp(0x1Cu, 0x20u, 1u, 3u); // LE
        require(vcmp_context.vfpu_ctrl[3] == 0x35u,
                "VCMP.S lane/ANY/ALL update or unaffected-bit preservation failed");
        require(vcmp_context.vfpu_ctrl[0] == 0xE4u && vcmp_context.vfpu_ctrl[1] == 0xE4u &&
                    vcmp_context.vfpu_ctrl[2] == 0u,
                "VCMP.S did not consume VFPU prefixes");

        vcmp_context.eat_vfpu_prefixes();
        vcmp_context.set_vfpu_scalar_bits(0x1Cu, 0x7FC00001u);
        vcmp_context.vfpu_ctrl[3] = 0u;
        vcmp_context.execute_vfpu_vcmp(0x1Cu, 0x20u, 1u, 9u); // EN / is NaN
        require(vcmp_context.vfpu_ctrl[3] == 0x31u,
                "VCMP.S NaN condition failed");

        psprecomp::AllegrexContext vcmov_context{};
        vcmov_context.eat_vfpu_prefixes();
        const float vcmov_source[4]{1.0f, 2.0f, 3.0f, 0.0f};
        const float vcmov_destination[4]{9.0f, 8.0f, 7.0f, 0.0f};
        vcmov_context.write_vfpu_vector(vcmov_source, 0u, 3u);
        vcmov_context.write_vfpu_vector(vcmov_destination, 1u, 3u);
        vcmov_context.vfpu_ctrl[3] = 1u; // X true.
        vcmov_context.execute_vfpu_vcmov(1u, 0u, 3u, 0u, false); // VCMOVT on X.
        float vcmov_result[4]{};
        vcmov_context.read_vfpu_vector(vcmov_result, 1u, 3u);
        require(vcmov_result[0] == 1.0f && vcmov_result[1] == 2.0f && vcmov_result[2] == 3.0f,
                "VCMOVT.T global condition failed");

        vcmov_context.eat_vfpu_prefixes();
        vcmov_context.write_vfpu_vector(vcmov_destination, 1u, 3u);
        vcmov_context.vfpu_ctrl[3] = (1u << 0u) | (1u << 2u);
        vcmov_context.execute_vfpu_vcmov(1u, 0u, 3u, 6u, false); // Per-lane true.
        vcmov_context.read_vfpu_vector(vcmov_result, 1u, 3u);
        require(vcmov_result[0] == 1.0f && vcmov_result[1] == 8.0f && vcmov_result[2] == 3.0f,
                "VCMOVT.T per-lane condition failed");
        require(vcmov_context.vfpu_ctrl[0] == 0xE4u && vcmov_context.vfpu_ctrl[1] == 0xE4u &&
                    vcmov_context.vfpu_ctrl[2] == 0u,
                "VCMOVT.T did not consume VFPU prefixes");

        psprecomp::AllegrexContext vscl_context{};
        vscl_context.eat_vfpu_prefixes();
        const float vscl_source[4]{1.0f, 2.0f, 3.0f, 0.0f};
        vscl_context.write_vfpu_vector(vscl_source, 0u, 3u);
        vscl_context.set_vfpu_scalar_bits(0x20u, std::bit_cast<std::uint32_t>(2.0f));
        // Reverse the three S lanes.  VSCL must still replicate the scalar
        // from its encoded physical target lane across all T lanes.
        vscl_context.vfpu_ctrl[0] = 0x00000006u;
        vscl_context.vfpu_ctrl[1] = 0x000000E4u;
        vscl_context.execute_vfpu_vscl(4u, 0u, 0x20u, 3u);
        float vscl_result[4]{};
        vscl_context.read_vfpu_vector(vscl_result, 4u, 3u);
        require(vscl_result[0] == 6.0f && vscl_result[1] == 4.0f && vscl_result[2] == 2.0f,
                "VSCL.T prefix or scalar-lane replication failed");
        require(vscl_context.vfpu_ctrl[0] == 0xE4u && vscl_context.vfpu_ctrl[1] == 0xE4u &&
                    vscl_context.vfpu_ctrl[2] == 0u,
                "VSCL.T did not consume VFPU prefixes");

        // Regression: a VSCL.T scalar encoded in physical lane w must still
        // be broadcast across all three output lanes.  The old lowering put
        // the value in target[3], but source-prefix application only populated
        // the operation's three lanes and clamped the lane-w swizzle to zero.
        psprecomp::AllegrexContext vscl_lane_w_context{};
        vscl_lane_w_context.eat_vfpu_prefixes();
        const float vscl_lane_w_source[4]{1.5f, -2.0f, 4.0f, 0.0f};
        vscl_lane_w_context.write_vfpu_vector(vscl_lane_w_source, 0u, 3u);
        vscl_lane_w_context.set_vfpu_scalar_bits(0x60u, std::bit_cast<std::uint32_t>(0.5f));
        vscl_lane_w_context.vfpu_ctrl[0] = 0x000000E4u;
        vscl_lane_w_context.vfpu_ctrl[1] = 0x000000E4u;
        vscl_lane_w_context.execute_vfpu_vscl(4u, 0u, 0x60u, 3u);
        float vscl_lane_w_result[4]{};
        vscl_lane_w_context.read_vfpu_vector(vscl_lane_w_result, 4u, 3u);
        require(vscl_lane_w_result[0] == 0.75f && vscl_lane_w_result[1] == -1.0f &&
                    vscl_lane_w_result[2] == 2.0f,
                "VSCL.T scalar in physical lane w was not broadcast correctly");

        psprecomp::AllegrexContext vocp_context{};
        vocp_context.eat_vfpu_prefixes();
        vocp_context.set_vfpu_scalar_bits(0u, std::bit_cast<std::uint32_t>(0.25f));
        vocp_context.execute_vfpu_vocp(32u, 0u, 1u);
        require(vocp_context.vfpu_scalar_bits(32u) == std::bit_cast<std::uint32_t>(0.75f),
                "VOCP.S default 1-S behavior failed");

        vocp_context.eat_vfpu_prefixes();
        vocp_context.vfpu_ctrl[1] |= 1u << 8u;
        vocp_context.execute_vfpu_vocp(32u, 0u, 1u);
        require(std::fabs(std::bit_cast<float>(vocp_context.vfpu_scalar_bits(32u)) - (1.0f / 12.0f)) < 0.000001f,
                "VOCP.S forced T constant prefix behavior failed");

        vocp_context.eat_vfpu_prefixes();
        vocp_context.vfpu_ctrl[0] = 1u;
        vocp_context.execute_vfpu_vocp(32u, 0u, 1u);
        require(vocp_context.vfpu_scalar_bits(32u) == 0u,
                "VOCP.S invalid swizzle retention failed");

        vocp_context.eat_vfpu_prefixes();
        vocp_context.set_vfpu_scalar_bits(0u, 0xFFC00001u);
        vocp_context.execute_vfpu_vocp(32u, 0u, 1u);
        const std::uint32_t vocp_nan = vocp_context.vfpu_scalar_bits(32u);
        require((vocp_nan & 0x80000000u) == 0u && std::isnan(std::bit_cast<float>(vocp_nan)),
                "VOCP.S positive NaN behavior failed");

        psprecomp::AllegrexContext vsgn_context{};
        vsgn_context.eat_vfpu_prefixes();
        vsgn_context.set_vfpu_scalar_bits(0u, std::bit_cast<std::uint32_t>(-2.5f));
        vsgn_context.execute_vfpu_vsgn(32u, 0u, 1u);
        require(vsgn_context.vfpu_scalar_bits(32u) == std::bit_cast<std::uint32_t>(-1.0f),
                "VSGN negative source failed");
        vsgn_context.set_vfpu_scalar_bits(0u, std::bit_cast<std::uint32_t>(3.0f));
        vsgn_context.execute_vfpu_vsgn(32u, 0u, 1u);
        require(vsgn_context.vfpu_scalar_bits(32u) == std::bit_cast<std::uint32_t>(1.0f),
                "VSGN positive source failed");
        vsgn_context.set_vfpu_scalar_bits(0u, 0u);
        vsgn_context.execute_vfpu_vsgn(32u, 0u, 1u);
        require(vsgn_context.vfpu_scalar_bits(32u) == 0u, "VSGN zero source failed");

        psprecomp::AllegrexContext vector_init_context{};
        vector_init_context.eat_vfpu_prefixes();
        float vector_zero[4]{};
        vector_init_context.write_vfpu_vector_with_destination_prefix(vector_zero, 0x23u, 4u);
        float vector_init_result[4]{1.0f, 1.0f, 1.0f, 1.0f};
        vector_init_context.read_vfpu_vector(vector_init_result, 0x23u, 4u);
        require(vector_init_result[0] == 0.0f && vector_init_result[1] == 0.0f &&
                    vector_init_result[2] == 0.0f && vector_init_result[3] == 0.0f,
                "VZERO.Q write failed");
        vector_init_context.eat_vfpu_prefixes();
        const float vector_one[4]{1.0f, 1.0f, 1.0f, 1.0f};
        vector_init_context.write_vfpu_vector_with_destination_prefix(vector_one, 0x23u, 4u);
        vector_init_context.read_vfpu_vector(vector_init_result, 0x23u, 4u);
        require(vector_init_result[0] == 1.0f && vector_init_result[1] == 1.0f &&
                    vector_init_result[2] == 1.0f && vector_init_result[3] == 1.0f,
                "VONE.Q write failed");

        psprecomp::AllegrexContext vh2f_context{};
        vh2f_context.eat_vfpu_prefixes();
        vh2f_context.set_vfpu_scalar_bits(0u, 0xC0003C00u); // low=+1.0h, high=-2.0h
        vh2f_context.execute_vfpu_vh2f(1u, 0u, 1u);
        float vh2f_result[4]{};
        vh2f_context.read_vfpu_vector(vh2f_result, 1u, 2u);
        require(vh2f_result[0] == 1.0f && vh2f_result[1] == -2.0f,
                "VH2F.S packed normal conversion failed");

        vh2f_context.eat_vfpu_prefixes();
        const float packed_half_words[2]{
            std::bit_cast<float>(0x80000000u), // low=+0, high=-0
            std::bit_cast<float>(0x7C000001u), // low=min subnormal, high=+inf
        };
        vh2f_context.write_vfpu_vector(packed_half_words, 0u, 2u);
        vh2f_context.execute_vfpu_vh2f(4u, 0u, 2u);
        vh2f_context.read_vfpu_vector(vh2f_result, 4u, 4u);
        require(std::bit_cast<std::uint32_t>(vh2f_result[0]) == 0x00000000u &&
                    std::bit_cast<std::uint32_t>(vh2f_result[1]) == 0x80000000u,
                "VH2F.P signed-zero conversion failed");
        require(std::bit_cast<std::uint32_t>(vh2f_result[2]) == 0x33800000u &&
                    std::bit_cast<std::uint32_t>(vh2f_result[3]) == 0x7F800000u,
                "VH2F.P subnormal/inf conversion failed");

        vh2f_context.eat_vfpu_prefixes();
        vh2f_context.set_vfpu_scalar_bits(0u, 0xFE007E00u);
        const float preserved_pair[2]{9.0f, 10.0f};
        vh2f_context.write_vfpu_vector(preserved_pair, 1u, 2u);
        vh2f_context.vfpu_ctrl[2] = 1u << 9u; // Preserve output Y while writing X.
        vh2f_context.execute_vfpu_vh2f(1u, 0u, 1u);
        vh2f_context.read_vfpu_vector(vh2f_result, 1u, 2u);
        require(std::bit_cast<std::uint32_t>(vh2f_result[0]) == 0x7F800200u &&
                    vh2f_result[1] == 10.0f,
                "VH2F.S NaN payload or destination mask failed");
        require(vh2f_context.vfpu_ctrl[0] == 0xE4u && vh2f_context.vfpu_ctrl[1] == 0xE4u &&
                    vh2f_context.vfpu_ctrl[2] == 0u,
                "VH2F did not consume VFPU prefixes");


        require(psprecomp::decode_allegrex(0xD03200C0u).kind == psprecomp::OpcodeKind::Vf2h &&
                    psprecomp::decode_allegrex(0xD03200C0u).mnemonic == "vf2h",
                "VF2H.P decode failed");

        psprecomp::AllegrexContext vf2h_context{};
        vf2h_context.eat_vfpu_prefixes();
        const float vf2h_pair[2]{1.0f, -2.0f};
        vf2h_context.write_vfpu_vector(vf2h_pair, 0u, 2u);
        vf2h_context.execute_vfpu_vf2h(64u, 0u, 2u);
        require(vf2h_context.vfpu_scalar_bits(64u) == 0xC0003C00u,
                "VF2H.P normal conversion failed");

        vf2h_context.eat_vfpu_prefixes();
        const float vf2h_special[4]{
            std::ldexp(1.0f, -24),
            std::numeric_limits<float>::infinity(),
            std::bit_cast<float>(0x7FC00123u),
            -0.0f,
        };
        vf2h_context.write_vfpu_vector(vf2h_special, 0u, 4u);
        vf2h_context.execute_vfpu_vf2h(4u, 0u, 4u);
        float vf2h_words[2]{};
        vf2h_context.read_vfpu_vector(vf2h_words, 4u, 2u);
        require(std::bit_cast<std::uint32_t>(vf2h_words[0]) == 0x7C000001u &&
                    std::bit_cast<std::uint32_t>(vf2h_words[1]) == 0x80007F23u,
                "VF2H.Q subnormal/inf/NaN/sign conversion failed");

        vf2h_context.eat_vfpu_prefixes();
        vf2h_context.set_vfpu_scalar_bits(0u, std::bit_cast<std::uint32_t>(2.0f));
        // S.y is forced to constant ONE, so VF2H.S writes {2.0h, 1.0h}.
        vf2h_context.vfpu_ctrl[0] = 0xE4u | (1u << 2u) | (1u << 13u);
        vf2h_context.execute_vfpu_vf2h(65u, 0u, 1u);
        require(vf2h_context.vfpu_scalar_bits(65u) == 0x3C004000u,
                "VF2H.S four-lane source-prefix behavior failed");

        vf2h_context.eat_vfpu_prefixes();
        vf2h_context.set_vfpu_scalar_bits(66u, 0x12345678u);
        vf2h_context.write_vfpu_vector(vf2h_pair, 0u, 2u);
        vf2h_context.vfpu_ctrl[2] = 1u << 8u;
        vf2h_context.execute_vfpu_vf2h(66u, 0u, 2u);
        require(vf2h_context.vfpu_scalar_bits(66u) == 0x12345678u,
                "VF2H destination mask failed");
        require(vf2h_context.vfpu_ctrl[0] == 0xE4u && vf2h_context.vfpu_ctrl[1] == 0xE4u &&
                    vf2h_context.vfpu_ctrl[2] == 0u,
                "VF2H did not consume VFPU prefixes");

        psprecomp::AllegrexContext vx2i_context{};
        vx2i_context.eat_vfpu_prefixes();
        const float packed_signed_halves[2]{
            std::bit_cast<float>(0x7FFF8000u),
            std::bit_cast<float>(0xFFFF0001u),
        };
        vx2i_context.write_vfpu_vector(packed_signed_halves, 2u, 2u);
        vx2i_context.execute_vfpu_vx2i(0u, 2u, 2u, 3u);
        float vx2i_result[4]{};
        vx2i_context.read_vfpu_vector(vx2i_result, 0u, 4u);
        require(std::bit_cast<std::uint32_t>(vx2i_result[0]) == 0x80000000u &&
                    std::bit_cast<std::uint32_t>(vx2i_result[1]) == 0x7FFF0000u &&
                    std::bit_cast<std::uint32_t>(vx2i_result[2]) == 0x00010000u &&
                    std::bit_cast<std::uint32_t>(vx2i_result[3]) == 0xFFFF0000u,
                "VS2I.P signed half expansion failed");

        vx2i_context.eat_vfpu_prefixes();
        vx2i_context.set_vfpu_scalar_bits(4u, 0xFF804020u);
        vx2i_context.execute_vfpu_vx2i(8u, 4u, 1u, 0u);
        vx2i_context.read_vfpu_vector(vx2i_result, 8u, 4u);
        require(std::bit_cast<std::uint32_t>(vx2i_result[0]) == 0x10101010u &&
                    std::bit_cast<std::uint32_t>(vx2i_result[1]) == 0x20202020u &&
                    std::bit_cast<std::uint32_t>(vx2i_result[2]) == 0x40404040u &&
                    std::bit_cast<std::uint32_t>(vx2i_result[3]) == 0x7FFFFFFFu,
                "VUC2I packed byte expansion failed");

        vx2i_context.eat_vfpu_prefixes();
        const float preserved_vx2i[4]{1.0f, 2.0f, 3.0f, 4.0f};
        vx2i_context.write_vfpu_vector(preserved_vx2i, 0u, 4u);
        vx2i_context.write_vfpu_vector(packed_signed_halves, 2u, 2u);
        vx2i_context.vfpu_ctrl[2] = 1u << 9u; // Preserve destination Y.
        vx2i_context.execute_vfpu_vx2i(0u, 2u, 2u, 3u);
        vx2i_context.read_vfpu_vector(vx2i_result, 0u, 4u);
        require(std::bit_cast<std::uint32_t>(vx2i_result[0]) == 0x80000000u &&
                    vx2i_result[1] == 2.0f,
                "VS2I destination mask failed");
        require(vx2i_context.vfpu_ctrl[0] == 0xE4u && vx2i_context.vfpu_ctrl[1] == 0xE4u &&
                    vx2i_context.vfpu_ctrl[2] == 0u,
                "VX2I did not consume VFPU prefixes");

        require(psprecomp::decode_allegrex(0xD047A408u).kind == psprecomp::OpcodeKind::VfpuHorizontal &&
                    psprecomp::decode_allegrex(0xD047A408u).mnemonic == "vavg",
                "VAVG.T decode failed");
        require(psprecomp::decode_allegrex(0xD0460100u).kind == psprecomp::OpcodeKind::VfpuHorizontal &&
                    psprecomp::decode_allegrex(0xD0460100u).mnemonic == "vfad",
                "VFAD.P decode failed");

        psprecomp::AllegrexContext horizontal_context{};
        horizontal_context.eat_vfpu_prefixes();
        const float triple_values[3]{3.0f, 6.0f, 9.0f};
        horizontal_context.write_vfpu_vector(triple_values, 36u, 3u);
        horizontal_context.execute_vfpu_horizontal(8u, 36u, 3u, true);
        require(horizontal_context.vfpu_scalar_bits(8u) == std::bit_cast<std::uint32_t>(6.0f),
                "VAVG.T horizontal average failed");

        horizontal_context.eat_vfpu_prefixes();
        horizontal_context.write_vfpu_vector(triple_values, 36u, 3u);
        horizontal_context.vfpu_ctrl[1] = 0xE4u | (1u << 17u); // Negate T.y after forced 1/3 rewrite.
        horizontal_context.execute_vfpu_horizontal(8u, 36u, 3u, true);
        require(horizontal_context.vfpu_scalar_bits(8u) == std::bit_cast<std::uint32_t>(2.0f),
                "VAVG.T retained-negate prefix behavior failed");

        horizontal_context.eat_vfpu_prefixes();
        const float pair_values[2]{3.0f, 6.0f};
        horizontal_context.write_vfpu_vector(pair_values, 4u, 2u);
        horizontal_context.vfpu_ctrl[1] = 0xE4u | (1u << 8u); // VFAD forced ONE becomes 1/3 in lane X.
        horizontal_context.execute_vfpu_horizontal(9u, 4u, 2u, false);
        require(horizontal_context.vfpu_scalar_bits(9u) == std::bit_cast<std::uint32_t>(7.0f),
                "VFAD.P target absolute-prefix constant behavior failed");

        horizontal_context.eat_vfpu_prefixes();
        horizontal_context.set_vfpu_scalar_bits(10u, std::bit_cast<std::uint32_t>(42.0f));
        horizontal_context.write_vfpu_vector(pair_values, 4u, 2u);
        horizontal_context.vfpu_ctrl[2] = 1u << 8u; // Preserve scalar destination.
        horizontal_context.execute_vfpu_horizontal(10u, 4u, 2u, true);
        require(horizontal_context.vfpu_scalar_bits(10u) == std::bit_cast<std::uint32_t>(42.0f),
                "VAVG destination mask failed");
        require(horizontal_context.vfpu_ctrl[0] == 0xE4u && horizontal_context.vfpu_ctrl[1] == 0xE4u &&
                    horizontal_context.vfpu_ctrl[2] == 0u,
                "VFPU horizontal operation did not consume prefixes");

        psprecomp::AllegrexContext arithmetic_context{};
        arithmetic_context.set_gpr(8u, 12u);
        arithmetic_context.set_gpr(9u, 5u);
        require(arithmetic_context.execute_signed_sub(8u, 8u, 9u) && arithmetic_context.gpr[8] == 7u,
                "SUB execution failed");
        arithmetic_context.set_gpr(8u, 0x7FFFFFFFu);
        arithmetic_context.set_gpr(9u, 1u);
        arithmetic_context.set_gpr(10u, 0x12345678u);
        require(!arithmetic_context.execute_signed_add(10u, 8u, 9u) &&
                    arithmetic_context.gpr[10] == 0x12345678u,
                "ADD overflow detection failed");
        arithmetic_context.set_gpr(8u, 0x80000000u);
        arithmetic_context.set_gpr(9u, 1u);
        require(!arithmetic_context.execute_signed_sub(10u, 8u, 9u) &&
                    arithmetic_context.gpr[10] == 0x12345678u,
                "SUB overflow detection failed");

        psprecomp::AllegrexContext vfpu_context{};
        vfpu_context.write_vfpu_identity_matrix(0x20u, 4u);
        vfpu_context.set_vfpu_scalar_bits(0x00u, 0x40000000u);
        vfpu_context.set_vfpu_scalar_bits(0x21u, 0x40000000u);
        vfpu_context.set_vfpu_scalar_bits(0x42u, 0x40000000u);
        float vfpu_column[4]{};
        vfpu_context.read_vfpu_vector(vfpu_column, 0u, 4u);
        require(vfpu_column[0] == 2.0f && vfpu_column[1] == 0.0f && vfpu_column[2] == 0.0f && vfpu_column[3] == 0.0f,
                "VFPU overlapping register mapping failed");
        const float loaded_vector[4] = {3.0f, 4.0f, 5.0f, 6.0f};
        vfpu_context.write_vfpu_vector(loaded_vector, 4u, 4u);
        vfpu_context.read_vfpu_vector(vfpu_column, 4u, 4u);
        require(vfpu_column[0] == 3.0f && vfpu_column[1] == 4.0f && vfpu_column[2] == 5.0f && vfpu_column[3] == 6.0f,
                "VFPU vector write/read mapping failed");
        vfpu_context.read_vfpu_vector(vfpu_column, 3u, 4u);
        require(vfpu_column[0] == 0.0f && vfpu_column[1] == 0.0f && vfpu_column[2] == 0.0f && vfpu_column[3] == 1.0f,
                "VFPU identity matrix mapping failed");
        float vfpu_matrix[16]{};
        vfpu_context.read_vfpu_matrix(vfpu_matrix, 0x20u, 4u);
        require(vfpu_matrix[0] == 2.0f && vfpu_matrix[5] == 2.0f && vfpu_matrix[10] == 2.0f && vfpu_matrix[15] == 1.0f,
                "VFPU matrix view mapping failed");

        psprecomp::AllegrexContext vmscl_context{};
        vmscl_context.eat_vfpu_prefixes();
        const float vmscl_source[16]{1.0f, 2.0f, 0.0f, 0.0f,
                                     3.0f, 4.0f, 0.0f, 0.0f};
        vmscl_context.write_vfpu_matrix(vmscl_source, 0u, 2u);
        vmscl_context.set_vfpu_scalar_bits(0x7Fu, std::bit_cast<std::uint32_t>(2.0f));
        vmscl_context.execute_vfpu_vmscl(4u, 0u, 0x7Fu, 2u);
        float vmscl_result[16]{};
        vmscl_context.read_vfpu_matrix(vmscl_result, 4u, 2u);
        require(vmscl_result[0] == 2.0f && vmscl_result[1] == 4.0f &&
                    vmscl_result[4] == 6.0f && vmscl_result[5] == 8.0f,
                "VMSCL.P matrix-scalar multiplication failed");
        require(vmscl_context.vfpu_ctrl[0] == 0xE4u && vmscl_context.vfpu_ctrl[1] == 0xE4u &&
                    vmscl_context.vfpu_ctrl[2] == 0u,
                "VMSCL.P did not consume VFPU prefixes");

        psprecomp::AllegrexContext matrix_copy_context{};
        matrix_copy_context.eat_vfpu_prefixes();
        const float matrix_copy_source[16]{1.0f, 2.0f, 0.0f, 0.0f,
                                           3.0f, 4.0f, 0.0f, 0.0f};
        matrix_copy_context.write_vfpu_matrix(matrix_copy_source, 0u, 2u);
        matrix_copy_context.execute_vfpu_vmmov(4u, 0u, 2u);
        float matrix_copy_result[16]{};
        matrix_copy_context.read_vfpu_matrix(matrix_copy_result, 4u, 2u);
        require(matrix_copy_result[0] == 1.0f && matrix_copy_result[1] == 2.0f &&
                    matrix_copy_result[4] == 3.0f && matrix_copy_result[5] == 4.0f,
                "VMMOV.P matrix copy failed");

        matrix_copy_context.execute_vfpu_matrix_init(8u, 2u, 3u);
        matrix_copy_context.read_vfpu_matrix(matrix_copy_result, 8u, 2u);
        require(matrix_copy_result[0] == 1.0f && matrix_copy_result[1] == 0.0f &&
                    matrix_copy_result[4] == 0.0f && matrix_copy_result[5] == 1.0f,
                "VMIDT.P matrix initialization failed");
        matrix_copy_context.execute_vfpu_matrix_init(8u, 2u, 6u);
        matrix_copy_context.read_vfpu_matrix(matrix_copy_result, 8u, 2u);
        require(matrix_copy_result[0] == 0.0f && matrix_copy_result[1] == 0.0f &&
                    matrix_copy_result[4] == 0.0f && matrix_copy_result[5] == 0.0f,
                "VMZERO.P matrix initialization failed");
        matrix_copy_context.execute_vfpu_matrix_init(8u, 2u, 7u);
        matrix_copy_context.read_vfpu_matrix(matrix_copy_result, 8u, 2u);
        require(matrix_copy_result[0] == 1.0f && matrix_copy_result[1] == 1.0f &&
                    matrix_copy_result[4] == 1.0f && matrix_copy_result[5] == 1.0f,
                "VMONE.P matrix initialization failed");


        require(psprecomp::decode_allegrex(0x460C6B01u).kind == psprecomp::OpcodeKind::SubS, "SUB.S decode failed");
        require(psprecomp::decode_allegrex(0x460C6000u).kind == psprecomp::OpcodeKind::AddS, "ADD.S decode failed");
        require(psprecomp::decode_allegrex(0x460C6002u).kind == psprecomp::OpcodeKind::MulS, "MUL.S decode failed");
        require(psprecomp::decode_allegrex(0x460C6003u).kind == psprecomp::OpcodeKind::DivS, "DIV.S decode failed");
        require(psprecomp::decode_allegrex(0x460C6032u).kind == psprecomp::OpcodeKind::FpuCompare, "COP1 compare decode failed");
        require(psprecomp::decode_allegrex(0x45010002u).kind == psprecomp::OpcodeKind::Bc1t, "BC1T decode failed");
        require(psprecomp::decode_allegrex(0x45030002u).kind == psprecomp::OpcodeKind::Bc1tl, "BC1TL decode failed");
        const auto bvt = psprecomp::decode_allegrex(0x49110018u);
        require(bvt.kind == psprecomp::OpcodeKind::Bvt && bvt.has_delay_slot() && bvt.immediate == 24,
                "BVT cc4 decode failed");
        require(psprecomp::decode_allegrex(0x49100018u).kind == psprecomp::OpcodeKind::Bvf,
                "BVF cc4 decode failed");
        require(psprecomp::decode_allegrex(0x49120018u).kind == psprecomp::OpcodeKind::Bvfl,
                "BVFL cc4 decode failed");
        require(psprecomp::decode_allegrex(0x49130018u).kind == psprecomp::OpcodeKind::Bvtl,
                "BVTL cc4 decode failed");

        psprecomp::AllegrexContext fpu_context{};
        fpu_context.set_fpr_bits(1u, 0x80000000u);
        require(fpu_context.fpr_bits(1u) == 0x80000000u, "FPR bit-preserving transfer failed");
        fpu_context.set_fpu_condition(true);
        require(fpu_context.fpu_condition() && (fpu_context.fcr31 & (1u << 23u)) != 0u, "FCR31 condition set failed");
        fpu_context.set_fpu_condition(false);
        require(!fpu_context.fpu_condition(), "FCR31 condition clear failed");
        fpu_context.fcr31 = 0u;
        require(fpu_context.fpu_float_to_word(2.5f, 4u) == 2u, "CVT.W.S ties-to-even conversion failed");
        require(fpu_context.fpu_float_to_word(3.5f, 4u) == 4u, "CVT.W.S ties-to-even upward conversion failed");
        require(fpu_context.fpu_float_to_word(-2.75f, 1u) == static_cast<std::uint32_t>(-2), "TRUNC.W.S conversion failed");
        require(fpu_context.fpu_float_to_word(std::numeric_limits<float>::infinity(), 4u) == 0x7FFFFFFFu,
                "COP1 positive infinity saturation failed");
        require(fpu_context.fpu_float_to_word(-std::numeric_limits<float>::infinity(), 4u) == 0x80000000u,
                "COP1 negative infinity saturation failed");

        {
            auto link_elf = psprecomp::Elf32Image::from_bytes(make_link_branch_test_elf(), "link_branch_analysis.elf");
            psprecomp::GuestMemory link_memory;
            (void)link_elf.load_and_relocate(link_memory, 0x08804000u);
            const auto link_program = psprecomp::analyze_program(link_elf, link_memory, 0x08804000u);
            require(link_program.covered_labels.contains(0x08804010u),
                    "Automatic CFG omitted BLTZAL taken target");
            require(link_program.covered_entry_labels.contains(0x08804010u),
                    "Automatic CFG did not register BLTZAL taken target as an entry");
        }
        test_codegen_branch_before_delay_slot();
        test_codegen_vfpu_branch_before_delay_slot();
        test_codegen_link_branch_before_delay_slot();
        test_codegen_zero_divisor_constant_folding();
        test_codegen_vh2f_lowering();
        test_vfpu_branch_cfg_discovery();
        test_automatic_cfg_and_codegen();
        test_automatic_cross_unit_tail_chaining();
        test_parallel_work_and_atomic_output();
        test_parallel_codegen_determinism_and_failure();
        test_materialized_function_pointer_discovery();

        auto relocation_elf = psprecomp::Elf32Image::from_bytes(make_relocation_test_prx(), "synthetic_relocation.prx");
        psprecomp::GuestMemory relocation_memory;
        const auto relocation_stats = relocation_elf.load_and_relocate(relocation_memory);
        require(relocation_stats.total == 4u && relocation_stats.invalid == 0u && relocation_stats.unsupported == 0u,
                "PSP relocation count failed");
        require(relocation_memory.load32(0x08804000u) == 0x08804020u, "R_MIPS_32 relocation failed");
        require(relocation_memory.load32(0x08804004u) == 0x0E201000u, "R_MIPS_26 relocation failed");
        require(relocation_memory.load32(0x08804008u) == 0x3C020880u, "R_MIPS_HI16 relocation failed");
        require(relocation_memory.load32(0x0880400Cu) == 0x24425234u, "R_MIPS_LO16 relocation failed");

        // PSP assemblers use R_MIPS_16 on VFPU memory operands. The HI16 must
        // pair with it, including a signed-low carry, rather than a later LO16.
        for(const auto instruction : {0xF8955A88u,0xE8955A88u,0xE8955A89u,0xE8955A8Au,0xE8955A8Bu}) {
            auto elf=psprecomp::Elf32Image::from_bytes(make_vfpu_relocation_test_prx(instruction),"vfpu_relocation.prx");
            psprecomp::GuestMemory m;constexpr std::uint32_t base=0x08804F28;
            const auto stats=elf.load_and_relocate(m,base);
            require(stats.total==5 && stats.invalid==0 && stats.unsupported==0,
                    "PSP VFPU R_MIPS_16 relocation is supported");
            require(m.load32(base+8)==0x3C040883,
                    "HI16 pairs with R_MIPS_16 and carries the signed low half");
            require(m.load32(base+12)==((instruction&0xFFFF0000u)|0xA9B0u|(instruction&3)),
                    "R_MIPS_16 relocates VFPU address and preserves register selector bits");
            require(m.load32(base+16)==0x2442615C,
                    "Later LO16 relocates independently of the VFPU pair");
        }

        psprecomp::GuestMemory segmented_memory;
        // MotorStorm uses the PSP scratchpad for its compressed render indices.
        // It must be a distinct, bounded region on both ordinary and AOT paths.
        require(segmented_memory.contains(0x00010000u, 0x4000u) &&
                    !segmented_memory.contains(0x0000FFFFu) &&
                    !segmented_memory.contains(0x00014000u) &&
                    !segmented_memory.contains(0x00013FFFu, 2u),
                "PSP scratchpad mapping/bounds failed");
        segmented_memory.store32(0x00010000u, 0x12345678u);
        require(segmented_memory.load32(0x40010000u) == 0x12345678u &&
                    segmented_memory.load32(0x80010000u) == 0x12345678u,
                "PSP scratchpad aliases failed");
        auto scratch_view = segmented_memory.aot_fast_view();
        scratch_view.aot_store16(0x00013FFEu, 0xABCDu);
        scratch_view.aot_store8(0x40010004u, 0xEFu);
        segmented_memory.aot_store32(0x00010008u, 0x89ABCDEFu);
        require(scratch_view.aot_load16(0x40013FFEu) == 0xABCDu &&
                    scratch_view.aot_load8(0x00010004u) == 0xEFu &&
                    scratch_view.aot_load32(0x40010008u) == 0x89ABCDEFu &&
                    segmented_memory.aot_load32(0x00010000u) == 0x12345678u,
                "AOT scratchpad loads/stores failed");
        bool scratch_overrun_rejected = false;
        try { scratch_view.aot_store32(0x00013FFEu, 0u); }
        catch (const psprecomp::Error &) { scratch_overrun_rejected = true; }
        require(scratch_overrun_rejected && scratch_view.aot_load16(0x00013FFEu) == 0xABCDu,
                "Scratchpad overrun was accepted or partially written");
        const std::array<std::uint8_t, 4> scratch_payload{4u, 3u, 2u, 1u};
        segmented_memory.copy_in(0x00010010u, scratch_payload);
        std::array<std::uint8_t, 4> scratch_copy{};
        segmented_memory.copy_out(0x40010010u, scratch_copy);
        require(scratch_copy == scratch_payload &&
                    segmented_memory.raw_pointer(0x00010000u, 0x4000u) != nullptr &&
                    segmented_memory.raw_pointer(0x00013FFEu, 4u) == nullptr,
                "Scratchpad bulk access failed");
        segmented_memory.zero(0x00010000u, 0x4000u);
        require(scratch_view.aot_load32(0x00010000u) == 0u &&
                    scratch_view.aot_load16(0x00013FFEu) == 0u &&
                    segmented_memory.size() == 32u * 1024u * 1024u,
                "Scratchpad clearing or main RAM independence failed");
        require(segmented_memory.contains(0x04000000u, psprecomp::GuestMemory::kVramSize),
                "PSP EDRAM range was not mapped");
        // A demand-driven renderer must publish before every VRAM access path,
        // including host pointers and generated-code mirror accesses.
        struct VramPublication { psprecomp::GuestMemory *memory; unsigned calls{}; };
        VramPublication publication{&segmented_memory};
        segmented_memory.set_vram_access_hook([](void *context) {
            auto &pending = *static_cast<VramPublication *>(context);
            ++pending.calls;
            pending.memory->store32(0x04000000u, 0x76543210u);
        }, &publication);
        segmented_memory.arm_vram_hook(true);
        (void)segmented_memory.raw_pointer(0x08000000u, 4u);
        require(publication.calls == 0u && segmented_memory.vram_hook_armed(),
                "RAM access must leave the VRAM publication hook armed");
        require(segmented_memory.aot_fast_view().aot_load32(0x44600000u) == 0x76543210u &&
                    publication.calls == 1u && !segmented_memory.vram_hook_armed(),
                "AOT mirror load must publish once before reading VRAM");
        segmented_memory.arm_vram_hook(true);
        segmented_memory.aot_fast_view().aot_store32(0x44200000u, 0xABCDEF01u);
        require(publication.calls == 2u && segmented_memory.load32(0x04000000u) == 0xABCDEF01u,
                "AOT mirror store must publish before overwriting GPU pixels");
        segmented_memory.arm_vram_hook(true);
        const auto *vram_pointer = std::as_const(segmented_memory).raw_pointer(0x44400000u, 4u);
        require(vram_pointer && vram_pointer[0] == 0x10u && publication.calls == 3u,
                "Const host VRAM pointer must observe published pixels");
        segmented_memory.arm_vram_hook(true);
        require(segmented_memory.raw_pointer(0x04000000u, 4u) != nullptr && publication.calls == 4u,
                "Mutable host VRAM pointer must publish before access");
        segmented_memory.arm_vram_hook(true);
        require(segmented_memory.vram_bytes()[0] == 0x10u && publication.calls == 5u,
                "Whole VRAM access must publish before reading");
        segmented_memory.set_vram_access_hook([](void *) { throw std::runtime_error("GPU publication failed"); }, nullptr);
        for (bool whole_vram : {false, true}) {
            segmented_memory.arm_vram_hook(true);
            bool propagated = false;
            try {
                if (whole_vram) (void)segmented_memory.vram_bytes();
                else (void)segmented_memory.raw_pointer(0x04000000u, 4u);
            } catch (const std::runtime_error &) { propagated = true; }
            require(propagated, "GPU publication errors must propagate through host VRAM access");
        }
        segmented_memory.set_vram_access_hook(nullptr, nullptr);
        struct VramRange { std::uint32_t address{}; std::size_t length{}; unsigned calls{}; } range;
        segmented_memory.set_vram_range_access_hook([](void *context, std::uint32_t address, std::size_t length) {
            auto &value = *static_cast<VramRange *>(context);
            value.address = address; value.length = length; ++value.calls;
        }, &range);
        segmented_memory.arm_vram_hook(true);
        (void)segmented_memory.aot_load32(0x441FFFFEu);
        require(range.calls == 1u && range.address == 0x441FFFFEu && range.length == 4u,
                "Range coherence hook must describe a complete mirrored scalar read before wrap");
        segmented_memory.arm_vram_hook(true);
        std::array<std::uint8_t, 12> range_bytes{};
        segmented_memory.copy_out(0x445FFFFCu, range_bytes);
        require(range.calls == 2u && range.address == 0x445FFFFCu && range.length == range_bytes.size(),
                "Range coherence hook must describe all bytes of a wrapping bulk read");
        segmented_memory.arm_vram_hook(true);
        segmented_memory.zero(0x04010000u, 32u);
        require(range.calls == 3u && range.length == 32u,
                "Range coherence hook must describe all bytes cleared by a CPU write");
        segmented_memory.set_vram_access_hook(nullptr, nullptr);
        segmented_memory.store32(0x04000000u, 0x12345678u);
        struct ExactRead { unsigned calls{}; std::uint32_t pc{}, ra{}; } exact_read;
        segmented_memory.set_vram_read32_hook([](void *context, std::uint32_t address, std::uint32_t &value) {
            auto &trace = *static_cast<ExactRead *>(context);
            ++trace.calls;
            trace.pc = psprecomp::GuestMemory::vram_access_pc();
            trace.ra = psprecomp::GuestMemory::vram_access_ra();
            value = 0xAABBCCDDu;
            return (address & 0x1FFFFFu) == 0;
        }, &exact_read);
        segmented_memory.set_vram_range_access_hook([](void *, std::uint32_t, std::size_t) {}, nullptr);
        segmented_memory.arm_vram_hook(true);
        require(segmented_memory.aot_load32_at(0x44400000u, 0x089425A4u, 0x0894258Cu) == 0xAABBCCDDu &&
                exact_read.pc == 0x089425A4u && exact_read.ra == 0x0894258Cu && segmented_memory.vram_hook_armed(),
                "Exact reads must carry the instruction context and retain unpublished VRAM residency");
        require(psprecomp::GuestMemory::vram_access_pc() == 0u && psprecomp::GuestMemory::vram_access_ra() == 0u,
                "Instruction tracing context must be restored after the access");
        require(segmented_memory.load32(0x44000000u) == 0xAABBCCDDu,
                "Host scalar reads must share the exact VRAM result");
        segmented_memory.arm_vram_hook(true);
        (void)segmented_memory.aot_load32(0x441FFFFEu);
        require(exact_read.calls == 2u, "Wrapping reads must use complete range publication");
        segmented_memory.arm_vram_hook(true);
        segmented_memory.store32(0x44000000u, 0x11223344u);
        require(exact_read.calls == 2u && segmented_memory.load32(0x04000000u) == 0x11223344u,
                "Writes and their implicit old-value reads must retain full publication and bypass exact read queries");
        segmented_memory.set_vram_read32_hook(nullptr, nullptr);
        segmented_memory.set_vram_access_hook(nullptr, nullptr);
        segmented_memory.store32(0x04000000u, 0x12345678u);
        require(segmented_memory.load32(0x44000000u) == 0x12345678u,
                "PSP cached/uncached EDRAM aliasing failed");
        require(segmented_memory.contains(0x04200000u, 1u) &&
                    segmented_memory.contains(0x04600000u, psprecomp::GuestMemory::kVramSize),
                "PSP EDRAM mirror windows were not mapped");
        require(segmented_memory.load32(0x04200000u) == 0x12345678u &&
                    segmented_memory.load32(0x44600000u) == 0x12345678u,
                "PSP EDRAM physical/uncached mirror aliasing failed");
        segmented_memory.store32(0x041FFFFEu, 0xA1B2C3D4u);
        require(segmented_memory.load16(0x041FFFFEu) == 0xC3D4u &&
                    segmented_memory.load16(0x04200000u) == 0xA1B2u,
                "PSP EDRAM access did not wrap across a mirror boundary");
        segmented_memory.aot_store32(0x04400004u, 0xCAFEBABEu);
        require(segmented_memory.aot_load32(0x04000004u) == 0xCAFEBABEu,
                "AOT EDRAM mirror fast path failed");
        const std::array<std::uint8_t, 6> mirror_payload{1u, 2u, 3u, 4u, 5u, 6u};
        segmented_memory.copy_in(0x041FFFFDu, mirror_payload);
        std::array<std::uint8_t, 6> mirror_copy{};
        segmented_memory.copy_out(0x045FFFFDu, mirror_copy);
        require(mirror_copy == mirror_payload, "PSP EDRAM mirrored bulk-copy wrap failed");

        {
            psprecomp::GuestMemory deflate_memory;
            constexpr std::uint32_t compressed_address = 0x08804000u;
            constexpr std::uint32_t output_address = 0x08808000u;
            const std::array<std::uint8_t, 120> compressed{
                0x73u, 0x4Fu, 0xCDu, 0x4Bu, 0x2Du, 0xCAu, 0x4Cu, 0x56u, 0x08u, 0x08u,
                0x0Eu, 0x08u, 0x4Au, 0x4Du, 0xCEu, 0xCFu, 0x2Du, 0x50u, 0x70u, 0x71u,
                0x75u, 0xF3u, 0x71u, 0x0Cu, 0x71u, 0x55u, 0x48u, 0x4Bu, 0x2Cu, 0x2Eu,
                0x51u, 0x28u, 0x48u, 0x2Cu, 0xC9u, 0xD0u, 0x53u, 0x70u, 0x1Fu, 0x55u,
                0x34u, 0xAAu, 0x68u, 0x54u, 0xD1u, 0xA8u, 0xA2u, 0x51u, 0x45u, 0x83u,
                0x55u, 0x11u, 0x03u, 0x23u, 0x13u, 0x33u, 0x0Bu, 0x2Bu, 0x1Bu, 0x3Bu,
                0x07u, 0x27u, 0x17u, 0x37u, 0x0Fu, 0x2Fu, 0x1Fu, 0xBFu, 0x80u, 0xA0u,
                0x90u, 0xB0u, 0x88u, 0xA8u, 0x98u, 0xB8u, 0x84u, 0xA4u, 0x94u, 0xB4u,
                0x8Cu, 0xACu, 0x9Cu, 0xBCu, 0x82u, 0xA2u, 0x92u, 0xB2u, 0x8Au, 0xAAu,
                0x9Au, 0xBAu, 0x86u, 0xA6u, 0x96u, 0xB6u, 0x8Eu, 0xAEu, 0x9Eu, 0xBEu,
                0x81u, 0xA1u, 0x91u, 0xB1u, 0x89u, 0xA9u, 0x99u, 0xB9u, 0x85u, 0xA5u,
                0x95u, 0xB5u, 0x8Du, 0xADu, 0x9Du, 0xFDu, 0x50u, 0xD7u, 0x0Fu, 0x00u};
            deflate_memory.copy_in(compressed_address, compressed);
            deflate_memory.store32(compressed_address + static_cast<std::uint32_t>(compressed.size()),
                                   0xA5B6C7D8u);
            std::vector<std::uint8_t> expected;
            const std::string phrase = "Generic PSPRecomp DEFLATE fast path. ";
            for (std::uint32_t repeat = 0u; repeat < 40u; ++repeat)
                expected.insert(expected.end(), phrase.begin(), phrase.end());
            for (std::uint32_t repeat = 0u; repeat < 4u; ++repeat)
                for (std::uint32_t byte = 0u; byte < 64u; ++byte)
                    expected.push_back(static_cast<std::uint8_t>(byte));
            const auto result = psprecomp::inflate_raw_deflate(
                deflate_memory, output_address, static_cast<std::uint32_t>(expected.size()), compressed_address);
            require(result.status == psprecomp::RawDeflateStatus::Ok,
                    "raw DEFLATE fixture was rejected");
            require(result.output_size == expected.size() && result.input_consumed == compressed.size(),
                    "raw DEFLATE result lengths were incorrect");
            std::vector<std::uint8_t> actual(expected.size());
            deflate_memory.copy_out(output_address, actual);
            require(actual == expected, "raw DEFLATE output bytes were incorrect");
            require(deflate_memory.load32(compressed_address + static_cast<std::uint32_t>(compressed.size())) ==
                        0xA5B6C7D8u,
                    "raw DEFLATE consumed bytes beyond BFINAL");
            const auto overflow = psprecomp::inflate_raw_deflate(
                deflate_memory, output_address, 32u, compressed_address);
            require(overflow.status == psprecomp::RawDeflateStatus::OutputOverflow,
                    "raw DEFLATE did not report output overflow");
        }

        psprecomp::GuestMemory lz_memory;
        constexpr std::uint32_t lz_base = 0x08808000u;
        lz_memory.store8(lz_base + 0u, static_cast<std::uint8_t>('A'));
        lz_memory.aot_copy_lz_match(lz_base + 1u, lz_base, 15u);
        for (std::uint32_t index = 0u; index < 16u; ++index)
            require(lz_memory.load8(lz_base + index) == static_cast<std::uint8_t>('A'),
                    "LZ distance-one expansion failed");
        lz_memory.store8(lz_base + 0x20u, static_cast<std::uint8_t>('A'));
        lz_memory.store8(lz_base + 0x21u, static_cast<std::uint8_t>('B'));
        lz_memory.store8(lz_base + 0x22u, static_cast<std::uint8_t>('C'));
        lz_memory.aot_copy_lz_match(lz_base + 0x23u, lz_base + 0x20u, 10u);
        constexpr std::array<std::uint8_t, 13> lz_expected{
            'A', 'B', 'C', 'A', 'B', 'C', 'A', 'B', 'C', 'A', 'B', 'C', 'A'};
        std::array<std::uint8_t, 13> lz_actual{};
        lz_memory.copy_out(lz_base + 0x20u, lz_actual);
        require(lz_actual == lz_expected, "LZ repeating-pattern expansion failed");

        psprecomp::GuestMemory unaligned_memory;
        constexpr std::uint32_t unaligned_base = 0x08810000u;
        unaligned_memory.store32(unaligned_base, 0x44332211u);
        require(unaligned_memory.load_word_left(unaligned_base + 0u, 0xAABBCCDDu) == 0x11BBCCDDu, "LWL lane 0 failed");
        require(unaligned_memory.load_word_left(unaligned_base + 3u, 0xAABBCCDDu) == 0x44332211u, "LWL lane 3 failed");
        require(unaligned_memory.load_word_right(unaligned_base + 0u, 0xAABBCCDDu) == 0x44332211u, "LWR lane 0 failed");
        require(unaligned_memory.load_word_right(unaligned_base + 3u, 0xAABBCCDDu) == 0xAABBCC44u, "LWR lane 3 failed");
        unaligned_memory.store32(unaligned_base, 0x44332211u);
        unaligned_memory.store_word_left(unaligned_base + 0u, 0xAABBCCDDu);
        require(unaligned_memory.load32(unaligned_base) == 0x443322AAu, "SWL lane 0 failed");
        unaligned_memory.store32(unaligned_base, 0x44332211u);
        unaligned_memory.store_word_right(unaligned_base + 3u, 0xAABBCCDDu);
        require(unaligned_memory.load32(unaligned_base) == 0xDD332211u, "SWR lane 3 failed");

        psprecomp::NidRegistry nids;
        require(nids.resolve("IoFileMgrForUser", 0x109F50BCu) == "sceIoOpen", "NID registry failed");
        require(nids.resolve("SysMemUserForUser", 0x7591C7DBu) == "sceKernelSetCompiledSdkVersion",
                "PSP boot NID registry failed");

        psprecomp::Runtime runtime;
        runtime.set_game_root(std::filesystem::current_path());
        const auto translated = runtime.translate_path("disc0:/PSP_GAME/USRDIR/data.bin");
        require(translated.filename() == "data.bin", "PSP path translation failed");
        bool traversal_rejected = false;
        try { (void)runtime.translate_path("disc0:/../secret"); } catch (...) { traversal_rejected = true; }
        require(traversal_rejected, "Path traversal was not rejected");

        const auto temp = std::filesystem::temp_directory_path() / "psprecomp_sha_test.txt";
        { std::ofstream out(temp, std::ios::binary); out << "abc"; }
        require(psprecomp::sha256_file(temp) == "ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad",
                "SHA-256 failed");
        std::filesystem::remove(temp);

        std::cout << "All PSPRecomp automatic-pipeline tests passed.\n";
        return 0;
    } catch (const std::exception &e) {
        std::cerr << "Test failure: " << e.what() << "\n";
        return 1;
    }
}
