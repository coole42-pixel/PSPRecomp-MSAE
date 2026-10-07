// MotorStorm profile self-tests: exercise the generic HLE without any game
// files.  Verifies scheduler creation/start/switch semantics, import binding
// and the guest filesystem's real-error behavior for a missing disc tree.

#include "motorstorm_bootstrap.hpp"
#include "motorstorm_hle.hpp"
#include "motorstorm_ge.hpp"
#include "motorstorm_audio.hpp"
#include "motorstorm_audio_recovery.hpp"
#include "motorstorm_atrac.hpp"
#include "vcs_media_decoder.hpp"
#include <chrono>
#include <thread>
#include "motorstorm_input.hpp"
#include "motorstorm_media.hpp"

#include "psprecomp/common.hpp"
#include "psprecomp/hle_savedata.hpp"
#include "psprecomp/hle_audio_output2.hpp"
#include "psprecomp/runtime.hpp"

#include <array>
#include <bit>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <span>
#include <string>
#include <vector>

// The test target links the bootstrap (for logging) but none of the 21
// generated AOT units, so the registry symbol is stubbed here.
namespace psprecomp {
void register_generated_functions(Runtime &) {}
} // namespace psprecomp

namespace {

int g_failures = 0;

void require(bool condition, const char *message) {
    if (!condition) {
        std::fprintf(stderr, "[FAIL] %s\n", message);
        ++g_failures;
    }
}

void store_string(psprecomp::Runtime &runtime, std::uint32_t address, const char *text) {
    const std::size_t length = std::strlen(text) + 1u;
    runtime.memory().copy_in(
        address, std::span<const std::uint8_t>(reinterpret_cast<const std::uint8_t *>(text), length));
}

std::uint32_t read_rgb(const psprecomp::GuestMemory &memory, std::uint32_t address) {
    return memory.load32(address) & 0xFFFFFFu;
}

} // namespace

int main(int argc,char **argv) {
    {
        motorstorm::AudioRecoveryRamp recovery;
        std::array<std::int16_t, 1024> pcm;
        for (std::size_t i = 0u; i < pcm.size(); i += 2u) { pcm[i] = 12000; pcm[i + 1u] = -12000; }
        const auto original = pcm;
        recovery.pcm(pcm, 44100u, false);
        require(pcm == original, "Healthy audio PCM is unchanged by underrun smoothing");
        recovery.silence(pcm, 44100u);
        require(pcm[0] > 11900 && pcm[0] < 12000 && pcm[1] == -pcm[0] &&
                pcm[438] == 0 && pcm.back() == 0,
                "Underrun onset ramps the last stereo sample to zero over five milliseconds");
        recovery.silence(pcm, 44100u);
        require(std::all_of(pcm.begin(), pcm.end(), [](auto sample) { return sample == 0; }),
                "Continued underrun remains silent instead of repeating old audio");
        pcm = original;
        recovery.pcm(pcm, 44100u, true);
        require(pcm[0] > 0 && pcm[0] < 100 && pcm[1] == -pcm[0] && pcm[438] == 12000 &&
                pcm[440] == 12000 && pcm.back() == -12000,
                "Recovery ramps into new PCM without changing its later samples");
    }
    if(argc==2 && (std::string(argv[1])=="--d3d12" || std::string(argv[1])=="--vulkan")) {
        _putenv_s("PSPRECOMP_MOTORSTORM_RENDERER",std::string(argv[1])=="--vulkan" ? "vulkan" : "d3d12");
        // These assertions specify native PSP pixel centers and mip footprints.
        // Scaled rendering/AA are exercised separately by motorstorm_gpu_tests.
        _putenv_s("PSPRECOMP_MOTORSTORM_RESOLUTION","1");
        _putenv_s("PSPRECOMP_MOTORSTORM_AA","none");
    }
    motorstorm::log_line(motorstorm::category::kBoot, "motorstorm_profile_tests start");

    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    const std::filesystem::path disc = std::filesystem::temp_directory_path() / "motorstorm_absent_disc0";
    runtime.set_game_root(disc);

    motorstorm::HleOptions options;
    options.disc_root = disc;
    options.trace_imports = false;
    motorstorm::install_hle(runtime, 0x08B00000u, options);

    // Draw filters must identify a specific submission/primitive without
    // changing rendering. Capture records the render target after that draw.
    {
        const auto directory = std::filesystem::temp_directory_path() / "motorstorm_draw_inspection";
        std::filesystem::create_directories(directory);
        const std::array<const char *, 4> names{"PSPRECOMP_GE_TRACE_SUBMISSION", "PSPRECOMP_GE_TRACE_DRAW",
                                                "PSPRECOMP_GE_CAPTURE_DRAW_RANGE",
                                                "PSPRECOMP_GE_CAPTURE_DIR"};
        std::array<std::string, 4> previous;
        for (std::size_t i = 0; i < names.size(); ++i)
            if (const char *value = std::getenv(names[i]))
                previous[i] = value;
        _putenv_s(names[0], "7");
        _putenv_s(names[1], "2");
        _putenv_s(names[2], "2:2");
        _putenv_s(names[3], directory.string().c_str());
        auto &memory = runtime.memory();
        constexpr std::uint32_t list = 0x08B02000u, vertices = 0x08B01000u;
        for (std::uint32_t i = 0; i < 3u; ++i) {
            memory.store32(vertices + i * 12u, 0xFF0000FFu);
            memory.store16(vertices + i * 12u + 4u, static_cast<std::uint16_t>(10u + i));
            memory.store16(vertices + i * 12u + 6u, 10u);
            memory.store16(vertices + i * 12u + 8u, 0u);
        }
        const std::array<std::uint32_t, 10> words{0x9C000000u, 0x9D040200u, 0xD2000003u, 0x1280011Cu,
                                                  0x10080000u, 0x01B01000u, 0x04000001u, 0x04000001u,
                                                  0x04000001u, 0x0C000000u};
        for (std::size_t i = 0; i < words.size(); ++i)
            memory.store32(list + static_cast<std::uint32_t>(i * 4u), words[i]);
        const auto json = directory / "submission_7_draw_2.json";
        const auto ppm = directory / "submission_7_draw_2.ppm";
        std::filesystem::remove(json);
        std::filesystem::remove(ppm);
        motorstorm::reset_software_ge();
        motorstorm::software_ge_execute_list(memory, list, 0u, true, 6u);
        require(!std::filesystem::exists(json), "GE inspection submission filter excludes other lists");
        motorstorm::reset_software_ge();
        motorstorm::software_ge_execute_list(memory, list, 0u, true, 7u);
        std::ifstream input(json);
        const std::string metadata((std::istreambuf_iterator<char>(input)), {});
        require(metadata.find("\"draw\":2") != std::string::npos &&
                    metadata.find("\"vertex_address\":145756172") != std::string::npos &&
                    metadata.find("\"raw_commands\":[") != std::string::npos,
                "GE inspection captures pre-draw address and full command state");
        require(std::filesystem::exists(ppm) && std::filesystem::file_size(ppm) == 480u * 272u * 3u + 15u,
                "GE draw capture writes a complete render target");
        require(!std::filesystem::exists(directory / "submission_7_draw_1.json") &&
                    !std::filesystem::exists(directory / "submission_7_draw_3.ppm"),
                "GE draw and capture-range filters exclude neighboring primitives");
        for (std::size_t i = 0; i < names.size(); ++i)
            _putenv_s(names[i], previous[i].c_str());
        motorstorm::reset_software_ge();
    }

    // Race frames can exceed 64K commands across called world sub-lists.
    // The final vehicle/HUD pass and FINISH must still execute after the return.
    {
        auto &memory = runtime.memory();
        constexpr std::uint32_t list = 0x08B02000u, world = 0x08B20000u;
        constexpr std::uint32_t vertices = 0x08B01000u, world_commands = 70000u;
        constexpr std::uint32_t pixel = 0x04000000u + (10u * 512u + 12u) * 4u;
        memory.zero(world, world_commands * 4u); // A long, valid NOP sub-list.
        memory.store32(world + world_commands * 4u, 0x0B000000u); // RET
        memory.store32(vertices, 0xFF00FFFFu);
        memory.store16(vertices + 4u, 12u);
        memory.store16(vertices + 6u, 10u);
        memory.store16(vertices + 8u, 0u);
        memory.store32(pixel, 0u);
        const std::array<std::uint32_t, 11> words{
            0x10080000u, 0x0AB20000u, // BASE, CALL the world sub-list.
            0x9C000000u, 0x9D040200u, 0xD2000003u,
            0x1280011Cu, 0x10080000u, 0x01B01000u,
            0x04000001u, 0x0F00CAFEu, 0x0C000000u};
        for (std::size_t i = 0; i < words.size(); ++i)
            memory.store32(list + static_cast<std::uint32_t>(i * 4u), words[i]);
        motorstorm::reset_software_ge();
        const auto interrupts = motorstorm::software_ge_execute_list(memory, list, 0u);
        require(read_rgb(memory, pixel) == 0x00FFFFu,
                "Long GE world sub-list returns and renders the final HUD primitive");
        require(interrupts.size() == 1u && interrupts[0].finish && interrupts[0].token == 0xCAFEu,
                "Long GE frame reaches its FINISH interrupt");
        motorstorm::reset_software_ge();

        // A malformed two-node jump cycle must fail explicitly, not publish
        // an incomplete frame as if GE synchronization had succeeded.
        memory.store32(list, 0x10080000u);
        memory.store32(list + 4u, 0x08B02008u);
        memory.store32(list + 8u, 0x08B02004u);
        bool rejected = false;
        try {
            motorstorm::software_ge_execute_list(memory, list, 0u, false);
        } catch (const psprecomp::Error &error) {
            rejected = std::string(error.what()).find("GE command safety limit exhausted") != std::string::npos;
        }
        require(rejected, "Runaway GE control flow reports an explicit safety-limit error");
        motorstorm::reset_software_ge();
    }

    // The front end expands render indices into scratchpad memory. GE must
    // honor those indices and advance IADDR between consecutive primitives.
    {
        auto &memory = runtime.memory();
        constexpr std::uint32_t vertices = 0x08B01000u;
        constexpr std::uint32_t list = 0x08B02000u;
        for (std::uint32_t i = 0u; i < 4u; ++i) {
            memory.store32(vertices + i * 12u, 0xFF0000FFu);
            memory.store16(vertices + i * 12u + 4u, static_cast<std::uint16_t>(10u + i));
            memory.store16(vertices + i * 12u + 6u, 10u);
            memory.store16(vertices + i * 12u + 8u, 0u);
        }
        memory.store16(0x00010000u, 2u);
        memory.store16(0x00010002u, 3u);
        memory.store16(0x00010004u, 0u);
        memory.store16(0x00010006u, 1u);
        const std::array<std::uint32_t, 12> words{
            0x9C000000u, 0x9D040200u,
            0xD2000003u,
            0x1280111Cu, // through, 8888 colour, s16 position, u16 indices
            0x10080000u, 0x01000000u | (vertices & 0xFFFFFFu),
            0x10000000u, 0x02010000u,
            0x04000002u, 0x04000002u,
            0x0F000000u, 0x0C000000u};
        for (std::size_t i = 0u; i < words.size(); ++i)
            memory.store32(list + static_cast<std::uint32_t>(i * 4u), words[i]);
        motorstorm::reset_software_ge();
        motorstorm::software_ge_execute_list(memory, list, 0u);
        require(motorstorm::software_ge_framebuffer_stride() == 512u,
                "GE framebuffer stride is expressed in pixels");
        require(read_rgb(memory, 0x04000000u + (10u * 512u + 12u) * 4u) == 0x000000FFu &&
                    read_rgb(memory, 0x04000000u + (10u * 512u + 13u) * 4u) == 0x000000FFu &&
                    read_rgb(memory, 0x04000000u + (10u * 512u + 10u) * 4u) == 0x000000FFu &&
                    read_rgb(memory, 0x04000000u + (10u * 512u + 11u) * 4u) == 0x000000FFu,
                "GE scratchpad indices and consecutive primitive advancement");
        motorstorm::reset_software_ge();
    }

    // PSP blend factors 2/3 are source alpha/inverse source alpha. Transparent
    // HUD texels must preserve the background, rather than multiply its RGB.
    {
        auto &memory = runtime.memory();
        constexpr std::uint32_t list = 0x08B02000u, vertices = 0x08B01000u;
        memory.store16(vertices + 4u, 10u);
        memory.store16(vertices + 6u, 10u);
        memory.store16(vertices + 8u, 0u);
        const auto execute = [&](std::uint32_t color, std::uint32_t mode, std::uint32_t fixed = 0xFFFFFFu) {
            memory.store32(vertices, color);
            memory.store32(0x04000000u + (10u * 512u + 10u) * 4u, 0xFF804020u);
            const std::array<std::uint32_t, 12> words{
                0x9C000000u, 0x9D040200u,        0xD2000003u,         0x1280011Cu, 0x10080000u, 0x01B01000u,
                0x21000001u, 0xDF000000u | mode, 0xE0000000u | fixed, 0xE1000000u, 0x04000001u, 0x0C000000u};
            for (std::size_t i = 0; i < words.size(); ++i)
                memory.store32(list + static_cast<std::uint32_t>(i * 4u), words[i]);
            motorstorm::reset_software_ge();
            motorstorm::software_ge_execute_list(memory, list, 0u);
            return read_rgb(memory, 0x04000000u + (10u * 512u + 10u) * 4u) & 0xFFFFFFu;
        };
        require(execute(0x000000FFu, 0x32u) == 0x804020u,
                "GE zero source alpha preserves the destination RGB");
        require(execute(0xFF0000FFu, 0x32u) == 0x0000FFu,
                "GE full source alpha replaces the destination RGB");
        const auto half = execute(0x800000FFu, 0x32u);
        require((half & 0xFFu) >= 142u && (half & 0xFFu) <= 145u && ((half >> 16u) & 0xFFu) >= 62u &&
                    ((half >> 16u) & 0xFFu) <= 65u,
                "GE partial source alpha interpolates foreground and background");
        require(execute(0xFF804020u, 0xAAu, 0x40FF80u) == 0x204010u,
                "GE fixed blending retains independent RGB factors");
        require(execute(0xFF804020u, 0xA0u) == 0x401004u,
                "GE source color factor zero refers to destination color");
        require(execute(0x800000FFu, 0xA7u) == 0u, "GE doubled inverse alpha uses one minus doubled alpha");
        motorstorm::reset_software_ge();
    }

    // Fragment interpolation must associate edge weights with the opposite
    // vertex, and the GE alpha command packs function/ref/mask in that order.
    {
        auto &memory = runtime.memory();
        constexpr std::uint32_t vertices = 0x08B03000u;
        constexpr std::uint32_t list = 0x08B04000u;
        const std::array<std::uint32_t, 3> colors{0xFF0000FFu, 0xFF00FF00u, 0xFFFF0000u};
        const std::array<std::uint16_t, 3> xs{20u, 28u, 20u}, ys{20u, 20u, 28u};
        for (std::uint32_t i = 0u; i < 3u; ++i) {
            memory.store32(vertices + i * 12u, colors[i]);
            memory.store16(vertices + i * 12u + 4u, xs[i]);
            memory.store16(vertices + i * 12u + 6u, ys[i]);
            memory.store16(vertices + i * 12u + 8u, 0u);
        }
        const auto execute = [&](std::span<const std::uint32_t> words) {
            for (std::size_t i = 0u; i < words.size(); ++i)
                memory.store32(list + static_cast<std::uint32_t>(i * 4u), words[i]);
            motorstorm::reset_software_ge();
            motorstorm::software_ge_execute_list(memory, list, 0u);
        };
        const std::array<std::uint32_t, 11> triangle{0x9C000000u, 0x9D000200u, 0xD2000003u, 0x1280011Cu,
                                                     0x10080000u, 0x01B03000u, 0xD4005014u, 0xD500701Cu,
                                                     0x50000001u, 0x04030003u, 0x0C000000u};
        execute(triangle);
        const std::uint32_t near_red = read_rgb(memory, 0x04000000u + (21u * 512u + 21u) * 4u);
        require((near_red & 0xFFu) > 150u && ((near_red >> 8u) & 0xFFu) < 65u &&
                    ((near_red >> 16u) & 0xFFu) < 65u,
                "GE triangle interpolation follows vertex positions");
        const auto near_blue = read_rgb(memory, 0x04000000u + (25u * 512u + 21u) * 4u);
        require(((near_blue >> 16u) & 0xFFu) > 150u && (near_blue & 0xFFu) < 65u,
                "GE shade mode one interpolates all vertex colors");
        auto flat_triangle = triangle;
        flat_triangle[8] = 0x50000000u;
        execute(flat_triangle);
        require(read_rgb(memory, 0x04000000u + (21u * 512u + 21u) * 4u) == 0x00FF0000u,
                "GE shade mode zero uses the final provoking vertex color");
        std::vector<std::uint32_t> culled(flat_triangle.begin(), flat_triangle.end());
        culled.insert(culled.begin() + 9, {0x1D000001u, 0x9B000000u});
        memory.store32(0x04000000u + (21u * 512u + 21u) * 4u, 0u);
        execute(culled);
        require(read_rgb(memory, 0x04000000u + (21u * 512u + 21u) * 4u) == 0u,
                "GE backface culling rejects the selected winding");
        culled[10] = 0x9B000001u;
        execute(culled);
        require(read_rgb(memory, 0x04000000u + (21u * 512u + 21u) * 4u) == 0x00FF0000u,
                "GE opposite cull mode accepts the same triangle");
        memory.store32(vertices + 36u, 0xFFFF0000u);
        memory.store16(vertices + 40u, 28u);
        memory.store16(vertices + 42u, 28u);
        memory.store16(vertices + 44u, 0u);
        culled[7] = 0xD500701Du; // Include the fourth vertex in the scissor.
        culled[11] = 0x04040004u;
        memory.store32(0x04000000u + (26u * 512u + 26u) * 4u, 0u);
        execute(culled);
        require(read_rgb(memory, 0x04000000u + (26u * 512u + 26u) * 4u) == 0x00FF0000u,
                "GE triangle strips alternate winding before culling");
        memory.zero(0x04000000u, psprecomp::GuestMemory::kVramSize);
        memory.store32(vertices, 0x400000FFu);
        memory.store32(vertices + 12u, 0xFF0000FFu);
        const std::array<std::uint32_t, 10> alpha_points{0x9C000000u, 0x9D000200u, 0xD2000003u, 0x1280011Cu,
                                                         0x10080000u, 0x01B03000u, 0x22000001u, 0xDBFF8006u,
                                                         0x04000002u, 0x0C000000u};
        execute(alpha_points);
        require(read_rgb(memory, 0x04000000u + (20u * 512u + 20u) * 4u) == 0u &&
                    read_rgb(memory, 0x04000000u + (20u * 512u + 28u) * 4u) == 0x000000FFu,
                "GE alpha test accepts opaque and rejects transparent fragments");
        motorstorm::reset_software_ge();
    }

    // Model/view/projection uploads and fixed-point raster offsets are used
    // by the real front-end geometry, rather than through-mode UI vertices.
    {
        auto &memory = runtime.memory();
        constexpr std::uint32_t vertices = 0x08B08000u, list = 0x08B09000u;
        memory.store32(vertices, 0xFF0000FFu);
        memory.store32(vertices + 4u, std::bit_cast<std::uint32_t>(1.0f));
        memory.store32(vertices + 8u, std::bit_cast<std::uint32_t>(2.0f));
        memory.store32(vertices + 12u, std::bit_cast<std::uint32_t>(3.0f));
        const auto f24 = [](std::uint32_t command, float value) {
            return (command << 24u) | (std::bit_cast<std::uint32_t>(value) >> 8u);
        };
        const std::array<std::uint32_t, 20> words{
            0x9C000000u,       0x9D000200u,      0xD2000003u,      0x1200019Cu,      0x10080000u,
            0x01B08000u,       0x3A000009u,      f24(0x3Bu, 1.0f), 0x3C00000Au,      f24(0x3Du, 2.0f),
            0x3E00000Cu,       f24(0x3Fu, 5.0f), f24(0x42u, 2.0f), f24(0x43u, 3.0f), f24(0x45u, 30.0f),
            f24(0x46u, 40.0f), 0x4C0000A0u,      0x4D000140u,      0x04000001u,      0x0C000000u};
        for (std::size_t i = 0u; i < words.size(); ++i)
            memory.store32(list + static_cast<std::uint32_t>(i * 4u), words[i]);
        motorstorm::reset_software_ge();
        motorstorm::software_ge_execute_list(memory, list, 0u);
        require(read_rgb(memory, 0x04000000u + (32u * 512u + 34u) * 4u) == 0x000000FFu,
                "GE world/view/projection and viewport transform");
        memory.store32(vertices, std::bit_cast<std::uint32_t>(1.0f)); // one float weight
        memory.store32(vertices + 4u, 0xFF0000FFu);
        memory.store32(vertices + 8u, std::bit_cast<std::uint32_t>(1.0f));
        memory.store32(vertices + 12u, std::bit_cast<std::uint32_t>(2.0f));
        memory.store32(vertices + 16u, std::bit_cast<std::uint32_t>(3.0f));
        for (std::size_t i = 0u; i < 18u; ++i)
            memory.store32(list + static_cast<std::uint32_t>(i * 4u), i == 3u ? 0x1200079Cu : words[i]);
        memory.store32(list + 72u, 0x2A000009u);
        memory.store32(list + 76u, f24(0x2Bu, 2.0f));
        memory.store32(list + 80u, 0x04000001u);
        memory.store32(list + 84u, 0x0C000000u);
        motorstorm::reset_software_ge();
        motorstorm::software_ge_execute_list(memory, list, 0u);
        require(read_rgb(memory, 0x04000000u + (32u * 512u + 38u) * 4u) == 0x000000FFu,
                "GE weighted bone transform precedes world/view/projection");
        motorstorm::reset_software_ge();
    }

    // Paletted RGB textures ignore palette alpha; RGBA textures feed it into
    // alpha testing. This also checks the PSP's low-red 4444 colour packing.
    {
        auto &memory = runtime.memory();
        constexpr std::uint32_t vertices = 0x08B0A000u, list = 0x08B0B000u;
        constexpr std::uint32_t pixel = 0x04000000u + (100u * 512u + 100u) * 4u;
        memory.store16(vertices, 1u);
        memory.store16(vertices + 2u, 0u);
        memory.store32(vertices + 4u, 0xFFFFFFFFu);
        memory.store16(vertices + 8u, 100u);
        memory.store16(vertices + 10u, 100u);
        memory.store16(vertices + 12u, 0u);
        memory.store8(0x08B0C000u, 0x10u);
        memory.store16(0x08B0D002u, 0x000Fu);
        std::array<std::uint32_t, 21> words{
            0x9C000000u, 0x9D000200u, 0xD2000003u, 0x1280011Eu, 0x10080000u, 0x01B0A000u, 0xA0B0C000u,
            0xA8080002u, 0xB0B0D000u, 0xB1080000u, 0xB8000001u, 0xC3000004u, 0xC500FF02u, 0xC2000000u,
            0xC9000000u, 0x1E000001u, 0x22000001u, 0xDBFF0006u, 0xC4000001u, 0x04000001u, 0x0C000000u};
        const auto execute = [&] {
            for (std::size_t i = 0u; i < words.size(); ++i)
                memory.store32(list + static_cast<std::uint32_t>(i * 4u), words[i]);
            motorstorm::reset_software_ge();
            motorstorm::software_ge_execute_list(memory, list, 0u);
        };
        execute();
        require(read_rgb(memory, pixel) == 0x0000FFu,
                "RGB T4/4444 texture uses vertex alpha for fragment testing");
        words[14] = 0xC9000100u;
        memory.store32(pixel, 0u);
        execute();
        require(memory.load32(pixel) == 0u, "RGBA texture alpha participates in alpha testing");
        words[14] = 0xC9000000u;
        words[18] = 0u;
        memory.store16(0x08B0D002u, 0x00F0u); // CPU replaces the palette after LOADCLUT.
        for (std::size_t i = 0; i < words.size(); ++i)
            memory.store32(list + static_cast<std::uint32_t>(i * 4u), words[i]);
        motorstorm::software_ge_execute_list(memory, list, 0u);
        require(read_rgb(memory, pixel) == 0x0000FFu, "GE palette remains latched until another CLUT load");
        words[18] = 0xC4000001u;
        for (std::size_t i = 0; i < words.size(); ++i)
            memory.store32(list + static_cast<std::uint32_t>(i * 4u), words[i]);
        motorstorm::software_ge_execute_list(memory, list, 0u, false);
        words[18] = 0u;
        for (std::size_t i = 0; i < words.size(); ++i)
            memory.store32(list + static_cast<std::uint32_t>(i * 4u), words[i]);
        motorstorm::software_ge_execute_list(memory, list, 0u);
        require(read_rgb(memory, pixel) == 0x00FF00u, "GE headless CLUT load updates the same palette state");
        motorstorm::reset_software_ge();
    }

    // Linear filtering blends neighboring RGBA texels at their centers. The
    // texture color-double flag boosts RGB after combining, without alpha.
    {
        auto &memory = runtime.memory();
        constexpr std::uint32_t vertices = 0x08B10000u, list = 0x08B11000u;
        constexpr std::uint32_t texture = 0x08B12000u;
        constexpr std::uint32_t pixel = 0x04000000u + (100u * 512u + 100u) * 4u;
        memory.store32(vertices, std::bit_cast<std::uint32_t>(1.0f));
        memory.store32(vertices + 4u, std::bit_cast<std::uint32_t>(0.5f));
        memory.store32(vertices + 8u, 0xFFFFFFFFu);
        memory.store16(vertices + 12u, 100u);
        memory.store16(vertices + 14u, 100u);
        memory.store16(vertices + 16u, 0u);
        memory.store32(texture, 0x400000FFu);
        memory.store32(texture + 4u, 0xC0FF0000u);
        std::array<std::uint32_t, 18> words{0x9C000000u, 0x9D040200u, 0xD2000003u, 0x1280011Fu, 0x10080000u,
                                            0x01B10000u, 0xA0B12000u, 0xA8080002u, 0xB8000001u, 0xC3000003u,
                                            0xC7000101u, 0xC6000000u, 0xC9000103u, 0x1E000001u, 0x22000001u,
                                            0xDBFF0001u, 0x04000001u, 0x0C000000u};
        const auto execute = [&] {
            for (std::size_t i = 0u; i < words.size(); ++i)
                memory.store32(list + static_cast<std::uint32_t>(i * 4u), words[i]);
            motorstorm::reset_software_ge();
            motorstorm::software_ge_execute_list(memory, list, 0u);
            return memory.load32(pixel);
        };
        require((execute() & 0xFFFFFFu) == 0xFF0000u, "GE nearest texture sampling remains exact");
        words[11] = 0xC6000101u;
        const auto linear = execute();
        require((linear & 0xFFu) >= 127u && (linear & 0xFFu) <= 128u && ((linear >> 16u) & 0xFFu) >= 127u &&
                    ((linear >> 16u) & 0xFFu) <= 128u,
                "GE linear sampling interpolates texel RGB");
        words[15] = 0xDBFF9006u;
        memory.store32(pixel, 0u);
        require(execute() == 0u, "GE filtered texel alpha participates in fragment rejection");
        words[11] = 0xC6000000u;
        require((execute() & 0xFFFFFFu) == 0xFF0000u, "GE unfiltered alpha passes the same threshold");
        words[15] = 0xDBFF0001u;
        words[11] = 0xC6000101u;
        memory.store32(vertices, 0u);
        require((execute() & 0xFFFFFFu) == 0x0000FFu, "GE linear clamp preserves the edge texel");
        words[11] = 0xC6000000u;
        words[12] = 0xC9010100u;
        memory.store32(texture, 0x40302010u);
        memory.store32(vertices + 8u, 0xFF808080u);
        require((execute() & 0xFFFFFFu) == 0x302010u, "GE color double boosts combined RGB");
        words[15] = 0xDBFF5006u;
        memory.store32(pixel, 0u);
        require(execute() == 0u, "GE color double does not double the texture-function alpha");
        motorstorm::reset_software_ge();
    }

    // A two-texel-per-pixel triangle must select the smaller mip; constant
    // and slope LOD modes select their commanded levels independently of UVs.
    {
        auto &memory = runtime.memory();
        constexpr std::uint32_t vertices = 0x08B21000u, list = 0x08B24000u;
        for (std::uint32_t i = 0u; i < 256u; ++i)
            memory.store32(0x08B22000u + i * 4u, 0xFF0000FFu);
        for (std::uint32_t i = 0u; i < 64u; ++i)
            memory.store32(0x08B23000u + i * 4u, 0xFF00FF00u);
        for (std::uint32_t i = 0u; i < 3u; ++i) {
            memory.store32(vertices + i * 20u, std::bit_cast<std::uint32_t>(i == 1u ? 8.0f : 0.0f));
            memory.store32(vertices + i * 20u + 4u, std::bit_cast<std::uint32_t>(i == 2u ? 8.0f : 0.0f));
            memory.store32(vertices + i * 20u + 8u, 0xFFFFFFFFu);
            memory.store16(vertices + i * 20u + 12u, i == 1u ? 24u : 20u);
            memory.store16(vertices + i * 20u + 14u, i == 2u ? 24u : 20u);
            memory.store16(vertices + i * 20u + 16u, 0u);
        }
        std::vector<std::uint32_t> words{
            0x9C000000u, 0x9D040200u, 0xD2000003u, 0x1280011Fu, 0x10080000u, 0x01B21000u, 0xA0B22000u,
            0xA8080010u, 0xB8000404u, 0xC3000003u, 0xA1B23000u, 0xA9080008u, 0xB9000303u, 0xC2010000u,
            0xC6000105u, 0xC8000000u, 0xC9000003u, 0x1E000001u, 0x50000001u, 0x04030003u, 0x0C000000u};
        const auto execute = [&] {
            for (std::size_t i = 0; i < words.size(); ++i)
                memory.store32(list + static_cast<std::uint32_t>(i * 4u), words[i]);
            motorstorm::reset_software_ge();
            motorstorm::software_ge_execute_list(memory, list, 0u);
            return read_rgb(memory, 0x04000000u + (21u * 512u + 21u) * 4u);
        };
        require(execute() == 0x00FF00u, "GE automatic LOD samples the minified mip level");
        words[15] = 0xC8000001u;
        require(execute() == 0x0000FFu, "GE constant LOD zero selects the base texture");
        words[15] = 0xC8100001u;
        require(execute() == 0x00FF00u, "GE constant LOD bias selects the smaller mip");
        words[14] = 0xC6000107u;
        words[15] = 0xC8080001u;
        const auto trilinear = execute();
        require((trilinear & 255u) >= 127u && (trilinear & 255u) <= 128u &&
                    ((trilinear >> 8u) & 255u) >= 127u && ((trilinear >> 8u) & 255u) <= 128u,
                "GE fractional LOD blends adjacent mip levels");
        words[14] = 0xC6000105u;
        words[15] = 0xC8000002u;
        words.insert(words.end() - 2, 0xD03F8000u);
        require(execute() == 0x00FF00u, "GE slope LOD uses clip W and texture slope");
        motorstorm::reset_software_ge();
    }

    // Adjacent alpha-blended triangles own a shared edge once; sprite edges
    // are exclusive and sample texture coordinates at pixel centers.
    {
        auto &memory = runtime.memory();
        constexpr std::uint32_t vertices = 0x08B25000u, list = 0x08B27000u, texture = 0x08B26000u;
        for (std::uint32_t i = 0; i < 4u; ++i) {
            memory.store32(vertices + i * 12u, 0x80FFFFFFu);
            memory.store16(vertices + i * 12u + 4u, (i & 1u) != 0u ? 14u : 10u);
            memory.store16(vertices + i * 12u + 6u, i >= 2u ? 14u : 10u);
            memory.store16(vertices + i * 12u + 8u, 0u);
        }
        const auto clear = [&] {
            for (std::uint32_t y = 10; y <= 14u; ++y)
                for (std::uint32_t x = 10; x <= 14u; ++x)
                    memory.store32(0x04000000u + (y * 512u + x) * 4u, 0u);
        };
        const auto execute = [&](const std::vector<std::uint32_t> &words) {
            for (std::size_t i = 0; i < words.size(); ++i)
                memory.store32(list + static_cast<std::uint32_t>(i * 4u), words[i]);
            motorstorm::reset_software_ge();
            motorstorm::software_ge_execute_list(memory, list, 0u);
        };
        clear();
        execute({0x9C000000u, 0x9D040200u, 0xD2000003u, 0x1280011Cu, 0x10080000u, 0x01B25000u, 0x21000001u,
                 0xDF000032u, 0x04040004u, 0x0C000000u});
        bool single_coverage = true;
        for (std::uint32_t y = 10; y < 14u; ++y)
            for (std::uint32_t x = 10; x < 14u; ++x)
                single_coverage &= read_rgb(memory, 0x04000000u + (y * 512u + x) * 4u) == 0x808080u;
        require(single_coverage, "GE shared triangle edges blend exactly once");
        for (std::uint32_t i = 0; i < 2u; ++i) {
            memory.store32(vertices + i * 20u, std::bit_cast<std::uint32_t>(i == 0u ? 0.0f : 2.0f));
            memory.store32(vertices + i * 20u + 4u, std::bit_cast<std::uint32_t>(i == 0u ? 0.0f : 2.0f));
            memory.store32(vertices + i * 20u + 8u, 0xFFFFFFFFu);
            memory.store16(vertices + i * 20u + 12u, i == 0u ? 10u : 12u);
            memory.store16(vertices + i * 20u + 14u, i == 0u ? 10u : 12u);
            memory.store16(vertices + i * 20u + 16u, 0u);
        }
        memory.store32(texture, 0xFF0000FFu);
        memory.store32(texture + 4u, 0xFF00FF00u);
        memory.store32(texture + 8u, 0xFFFF0000u);
        memory.store32(texture + 12u, 0xFFFFFFFFu);
        const std::vector<std::uint32_t> sprite{0x9C000000u, 0x9D040200u, 0xD2000003u, 0x1280011Fu,
                                                0x10080000u, 0x01B25000u, 0xA0B26000u, 0xA8080002u,
                                                0xB8000101u, 0xC3000003u, 0xC7000101u, 0xC6000101u,
                                                0xC9000003u, 0x1E000001u, 0x04060002u, 0x0C000000u};
        clear();
        execute(sprite);
        require(read_rgb(memory, 0x04000000u + (10u * 512u + 10u) * 4u) == 0x0000FFu &&
                    read_rgb(memory, 0x04000000u + (10u * 512u + 11u) * 4u) == 0x00FF00u &&
                    read_rgb(memory, 0x04000000u + (12u * 512u + 12u) * 4u) == 0u,
                "GE sprites sample pixel centers and exclude the final edge");
        memory.store16(vertices + 12u, 12u);
        memory.store16(vertices + 32u, 10u);
        clear();
        execute(sprite);
        require(read_rgb(memory, 0x04000000u + (10u * 512u + 10u) * 4u) == 0x00FF00u &&
                    read_rgb(memory, 0x04000000u + (10u * 512u + 11u) * 4u) == 0x0000FFu,
                "GE reversed sprite endpoints mirror the texture");
        motorstorm::reset_software_ge();
    }

    // Morph target weights move geometry and interpolate colors before MVP.
    {
        auto &memory = runtime.memory();
        constexpr std::uint32_t vertices = 0x08B13000u, list = 0x08B14000u;
        for (std::uint32_t i = 0; i < 2u; ++i) {
            memory.store32(vertices + i * 16u, i == 0 ? 0xFF0000FFu : 0xFFFF0000u);
            memory.store32(vertices + i * 16u + 4u, std::bit_cast<std::uint32_t>(i == 0 ? 8.0f : 24.0f));
            memory.store32(vertices + i * 16u + 8u, std::bit_cast<std::uint32_t>(10.0f));
            memory.store32(vertices + i * 16u + 12u, 0u);
        }
        const auto f24 = [](std::uint32_t c, float f) {
            return (c << 24u) | (std::bit_cast<std::uint32_t>(f) >> 8u);
        };
        const std::array<std::uint32_t, 10> words{
            0x9C000000u, 0x9D040200u,       0xD2000003u,       0x1204019Cu, 0x10080000u,
            0x01B13000u, f24(0x2Cu, 0.25f), f24(0x2Du, 0.75f), 0x04000001u, 0x0C000000u};
        for (std::size_t i = 0; i < words.size(); ++i)
            memory.store32(list + static_cast<std::uint32_t>(i * 4u), words[i]);
        motorstorm::reset_software_ge();
        motorstorm::software_ge_execute_list(memory, list, 0u);
        const auto color = read_rgb(memory, 0x04000000u + (10u * 512u + 20u) * 4u);
        require((color & 255u) >= 62u && (color & 255u) <= 64u && ((color >> 16u) & 255u) >= 190u &&
                    ((color >> 16u) & 255u) <= 192u,
                "GE morph weights interpolate position and color");
        motorstorm::reset_software_ge();
    }

    // Fog uses view-space depth; normal lighting and reverse-normal affect
    // transformed vertices while through-mode UI remains independent.
    {
        auto &memory = runtime.memory();
        constexpr std::uint32_t vertices = 0x08B15000u, list = 0x08B16000u;
        constexpr auto pixel = 0x04000000u + (10u * 512u + 10u) * 4u;
        const auto f24 = [](std::uint32_t c, float f) {
            return (c << 24u) | (std::bit_cast<std::uint32_t>(f) >> 8u);
        };
        memory.store32(vertices, 0xFF0000FFu);
        memory.store32(vertices + 4u, std::bit_cast<std::uint32_t>(10.0f));
        memory.store32(vertices + 8u, std::bit_cast<std::uint32_t>(10.0f));
        memory.store32(vertices + 12u, 0u);
        const auto execute = [&](const std::vector<std::uint32_t> &words) {
            for (std::size_t i = 0; i < words.size(); ++i)
                memory.store32(list + static_cast<std::uint32_t>(i * 4u), words[i]);
            memory.store32(pixel, 0u);
            motorstorm::reset_software_ge();
            motorstorm::software_ge_execute_list(memory, list, 0u);
            return memory.load32(pixel) & 0xFFFFFFu;
        };
        require(execute({0x9C000000u, 0x9D040200u, 0xD2000003u, 0x1200019Cu, 0x10080000u, 0x01B15000u,
                         0x3C00000Bu, f24(0x3Du, -5.0f), f24(0xCDu, 10.0f), f24(0xCEu, 0.1f), 0xCFFF0000u,
                         0x1F000001u, 0x04000001u, 0x0C000000u}) != 0x0000FFu,
                "GE fog blends the view-depth color");
        memory.store32(vertices, 0u);
        memory.store32(vertices + 4u, 0u);
        memory.store32(vertices + 8u, std::bit_cast<std::uint32_t>(1.0f));
        memory.store32(vertices + 12u, std::bit_cast<std::uint32_t>(10.0f));
        memory.store32(vertices + 16u, std::bit_cast<std::uint32_t>(10.0f));
        memory.store32(vertices + 20u, 0u);
        std::vector<std::uint32_t> light{0x9C000000u, 0x9D040200u, 0xD2000003u, 0x120001E0u, 0x10080000u,
                                         0x01B15000u, 0x17000001u, 0x18000001u, 0x55000000u, 0x560000FFu,
                                         0x580000FFu, 0x5C000000u, 0x5D0000FFu, 0x5F000000u, f24(0x65u, 1.0f),
                                         0x90FFFFFFu, 0x04000001u, 0x0C000000u};
        require(execute(light) == 0x0000FFu, "GE directional light shades the material using its normal");
        light.insert(light.end() - 2, 0x51000001u);
        require(execute(light) == 0u, "GE reverse normal removes facing diffuse light");
        light.insert(light.end() - 2, {0x18000000u, 0x55FFFFFFu, 0x5C00FF00u});
        require(execute(light) == 0x00FF00u,
                "GE global ambient uses its RGB register independently of ambient alpha");
        motorstorm::reset_software_ge();
    }

    // A farther point must not overwrite a nearer point under reversed depth,
    // and depth-only clear primitives preserve the colour buffer.
    {
        auto &memory = runtime.memory();
        constexpr std::uint32_t vertices = 0x08B0E000u, list = 0x08B0F000u;
        constexpr std::uint32_t pixel = 0x04000000u + (40u * 512u + 40u) * 4u;
        constexpr std::uint32_t depth = 0x04100000u + (40u * 512u + 40u) * 2u;
        for (std::uint32_t i = 0u; i < 2u; ++i) {
            memory.store32(vertices + i * 12u, i == 0u ? 0xFF0000FFu : 0xFF00FF00u);
            memory.store16(vertices + i * 12u + 4u, 40u);
            memory.store16(vertices + i * 12u + 6u, 40u);
            memory.store16(vertices + i * 12u + 8u, i == 0u ? 100u : 50u);
        }
        memory.store32(pixel, 0u);
        memory.store16(depth, 0u);
        const std::array<std::uint32_t, 12> words{0x9C000000u, 0x9D000200u, 0xD2000003u, 0x9E100000u,
                                                  0x9F000200u, 0x1280011Cu, 0x10080000u, 0x01B0E000u,
                                                  0x23000001u, 0xDE000006u, 0x04000002u, 0x0C000000u};
        for (std::size_t i = 0u; i < words.size(); ++i)
            memory.store32(list + static_cast<std::uint32_t>(i * 4u), words[i]);
        motorstorm::reset_software_ge();
        motorstorm::software_ge_execute_list(memory, list, 0u);
        require(read_rgb(memory, pixel) == 0x0000FFu && memory.load16(depth) == 100u,
                "GE depth test rejects occluded fragments");
        memory.store32(list, 0xD3000401u);
        memory.store32(pixel, 0x5A0000FFu);
        memory.store32(list + 4u, 0x0C000000u);
        motorstorm::software_ge_execute_list(memory, list, 0u);
        require(memory.load16(depth) == 100u, "CLEAR_MODE sets state without clearing before a primitive");
        memory.store16(vertices + 8u, 0u);
        memory.store32(list + 4u, 0x10080000u);
        memory.store32(list + 8u, 0x01B0E000u);
        memory.store32(list + 12u, 0x04000001u);
        memory.store32(list + 16u, 0x0C000000u);
        motorstorm::software_ge_execute_list(memory, list, 0u);
        require(memory.load16(depth) == 0u && memory.load32(pixel) == 0x5A0000FFu,
                "GE depth-only clear preserves RGB and alpha");
        motorstorm::reset_software_ge();
    }

    // Shadow volumes use stencil to shade a pixel once. Stencil-fail/depth-fail
    // operations must not repaint RGB, and disabled stencil preserves alpha.
    {
        auto &memory = runtime.memory();
        constexpr std::uint32_t vertices = 0x08B17000u, list = 0x08B18000u;
        constexpr auto pixel = 0x04000000u + (10u * 512u + 10u) * 4u;
        constexpr auto depth = 0x04100000u + (10u * 512u + 10u) * 2u;
        for (std::uint32_t i = 0; i < 2u; ++i) {
            memory.store32(vertices + i * 12u, 0xFF808080u);
            memory.store16(vertices + i * 12u + 4u, 10u);
            memory.store16(vertices + i * 12u + 6u, 10u);
            memory.store16(vertices + i * 12u + 8u, 100u);
        }
        const auto execute = [&](std::vector<std::uint32_t> commands) {
            std::vector<std::uint32_t> words{0x9C000000u, 0x9D040200u, 0xD2000003u,
                                             0x1280011Cu, 0x10080000u, 0x01B17000u};
            words.insert(words.end(), commands.begin(), commands.end());
            words.push_back(0x0C000000u);
            for (std::size_t i = 0; i < words.size(); ++i)
                memory.store32(list + static_cast<std::uint32_t>(i * 4u), words[i]);
            motorstorm::reset_software_ge();
            motorstorm::software_ge_execute_list(memory, list, 0u);
            return memory.load32(pixel);
        };
        memory.store32(pixel, 0x007F7F7Fu);
        require(execute({0x24000001u, 0xDCFFFF03u, 0xDD020000u, 0x21000001u, 0xDF0000A0u, 0xE1000000u,
                         0x04000002u}) == 0xFF3F3F3Fu,
                "GE stencil prevents repeated shadow darkening");
        memory.store32(pixel, 0x55123456u);
        require(execute({0x24000001u, 0xDCFF0000u, 0xDD000003u, 0x04000001u}) == 0xAA123456u,
                "GE stencil-fail operation changes only stencil");
        memory.store32(pixel, 0xF0123456u);
        memory.store16(depth, 200u);
        require(execute({0x9E100000u, 0x9F040200u, 0x23000001u, 0xDE000006u, 0x24000001u, 0xDCFF0001u,
                         0xDD000400u, 0x04000001u}) == 0xF1123456u &&
                    memory.load16(depth) == 200u,
                "GE depth-fail stencil operation preserves RGB and depth");
        memory.store32(pixel, 0x55123456u);
        memory.store32(vertices, 0x8000FF00u);
        require(execute({0x04000001u}) == 0x5500FF00u,
                "GE preserves framebuffer stencil when drawing without stencil testing");
        memory.store32(pixel, 0x55123456u);
        require(execute({0xE90000FFu, 0x04000001u}) == 0x5500FF00u,
                "GE mask MSB preserves destination alpha/stencil");
        motorstorm::reset_software_ge();
    }

    // A fully clipped triangle must not truncate the rest of the vertex stream.
    {
        auto &memory = runtime.memory();
        constexpr std::uint32_t vertices = 0x08B10000u, list = 0x08B11000u;
        const std::array<float, 3> xs{-0.5f, 0.5f, 0.0f}, ys{-0.5f, -0.5f, 0.5f};
        for (std::uint32_t i = 0u; i < 6u; ++i) {
            memory.store32(vertices + i * 16u, i < 3u ? 0xFF0000FFu : 0xFF00FF00u);
            memory.store32(vertices + i * 16u + 4u, std::bit_cast<std::uint32_t>(xs[i % 3u]));
            memory.store32(vertices + i * 16u + 8u, std::bit_cast<std::uint32_t>(ys[i % 3u]));
            memory.store32(vertices + i * 16u + 12u, std::bit_cast<std::uint32_t>(i < 3u ? 1.0f : -1.0f));
        }
        const auto f24 = [](std::uint32_t command, float value) {
            return (command << 24u) | (std::bit_cast<std::uint32_t>(value) >> 8u);
        };
        const std::array<std::uint32_t, 16> words{
            0x9C000000u,        0x9D000200u,        0xD2000003u,       0x1200019Cu,
            0x10080000u,        0x01B10000u,        0x3E00000Bu,       f24(0x3Fu, -1.0f),
            0x3E00000Fu,        f24(0x3Fu, 0.0f),   f24(0x42u, 64.0f), f24(0x43u, 64.0f),
            f24(0x45u, 128.0f), f24(0x46u, 136.0f), 0x04030006u,       0x0C000000u};
        for (std::size_t i = 0u; i < words.size(); ++i)
            memory.store32(list + static_cast<std::uint32_t>(i * 4u), words[i]);
        const std::uint32_t pixel = 0x04000000u + (136u * 512u + 128u) * 4u;
        memory.store32(pixel, 0u);
        motorstorm::reset_software_ge();
        motorstorm::software_ge_execute_list(memory, list, 0u);
        require(read_rgb(memory, pixel) == 0x00FF00u, "Clipped vertices do not discard later triangles");
        motorstorm::reset_software_ge();
    }

    // The game also renders into 16-bit intermediate framebuffers. They use
    // low-red pixel packing and a pixel stride, just like texture samples.
    {
        auto &memory = runtime.memory();
        constexpr std::uint32_t vertices = 0x08B12000u, list = 0x08B13000u;
        memory.store32(vertices, 0xFF0000FFu);
        memory.store16(vertices + 4u, 2u);
        memory.store16(vertices + 6u, 3u);
        memory.store16(vertices + 8u, 0u);
        const std::array<std::uint16_t, 3> expected{0x001Fu, 0x801Fu, 0xF00Fu};
        for (std::uint32_t format = 0u; format < expected.size(); ++format) {
            memory.store16(0x04000000u + (3u * 16u + 2u) * 2u, format == 1u   ? 0x8000u
                                                               : format == 2u ? 0xF000u
                                                                              : 0u);
            const std::array<std::uint32_t, 8> words{0x9C000000u, 0x9D000010u, 0xD2000000u | format,
                                                     0x1280011Cu, 0x10080000u, 0x01B12000u,
                                                     0x04000001u, 0x0C000000u};
            for (std::size_t i = 0u; i < words.size(); ++i)
                memory.store32(list + static_cast<std::uint32_t>(i * 4u), words[i]);
            motorstorm::reset_software_ge();
            motorstorm::software_ge_execute_list(memory, list, 0u);
            require(memory.load16(0x04000000u + (3u * 16u + 2u) * 2u) == expected[format],
                    "GE 16-bit framebuffer packing and stride");
        }
        motorstorm::reset_software_ge();
    }

    // OFFSET, ordinary CALL/RET and SIGNAL branch pairs resolve addresses in
    // one command stream. A branch may jump beyond an unvisited stall address.
    {
        auto &memory = runtime.memory();
        constexpr std::uint32_t list = 0x08B20000u, vertices = 0x08B20100u;
        memory.store32(vertices, 0xFF0000FFu);
        memory.store16(vertices + 4u, 9u);
        memory.store16(vertices + 6u, 9u);
        memory.store16(vertices + 8u, 0u);
        const std::array<std::uint32_t, 12> root{0x9C000000u, 0x9D000200u, 0xD2000003u, 0x1280011Cu,
                                                 0x13000001u, 0x10080000u, 0x0AB20F00u, 0x01B20000u,
                                                 0x04000001u, 0x0E1008B2u, 0x0C002000u, 0xFFFFFFFFu};
        const std::array<std::uint32_t, 5> sub{0x13000200u, 0x10080000u, 0x01B00100u, 0x04000001u,
                                               0x0B000000u};
        const std::array<std::uint32_t, 8> target{0x0E1108B2u, 0x0C003000u, 0x01B20000u, 0x04000001u,
                                                  0x0E020042u, 0x0C000000u, 0x0F000064u, 0x0C000000u};
        const std::array<std::uint32_t, 4> signal_sub{0x13000300u, 0x10090000u, 0x0E120000u, 0x0C000000u};
        const auto store = [&](std::uint32_t at, std::span<const std::uint32_t> words) {
            for (std::size_t i = 0u; i < words.size(); ++i)
                memory.store32(at + static_cast<std::uint32_t>(i * 4u), words[i]);
        };
        store(list, root);
        store(0x08B21000u, sub);
        store(0x08B22000u, target);
        store(0x08B23000u, signal_sub);
        const std::uint32_t pixel = 0x04000000u + (9u * 512u + 9u) * 4u;
        memory.store32(pixel, 0u);
        motorstorm::reset_software_ge();
        const auto headless = motorstorm::software_ge_execute_list(memory, list, list + 44u, false);
        require(headless.size() == 2u && headless[0].token == 0x42u && !headless[0].finish &&
                    headless[0].next_pc == 0x08B22018u && headless[1].token == 0x64u && headless[1].finish,
                "SIGNAL jump/call/return and real interrupt tokens in headless execution");
        require(memory.load32(pixel) == 0u, "Headless command walking does not rasterize");
        motorstorm::reset_software_ge();
        const auto rendered = motorstorm::software_ge_execute_list(memory, list, list + 44u);
        require(rendered.size() == headless.size() && rendered[0].token == headless[0].token &&
                    read_rgb(memory, pixel) == 0x0000FFu && motorstorm::software_ge_summary().draws == 3u,
                "GE call return restores OFFSET/BASE and preserves rendered command flow");
        motorstorm::reset_software_ge();
    }

    // XInput button translation, trigger thresholds and PSP analog conventions.
    {
        const auto faces = motorstorm::map_xinput(0xF000u, 0u, 0u, 0, 0);
        require(faces.buttons == 0xF000u && faces.x == 128u && faces.y == 128u,
                "Xbox face buttons and neutral analog map to PSP input");
        const std::array<std::uint16_t, 12> xbox{1u,     2u,     4u,      8u,      0x10u,   0x20u,
                                                 0x100u, 0x200u, 0x1000u, 0x2000u, 0x4000u, 0x8000u};
        const std::array<std::uint32_t, 12> psp{0x10u,  0x40u,  0x80u,   0x20u,   8u,      1u,
                                                0x100u, 0x200u, 0x4000u, 0x2000u, 0x8000u, 0x1000u};
        for (std::size_t i = 0u; i < xbox.size(); ++i)
            require(motorstorm::map_xinput(xbox[i], 0u, 0u, 0, 0).buttons == psp[i],
                    "Individual Xbox buttons map to matching PSP controls");
        require(motorstorm::map_xinput(0u, 30u, 30u, 0, 0).buttons == 0u &&
                    motorstorm::map_xinput(0u, 31u, 31u, 0, 0).buttons == 0x300u,
                "Xbox triggers use a deadzone and map to PSP shoulders");
        require(motorstorm::map_xinput(0u, 0u, 0u, 32767, 0).x == 255u &&
                    motorstorm::map_xinput(0u, 0u, 0u, -32768, 0).x == 0u &&
                    motorstorm::map_xinput(0u, 0u, 0u, 0, 32767).y == 0u &&
                    motorstorm::map_xinput(0u, 0u, 0u, 0, -32768).y == 255u,
                "Xbox stick endpoints and inverted PSP Y convention");
        const auto deadzone = motorstorm::map_xinput(0u, 0u, 0u, 3000, -3000);
        require(deadzone.x == 128u && deadzone.y == 128u, "Xbox circular stick deadzone");
    }

    // A ReadBuffer result describes initialized records, never the requested
    // capacity. MotorStorm requests eight; other callers may consume all returned records.
    {
        constexpr std::uint32_t samples = 0x08B30000u;
        std::array<std::uint8_t, 128> canary{};
        canary.fill(0xA5u);
        runtime.memory().copy_in(samples, canary);
        psprecomp::AllegrexContext ctx{};
        ctx.gpr[4] = samples;
        ctx.gpr[5] = 8u;
        runtime.invoke_import("sceCtrl", 0x1F803938u, ctx);
        const auto returned = ctx.gpr[2];
        require(returned >= 1u && returned <= 8u, "Controller read returns actual available records");
        bool initialized = returned <= 8u;
        for (std::uint32_t i = 0u; initialized && i < returned; ++i)
            initialized = runtime.memory().load32(samples + i * 16u + 4u) == 0u &&
                          runtime.memory().load8(samples + i * 16u + 8u) == 128u &&
                          runtime.memory().load8(samples + i * 16u + 9u) == 128u;
        require(initialized, "Every returned controller sample is initialized");
        ctx.gpr[4] = 1u;
        runtime.invoke_import("sceCtrl", 0x1F4011E6u, ctx);
        require(ctx.gpr[2] == 0u, "Sampling mode returns previous digital mode");
        ctx.gpr[4] = 0u;
        runtime.invoke_import("sceCtrl", 0x1F4011E6u, ctx);
        require(ctx.gpr[2] == 1u, "Sampling mode stores analog setting");
        ctx.gpr[4] = 5555u;
        runtime.invoke_import("sceCtrl", 0x6A2774F3u, ctx);
        require(ctx.gpr[2] == 0u, "Sampling cycle returns previous cycle");
        ctx.gpr[4] = 0u;
        runtime.invoke_import("sceCtrl", 0x6A2774F3u, ctx);
        require(ctx.gpr[2] == 5555u, "Sampling cycle stores valid setting");
        ctx.gpr[4] = 2u;
        runtime.invoke_import("sceCtrl", 0x1F4011E6u, ctx);
        require(ctx.gpr[2] == 0x80000107u, "Invalid sampling mode is rejected");
    }

    // sceKernelGetThreadId returns the module thread uid (0).
    {
        psprecomp::AllegrexContext ctx{};
        runtime.invoke_import("ThreadManForUser", 0x293B45B8u, ctx);
        require(ctx.gpr[2] == 0u, "module thread uid");
    }

    // sceKernelCreateThread allocates uid 1 with an in-RAM stack.
    constexpr std::uint32_t kThreadEntry = 0x08805000u;
    std::int32_t thread_uid = 0;
    {
        const std::uint32_t name_address = 0x08B00100u;
        store_string(runtime, name_address, "test_thread");
        psprecomp::AllegrexContext ctx{};
        ctx.gpr[4] = name_address;
        ctx.gpr[5] = kThreadEntry;
        ctx.gpr[6] = 16u;
        ctx.gpr[7] = 0x1000u;
        runtime.invoke_import("ThreadManForUser", 0x446D8DE6u, ctx);
        thread_uid = static_cast<std::int32_t>(ctx.gpr[2]);
        require(thread_uid == 1, "first thread uid is 1");
    }

    // sceKernelStartThread with a higher priority switches into the new thread.
    {
        psprecomp::AllegrexContext ctx{};
        ctx.gpr[4] = static_cast<std::uint32_t>(thread_uid);
        ctx.gpr[31] = 0x08804000u;
        runtime.invoke_import("ThreadManForUser", 0xF475845Du, ctx);
        require(ctx.pc == kThreadEntry, "started thread entered at its entry point");
        require(psprecomp::runtime_thread_uid() == thread_uid, "active uid switched to new thread");
    }

    // The new thread delays; the module thread resumes with pc = its own $ra.
    {
        psprecomp::AllegrexContext ctx = runtime.cpu();
        ctx.gpr[4] = 1000u;
        ctx.gpr[31] = 0x08804000u;
        runtime.invoke_import("ThreadManForUser", 0xCEADEB47u, ctx);
        require(psprecomp::runtime_thread_uid() == 0, "delay switched back to module thread");
        require(ctx.pc == 0x08804000u, "module thread resumed at its $ra");
    }

    // Missing disc tree must surface a real PSP error, not a crash.
    {
        psprecomp::AllegrexContext ctx{};
        const std::uint32_t path_address = 0x08B00200u;
        store_string(runtime, path_address, "disc0:/PSP_GAME/USRDIR/missing.bin");
        ctx.gpr[4] = path_address;
        ctx.gpr[5] = 1u;
        runtime.invoke_import("IoFileMgrForUser", 0x109F50BCu, ctx);
        require(ctx.gpr[2] == 0x80010002u, "sceIoOpen missing file returns ENOENT");
    }

    // sceUtilityLoadModule: known firmware modules report present (loader
    // bookkeeping) and unload reports 0 afterwards; unknown ids are rejected.
    {
        psprecomp::AllegrexContext ctx{};
        ctx.gpr[4] = 0x0500u; // PSP_MODULE_NP_DRM
        runtime.invoke_import("sceUtility", 0x2A2B3DE0u, ctx);
        require(ctx.gpr[2] == 0u, "sceUtilityLoadModule(NP_DRM) returns 0");

        ctx = psprecomp::AllegrexContext{};
        ctx.gpr[4] = 0x0999u;
        runtime.invoke_import("sceUtility", 0x2A2B3DE0u, ctx);
        require(ctx.gpr[2] == 0x80111101u, "unknown module id rejected");

        ctx = psprecomp::AllegrexContext{};
        ctx.gpr[4] = 0x0500u;
        runtime.invoke_import("sceUtility", 0xE49BFE92u, ctx);
        require(ctx.gpr[2] == 0u, "sceUtilityUnloadModule(loaded) returns 0");

        ctx = psprecomp::AllegrexContext{};
        ctx.gpr[4] = 0x0500u;
        runtime.invoke_import("sceUtility", 0xE49BFE92u, ctx);
        require(ctx.gpr[2] == 0x80111103u, "sceUtilityUnloadModule(not loaded) is rejected");
    }

    // Mutex family: create/lock/trylock/unlock/delete.
    {
        psprecomp::AllegrexContext ctx{};
        const std::uint32_t name_address = 0x08B00300u;
        store_string(runtime, name_address, "Mutex");
        ctx.gpr[4] = name_address;
        ctx.gpr[5] = 0u;
        ctx.gpr[6] = 0u;
        runtime.invoke_import("ThreadManForUser", 0xB7D098C6u, ctx);
        const std::int32_t mutex_uid = static_cast<std::int32_t>(ctx.gpr[2]);
        require(mutex_uid >= 0, "sceKernelCreateMutex returns a uid");

        ctx = psprecomp::AllegrexContext{};
        ctx.gpr[4] = static_cast<std::uint32_t>(mutex_uid);
        ctx.gpr[5] = 1u;
        runtime.invoke_import("ThreadManForUser", 0xB011B11Fu, ctx);
        require(ctx.gpr[2] == 0u, "sceKernelLockMutex returns 0");

        ctx = psprecomp::AllegrexContext{};
        ctx.gpr[4] = static_cast<std::uint32_t>(mutex_uid);
        ctx.gpr[5] = 1u;
        runtime.invoke_import("ThreadManForUser", 0x6B30100Fu, ctx);
        require(ctx.gpr[2] == 0u, "sceKernelUnlockMutex returns 0");

        ctx = psprecomp::AllegrexContext{};
        ctx.gpr[4] = static_cast<std::uint32_t>(mutex_uid);
        runtime.invoke_import("ThreadManForUser", 0xF8170FBEu, ctx);
        require(ctx.gpr[2] == 0u, "sceKernelDeleteMutex returns 0");
    }

    // UMD state machine + callback delivery through the guest callback path.
    {
        static bool test_callback_ran = false;
        test_callback_ran = false;
        constexpr std::uint32_t kTestCallbackEntry = 0x08807000u;
        runtime.register_function(
            kTestCallbackEntry,
            [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
                test_callback_ran = true;
                ctx.gpr[2] = 0u;
            },
            "test_umd_callback");

        psprecomp::AllegrexContext ctx{};
        const std::uint32_t callback_name = 0x08B00400u;
        store_string(runtime, callback_name, "TestUMDCallback");
        ctx.gpr[4] = callback_name;
        ctx.gpr[5] = kTestCallbackEntry;
        ctx.gpr[6] = 0x1234u; // common argument
        runtime.invoke_import("ThreadManForUser", 0xE81CAF8Fu, ctx);
        const std::int32_t callback_uid = static_cast<std::int32_t>(ctx.gpr[2]);
        require(callback_uid > 0, "sceKernelCreateCallback returns a uid");

        ctx = psprecomp::AllegrexContext{};
        ctx.gpr[4] = static_cast<std::uint32_t>(callback_uid);
        ctx.gpr[31] = 0x08804100u;
        runtime.invoke_import("sceUmdUser", 0xAEE7404Du, ctx);
        require(ctx.gpr[2] == 0u, "sceUmdRegisterUMDCallBack returns 0");

        // Drive has not been activated yet: present|ready without readable.
        ctx = psprecomp::AllegrexContext{};
        runtime.invoke_import("sceUmdUser", 0x6B4A146Cu, ctx);
        require(ctx.gpr[2] == 0x12u, "pre-activate drive stat is present|ready");

        const std::uint32_t drive_name = 0x08B00500u;
        store_string(runtime, drive_name, "disc0:");
        ctx = psprecomp::AllegrexContext{};
        ctx.gpr[4] = 1u;
        ctx.gpr[5] = drive_name;
        ctx.gpr[31] = 0x08804100u;
        runtime.invoke_import("sceUmdUser", 0xC6183D47u, ctx);
        require(ctx.gpr[2] == 0u, "sceUmdActivate returns 0");

        // The activation transition delivered the callback: entry, notifyCount,
        // notifyArg (drive stat 0x32) and commonArgument must match the PSP ABI.
        require(ctx.pc == kTestCallbackEntry, "UMD callback entered at its entry point");
        require(ctx.gpr[4] == 1u, "callback notifyCount is 1");
        require(ctx.gpr[5] == 0x32u, "callback notifyArg is present|ready|readable");
        require(ctx.gpr[6] == 0x1234u, "callback common argument preserved");
        require(ctx.gpr[31] == 0x00000004u, "callback returns into trampoline 4");

        // Execute the callback body, then the return trampoline restores the
        // interrupted context (activation's return address).
        (void)runtime.invoke_isolated_aot(kTestCallbackEntry, ctx);
        require(test_callback_ran, "UMD callback body executed");
        (void)runtime.invoke_isolated_aot(0x00000004u, ctx);
        require(ctx.pc == 0x08804100u, "callback return restored the caller context");

        ctx = psprecomp::AllegrexContext{};
        runtime.invoke_import("sceUmdUser", 0x6B4A146Cu, ctx);
        require(ctx.gpr[2] == 0x32u, "post-activate drive stat is readable");
    }

    // GE interrupts must be identical in headless and rendering runs.
    {
        static bool signal_ran = false, finish_ran = false;
        signal_ran = finish_ran = false;
        constexpr std::uint32_t signal_entry = 0x08807100u, finish_entry = 0x08807200u;
        constexpr std::uint32_t data = 0x08B05000u, list = 0x08B05100u;
        runtime.register_function(
            signal_entry,
            [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
                signal_ran = true;
                ctx.gpr[2] = 0u;
            },
            "test_ge_signal");
        runtime.register_function(
            finish_entry,
            [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
                finish_ran = true;
                ctx.gpr[2] = 0u;
            },
            "test_ge_finish");
        runtime.memory().store32(data, signal_entry);
        runtime.memory().store32(data + 4u, 0x1234u);
        runtime.memory().store32(data + 8u, finish_entry);
        runtime.memory().store32(data + 12u, 0x5678u);
        runtime.memory().store32(list, 0x0E020042u);
        runtime.memory().store32(list + 4u, 0x0C000000u);
        runtime.memory().store32(list + 8u, 0x0F000064u);
        runtime.memory().store32(list + 12u, 0x0C000000u);
        psprecomp::AllegrexContext ctx{};
        ctx.gpr[4] = data;
        runtime.invoke_import("sceGe_user", 0xA4FC06A4u, ctx);
        const std::uint32_t callback_id = ctx.gpr[2];
        ctx.gpr[4] = list;
        ctx.gpr[5] = 0u;
        ctx.gpr[6] = callback_id;
        runtime.invoke_import("sceGe_user", 0xAB49E76Au, ctx);
        ctx.gpr[31] = 0x08804100u;
        runtime.invoke_import("ThreadManForUser", 0x349D6D6Cu, ctx);
        require(ctx.gpr[2] == 0u, "Enqueue does not manufacture a SIGNAL interrupt");
        ctx.gpr[4] = 0u;
        runtime.invoke_import("sceGe_user", 0xB287BD61u, ctx);
        for (std::uint32_t i = 0u; i < 2u; ++i) {
            ctx.gpr[31] = 0x08804100u;
            runtime.invoke_import("ThreadManForUser", 0x349D6D6Cu, ctx);
            const std::uint32_t entry = i == 0u ? signal_entry : finish_entry;
            require(ctx.pc == entry && ctx.gpr[4] == (i == 0u ? 0x42u : 0x64u) &&
                        ctx.gpr[5] == (i == 0u ? 0x1234u : 0x5678u) &&
                        ctx.gpr[6] == list + (i == 0u ? 8u : 16u),
                    "Headless GE signal/finish callback ABI and ordering");
            (void)runtime.invoke_isolated_aot(entry, ctx);
            (void)runtime.invoke_isolated_aot(0x00000004u, ctx);
        }
        require(signal_ran && finish_ran, "Headless GE delivers both callbacks");
        ctx.gpr[4] = callback_id;
        runtime.invoke_import("sceGe_user", 0x05DB22CEu, ctx);
    }

    // Async file I/O protocol: operations complete inline, results surface
    // through WaitAsync/PollAsync, and close-pending descriptors are released.
    {
        const auto disc_root = std::filesystem::temp_directory_path() / "motorstorm_async_disc0";
        std::error_code ec;
        std::filesystem::create_directories(disc_root / "PSP_GAME" / "USRDIR", ec);
        const std::array<std::uint8_t, 17> payload{1u,  2u,  3u,  4u,  5u,  6u,  7u,  8u, 9u,
                                                   10u, 11u, 12u, 13u, 14u, 15u, 16u, 17u};
        {
            std::ofstream out(disc_root / "PSP_GAME" / "USRDIR" / "async.bin", std::ios::binary);
            out.write(reinterpret_cast<const char *>(payload.data()),
                      static_cast<std::streamsize>(payload.size()));
        }
        runtime.set_game_root(disc_root);

        constexpr std::uint32_t kPath = 0x08B00600u;
        constexpr std::uint32_t kBufferOut = 0x08B00700u;
        constexpr std::uint32_t kAsyncResult = 0x08B00800u;
        store_string(runtime, kPath, "disc0:/PSP_GAME/USRDIR/async.bin");

        psprecomp::AllegrexContext ctx{};
        ctx.gpr[4] = kPath;
        ctx.gpr[5] = 1u;                                             // FIO_S_IRUSR
        runtime.invoke_import("IoFileMgrForUser", 0x89AA9906u, ctx); // sceIoOpenAsync
        const std::int32_t fd = static_cast<std::int32_t>(ctx.gpr[2]);
        require(fd >= 3, "sceIoOpenAsync returns a descriptor");

        ctx = psprecomp::AllegrexContext{};
        ctx.gpr[4] = static_cast<std::uint32_t>(fd);
        runtime.invoke_import("IoFileMgrForUser", 0xE23EEC33u, ctx); // sceIoWaitAsync
        require(ctx.gpr[2] == 0u, "sceIoWaitAsync completes the async open");

        (void)runtime.memory().zero(kBufferOut, payload.size());
        ctx = psprecomp::AllegrexContext{};
        ctx.gpr[4] = static_cast<std::uint32_t>(fd);
        ctx.gpr[5] = kBufferOut;
        ctx.gpr[6] = payload.size();
        runtime.invoke_import("IoFileMgrForUser", 0xA0B5A7C2u, ctx); // sceIoReadAsync
        require(ctx.gpr[2] == 0u, "sceIoReadAsync accepted the request");

        ctx = psprecomp::AllegrexContext{};
        ctx.gpr[4] = static_cast<std::uint32_t>(fd);
        ctx.gpr[5] = kAsyncResult;
        runtime.invoke_import("IoFileMgrForUser", 0xE23EEC33u, ctx);
        require(ctx.gpr[2] == 0u && runtime.memory().load32(kAsyncResult) == payload.size(),
                "async read completed with the byte count");
        bool payload_matches = true;
        for (std::size_t index = 0u; index < payload.size(); ++index)
            payload_matches = payload_matches && runtime.memory().load8(kBufferOut + index) == payload[index];
        require(payload_matches, "async read returned the file bytes");

        // StreamThread requests zero bytes after consuming the last soundtrack
        // chunk. gcount() still holds the preceding read's count unless an
        // actual read is issued; a zero-byte request must not reuse that count.
        for (const std::uint32_t read_nid : {0xA0B5A7C2u, 0x6A638D83u}) {
            for (std::size_t i = 0u; i < payload.size(); ++i)
                runtime.memory().store8(kBufferOut + static_cast<std::uint32_t>(i), 0xCCu);
            ctx = psprecomp::AllegrexContext{};
            ctx.gpr[4] = static_cast<std::uint32_t>(fd);
            ctx.gpr[5] = kBufferOut;
            ctx.gpr[6] = 0u;
            runtime.invoke_import("IoFileMgrForUser", read_nid, ctx);
            require(ctx.gpr[2] == 0u, "Zero-byte read succeeds after a nonempty read");
            if (read_nid == 0xA0B5A7C2u) {
                // Zero is a completed asynchronous result, not no pending I/O.
                ctx.gpr[4] = static_cast<std::uint32_t>(fd);
                ctx.gpr[5] = kAsyncResult;
                runtime.invoke_import("IoFileMgrForUser", 0xE23EEC33u, ctx);
                require(ctx.gpr[2] == 0u && runtime.memory().load32(kAsyncResult) == 0u &&
                        runtime.memory().load32(kAsyncResult + 4u) == 0u,
                        "Zero-byte async read completes with a zero 64-bit byte count");
                runtime.invoke_import("IoFileMgrForUser", 0x3251EA56u, ctx);
                require(ctx.gpr[2] == 0x8002032Au, "Completed zero-byte read result is consumed once");
            }
            bool untouched = true;
            for (std::size_t i = 0u; i < payload.size(); ++i)
                untouched = untouched && runtime.memory().load8(kBufferOut + static_cast<std::uint32_t>(i)) == 0xCCu;
            require(untouched, "Zero-byte read preserves the destination buffer");
            ctx = psprecomp::AllegrexContext{};
            ctx.gpr[4] = static_cast<std::uint32_t>(fd);
            ctx.gpr[8] = 1u; // SEEK_CUR
            runtime.invoke_import("IoFileMgrForUser", 0x27EB27B8u, ctx);
            require(ctx.gpr[2] == payload.size() && ctx.gpr[3] == 0u,
                    "Zero-byte read preserves the file position at the asset boundary");
        }

        // PollAsync exposes the same result without a waiting thread.
        ctx = psprecomp::AllegrexContext{};
        ctx.gpr[4] = static_cast<std::uint32_t>(fd);
        ctx.gpr[6] = 0u;                                             // offset low
        ctx.gpr[7] = 0u;                                             // offset high
        ctx.gpr[8] = 0u;                                             // SEEK_SET
        runtime.invoke_import("IoFileMgrForUser", 0x27EB27B8u, ctx); // sceIoLseek
        require(ctx.gpr[2] == 0u && ctx.gpr[3] == 0u, "rewind before the poll test");
        (void)runtime.memory().zero(kBufferOut, payload.size());
        ctx = psprecomp::AllegrexContext{};
        ctx.gpr[4] = static_cast<std::uint32_t>(fd);
        ctx.gpr[5] = kBufferOut;
        ctx.gpr[6] = payload.size();
        runtime.invoke_import("IoFileMgrForUser", 0xA0B5A7C2u, ctx);
        require(ctx.gpr[2] == 0u, "second sceIoReadAsync accepted the request");
        ctx = psprecomp::AllegrexContext{};
        ctx.gpr[4] = static_cast<std::uint32_t>(fd);
        ctx.gpr[5] = kAsyncResult;
        runtime.invoke_import("IoFileMgrForUser", 0x3251EA56u, ctx); // sceIoPollAsync
        require(ctx.gpr[2] == 0u && runtime.memory().load32(kAsyncResult) == payload.size(),
                "sceIoPollAsync reported the completed read");

        // CloseAsync releases the descriptor once its result is collected.
        ctx = psprecomp::AllegrexContext{};
        ctx.gpr[4] = static_cast<std::uint32_t>(fd);
        runtime.invoke_import("IoFileMgrForUser", 0xFF5940B6u, ctx); // sceIoCloseAsync
        require(ctx.gpr[2] == 0u, "sceIoCloseAsync accepted the request");
        ctx = psprecomp::AllegrexContext{};
        ctx.gpr[4] = static_cast<std::uint32_t>(fd);
        ctx.gpr[5] = kAsyncResult;
        runtime.invoke_import("IoFileMgrForUser", 0xE23EEC33u, ctx);
        require(ctx.gpr[2] == 0u && runtime.memory().load32(kAsyncResult) == 0u, "async close completed");
        ctx = psprecomp::AllegrexContext{};
        ctx.gpr[4] = static_cast<std::uint32_t>(fd);
        ctx.gpr[5] = kBufferOut;
        ctx.gpr[6] = 1u;
        runtime.invoke_import("IoFileMgrForUser", 0xA0B5A7C2u, ctx);
        require(ctx.gpr[2] == 0x80010009u, "closed async descriptor is rejected");

        // A failed async open still returns a descriptor; the error surfaces
        // through WaitAsync and the descriptor is released afterwards.
        store_string(runtime, kPath, "disc0:/PSP_GAME/USRDIR/absent.bin");
        ctx = psprecomp::AllegrexContext{};
        ctx.gpr[4] = kPath;
        ctx.gpr[5] = 1u;
        runtime.invoke_import("IoFileMgrForUser", 0x89AA9906u, ctx);
        const std::int32_t failed_fd = static_cast<std::int32_t>(ctx.gpr[2]);
        require(failed_fd >= 3, "failed sceIoOpenAsync still returns a descriptor");
        ctx = psprecomp::AllegrexContext{};
        ctx.gpr[4] = static_cast<std::uint32_t>(failed_fd);
        ctx.gpr[5] = kAsyncResult;
        runtime.invoke_import("IoFileMgrForUser", 0xE23EEC33u, ctx);
        require(ctx.gpr[2] == 0u && runtime.memory().load32(kAsyncResult) == 0x80010002u,
                "failed async open reported ENOENT through WaitAsync");
        ctx = psprecomp::AllegrexContext{};
        ctx.gpr[4] = static_cast<std::uint32_t>(failed_fd);
        ctx.gpr[5] = kBufferOut;
        ctx.gpr[6] = 1u;
        runtime.invoke_import("IoFileMgrForUser", 0xA0B5A7C2u, ctx);
        require(ctx.gpr[2] == 0x80010009u, "failed async descriptor was released");
    }

    // Diagnostic movie cancellation must run the omitted pthread lock cleanup
    // for the cancelled worker, while preserving unrelated semaphore state.
    {
        constexpr std::uint32_t name = 0x08B06000u, scene = 0x08B07000u;
        store_string(runtime, name, "pthread mutex");
        psprecomp::AllegrexContext ctx{};
        ctx.gpr[4] = name;
        ctx.gpr[5] = 0u;
        ctx.gpr[6] = 1u;
        ctx.gpr[7] = 1u;
        runtime.invoke_import("ThreadManForUser", 0xD6DA4BA1u, ctx);
        const std::uint32_t movie_mutex = ctx.gpr[2];
        ctx.gpr[4] = name;
        ctx.gpr[5] = 0u;
        ctx.gpr[6] = 1u;
        ctx.gpr[7] = 1u;
        runtime.invoke_import("ThreadManForUser", 0xD6DA4BA1u, ctx);
        const std::uint32_t parent_mutex = ctx.gpr[2];
        ctx.gpr[4] = parent_mutex;
        ctx.gpr[5] = 1u;
        ctx.gpr[6] = 0u;
        runtime.invoke_import("ThreadManForUser", 0x4E3A1105u, ctx);

        store_string(runtime, name, "movie_test_worker");
        ctx.gpr[4] = name;
        ctx.gpr[5] = 0x08A40DF8u;
        ctx.gpr[6] = 8u;
        ctx.gpr[7] = 0x1000u;
        ctx.gpr[8] = 0u;
        ctx.gpr[9] = 0u;
        runtime.invoke_import("ThreadManForUser", 0x446D8DE6u, ctx);
        const std::uint32_t worker = ctx.gpr[2];
        ctx.gpr[4] = worker;
        ctx.gpr[5] = 0u;
        ctx.gpr[6] = 0u;
        ctx.gpr[31] = 0x08804100u;
        runtime.invoke_import("ThreadManForUser", 0xF475845Du, ctx);
        require(psprecomp::runtime_thread_uid() == static_cast<std::int32_t>(worker),
                "Movie fixture switches into its worker");
        ctx.gpr[4] = movie_mutex;
        ctx.gpr[5] = 1u;
        ctx.gpr[6] = 0u;
        runtime.invoke_import("ThreadManForUser", 0x4E3A1105u, ctx);
        ctx.gpr[4] = 1000000u;
        ctx.gpr[31] = 0x08A40DF8u;
        runtime.invoke_import("ThreadManForUser", 0xCEADEB47u, ctx);
        require(psprecomp::runtime_thread_uid() == 0, "Movie fixture returns to parent");

        runtime.memory().store32(0x08A9E48Cu, scene);
        runtime.memory().store32(scene + 0x40u, 0u);
        runtime.memory().store8(0x08AB58E4u, 1u);
        runtime.memory().store8(0x08AB58E6u, 0u);
        const char *previous = std::getenv("PSPRECOMP_MOTORSTORM_SKIP_MOVIE_SCENE");
        const std::string previous_value = previous != nullptr ? previous : "";
        _putenv_s("PSPRECOMP_MOTORSTORM_SKIP_MOVIE_SCENE", "1");
        runtime.invoke_import("sceUmdUser", 0x6B4A146Cu, ctx);
        _putenv_s("PSPRECOMP_MOTORSTORM_SKIP_MOVIE_SCENE", previous_value.c_str());
        ctx.gpr[4] = movie_mutex;
        ctx.gpr[5] = 1u;
        runtime.invoke_import("ThreadManForUser", 0x58B1F937u, ctx);
        require(ctx.gpr[2] == 0u && runtime.memory().load32(scene + 0x40u) == 0xFFFFFFFEu,
                "Movie cancellation releases worker-held mutex and completes scene");
        ctx.gpr[4] = parent_mutex;
        ctx.gpr[5] = 1u;
        runtime.invoke_import("ThreadManForUser", 0x58B1F937u, ctx);
        require(ctx.gpr[2] == 0x800201AEu, "Movie cancellation preserves unrelated mutex ownership");
    }

    // Unimplemented imports still stop loudly with the standard runtime reason.
    // Use a synthetic NID: every sceMpeg entry the game imports is now shimmed.
    {
        psprecomp::AllegrexContext ctx{};
        runtime.invoke_import("sceMpeg", 0xDEADBEEFu, ctx);
        require(runtime.stopped(), "unimplemented import stops the runtime");
        require(runtime.stop_reason().find("Missing HLE import") == 0u,
                "stop reason names the missing import");
    }

    {
        psprecomp::Runtime display_runtime;
        motorstorm::install_hle(display_runtime, 0x08B00000u, options);
        psprecomp::AllegrexContext ctx{};
        display_runtime.invoke_import("sceDisplay", 0x9C6EAAD7u, ctx);
        require(ctx.gpr[2] == 0u, "Vcount starts at zero");
        // NIDs come from sceDisplay's ABI, not the host handler labels.
        // 0xDBA6C4C4 is a float-returning query, never a vblank wait.
        ctx.pc = 0x08804200u;
        ctx.gpr[2] = 0x12345678u;
        ctx.fpr[0] = -1.0f;
        const auto query_thread = psprecomp::runtime_thread_uid();
        display_runtime.invoke_import("sceDisplay", 0xDBA6C4C4u, ctx);
        require(ctx.fpr[0] == 59.9400599f, "Display frame rate returns PSP refresh rate in f0");
        require(ctx.pc == 0x08804200u && ctx.gpr[2] == 0x12345678u &&
                psprecomp::runtime_thread_uid() == query_thread && !display_runtime.stopped(),
                "Display frame rate query does not block or change integer return registers");
        display_runtime.invoke_import("sceDisplay", 0x9C6EAAD7u, ctx);
        require(ctx.gpr[2] == 0u, "Display frame rate query does not advance guest time");
        const std::array<std::uint32_t, 3> waits{0x984C27E7u, 0x46F186C3u, 0x46F186C3u};
        for (std::uint32_t i = 0u; i < waits.size(); ++i) {
            ctx.gpr[31] = 0x08804100u;
            display_runtime.invoke_import("sceDisplay", waits[i], ctx);
            require(ctx.gpr[2] == 0u && ctx.pc == 0x08804100u, "Vblank resumes at caller return address");
            display_runtime.invoke_import("sceDisplay", 0x9C6EAAD7u, ctx);
            require(ctx.gpr[2] == i + 1u, "Vblank wait advances to the next display period");
        }
    }

    {
        psprecomp::Runtime sys_runtime;
        motorstorm::install_hle(sys_runtime, 0x08B00000u, options);
        psprecomp::AllegrexContext ctx{};
        constexpr std::uint32_t output_addr = 0x08B20000u;
        ctx.gpr[4] = 8u; // language param
        ctx.gpr[5] = output_addr;
        sys_runtime.invoke_import("sceUtility", 0xA5DA2406u, ctx);
        require(ctx.gpr[2] == 0u && sys_runtime.memory().load32(output_addr) == 1u,
                "sceUtilityGetSystemParamInt language defaults to 1 (English)");
        ctx.gpr[4] = 9u;
        sys_runtime.invoke_import("sceUtility", 0xA5DA2406u, ctx);
        require(ctx.gpr[2] == 0u && sys_runtime.memory().load32(output_addr) == 1u,
                "US system confirmation preference is Cross, not Circle");
        ctx.gpr[4] = 8u;

        _putenv_s("PSPRECOMP_MOTORSTORM_LANGUAGE", "4");
        sys_runtime.invoke_import("sceUtility", 0xA5DA2406u, ctx);
        require(ctx.gpr[2] == 0u && sys_runtime.memory().load32(output_addr) == 4u,
                "sceUtilityGetSystemParamInt language respects PSPRECOMP_MOTORSTORM_LANGUAGE override");
        _putenv_s("PSPRECOMP_MOTORSTORM_LANGUAGE", "");
    }

    // Texture matrix projection generates UVs from vertex position (commands 0xC0 and 0x40/0x41).
    {
        auto &memory = runtime.memory();
        constexpr std::uint32_t vertices = 0x08B14000u, list = 0x08B15000u;
        constexpr std::uint32_t texture_data = 0x08B16000u;
        constexpr std::uint32_t pixel = 0x04000000u + (40u * 512u + 30u) * 4u;
        // 2x2 8888 texture: texel (0,0)=Red, (1,0)=Green, (0,1)=Blue, (1,1)=White
        memory.store32(texture_data + 0u, 0xFF0000FFu); // U=0, V=0: Red
        memory.store32(texture_data + 4u, 0xFF00FF00u); // U=1, V=0: Green
        memory.store32(texture_data + 8u, 0xFFFF0000u); // U=0, V=1: Blue
        memory.store32(texture_data + 12u, 0xFFFFFFFFu); // U=1, V=1: White

        // Vertex at (0.0, 0.0, 0.0), color White.
        // Vertex format 0x19C: 8888 Color, Float Pos (no vertex UV).
        memory.store32(vertices + 0u, 0xFFFFFFFFu);
        memory.store32(vertices + 4u, std::bit_cast<std::uint32_t>(0.0f));
        memory.store32(vertices + 8u, std::bit_cast<std::uint32_t>(0.0f));
        memory.store32(vertices + 12u, std::bit_cast<std::uint32_t>(0.0f));

        const auto f24 = [](std::uint32_t command, float value) {
            return (command << 24u) | (std::bit_cast<std::uint32_t>(value) >> 8u);
        };

        // Texture matrix with offset U = 0.5 (m[9] = 0.5f).
        // For 2x2 texture, U_pixel = 0.5 * 2 = 1.0, V_pixel = 0.0 -> Green.
        const std::array<std::uint32_t, 20> words{
            0x9C000000u,        // Framebuffer = 0x04000000
            0x9D000200u,        // Stride = 512
            0xD2000003u,        // FB format = 8888
            0x1200019Cu,        // VTYPE: Color 8888, Pos Float
            0x10080000u,        // BASE high
            0x01B14000u,        // VADDR = 0x08B14000
            0x1E000001u,        // TEX enable
            0xA0B16000u,        // TEX addr low
            0xA8080002u,        // TEX addr high (0x08), stride 2
            0xB8000101u,        // TEX size: 2^1 x 2^1 = 2x2
            0xC3000003u,        // TEX format = 8888
            0xC0000001u,        // TEX map mode = 1 (texture matrix, source 0 = position)
            0x40000009u,        // Matrix cursor = 9 (m[9] = offset U)
            f24(0x41u, 0.5f),   // m[9] = 0.5f
            f24(0x42u, 1.0f),   // Viewport scale X
            f24(0x43u, 1.0f),   // Viewport scale Y
            f24(0x45u, 30.0f),  // Viewport center X
            f24(0x46u, 40.0f),  // Viewport center Y
            0x04000001u,        // Draw 1 point
            0x0C000000u         // END
        };
        for (std::size_t i = 0u; i < words.size(); ++i)
            memory.store32(list + static_cast<std::uint32_t>(i * 4u), words[i]);
        memory.store32(pixel, 0u);
        motorstorm::reset_software_ge();
        motorstorm::software_ge_execute_list(memory, list, 0u);
        require(read_rgb(memory, pixel) == 0x0000FF00u,
                "GE projected texture matrix generates UV from position");
        motorstorm::reset_software_ge();
    }

    // A notification from another PSP thread executes on the waiting callback
    // owner's stack, then resumes the semaphore wait after the callback signals.
    {
        psprecomp::Runtime callback_runtime;
        motorstorm::install_hle(callback_runtime,0x08B00000,options);
        static std::uint32_t cb_id,sem_id;
        static bool callback_ran,owner_resumed,notifier_returned;
        static std::int32_t callback_thread;
        callback_ran=owner_resumed=notifier_returned=false;callback_thread=-1;
        constexpr std::uint32_t owner=0x08806000,wait=0x08806100,resume=0x08806200,
                                sender=0x08806300,sleep=0x08806400,callback=0x08806500;
        callback_runtime.register_function(owner,+[](psprecomp::Runtime &r,psprecomp::AllegrexContext &c){
            std::printf("[CALLBACK FIXTURE] owner setup pc=%08X uid=%d\n",c.pc,psprecomp::runtime_thread_uid());
            c.gpr[4]=0;c.gpr[5]=callback;c.gpr[6]=0;
            r.invoke_import("ThreadManForUser",0xE81CAF8F,c);cb_id=c.gpr[2];
            c.gpr[4]=0;c.gpr[5]=0;c.gpr[6]=0;c.gpr[7]=1;
            r.invoke_import("ThreadManForUser",0xD6DA4BA1,c);sem_id=c.gpr[2];
            c.gpr[4]=0;c.gpr[5]=sender;c.gpr[6]=40;c.gpr[7]=4096;
            r.invoke_import("ThreadManForUser",0x446D8DE6,c);
            std::printf("[CALLBACK FIXTURE] ids cb=%u sem=%u sender=%08X\n",cb_id,sem_id,c.gpr[2]);
            c.gpr[4]=c.gpr[2];c.gpr[5]=c.gpr[6]=0;
            r.invoke_import("ThreadManForUser",0xF475845D,c);c.pc=wait;
        },"callback_owner");
        callback_runtime.register_function(wait,+[](psprecomp::Runtime &r,psprecomp::AllegrexContext &c){
            const auto token=psprecomp::capture_runtime_execution_context();
            c.gpr[4]=sem_id;c.gpr[5]=1;c.gpr[31]=resume;
            r.invoke_import("ThreadManForUser",0x6D212BAC,c);
            if (psprecomp::runtime_execution_context_matches(token) && c.pc==wait) c.pc=resume;
        },"callback_wait");
        callback_runtime.register_function(sender,+[](psprecomp::Runtime &r,psprecomp::AllegrexContext &c){
            std::printf("[CALLBACK FIXTURE] sender pc=%08X uid=%d\n",c.pc,psprecomp::runtime_thread_uid());
            c.gpr[4]=cb_id;c.gpr[5]=0x99;
            r.invoke_import("ThreadManForUser",0xC11BA8C4,c);
            notifier_returned=!callback_ran && c.pc==sender;c.pc=sleep;
        },"callback_notifier");
        callback_runtime.register_function(sleep,+[](psprecomp::Runtime &r,psprecomp::AllegrexContext &c){
            c.gpr[4]=1000000;c.gpr[31]=sleep;
            r.invoke_import("ThreadManForUser",0xCEADEB47,c);
        },"callback_notifier_sleep");
        callback_runtime.register_function(callback,+[](psprecomp::Runtime &r,psprecomp::AllegrexContext &c){
            callback_ran=c.gpr[4]==1 && c.gpr[5]==0x99;
            callback_thread=psprecomp::runtime_thread_uid();
            c.gpr[4]=sem_id;c.gpr[5]=1;
            r.invoke_import("ThreadManForUser",0x3F53E640,c);c.pc=c.gpr[31];
        },"owned_callback");
        callback_runtime.register_function(resume,+[](psprecomp::Runtime &r,psprecomp::AllegrexContext &c){
            owner_resumed=c.gpr[2]==0;r.stop("owned callback verified");
        },"callback_owner_resume");
        callback_runtime.run(owner,1000);
        std::printf("[CALLBACK FIXTURE] notified=%d ran=%d thread=%d resumed=%d stop=%s\n",
                    notifier_returned,callback_ran,callback_thread,owner_resumed,callback_runtime.stop_reason().c_str());
        require(notifier_returned && callback_ran && callback_thread==0 && owner_resumed,
                "PSP callback runs on its owner and preserves callback-aware semaphore wait");
    }

    // Movie shutdown joins a worker whose exit needs a semaphore released by
    // the joiner's callback. WaitThreadEndCB must service it on the joiner.
    {
        psprecomp::Runtime r;
        motorstorm::install_hle(r,0x08B00000,options);
        static std::uint32_t cb_id,sem_id,target_id;
        static bool callback_ran,joined,worker_exited;
        callback_ran=joined=worker_exited=false;
        constexpr std::uint32_t owner=0x08807000,join=0x08807100,resume=0x08807200,
                                worker=0x08807300,worker_wait=0x08807400,
                                worker_exit=0x08807500,callback=0x08807600;
        r.register_function(owner,+[](psprecomp::Runtime &rt,psprecomp::AllegrexContext &c){
            c.gpr[4]=0;c.gpr[5]=callback;c.gpr[6]=0;
            rt.invoke_import("ThreadManForUser",0xE81CAF8F,c);cb_id=c.gpr[2];
            c.gpr[4]=0;c.gpr[5]=0;c.gpr[6]=0;c.gpr[7]=1;
            rt.invoke_import("ThreadManForUser",0xD6DA4BA1,c);sem_id=c.gpr[2];
            c.gpr[4]=0;c.gpr[5]=worker;c.gpr[6]=40;c.gpr[7]=4096;
            rt.invoke_import("ThreadManForUser",0x446D8DE6,c);target_id=c.gpr[2];
            c.gpr[4]=target_id;c.gpr[5]=c.gpr[6]=0;
            rt.invoke_import("ThreadManForUser",0xF475845D,c);c.pc=join;
        },"join_owner");
        r.register_function(join,+[](psprecomp::Runtime &rt,psprecomp::AllegrexContext &c){
            const auto token=psprecomp::capture_runtime_execution_context();
            c.gpr[4]=target_id;c.gpr[5]=c.gpr[6]=0;c.gpr[31]=resume;
            rt.invoke_import("ThreadManForUser",0x840E8133,c);
            if(psprecomp::runtime_execution_context_matches(token) && c.pc==join)c.pc=resume;
        },"callback_join");
        r.register_function(worker,+[](psprecomp::Runtime &rt,psprecomp::AllegrexContext &c){
            c.gpr[4]=cb_id;c.gpr[5]=0x77;
            rt.invoke_import("ThreadManForUser",0xC11BA8C4,c);c.pc=worker_wait;
        },"joined_worker");
        r.register_function(worker_wait,+[](psprecomp::Runtime &rt,psprecomp::AllegrexContext &c){
            const auto token=psprecomp::capture_runtime_execution_context();
            c.gpr[4]=sem_id;c.gpr[5]=1;c.gpr[31]=worker_exit;
            rt.invoke_import("ThreadManForUser",0x4E3A1105,c);
            if(psprecomp::runtime_execution_context_matches(token) && c.pc==worker_wait)c.pc=worker_exit;
        },"joined_worker_wait");
        r.register_function(callback,+[](psprecomp::Runtime &rt,psprecomp::AllegrexContext &c){
            callback_ran=psprecomp::runtime_thread_uid()==0 && c.gpr[5]==0x77;
            c.gpr[4]=sem_id;c.gpr[5]=1;
            rt.invoke_import("ThreadManForUser",0x3F53E640,c);c.pc=c.gpr[31];
        },"join_release_callback");
        r.register_function(worker_exit,+[](psprecomp::Runtime &rt,psprecomp::AllegrexContext &c){
            worker_exited=true;c.gpr[4]=0;
            rt.invoke_import("ThreadManForUser",0xAA73C935,c);
        },"joined_worker_exit");
        r.register_function(resume,+[](psprecomp::Runtime &rt,psprecomp::AllegrexContext &c){
            joined=c.gpr[2]==0;rt.stop("callback join verified");
        },"join_resume");
        r.run(owner,1000);
        require(callback_ran && worker_exited && joined,
                "Callback-aware thread join releases worker dependency and completes");
    }

    // Movie pictures are copied from RAM into texture/display VRAM by GE block
    // transfers. Copy offsets, independent strides and headless state must work.
    {
        auto &m=runtime.memory();
        constexpr std::uint32_t list=0x08B44000,src=0x08B45000,dst=0x04080000;
        const std::array<std::uint32_t,9> commands{
            0xB2B45000,0xB3080010,0xB4080000,0xB5040018,
            0xEB000402,0xEC000801,0xEE000402,0xEA000001,0x0C000000};
        for (std::uint32_t i=0;i<commands.size();++i) m.store32(list+i*4,commands[i]);
        for (std::uint32_t y=0;y<2;++y)
            for (std::uint32_t x=0;x<3;++x) m.store32(src+((y+1)*16+x+2)*4,0xFF123400+y*16+x);
        for (const auto rasterize : {true,false}) {
            m.zero(dst,24*4*5);motorstorm::reset_software_ge();
            motorstorm::software_ge_execute_list(m,list,0,rasterize);
            bool correct=true;
            for (std::uint32_t y=0;y<2;++y)
                for (std::uint32_t x=0;x<3;++x)
                    correct=correct && m.load32(dst+((y+2)*24+x+1)*4)==0xFF123400+y*16+x;
            require(correct && m.load32(dst+2*24*4)==0 && m.load32(dst+(2*24+4)*4)==0,
                    "GE block transfer preserves rectangle offsets, strides and neighbors");
        }
    }

    // Callback-aware vblank waits service both already-pending notifications
    // and notifications arriving from another thread during the wait.
    for (const unsigned scenario : {0u, 1u, 2u, 3u, 4u}) {
        psprecomp::Runtime display_runtime;
        motorstorm::install_hle(display_runtime, 0x08B00000u, options);
        static unsigned mode;
        static std::uint32_t callback_id;
        static bool callback_ran, resumed, owner_stack_preserved;
        mode = scenario;
        callback_ran = resumed = owner_stack_preserved = false;
        constexpr std::uint32_t owner = 0x08805000u, wait = 0x08805100u,
                                resume = 0x08805200u, sender = 0x08805300u,
                                sleep = 0x08805400u, callback = 0x08805500u,
                                callback_done = 0x08805600u;
        display_runtime.register_function(owner,
            +[](psprecomp::Runtime &r, psprecomp::AllegrexContext &c) {
                c.gpr[4] = 0u; c.gpr[5] = callback; c.gpr[6] = 0x1234u;
                r.invoke_import("ThreadManForUser", 0xE81CAF8Fu, c);
                callback_id = c.gpr[2];
                if (mode < 2u) {
                    c.gpr[4] = callback_id; c.gpr[5] = 0x99u;
                    r.invoke_import("ThreadManForUser", 0xC11BA8C4u, c);
                } else {
                    c.gpr[4] = 0u; c.gpr[5] = sender; c.gpr[6] = 40u; c.gpr[7] = 4096u;
                    r.invoke_import("ThreadManForUser", 0x446D8DE6u, c);
                    c.gpr[4] = c.gpr[2]; c.gpr[5] = c.gpr[6] = 0u;
                    r.invoke_import("ThreadManForUser", 0xF475845Du, c);
                }
                c.pc = wait;
            }, "display_callback_owner");
        display_runtime.register_function(wait,
            +[](psprecomp::Runtime &r, psprecomp::AllegrexContext &c) {
                const auto token = psprecomp::capture_runtime_execution_context();
                c.gpr[31] = resume;
                r.invoke_import("sceDisplay", mode == 0u ? 0x984C27E7u : 0x46F186C3u, c);
                if (psprecomp::runtime_execution_context_matches(token) && c.pc == wait) c.pc = resume;
            }, "display_callback_wait");
        display_runtime.register_function(sender,
            +[](psprecomp::Runtime &r, psprecomp::AllegrexContext &c) {
                c.gpr[4] = callback_id; c.gpr[5] = 0x99u;
                r.invoke_import("ThreadManForUser", 0xC11BA8C4u, c);
                c.pc = sleep;
            }, "display_callback_sender");
        display_runtime.register_function(sleep,
            +[](psprecomp::Runtime &r, psprecomp::AllegrexContext &c) {
                c.gpr[4] = 1000000u; c.gpr[31] = sleep;
                r.invoke_import("ThreadManForUser", 0xCEADEB47u, c);
            }, "display_callback_sender_sleep");
        display_runtime.register_function(callback,
            +[](psprecomp::Runtime &r, psprecomp::AllegrexContext &c) {
                callback_ran = c.gpr[4] == 1u && c.gpr[5] == 0x99u && c.gpr[6] == 0x1234u;
                owner_stack_preserved = psprecomp::runtime_thread_uid() == 0;
                if (mode >= 3u) {
                    // Callback delays must neither shorten the display wait
                    // nor introduce another period after its original target.
                    c.gpr[4] = mode == 3u ? 5000u : 20000u; c.gpr[31] = callback_done;
                    r.invoke_import("ThreadManForUser", 0xCEADEB47u, c);
                } else {
                    c.gpr[2] = 0u; c.pc = c.gpr[31];
                }
            }, "display_owned_callback");
        display_runtime.register_function(callback_done,
            +[](psprecomp::Runtime &, psprecomp::AllegrexContext &c) {
                c.gpr[2] = 0u; c.pc = 4u;
            }, "display_owned_callback_done");
        display_runtime.register_function(resume,
            +[](psprecomp::Runtime &r, psprecomp::AllegrexContext &c) {
                resumed = c.gpr[2] == 0u && psprecomp::runtime_thread_uid() == 0;
                r.invoke_import("sceDisplay", 0x9C6EAAD7u, c);
                require(c.gpr[2] == 1u, "Callback-aware vblank preserves its original deadline");
                r.stop("display callback verified");
            }, "display_callback_resume");
        display_runtime.run(owner, 1000u);
        require(resumed && display_runtime.stop_reason() == "display callback verified",
                "Vblank wait resumes its caller after callback delivery");
        require(callback_ran == (scenario != 0u),
                "Only callback-aware vblank waits deliver pending callbacks");
        require(scenario == 0u || owner_stack_preserved,
                "Vblank callbacks execute on their owner's PSP thread");
    }

    // GetFrameBuf has three independent optional output pointers. In
    // particular, it must not write stride/format next to the topaddr output.
    {
        psprecomp::Runtime display_runtime;
        motorstorm::install_hle(display_runtime, 0x08B00000u, options);
        psprecomp::AllegrexContext ctx{};
        ctx.gpr[4] = 0x04044000u;
        ctx.gpr[5] = 512u;
        ctx.gpr[6] = 3u;
        ctx.gpr[7] = 0u;
        display_runtime.invoke_import("sceDisplay", 0x289D82FEu, ctx);
        constexpr std::array<std::uint32_t, 3> outputs{0x08B22000u, 0x08B22100u, 0x09FFFFFCu};
        constexpr std::array<std::uint32_t, 3> expected{0x04044000u, 512u, 3u};
        constexpr std::uint32_t guard = 0xA5A55A5Au;
        for (std::uint32_t sync = 0u; sync <= 1u; ++sync) {
            for (std::size_t i = 0u; i < outputs.size(); ++i) {
                display_runtime.memory().store32(outputs[i], guard);
                display_runtime.memory().store32(outputs[i] - 4u, guard);
                if (i != 2u) display_runtime.memory().store32(outputs[i] + 4u, guard);
                ctx.gpr[4u + i] = outputs[i];
            }
            ctx.gpr[7] = sync;
            display_runtime.invoke_import("sceDisplay", 0xEEDA2E54u, ctx);
            require(ctx.gpr[2] == 0u, "GetFrameBuf succeeds with separate outputs");
            for (std::size_t i = 0u; i < outputs.size(); ++i) {
                require(display_runtime.memory().load32(outputs[i]) == expected[i],
                        "GetFrameBuf writes the corresponding output pointer, including RAM's last word");
                require(display_runtime.memory().load32(outputs[i] - 4u) == guard &&
                        (i == 2u || display_runtime.memory().load32(outputs[i] + 4u) == guard),
                        "GetFrameBuf preserves memory adjacent to each output");
            }
        }
        for (const std::uint32_t ignored : {0u, 0xDEADBEE0u, outputs[0] + 1u}) {
            for (std::size_t omitted = 0u; omitted < outputs.size(); ++omitted) {
                for (std::size_t i = 0u; i < outputs.size(); ++i) {
                    display_runtime.memory().store32(outputs[i], guard);
                    ctx.gpr[4u + i] = i == omitted ? ignored : outputs[i];
                }
                display_runtime.invoke_import("sceDisplay", 0xEEDA2E54u, ctx);
                require(ctx.gpr[2] == 0u, "GetFrameBuf tolerates null, unmapped and unaligned outputs");
                for (std::size_t i = 0u; i < outputs.size(); ++i)
                    require(display_runtime.memory().load32(outputs[i]) == (i == omitted ? guard : expected[i]),
                            "An ignored GetFrameBuf output does not suppress the other outputs");
            }
        }
    }

    // ClearEventFlag takes bits to retain, unlike wait-mode CLEAR which takes
    // bits to remove. Movie workers clear their pause bit with ~0x8.
    {
        psprecomp::Runtime flag_runtime;
        motorstorm::install_hle(flag_runtime,0x08B00000,options);
        psprecomp::AllegrexContext c{}; c.gpr[6]=0xD;
        flag_runtime.invoke_import("ThreadManForUser",0x55C20A00,c);
        const auto flag=c.gpr[2]; constexpr std::uint32_t info=0x08B27000;
        const auto pattern=[&]() {
            flag_runtime.memory().store32(info,0x34);c.gpr[4]=flag;c.gpr[5]=info;
            flag_runtime.invoke_import("ThreadManForUser",0xA66B0120,c);
            return flag_runtime.memory().load32(info+0x2C);
        };
        c.gpr[4]=flag;c.gpr[5]=~0x8u;
        flag_runtime.invoke_import("ThreadManForUser",0x812346E4,c);
        require(pattern()==5,"Event flag clear mask removes pause and retains other control bits");
        c.gpr[4]=flag;c.gpr[5]=0xFFFFFFFF;
        flag_runtime.invoke_import("ThreadManForUser",0x812346E4,c);
        require(pattern()==5,"All-ones event clear mask preserves the pattern");
        c.gpr[4]=flag;c.gpr[5]=0;
        flag_runtime.invoke_import("ThreadManForUser",0x812346E4,c);
        require(pattern()==0,"Zero event clear mask clears all bits");
    }

    // StreamStream consumption resumes a pending ring copy; adding 0x40
    // makes the guest discard that PCM. Stop bits must also remain unchanged.
    {
        psprecomp::Runtime r; motorstorm::install_hle(r,0x08B00000,options);
        constexpr std::uint32_t name=0x08B28200,info=0x08B28300,out=0x08B28400;
        store_string(r,name,"StreamStream");
        psprecomp::AllegrexContext c{};c.gpr[4]=name;
        r.invoke_import("ThreadManForUser",0x55C20A00,c);const auto flag=c.gpr[2];
        c.gpr[4]=flag;c.gpr[5]=0x20;
        r.invoke_import("ThreadManForUser",0x1FB15A32,c);
        c.gpr[4]=flag;c.gpr[5]=0x60;c.gpr[6]=0x21;c.gpr[7]=out;
        r.invoke_import("ThreadManForUser",0x30FD48F0,c);
        require(c.gpr[2]==0 && r.memory().load32(out)==0x20,
                "Buffer consumption wakes the stream without inventing a PCM-discard request");
        c.gpr[4]=flag;c.gpr[5]=1;
        r.invoke_import("ThreadManForUser",0x1FB15A32,c);
        r.memory().store32(info,0x34);c.gpr[4]=flag;c.gpr[5]=info;
        r.invoke_import("ThreadManForUser",0xA66B0120,c);
        require(r.memory().load32(info+0x2C)==1,"Stream stop preserves the guest event pattern");
    }

    // Timer preemption cannot split guest critical sections protected by
    // dispatch suspension or CPU interrupt suspension.
    for (const bool interrupts : {false,true}) {
        psprecomp::Runtime r;motorstorm::install_hle(r,0x08B00000,options);
        static bool use_interrupts,in_section,ran_early,ran;
        static std::uint32_t ticks,previous;
        use_interrupts=interrupts;in_section=ran_early=ran=false;ticks=0;
        constexpr std::uint32_t owner=0x08808000,critical=0x08808100,
                                finish=0x08808200,worker=0x08808300;
        r.register_function(owner,+[](psprecomp::Runtime &rt,psprecomp::AllegrexContext &c){
            c.gpr[4]=0;c.gpr[5]=worker;c.gpr[6]=40;c.gpr[7]=4096;
            rt.invoke_import("ThreadManForUser",0x446D8DE6,c);const auto id=c.gpr[2];
            c.gpr[4]=id;c.gpr[5]=c.gpr[6]=0;
            rt.invoke_import("ThreadManForUser",0xF475845D,c);
            in_section=true;
            rt.invoke_import(use_interrupts?"Kernel_Library":"ThreadManForUser",
                             use_interrupts?0x092968F4:0x3AD58B8C,c);previous=c.gpr[2];
            c.gpr[4]=id;c.gpr[5]=16;
            rt.invoke_import("ThreadManForUser",0x71BC9871,c);c.pc=critical;
        },"critical_owner");
        r.register_function(critical,+[](psprecomp::Runtime &rt,psprecomp::AllegrexContext &c){
            if(++ticks<1024){c.pc=critical;return;}
            in_section=false;c.gpr[4]=previous;
            rt.invoke_import(use_interrupts?"Kernel_Library":"ThreadManForUser",
                             use_interrupts?0x5F10D406:0x27E22EC2,c);c.pc=finish;
        },"protected_section");
        r.register_function(worker,+[](psprecomp::Runtime &rt,psprecomp::AllegrexContext &c){
            ran_early=in_section;ran=true;c.gpr[4]=0;
            rt.invoke_import("ThreadManForUser",0xAA73C935,c);
        },"critical_worker");
        r.register_function(finish,+[](psprecomp::Runtime &rt,psprecomp::AllegrexContext &c){
            if(ran)rt.stop("critical section verified");else c.pc=finish;
        },"critical_finish");
        r.run(owner,5000);
        require(previous==1 && ran && !ran_early,"PSP scheduling preserves suspended critical sections");
    }

    // AudioOutput2 models the PSP's two DMA descriptors: the first submission
    // after idle returns immediately, the next blocks until the oldest buffer
    // completes, and a third while both are armed is refused.  A release with
    // an in-flight buffer must fail and preserve the reservation - the exact
    // behaviour MotorStorm's movie-to-game handoff depends on.
    {
        psprecomp::Runtime r;
        static std::uint64_t audio_now;
        static std::uint32_t waited;
        audio_now=0;waited=0;
        psprecomp::AudioOutput2Config config{};
        config.clock=+[](void *){return audio_now;};
        config.delay=+[](psprecomp::Runtime &,psprecomp::AllegrexContext &,std::uint32_t us,void *){waited=us;};
        psprecomp::install_sce_audio_output2_hle(r,config);
        psprecomp::reset_audio_output2_state();
        psprecomp::AllegrexContext c{};c.gpr[4]=256;
        r.invoke_import("sceAudio",0x01562BA3,c);
        c.gpr[4]=0x8000;c.gpr[5]=0x08B30000;
        r.invoke_import("sceAudio",0x2D53F36E,c);
        require(c.gpr[2]==0 && waited==0 && psprecomp::audio_output2_state().buffer_count==1,
                "First AudioOutput2 submission after idle returns immediately with one armed buffer");
        r.invoke_import("sceAudio",0x43196845,c);
        require(c.gpr[2]==0x80268002 && psprecomp::audio_output2_state().reserved,
                "Release cannot steal a channel with an in-flight audio buffer");
        r.invoke_import("sceAudio",0x647CEF33,c);
        require(c.gpr[2]==256,"Rest samples includes parked producer's DMA buffer");
        waited=0;
        c.gpr[4]=0x8000;c.gpr[5]=0x08B30000;
        r.invoke_import("sceAudio",0x2D53F36E,c);
        require(c.gpr[2]==0 && waited==5804 && psprecomp::audio_output2_state().buffer_count==2,
                "Second AudioOutput2 submission blocks until the first DMA buffer completes");
        c.gpr[4]=0x8000;c.gpr[5]=0x08B30000;
        r.invoke_import("sceAudio",0x2D53F36E,c);
        require(c.gpr[2]==0x80260002 && psprecomp::audio_output2_state().buffer_count==2,
                "Full AudioOutput2 queue refuses a third buffer");
        audio_now=waited;
        r.invoke_import("sceAudio",0x647CEF33,c);
        require(c.gpr[2]==256,"Audio buffer drains at guest clock deadline");
        audio_now=2*waited;
        r.invoke_import("sceAudio",0x647CEF33,c);
        require(c.gpr[2]==0,"All audio buffers drain at their guest clock deadlines");
        r.invoke_import("sceAudio",0x43196845,c);
        require(c.gpr[2]==0 && !psprecomp::audio_output2_state().reserved,
                "Drained audio channel can be released");
    }

    // Draining an audio buffer must not signal a game-owned synchronization
    // event: the guest uses SoundEvent to transfer ownership to its movie.
    {
        psprecomp::Runtime r;motorstorm::install_hle(r,0x08B00000,options);
        constexpr std::uint32_t name=0x08B28200,info=0x08B28300,loop=0x08807800;
        const char flag_name[]="SoundEvent";
        for(std::uint32_t i=0;i<sizeof(flag_name);++i)r.memory().store8(name+i,flag_name[i]);
        psprecomp::AllegrexContext c{};c.gpr[4]=name;c.gpr[6]=0;
        r.invoke_import("ThreadManForUser",0x55C20A00,c);const auto flag=c.gpr[2];
        c.gpr[4]=256;r.invoke_import("sceAudio",0x01562BA3,c);
        c.gpr[4]=0x8000;c.gpr[5]=0;c.gpr[31]=loop;
        r.invoke_import("sceAudio",0x2D53F36E,c);
        r.register_function(loop,+[](psprecomp::Runtime &,psprecomp::AllegrexContext &x){x.pc=loop;},"audio_clock");
        r.run(loop,1024);
        r.memory().store32(info,0x34);c.gpr[4]=flag;c.gpr[5]=info;
        r.invoke_import("ThreadManForUser",0xA66B0120,c);
        require(r.memory().load32(info+0x2C)==0,"Audio drain preserves game-owned event flags");
    }

    // CancelSema sets the requested count and writes waiter count through a2.
    // Movie worker cleanup passes zero; filling it to maximum corrupts reuse.
    {
        psprecomp::Runtime r;motorstorm::install_hle(r,0x08B00000,options);
        psprecomp::AllegrexContext c{};c.gpr[6]=2;c.gpr[7]=8;
        r.invoke_import("ThreadManForUser",0xD6DA4BA1,c);
        const auto sem=c.gpr[2];constexpr std::uint32_t output=0x08B28000;
        r.memory().store32(output,0xFFFFFFFF);
        c.gpr[4]=sem;c.gpr[5]=3;c.gpr[6]=output;
        r.invoke_import("ThreadManForUser",0x8FFDF9A2,c);
        require(c.gpr[2]==0 && r.memory().load32(output)==0,
                "CancelSema reports waiter count through the third argument");
        c.gpr[4]=sem;c.gpr[5]=3;
        r.invoke_import("ThreadManForUser",0x58B1F937,c);
        require(c.gpr[2]==0,"CancelSema sets the supplied count");
        c.gpr[4]=sem;c.gpr[5]=1;
        r.invoke_import("ThreadManForUser",0x58B1F937,c);
        require(c.gpr[2]!=0,"CancelSema does not fill semaphore to maximum");
        c.gpr[4]=sem;c.gpr[5]=0xFFFFFFFF;c.gpr[6]=0;
        r.invoke_import("ThreadManForUser",0x8FFDF9A2,c);
        c.gpr[4]=sem;c.gpr[5]=2;
        r.invoke_import("ThreadManForUser",0x58B1F937,c);
        require(c.gpr[2]==0,"Negative cancel count restores creation count");
        c.gpr[4]=sem;c.gpr[5]=9;c.gpr[6]=0;
        r.invoke_import("ThreadManForUser",0x8FFDF9A2,c);
        require(c.gpr[2]==0x800201BD,"CancelSema rejects counts exceeding maximum");
    }

    // A valid constant-UV alpha-blended draw must retain the guest attributes.
    // A VTYPE/blend heuristic used to invent radial UVs and erase all three
    // vertices' alpha, changing this triangle into an invisible draw.
    {
        auto &m = runtime.memory();
        constexpr std::uint32_t list=0x08B24000, vertices=0x08B25000, texture=0x08B26000;
        constexpr std::uint32_t pixel=0x04000000+(30*512+30)*4;
        const std::array<std::array<float,2>,3> positions{{{-0.5f,-0.5f},{0.5f,-0.5f},{-0.5f,0.5f}}};
        for (std::uint32_t i=0;i<3;++i) {
            const auto at=vertices+i*24;
            m.store32(at,std::bit_cast<std::uint32_t>(0.5f));
            m.store32(at+4,std::bit_cast<std::uint32_t>(0.5f));m.store32(at+8,0xCC000000);
            m.store32(at+12,std::bit_cast<std::uint32_t>(positions[i][0]));
            m.store32(at+16,std::bit_cast<std::uint32_t>(positions[i][1]));m.store32(at+20,0);
        }
        for (std::uint32_t i=0;i<4;++i) m.store32(texture+i*4,0xFFFFFFFF);
        const auto f24=[](std::uint32_t cmd,float value){return (cmd<<24)|(std::bit_cast<std::uint32_t>(value)>>8);};
        const std::array<std::uint32_t,22> commands{
            0x9C000000,0x9D000200,0xD2000003,0x1200019F,0x10080000,0x01B25000,
            0x1E000001,0xA0B26000,0xA8080002,0xB8000101,0xC3000003,0xC9000100,
            0x21000001,0xDF000032,0xE7000001,
            f24(0x42,16),f24(0x43,16),f24(0x45,32),f24(0x46,32),0x04030003,0x0C000000,0};
        for (std::uint32_t i=0;i<commands.size();++i) m.store32(list+i*4,commands[i]);
        m.store32(pixel,0xFFFFFFFF);motorstorm::reset_software_ge();
        motorstorm::software_ge_execute_list(m,list,0);
        require(read_rgb(m,pixel)==0x333333,"GE preserves constant guest UVs and alpha for blended float vertices");
    }

    // The movie wrapper allocates from these outputs before starting its
    // worker. Zero-sized/query-success stubs left it waiting indefinitely.
    {
        psprecomp::Runtime media_runtime;
        motorstorm::install_mpeg_hle(media_runtime);
        auto &m=media_runtime.memory(); psprecomp::AllegrexContext c{};
        constexpr std::uint32_t ring=0x08B34000,data=0x08B40000,context=0x08B35000,work=0x08C00000;
        media_runtime.invoke_import("sceMpeg",0xC132E22F,c);
        require(c.gpr[2]==0x10000,"MPEG reports its decoder work-buffer size");
        c.gpr[4]=ring;c.gpr[5]=2;c.gpr[6]=data;c.gpr[7]=4304;c.gpr[8]=0x08804000;c.gpr[9]=0x1234;
        media_runtime.invoke_import("sceMpeg",0x37295ED8,c);
        require(c.gpr[2]==0 && m.load32(ring)==2 && m.load32(ring+24)==0x08804000 && m.load32(ring+28)==0x1234,
                "MPEG initializes ring capacity and guest feeder callback");
        c.gpr[4]=context;c.gpr[5]=work;c.gpr[6]=0x10000;c.gpr[7]=ring;
        media_runtime.invoke_import("sceMpeg",0xD8C5F121,c);
        require(c.gpr[2]==0 && m.load32(context)==work+0x30 && m.load32(ring+40)==context,
                "MPEG creates a valid decoder handle bound to its ringbuffer");
        c.gpr[4]=context;c.gpr[5]=0;c.gpr[6]=480;c.gpr[7]=272;c.gpr[8]=0x08B36000;
        media_runtime.invoke_import("sceMpeg",0x211A057C,c);
        require(c.gpr[2]==0 && m.load32(0x08B36000)==195968,"MPEG sizes the PSP YCbCr output including header");
        c.gpr[6]=481;
        media_runtime.invoke_import("sceMpeg",0x211A057C,c);
        require(c.gpr[2]==0x80610103,"MPEG rejects invalid video dimensions");
        c.gpr[4]=context;
        media_runtime.invoke_import("sceMpeg",0x606A4649,c);
    }

    // Real savedata round trip and PSP utility lifecycle. The game must receive
    // missing-profile errors, then find and reload bytes actually persisted.
    {
        psprecomp::Runtime save_runtime;
        const auto root = std::filesystem::temp_directory_path() / "motorstorm_savedata_regression";
        psprecomp::install_savedata_hle(save_runtime, root);
        auto &m = save_runtime.memory();
        constexpr std::uint32_t p = 0x08B30000, buffer = 0x08B31000, info = 0x08B32000, entries = 0x08B32100;
        m.zero(p, 1536); m.store32(p, 1536);
        store_string(save_runtime, p + 0x3C, "TESTMSAE");
        store_string(save_runtime, p + 0x4C, "01");
        store_string(save_runtime, p + 0x64, "DATA.BIN");
        m.store32(p + 0x74, buffer); m.store32(p + 0x78, 16); m.store32(p + 0x7C, 4);
        const auto operation = [&](std::uint32_t mode) {
            psprecomp::AllegrexContext c{};
            m.store32(p + 0x30, mode); c.gpr[4] = p;
            save_runtime.invoke_import("sceUtility", 0x50C4CD57, c);
            require(c.gpr[2] == 0, "Savedata InitStart accepts valid parameters");
            save_runtime.invoke_import("sceUtility", 0x8874DBE0, c);
            require(c.gpr[2] == 1, "Savedata exposes initializing status");
            save_runtime.invoke_import("sceUtility", 0x8874DBE0, c);
            require(c.gpr[2] == 2, "Savedata transitions to running");
            save_runtime.invoke_import("sceUtility", 0xD4B95FFB, c);
            save_runtime.invoke_import("sceUtility", 0x8874DBE0, c);
            require(c.gpr[2] == 3, "Savedata exposes completion before shutdown");
            const auto result = m.load32(p + 0x1C);
            save_runtime.invoke_import("sceUtility", 0x9790B33C, c);
            require(c.gpr[2] == 0, "Savedata ShutdownStart succeeds after operation");
            save_runtime.invoke_import("sceUtility", 0x8874DBE0, c);
            require(c.gpr[2] == 4, "Savedata exposes finished status");
            save_runtime.invoke_import("sceUtility", 0x8874DBE0, c);
            require(c.gpr[2] == 0, "Savedata returns to idle");
            return result;
        };
        store_string(save_runtime, p + 0x4C, "ABSENT");
        require(operation(0) == 0x80110307, "Savedata missing profile reports no data");
        store_string(save_runtime, p + 0x4C, "01"); m.store32(buffer, 0x12345678);
        require(operation(1) == 0, "Savedata persists profile payload");
        m.store32(buffer, 0);
        require(operation(0) == 0 && m.load32(buffer) == 0x12345678 && m.load32(p + 0x7C) == 4,
                "Savedata restores exact saved bytes and size");
        m.store32(p + 0x78, 2); m.store32(buffer, 0xDEADBEEF);
        require(operation(0) == 0x80110308 && m.load32(buffer) == 0xDEADBEEF,
                "Savedata rejects undersized destination without corrupting memory");
        m.store32(p + 0x78, 16); m.store32(p + 0x5F4, info); m.store32(info, 4); m.store32(info + 8, entries);
        store_string(save_runtime, p + 0x4C, "*");
        require(operation(11) == 0 && m.load32(info + 4) == 1 && m.read_c_string(entries + 52, 20) == "01",
                "Savedata list returns persisted slots");
        store_string(save_runtime, p + 0x4C, "..");
        require(operation(1) == 0x80110300, "Savedata rejects path traversal");
        // Delete-family modes: the game deletes a profile through LISTALLDELETE
        // (7) with the selected slot in saveNameList, or DELETE (10) with the
        // slot in saveName.  The real dialog confirms first; this HLE applies
        // the request directly.
        constexpr std::uint32_t list = 0x08B32200;
        store_string(save_runtime, p + 0x4C, "01");
        require(operation(10) == 0 && !std::filesystem::exists(root / "TESTMSAE01"),
                "Savedata delete removes the named profile");
        require(operation(10) == 0x80110307, "Savedata delete of a missing profile reports no data");
        store_string(save_runtime, p + 0x4C, "01"); m.store32(buffer, 0x12345678);
        require(operation(1) == 0, "Savedata recreates the profile for delete tests");
        m.zero(list, 40); store_string(save_runtime, list, "01"); m.store32(p + 0x60, list);
        require(operation(7) == 0 && !std::filesystem::exists(root / "TESTMSAE01"),
                "Savedata LISTALLDELETE removes the listed profile");
        m.zero(list, 40); m.store32(p + 0x60, list);
        require(operation(7) == 0, "Savedata LISTALLDELETE without a list succeeds without deleting");
        m.zero(list, 40); store_string(save_runtime, list, ".."); m.store32(p + 0x60, list);
        require(operation(6) == 0x80110300, "Savedata delete rejects path traversal");
        m.store32(p + 0x60, 0);
    }

    // Optional codec integration uses a caller-supplied PMF asset; ordinary
    // profile tests still require no game files. It exercises real frame drain.
    if(argc==3 && std::string(argv[1])=="--pmf-eos") {
        psprecomp::Runtime r;motorstorm::install_mpeg_hle(r);
        std::array<std::uint8_t,2048> header{};
        std::ifstream input(argv[2],std::ios::binary);
        require(static_cast<bool>(input.read(reinterpret_cast<char *>(header.data()),header.size())),
                "PMF integration fixture header is readable");
        motorstorm::record_psmf_read(argv[2],0,header);
        auto &m=r.memory();constexpr std::uint32_t p=0x08810000,ring=p+0x100,
            au=p+0x200,flag=p+0x300,buffer_ptr=p+0x400,buffer=p+0x1000,stream_out=p+0x500;
        m.copy_in(p+0x2000,header);m.store32(buffer_ptr,buffer);
        psprecomp::AllegrexContext c{};
        c.gpr[4]=ring;c.gpr[5]=4096;c.gpr[6]=0x08C00000;c.gpr[7]=4096*2152;
        c.gpr[8]=0;c.gpr[9]=0;
        r.invoke_import("sceMpeg",0x37295ED8,c);
        c.gpr[4]=p;c.gpr[5]=0x08B00000;c.gpr[6]=0x10000;c.gpr[7]=ring;
        r.invoke_import("sceMpeg",0xD8C5F121,c);
        c.gpr[4]=p;c.gpr[5]=p+0x2000;c.gpr[6]=stream_out;
        r.invoke_import("sceMpeg",0x21FF80E4,c);
        c.gpr[4]=p;c.gpr[5]=c.gpr[6]=0;
        r.invoke_import("sceMpeg",0x42560F23,c);const auto stream=c.gpr[2];
        c.gpr[4]=p;c.gpr[5]=1;c.gpr[6]=au;
        r.invoke_import("sceMpeg",0xA780CF7E,c);
        m.store32(ring+12,4096);m.store32(ring+4,4096);
        std::uint32_t frames=0;bool drained=false;bool csc_checked=false;
        for(std::uint32_t i=0;i<10000;++i) {
            c.gpr[4]=p;c.gpr[5]=stream;c.gpr[6]=au;c.gpr[7]=flag;
            r.invoke_import("sceMpeg",0xFE246728,c);
            if(c.gpr[2]!=0){require(false,"GetAvcAu succeeds until codec drain");break;}
            c.gpr[4]=p;c.gpr[5]=au;c.gpr[6]=buffer_ptr;c.gpr[7]=flag;
            r.invoke_import("sceMpeg",0xF0EB1125,c);
            require(c.gpr[2]==0,"Final AVC drain completes with success and zero frame status");
            if(!m.load32(flag)){drained=true;break;}++frames;
            if(!csc_checked) {
                constexpr std::uint32_t range=p+0x600,rgb=0x09C00000;
                const auto width=header[142]*16u,height=header[143]*16u;
                m.store32(range,0);m.store32(range+4,0);m.store32(range+8,width);m.store32(range+12,height);
                m.zero(rgb,512*height*4);
                c.gpr[4]=p;c.gpr[5]=buffer;c.gpr[6]=range;c.gpr[7]=512;c.gpr[8]=rgb;
                r.invoke_import("sceMpeg",0x31BD0272,c);
                require(c.gpr[2]==0,"AvcCsc accepts a frame rectangle specified in pixels");
                std::vector<std::uint8_t> pixels(512*height*4);m.copy_out(rgb,pixels);
                require(std::any_of(pixels.begin(),pixels.end(),[](std::uint8_t byte){return byte!=0;}),
                        "AvcCsc publishes the decoded picture into guest RGB memory");
                constexpr std::uint32_t cropped=0x09D00000;
                m.store32(range,17);m.store32(range+4,19);m.store32(range+8,37);m.store32(range+12,29);
                m.zero(cropped,64*29*4);c.gpr[7]=64;c.gpr[8]=cropped;
                r.invoke_import("sceMpeg",0x31BD0272,c);
                require(c.gpr[2]==0,"AvcCsc accepts an unaligned pixel crop");
                for(std::uint32_t y=0;y<29;++y) {
                    std::array<std::uint8_t,37*4> row{};m.copy_out(cropped+y*64*4,row);
                    require(std::equal(row.begin(),row.end(),pixels.begin()+((19+y)*512+17)*4),
                            "AvcCsc crop matches the decoded full-frame pixels");
                    require(m.load32(cropped+(y*64+37)*4)==0,"AvcCsc preserves destination stride padding");
                }
                m.store32(range,0);m.store32(range+4,0);m.store32(range+8,width);m.store32(range+12,height);
                c.gpr[7]=0;c.gpr[8]=cropped;
                r.invoke_import("sceMpeg",0x31BD0272,c);
                require(c.gpr[2]==0 && m.load32(cropped+(19*512+17)*4)==m.load32(rgb+(19*512+17)*4),
                        "AvcCsc zero stride uses the MPEG creation frame width");
                m.store32(range,0xffffffff);c.gpr[7]=512;c.gpr[8]=rgb;
                const auto first=m.load32(rgb);r.invoke_import("sceMpeg",0x31BD0272,c);
                require(c.gpr[2]==0x80610103 && m.load32(rgb)==first,
                        "AvcCsc rejects an invalid crop without corrupting output");
                csc_checked=true;
            }
        }
        require(frames>0 && drained,"Real PMF decodes pictures and reaches zero-frame drain");
        c.gpr[4]=p;c.gpr[5]=stream;c.gpr[6]=au;c.gpr[7]=flag;
        r.invoke_import("sceMpeg",0xFE246728,c);
        require(c.gpr[2]==0x80618001 && m.load32(au+8)==0xFFFFFFFF && m.load32(au+12)==0xFFFFFFFF,
                "Access-unit request reports end of stream after successful codec drain");
        std::printf("[PMF EOS] decoded_frames=%u drained=%d\n",frames,drained);
    }

    // Optional real-asset check: compare PSP-visible frame boundaries and
    // every PCM byte against an independently advanced native decoder.
    if(argc==3 && std::string(argv[1])=="--atrac") {
        std::ifstream file(argv[2],std::ios::binary);
        std::vector<std::uint8_t> encoded((std::istreambuf_iterator<char>(file)),{});
        require(encoded.size()>96,"ATRAC regression asset is readable");
        if(encoded.size()>96) {
            constexpr std::uint32_t data=0x08B40000,pcm=0x08B30000,outputs=0x08B28000;
            runtime.memory().copy_in(data,encoded);
            psprecomp::AllegrexContext c{};c.gpr[4]=data;c.gpr[5]=static_cast<std::uint32_t>(encoded.size());
            runtime.invoke_import("sceAtrac3plus",0x7A20E7AF,c);const auto id=c.gpr[2];
            require(static_cast<std::int32_t>(id)>=0,"Real ATRAC stream opens");
            vcs::AudioStreamDecoder reference;
            require(reference.open(argv[2],44100,2,0),"ATRAC reference decoder opens");
            std::vector<std::uint8_t> skipped((2048+368)*4);
            require(reference.read(skipped)==skipped.size(),"Reference consumes encoder and synthesis delay");
            bool matches=true;int peak=0;
            for(std::uint32_t frame=0;frame<256 && static_cast<std::int32_t>(id)>=0;++frame) {
                const auto samples=frame==0?1680u:2048u;
                std::vector<std::uint8_t> expected(samples*4),actual(samples*4);
                matches=matches && reference.read(expected)==expected.size();
                c.gpr[4]=id;c.gpr[5]=pcm;c.gpr[6]=outputs;c.gpr[7]=outputs+4;c.gpr[8]=outputs+8;
                runtime.invoke_import("sceAtrac3plus",0x6A8C3CD5,c);
                matches=matches && c.gpr[2]==0 && runtime.memory().load32(outputs)==samples;
                runtime.memory().copy_out(pcm,actual);matches=matches && actual==expected;
                for(std::size_t i=0;i<actual.size();i+=2)
                    peak=std::max(peak,std::abs(static_cast<int>(static_cast<std::int16_t>(actual[i]|(actual[i+1]<<8)))));
            }
            require(matches,"ATRAC trims priming, returns 1680 then 2048 samples, and preserves consecutive PCM");
            require(peak>1000,"ATRAC regression decodes non-silent soundtrack PCM");
            c.gpr[4]=id;runtime.invoke_import("sceAtrac3plus",0x61EB33F5,c);
            // Shorten this fixture's fact duration to its first playable frame,
            // then repeat it once. Each loop must re-prime the decoder and
            // expose the same shortened first frame, followed by honest EOS.
            runtime.memory().store32(data+80,1680);
            c.gpr[4]=data;c.gpr[5]=static_cast<std::uint32_t>(encoded.size());
            runtime.invoke_import("sceAtrac3plus",0x7A20E7AF,c);const auto loop_id=c.gpr[2];
            c.gpr[4]=loop_id;c.gpr[5]=1;
            runtime.invoke_import("sceAtrac3plus",0x868120B5,c);
            std::vector<std::uint8_t> first_pcm(1680*4),repeat_pcm(1680*4);
            for(std::uint32_t pass=0;pass<2;++pass) {
                c.gpr[4]=loop_id;c.gpr[5]=pcm;c.gpr[6]=outputs;c.gpr[7]=outputs+4;c.gpr[8]=outputs+8;
                runtime.invoke_import("sceAtrac3plus",0x6A8C3CD5,c);
                require(c.gpr[2]==0 && runtime.memory().load32(outputs)==1680 && runtime.memory().load32(outputs+4)==pass,
                        "ATRAC loop retains first-frame trimming and finishes on its final pass");
                runtime.memory().copy_out(pcm,pass==0?first_pcm:repeat_pcm);
            }
            require(first_pcm==repeat_pcm,"ATRAC loop restarts at the same delay-trimmed PCM position");
            runtime.invoke_import("sceAtrac3plus",0x6A8C3CD5,c);
            require(c.gpr[2]==0x80630024 && runtime.memory().load32(outputs)==0,
                    "ATRAC reports all decoded after the final trimmed frame");
            c.gpr[4]=loop_id;runtime.invoke_import("sceAtrac3plus",0x61EB33F5,c);
        }
    }

    if(argc==2 && std::string(argv[1])=="--audio-output") {
        _putenv_s("PSPRECOMP_MOTORSTORM_AUDIO","1");
        motorstorm::audio_start(44100);
        require(motorstorm::audio_enabled(),"Native waveOut audio device opens");
        constexpr std::uint32_t samples=0x08B00000;
        for(std::uint32_t i=0;i<2048;++i) runtime.memory().store32(samples+i*4,(i&8)?0x20002000:0xE000E000);
        motorstorm::audio_submit(runtime.memory(),samples,2048);
        const auto queued_deadline=std::chrono::steady_clock::now()+std::chrono::seconds(2);
        while(motorstorm::audio_report().queued_buffers<1 && std::chrono::steady_clock::now()<queued_deadline)
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        const auto audio=motorstorm::audio_report();
        require(audio.queued_buffers>=1 && audio.queued_frames==2048 && !audio.playing && !audio.completed_buffers,
                "Short PCM submission is prebuffered before device playback starts");
        motorstorm::audio_submit(runtime.memory(),samples,2048);
        const auto deadline=std::chrono::steady_clock::now()+std::chrono::seconds(2);
        while(motorstorm::audio_report().completed_buffers<8 && std::chrono::steady_clock::now()<deadline)
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        require(motorstorm::audio_report().completed_buffers>=8,"Windows audio driver plays every prebuffered PCM block");
        // Let the buffered PCM drain. With no new grains the worker keeps the
        // device clock alive with silence: one underrun is counted, but the
        // device stays in the playing state instead of pausing.
        const auto starve_deadline=std::chrono::steady_clock::now()+std::chrono::seconds(2);
        while(motorstorm::audio_report().underruns==0 && std::chrono::steady_clock::now()<starve_deadline)
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        require(motorstorm::audio_report().underruns==1 && motorstorm::audio_report().playing &&
                motorstorm::audio_report().silent_frames>0,
                "Starved device is kept alive with silence instead of pausing");
        const auto completed=motorstorm::audio_report().completed_buffers;
        // A thin queue resumes real PCM immediately because the device was
        // never stopped and needs no start-up reserve.
        motorstorm::audio_submit(runtime.memory(),samples,2048);
        const auto thin_deadline=std::chrono::steady_clock::now()+std::chrono::seconds(2);
        while(motorstorm::audio_report().completed_buffers<completed+4 && std::chrono::steady_clock::now()<thin_deadline)
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        require(motorstorm::audio_report().completed_buffers>=completed+4 && motorstorm::audio_report().playing &&
                motorstorm::audio_report().dropped_frames==0,
                "A thin queue after starvation resumes real PCM without a reserve wait");
        motorstorm::audio_submit(runtime.memory(),samples,2048);
        motorstorm::audio_submit(runtime.memory(),samples,2048);
        const auto recovery_deadline=std::chrono::steady_clock::now()+std::chrono::seconds(2);
        while(motorstorm::audio_report().completed_buffers<completed+12 && std::chrono::steady_clock::now()<recovery_deadline)
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        require(motorstorm::audio_report().completed_buffers>=completed+12 && motorstorm::audio_report().dropped_frames==0,
                "Recovery resumes and plays all PCM without discarding samples");
        motorstorm::audio_shutdown();motorstorm::audio_start(44100);
        motorstorm::audio_submit(runtime.memory(),samples,2048,0x4000);
        require(motorstorm::audio_report().peak==4096,"Native audio applies PSP output volume with 0x8000 unity gain");
        motorstorm::audio_shutdown();motorstorm::audio_start(44100);
        motorstorm::audio_submit(runtime.memory(),samples,2048,0);
        require(motorstorm::audio_report().peak==0 && motorstorm::audio_report().nonzero_samples==0,"Zero PSP output volume produces silent PCM");
        for(int i=0;i<12;++i) motorstorm::audio_submit(runtime.memory(),samples,2048,0);
        require(motorstorm::audio_report().completed_buffers>0 && motorstorm::audio_report().dropped_frames==0 && motorstorm::audio_report().errors==0,
                "Native audio reuses completed buffers without dropping a full queue");
        motorstorm::audio_shutdown();_putenv_s("PSPRECOMP_MOTORSTORM_AUDIO","");
    }
    motorstorm::report_summary();
    if (g_failures != 0) {
        std::fprintf(stderr, "[FAIL] %d motorstorm profile test(s) failed\n", g_failures);
        return 1;
    }
    std::printf("motorstorm_profile_tests passed\n");
    return 0;
}
