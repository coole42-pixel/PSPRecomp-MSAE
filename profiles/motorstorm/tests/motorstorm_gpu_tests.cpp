#include "motorstorm_ge.hpp"
#include "motorstorm_gpu.hpp"
#include <algorithm>
#include <bit>
#include <cstdio>
#include <cstdlib>
#include <stdexcept>
#include <vector>
#include <windows.h>

namespace {
constexpr std::uint32_t kList = 0x08B00000, kVertices = 0x08B08000, kColor = 0x04000000, kDepth = 0x04100000;
struct Case {
    std::uint32_t format;
    std::vector<std::uint32_t> state;
    bool triangle{};
};
void command(std::vector<std::uint32_t> &list, std::uint32_t cmd, std::uint32_t value) {
    list.push_back((cmd << 24) | (value & 0xFFFFFF));
}
void vertex(psprecomp::GuestMemory &memory, std::uint32_t index, float x, float y, std::uint32_t color,
            float z = 70) {
    const auto address = kVertices + index * 24;
    memory.store32(address, std::bit_cast<std::uint32_t>(x));
    memory.store32(address + 4, std::bit_cast<std::uint32_t>(y));
    memory.store32(address + 8, color);
    memory.store32(address + 12, std::bit_cast<std::uint32_t>(x));
    memory.store32(address + 16, std::bit_cast<std::uint32_t>(y));
    memory.store32(address + 20, std::bit_cast<std::uint32_t>(z));
}
void bilinear_fraction_grid(psprecomp::GuestMemory &memory) {
    constexpr std::uint32_t texture = 0x08B06000u;
    constexpr std::uint32_t texels[]{0x01FF0002u, 0xF17A3299u, 0x00DD66FEu, 0xFEBB9988u};
    for (unsigned i = 0u; i < 4u; ++i) memory.store32(texture + i * 4u, texels[i]);
    for (const std::uint32_t wrapping : {0u, 1u, 256u, 257u})
        for (const int base_y : {-1, 0, 1})
            for (const int base_x : {-1, 0, 1}) {
                memory.zero(kColor, 32u * 32u * 4u);
                for (unsigned fy = 0u; fy < 16u; ++fy)
                    for (unsigned fx = 0u; fx < 16u; ++fx) {
                        const auto index = fy * 16u + fx;
                        vertex(memory, index, fx + 0.5f, fy + 0.5f, 0xFFFFFFFFu);
                        memory.store32(kVertices + index * 24u,
                            std::bit_cast<std::uint32_t>(base_x + 0.5f + fx / 16.0f));
                        memory.store32(kVertices + index * 24u + 4u,
                            std::bit_cast<std::uint32_t>(base_y + 0.5f + fy / 16.0f));
                    }
                std::vector<std::uint32_t> list;
                command(list, 0x9C, kColor); command(list, 0x9D, 0x040020); command(list, 0xD2, 3);
                command(list, 0xD4, 0); command(list, 0xD5, 15 | (15 << 10));
                command(list, 0x12, 0x80019F); command(list, 0x10, 0x080000); command(list, 0x01, kVertices);
                for (auto disabled : {0x1D, 0x1F, 0x21, 0x22, 0x23, 0x24, 0x27, 0xD3, 0xE8, 0xE9})
                    command(list, disabled, 0);
                command(list, 0xA0, texture); command(list, 0xA8, 0x080002); command(list, 0xB8, 0x101);
                command(list, 0xC3, 3); command(list, 0xC2, 0); command(list, 0xC0, 0);
                command(list, 0xC6, 0x101); command(list, 0xC7, wrapping); command(list, 0xC9, 0x103);
                command(list, 0x1E, 1); command(list, 0x04, 256); command(list, 0x0C, 0);
                for (unsigned i = 0u; i < list.size(); ++i) memory.store32(kList + i * 4u, list[i]);
                motorstorm::software_ge_execute_list(memory, kList, 0u);
                const auto sample = [&](int x, int y) {
                    x = (wrapping & 1u) ? std::clamp(x, 0, 1) : x & 1;
                    y = (wrapping & 256u) ? std::clamp(y, 0, 1) : y & 1;
                    return texels[y * 2 + x];
                };
                for (unsigned fy = 0u; fy < 16u; ++fy)
                    for (unsigned fx = 0u; fx < 16u; ++fx) {
                        std::uint32_t expected{};
                        for (unsigned shift = 0u; shift < 32u; shift += 8u) {
                            const auto channel = [&](int x, int y) { return (sample(x, y) >> shift) & 255u; };
                            const auto a = channel(base_x, base_y) * (16u - fx) + channel(base_x + 1, base_y) * fx;
                            const auto b = channel(base_x, base_y + 1) * (16u - fx) + channel(base_x + 1, base_y + 1) * fx;
                            expected |= ((a * (16u - fy) + b * fy) >> 8u) << shift;
                        }
                        if (memory.load32(kColor + (fy * 32u + fx) * 4u) != expected)
                            throw std::runtime_error("Hardware bilinear sampling changed a PSP four-bit fraction or wrap/clamp edge");
                    }
            }
    std::puts("9216 RGBA bilinear fraction / wrap / clamp comparisons passed");
}
std::vector<std::uint8_t> run(psprecomp::GuestMemory &memory, const Case &test) {
    for (std::uint32_t i = 0; i < 32 * 32; ++i) {
        if (test.format == 3)
            memory.store32(kColor + i * 4, 0x8040207Fu);
        else
            memory.store16(kColor + i * 2, 0xA53Bu);
        memory.store16(kDepth + i * 2, 50);
    }
    vertex(memory, 0, 4, 4, 0x6090B0D0);
    vertex(memory, 1, 20, 20, 0x6090B0D0);
    if (test.triangle) {
        vertex(memory, 1, 20, 4, 0x6090B0D0);
        vertex(memory, 2, 4, 20, 0x6090B0D0);
    }
    std::vector<std::uint32_t> list;
    command(list, 0x9C, 0);
    command(list, 0x9D, 0x040020);
    command(list, 0xD2, test.format);
    command(list, 0x9E, 0x100000);
    command(list, 0x9F, 0x040020);
    command(list, 0xD4, 0);
    command(list, 0xD5, 31 | (31 << 10));
    command(list, 0x12, 0x80019F);
    command(list, 0x10, 0x080000);
    command(list, 0x01, kVertices);
    for (auto cmd : {0x1D, 0x1E, 0x1F, 0x21, 0x22, 0x23, 0x24, 0x27, 0xD3, 0xE7, 0xE8, 0xE9})
        command(list, cmd, 0);
    command(list, 0xDE, 1);
    command(list, 0xE0, 0x37A4D1);
    command(list, 0xE1, 0xE45219);
    for (const auto word : test.state)
        list.push_back(word);
    command(list, 0x04, test.triangle ? 0x030003 : 0x060002);
    command(list, 0x0F, 123);
    command(list, 0x0C, 0);
    for (std::size_t i = 0; i < list.size(); ++i)
        memory.store32(kList + static_cast<std::uint32_t>(i * 4), list[i]);
    const auto interrupts = motorstorm::software_ge_execute_list(memory, kList, 0, true, 1);
    if (interrupts.size() != 1 || !interrupts[0].finish || interrupts[0].token != 123)
        throw std::runtime_error("GPU list must preserve FINISH callback tokens");
    std::vector<std::uint8_t> result(32 * 32 * (test.format == 3 ? 4 : 2) + 32 * 32 * 2);
    const auto color_bytes = 32 * 32 * (test.format == 3 ? 4u : 2u);
    memory.copy_out(kColor, {result.data(), color_bytes});
    memory.copy_out(kDepth, {result.data() + color_bytes, 32 * 32 * 2});
    return result;
}
void oversized_target(psprecomp::GuestMemory &memory) {
    constexpr std::uint32_t display=kColor+0x10000;
    motorstorm::reset_software_ge();
    memory.zero(kColor,16*296*4);memory.zero(display,16*272*4);
    vertex(memory,0,0,0,0xFF317BC5);vertex(memory,1,16,296,0xFF317BC5);
    vertex(memory,2,0,0,0xFFFFFFFF);vertex(memory,3,16,272,0xFFFFFFFF);
    memory.store32(kVertices+3*24+4,std::bit_cast<std::uint32_t>(296.0f));
    std::vector<std::uint32_t> list;
    command(list,0x9C,kColor);command(list,0x9D,0x040010);command(list,0xD2,3);
    command(list,0xD4,0);command(list,0xD5,15|(295<<10));
    command(list,0x12,0x80019F);command(list,0x10,0x080000);command(list,0x01,kVertices);
    for(auto cmd:{0x1D,0x1E,0x1F,0x21,0x22,0x23,0x24,0x27,0xD3,0xE8,0xE9})command(list,cmd,0);
    command(list,0x04,0x060002);
    command(list,0x9C,display);command(list,0xD5,15|(271<<10));
    command(list,0xA0,kColor);command(list,0xA8,0x040010);command(list,0xB8,0x0904);
    command(list,0xC3,3);command(list,0xC2,0);command(list,0xC0,0);
    command(list,0xC6,0);command(list,0xC7,0x101);command(list,0xC9,0x103);
    command(list,0x1E,1);command(list,0x01,kVertices+2*24);command(list,0x04,0x060002);
    command(list,0x0C,0);
    for(std::size_t i=0;i<list.size();++i)memory.store32(kList+static_cast<std::uint32_t>(i*4),list[i]);
    motorstorm::software_ge_execute_list(memory,kList,0);
    if(memory.load32(kColor+(295*16+8)*4)!=0xFF317BC5 ||
       memory.load32(display+(271*16+8)*4)!=0xFF317BC5)
        throw std::runtime_error("Offscreen rows beyond the LCD must survive feedback scaling to the final display");
}
void feedback(psprecomp::GuestMemory &memory) {
    Case test{3, {}};
    run(memory, test);
    std::vector<std::uint32_t> list;
    // Render into a small texture, then sample it in the SAME command list.
    command(list, 0x9C, 0x10000);
    command(list, 0x9D, 0x040020);
    command(list, 0xD2, 3);
    command(list, 0x10, 0x080000);
    command(list, 0x01, kVertices);
    command(list, 0x1E, 0);
    command(list, 0x04, 0x060002);
    command(list, 0x9C, 0);
    command(list, 0x9D, 0x040020);
    command(list, 0xA0, 0x10000);
    command(list, 0xA8, 0x040020);
    command(list, 0xB8, 0x0505);
    command(list, 0xC3, 3);
    command(list, 0xC2, 0);
    command(list, 0xC6, 0);
    command(list, 0xC7, 0x101);
    command(list, 0xC9, 0x103);
    command(list, 0x1E, 1);
    command(list, 0x01, kVertices);
    command(list, 0x04, 0x060002);
    // A transfer must observe those GPU writes before the list ends.
    command(list, 0xB2, 0);
    command(list, 0xB3, 0x040020);
    command(list, 0xB4, 0x20000);
    command(list, 0xB5, 0x040020);
    command(list, 0xEB, 0);
    command(list, 0xEC, 0);
    command(list, 0xEE, 31 | (31 << 10));
    command(list, 0xEA, 1);
    command(list, 0x0C, 0);
    for (std::size_t i = 0; i < list.size(); ++i)
        memory.store32(kList + static_cast<std::uint32_t>(i * 4), list[i]);
    motorstorm::software_ge_execute_list(memory, kList, 0);
    if (memory.load32(kColor + (10 * 32 + 10) * 4) != 0x6090B0D0 ||
        memory.load32(0x04020000 + (10 * 32 + 10) * 4) != 0x6090B0D0)
        throw std::runtime_error("GPU framebuffer feedback / transfer coherence failed");
}
} // namespace
int main() {
    try {
        _putenv_s("PSPRECOMP_MOTORSTORM_RESOLUTION", "1");
        _putenv_s("PSPRECOMP_MOTORSTORM_AA", "none");
        std::vector<Case> cases;
        for (std::uint32_t format = 0; format < 4; ++format) {
            for (std::uint32_t equation = 0; equation < 6; ++equation)
                for (std::uint32_t source = 0; source < 11; ++source)
                    cases.push_back(
                        {format,
                         {0x21000001u, 0xDF000000u | (equation << 8) | ((10 - source) << 4) | source}});
            for (std::uint32_t function = 0; function < 8; ++function)
                for (std::uint32_t op = 0; op < 6; ++op)
                    cases.push_back({format,
                                     {0x24000001u, 0xDC000000u | 0xFF8000u | function,
                                      0xDD000000u | (op << 16) | (op << 8) | op}});
            for (std::uint32_t depth = 0; depth < 8; ++depth)
                cases.push_back(
                    {format, {0x23000001u, 0xDE000000u | depth, 0x24000001u, 0xDCFF8001u, 0xDD040500u}});
            for (auto clear : {0x101u, 0x201u, 0x401u, 0x701u})
                cases.push_back({format, {0xD3000000u | clear}});
            cases.push_back({format, {0xE8123ABCu, 0xE900005Au}});
            cases.push_back({format, {0x22000001u, 0xDBFF6002u}});
            cases.push_back({format, {0x27000001u, 0xD8000003u, 0xD900B0D0u, 0xDA00FFFFu}});
            cases.push_back({format, {0x1D000001u, 0x9B000000u}, true});
            cases.push_back({format, {0x1D000001u, 0x9B000001u}, true});
        }
        psprecomp::GuestMemory memory;
        _putenv_s("PSPRECOMP_MOTORSTORM_RENDERER", "software");
        motorstorm::reset_software_ge();
        std::vector<std::vector<std::uint8_t>> expected;
        for (const auto &test : cases)
            expected.push_back(run(memory, test));
        oversized_target(memory);
        feedback(memory);
        // Menus draw 2D panels before their 3D vehicle preview. Z writes must
        // be disabled along with the depth test, even with ZMASK left writable.
        run(memory, Case{3, {}});
        if (memory.load16(kDepth + (10 * 32 + 10) * 2) != 50)
            throw std::runtime_error("Depth-disabled UI must preserve the vehicle preview depth buffer");
        _putenv_s("PSPRECOMP_MOTORSTORM_RENDERER", "d3d12");
        motorstorm::reset_software_ge();
        for (std::size_t i = 0; i < cases.size(); ++i)
            if (run(memory, cases[i]) != expected[i]) {
                std::fprintf(stderr, "GPU/software mismatch case=%zu format=%u first_state=%08X\n", i,
                             cases[i].format, cases[i].state.front());
                return 1;
            }
        feedback(memory);
        run(memory, Case{3, {}});
        if (memory.load16(kDepth + (10 * 32 + 10) * 2) != 50)
            throw std::runtime_error("GPU depth-disabled UI must preserve the preview depth buffer");
        auto report = motorstorm::gpu_report();
        if (!report.active || report.draws < cases.size() + 3 || report.software_draws ||
            !report.feedback_draws)
            throw std::runtime_error("Fixture must execute real GPU draws and framebuffer feedback "
                                     "without software rasterization");
        HWND window = CreateWindowExW(0, L"STATIC", L"MotorStorm D3D12 test", WS_OVERLAPPEDWINDOW, 0, 0, 320,
                                      240, nullptr, nullptr, GetModuleHandleW(nullptr), nullptr);
        if (!window)
            throw std::runtime_error("Cannot create swapchain test window");
        const bool first = motorstorm::gpu_present(memory, window, kColor, 32, 3, 32, 32);
        SetWindowPos(window, nullptr, 0, 0, 640, 360, SWP_NOMOVE | SWP_NOZORDER);
        const bool resized = motorstorm::gpu_present(memory, window, kColor, 32, 3, 32, 32);
        motorstorm::gpu_shutdown();
        DestroyWindow(window);
        if (!first || !resized)
            throw std::runtime_error("GPU swapchain presentation / resize failed");
        // Integer-aligned rectangles retain PSP pixel semantics at every
        // resolution. Triangle edges are intentionally sampled more finely.
        std::vector<std::uint8_t> no_aa;
        for (int resolution = 1; resolution <= 4; ++resolution)
            for (const char *aa : {"none", "fxaa", "ssaa4x"}) {
                _putenv_s("PSPRECOMP_MOTORSTORM_RESOLUTION", std::to_string(resolution).c_str());
                _putenv_s("PSPRECOMP_MOTORSTORM_AA", aa);
                motorstorm::reset_software_ge();
                for (std::size_t i = 0; i < cases.size(); ++i)
                    if (!cases[i].triangle && run(memory, cases[i]) != expected[i])
                        throw std::runtime_error(
                            "Scaled GPU resolve changed packed blend/stencil/depth/mask semantics");
                oversized_target(memory);
                feedback(memory);
                run(memory, Case{3, {}});
                vertex(memory, 0, 4.125f, 4.25f, 0xFFFFFFFFu);
                vertex(memory, 1, 26.5f, 5.875f, 0xFFFFFFFFu);
                vertex(memory, 2, 8.75f, 26.25f, 0xFFFFFFFFu);
                const std::vector<std::uint32_t> list{0x1E000000u, 0x1D000000u,
                                                      0x10080000u, 0x01000000u | (kVertices & 0xffffff),
                                                      0x04030003u, 0x0C000000u};
                for (std::size_t i = 0; i < list.size(); ++i)
                    memory.store32(kList + static_cast<std::uint32_t>(i * 4), list[i]);
                motorstorm::software_ge_execute_list(memory, kList, 0);
                auto image = motorstorm::gpu_capture(memory, kColor, 32, 3, 32, 32);
                if (image.width != 32 * resolution || image.height != 32 * resolution || image.rgba.empty())
                    throw std::runtime_error("GPU output capture must use selected rendering resolution");
                const auto again = motorstorm::gpu_capture(memory, kColor, 32, 3, 32, 32);
                if (again.rgba != image.rgba)
                    throw std::runtime_error("Guest readback must preserve high-resolution GPU detail");
                if (std::string(aa) == "none")
                    no_aa = image.rgba;
                else if (no_aa == image.rgba)
                    throw std::runtime_error("Anti-aliasing must change subpixel triangle edges");
                HWND scaled_window =
                    CreateWindowExW(0, L"STATIC", L"Scaled GPU test", WS_OVERLAPPEDWINDOW, 0, 0, 320, 240,
                                    nullptr, nullptr, GetModuleHandleW(nullptr), nullptr);
                if (!motorstorm::gpu_present(memory, scaled_window, kColor, 32, 3, 32, 32))
                    throw std::runtime_error("Scaled GPU presentation failed");
                motorstorm::gpu_shutdown();
                DestroyWindow(scaled_window);
                std::printf("resolution=%dx AA=%s: resolve, feedback, detail retention, edge filtering and "
                            "presentation passed\n",
                            resolution, aa);
            }
        bilinear_fraction_grid(memory);
        _putenv_s("PSPRECOMP_MOTORSTORM_RESOLUTION", "");
        _putenv_s("PSPRECOMP_MOTORSTORM_AA", "");
        std::printf("D3D12 %s: %zu pixel-exact blend/stencil/depth/mask/clear "
                    "cases, feedback, transfer, presentation and resize passed\n",
                    report.adapter.c_str(), cases.size());
        return 0;
    } catch (const std::exception &error) {
        std::fprintf(stderr, "[FAIL] %s\n", error.what());
        return 1;
    }
}
