// Exercise the actual text passes and streaming emitter without exposing them
// as runtime ABI. The CLI entry point is renamed only in this test translation unit.
#define main psp_recomp_test_cli_main
#include "../tools/codegen_main.cpp"
#undef main

static void check(bool value, const char *message) {
    if (!value) throw std::runtime_error(message);
}

int main() {
    try {
        psprecomp::CodegenText numbers;
        std::ostringstream expected_numbers;
        numbers << -2147483647 << ',' << 4294967295u << ',' << std::numeric_limits<std::int64_t>::min()
                << ',' << std::numeric_limits<std::uint64_t>::max() << ':' << 'x' << true << static_cast<unsigned char>('y');
        expected_numbers << -2147483647 << ',' << 4294967295u << ',' << std::numeric_limits<std::int64_t>::min()
                         << ',' << std::numeric_limits<std::uint64_t>::max() << ':' << 'x' << true << static_cast<unsigned char>('y');
        check(numbers.take() == expected_numbers.str(), "Buffered decimal formatting differs from stream formatting");
        const std::regex pattern(R"(ctx\.example\(([0-9]+)u\))");
        const std::string candidates = "ctx.example(dynamic) ctx.example(001u) ctx.example() ctx.example(2u) tail";
        check(replace_prefixed_regex(candidates, "ctx.example(", pattern, "replacement<$1u>()") ==
              std::regex_replace(candidates, pattern, "replacement<$1u>()"),
              "Candidate regex replacement differs on invalid and repeated candidates");
        const std::string gpr =
            "ctx.set_gpr(0, load(quoted(\"(x)\"), ')'));\n"
            "ctx.set_gpr(8, f(1, g(2))); ctx.set_gpr(31, side_effect());\n"
            "ctx.set_gpr(dynamic, x); ctx.set_gpr(32, x);\n";
        check(lower_constant_gpr_writes(gpr) ==
            "(void)(load(quoted(\"(x)\"), ')'));\n"
            "ctx.gpr[8] = (f(1, g(2))); ctx.gpr[31] = (side_effect());\n"
            "ctx.set_gpr(dynamic, x); ctx.set_gpr(32, x);\n",
            "GPR lowering changed expression evaluation or defensive fallback");
        check(lower_constant_gpr_writes("ctx.set_gpr(8, nested(1)") == "ctx.set_gpr(8, nested(1)",
            "Incomplete GPR expression was modified");
        check(lower_constant_fpr_accesses("ctx.set_fpr_bits(3, f(ctx.fpr_bits(2), g(1))); ctx.fpr_bits(32);") ==
            "ctx.fpr[3] = std::bit_cast<float>(f(std::bit_cast<std::uint32_t>(ctx.fpr[2]), g(1))); ctx.fpr_bits(32);",
            "FPR lowering changed nested expressions or validation");
        check(lower_aot_memory_accesses("rt.memory().aot_load32(x); rt.memory().aot_store8(x, y); rt.memory().aot_load64(x);") ==
            "aot_mem.aot_load32(x); aot_mem.aot_store8(x, y); rt.memory().aot_load64(x);", "Memory lowering changed unsupported access");
        check(lower_builtin_hot_accessors(
                  "void f(Runtime &rt, AllegrexContext &ctx, std::uint16_t id, GuestMemory::AotFastView &aot_mem) {\n"
                  "    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + 4u));\n"
                  "    aot_mem.aot_store16(ctx.gpr[4], ctx.gpr[5]); ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load8(x));\n"
                  "    aot_mem.aot_store32(a, std::bit_cast<std::uint32_t>(ctx.fpr[3])); ctx.set_gpr(n, 1u); aot_mem.aot_load64(x);\n") ==
              "void f(Runtime &rt, AllegrexContext &ctx, std::uint16_t id, GuestMemory::AotFastView &aot_mem) {\n"
              "    static_assert(std::endian::native == std::endian::little);\n"
              "    std::uint32_t *const aot_gpr = ctx.gpr.data();\n"
              "    float *const aot_fpr = ctx.fpr.data();\n"
              "    const GuestMemory::AotFastView::Raw aot_raw = aot_mem.raw();\n"
              "    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + 4u));\n"
              "    PSPRECOMP_AOT_STORE16(aot_gpr[4], aot_gpr[5]); aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD8(x));\n"
              "    PSPRECOMP_AOT_STORE32(a, __builtin_bit_cast(std::uint32_t, aot_fpr[3])); ctx.set_gpr(n, 1u); aot_mem.aot_load64(x);\n",
              "Builtin accessor lowering changed an access, the entry prologue or a dynamic fallback");
        {
            // The macros must match the member fast and slow paths exactly.
            psprecomp::GuestMemory guest;
            auto aot_mem = guest.aot_fast_view();
            const psprecomp::GuestMemory::AotFastView::Raw aot_raw = aot_mem.raw();
            PSPRECOMP_AOT_STORE32(0x08800010u, 0x11223344u);
            PSPRECOMP_AOT_STORE16(0x48800014u, 0xA1B2u);
            PSPRECOMP_AOT_STORE8(0x08800016u, 0x1C5u);
            check(PSPRECOMP_AOT_LOAD32(0x88800010u) == aot_mem.aot_load32(0x08800010u) &&
                      PSPRECOMP_AOT_LOAD32(0x08800010u) == 0x11223344u &&
                      PSPRECOMP_AOT_LOAD16(0x08800014u) == 0xA1B2u && PSPRECOMP_AOT_LOAD8(0x08800016u) == 0xC5u &&
                      PSPRECOMP_AOT_LOAD32(0x08800014u) == aot_mem.aot_load32(0x08800014u),
                  "Builtin memory macros differ from the AotFastView fast path");
            PSPRECOMP_AOT_STORE32(0x04000100u, 0xCAFEF00Du); // VRAM: slow path
            check(PSPRECOMP_AOT_LOAD32(0x04000100u) == 0xCAFEF00Du && guest.load32(0x04000100u) == 0xCAFEF00Du,
                  "Builtin memory macros did not fall back to the view outside RAM");
        }
        check(lower_constant_vfpu_accesses("ctx.read_vfpu_vector(v, 12u, 4u); ctx.set_vfpu_scalar_bits(7u, f(1, g(2)));\n") ==
            "ctx.read_vfpu_vector_ct<12u, 4u>(v); ctx.set_vfpu_scalar_bits_ct<7u>(f(1, g(2)));\n", "VFPU lowering changed nested expressions");

        psprecomp::GuestMemory memory;
        constexpr std::uint32_t base = 0x08804000u;
        constexpr std::uint32_t target = base + 0x20000u;
        memory.store32(base, 0x0C000000u | ((target >> 2u) & 0x03FFFFFFu)); // jal import
        memory.store32(base + 4u, 0x24020007u); // delay slot
        const std::set<std::uint32_t> imports{target};
        const GeneratedFunctionInput import_unit{"import_fixture", base, {base}, {base}, base, 0x10000u, nullptr, &imports};
        const auto import_text = emit_function_source(import_unit, memory, import_unit.name);
        const auto store = import_text.find("ctx.pc = " + psprecomp::hex32(target) + "u;");
        check(store != std::string::npos && import_text.find("ctx.pc = " + psprecomp::hex32(target), store + 1u) == std::string::npos,
            "Import JAL was not emitted exactly once");
        check(import_text.find("static_cast<std::uint32_t>(7)") < store,
            "Import JAL lost its delay slot");

        // Regression: an import stub can also be an entry label of its own
        // containing unit (the translated placeholder body). A fixed same-unit
        // JAL to it must still leave through the outer dispatcher; entering the
        // local label would execute the placeholder body and silently drop the
        // HLE wrapper. MotorStorm's GU library hit this for every import.
        constexpr std::uint32_t same_unit_stub = base + 0x100u;
        memory.store32(base, 0x0C000000u | ((same_unit_stub >> 2u) & 0x03FFFFFFu)); // jal stub
        memory.store32(base + 4u, 0x24020007u); // delay slot
        memory.store32(same_unit_stub, 0x03E00008u);      // jr $ra placeholder
        memory.store32(same_unit_stub + 4u, 0x00000000u); // nop
        const std::set<std::uint32_t> same_unit_imports{same_unit_stub};
        const GeneratedFunctionInput same_unit_unit{
            "same_unit_import_fixture", base, {base, same_unit_stub}, {base, same_unit_stub},
            base, 0x20000u, nullptr, &same_unit_imports};
        const auto same_unit_text = emit_function_source(same_unit_unit, memory, same_unit_unit.name);
        check(same_unit_text.find("\n    goto L_" + psprecomp::hex32(same_unit_stub).substr(2) + ";") == std::string::npos,
            "Same-unit import JAL was inlined as a local label transfer");
        check(same_unit_text.find("ctx.pc = " + psprecomp::hex32(same_unit_stub) + "u;\n    return;") != std::string::npos,
            "Same-unit import JAL did not hand off to the outer dispatcher");

        // Regression: Allegrex load-linked/store-conditional must lower to the
        // reservation pair, not stop the run.  The PSP GU library used ll/sc in
        // its signal loop and MotorStorm died there before this lowering.
        constexpr std::uint32_t atomic_base = base + 0x2000u;
        memory.store32(base, 0xC1030000u); // ll r3, 0(r8)
        memory.store32(base + 4u, 0x0063202Au); // slt r4, r3, r3
        memory.store32(base + 8u, 0xE1030000u); // sc r3, 0(r8)
        memory.store32(base + 12u, 0x00000000u); // nop
        GeneratedFunctionInput atomic_unit{
            "atomic_fixture", base, {}, {base}, base, 0x20000u, nullptr, nullptr};
        for (std::uint32_t offset = 0u; offset < 16u; offset += 4u)
            atomic_unit.instructions.insert(base + offset);
        const auto atomic_text = emit_function_source(atomic_unit, memory, atomic_unit.name);
        check(atomic_text.find("ctx.ll_address = ") != std::string::npos &&
                  atomic_text.find("ctx.ll_reserved = true;") != std::string::npos &&
                  atomic_text.find("sc_reserved ? 1u : 0u") != std::string::npos,
            "ll/sc lowering is missing the reservation pair");
        check(atomic_text.find("\"ll\" not lowered") == std::string::npos &&
                  atomic_text.find("\"sc\" not lowered") == std::string::npos,
            "ll/sc still emitted as unsupported");

        // Force many complete blocks through multiple chunks, including dense
        // dispatch, branch conditions, GPR/FPR writes, memory and VFPU lowering.
        GeneratedFunctionInput input{"stream_fixture", base, {}, {}, base, 0u};
        const std::array<std::uint32_t, 8> words{
            0x24020007u, 0x8C830000u, 0xAC830004u, 0x44822000u,
            0x44022000u, 0x60008080u, 0x10000001u, 0x24030001u};
        for (std::uint32_t i = 0u; i < 8192u; i += 8u) {
            input.entry_labels.insert(base + i * 4u);
            input.entry_labels.insert(base + i * 4u + 8u * 4u);
            for (std::size_t j = 0u; j < words.size(); ++j) {
                memory.store32(base + i * 4u + static_cast<std::uint32_t>(j * 4u), words[j]);
                if (j != 7u) input.instructions.insert(base + i * 4u + static_cast<std::uint32_t>(j * 4u));
            }
        }
        auto lower = [](std::string text) {
            return lower_constant_vfpu_accesses(lower_aot_memory_accesses(
                lower_constant_fpr_accesses(lower_constant_gpr_writes(std::move(text)))));
        };
        const auto bulk = lower(emit_function_source(input, memory, input.name));
        std::string streamed;
        std::size_t chunks = 0u;
        (void)emit_function_source(input, memory, input.name, [&](std::string chunk) {
            ++chunks;
            streamed += lower(std::move(chunk));
        });
        check(chunks > 1u && streamed == bulk, "Chunked lowering differs from whole-unit lowering");
        std::cout << "Codegen lowering and streaming tests passed.\n";
        return 0;
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
