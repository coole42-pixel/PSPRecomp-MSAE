#include "motorstorm_ge.hpp"
#include "motorstorm_gpu.hpp"
#include "motorstorm_post.hpp"
#include "motorstorm_presentation.hpp"
#include "motorstorm_textures.hpp"
#include <algorithm>
#include <array>
#include <bit>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <stdexcept>
#include <vector>
#include <string_view>
#define NOMINMAX
#include <windows.h>

namespace motorstorm {
void log_line(std::string_view category, std::string_view message) {
    std::printf("[%.*s] %.*s\n", static_cast<int>(category.size()), category.data(),
                static_cast<int>(message.size()), message.data());
}
}

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
// GPU texture decoding (DecodeCS) must match the CPU texel path bit for bit
// for every format, swizzle mode and palette mode.
void decode_parity() {
    if (!motorstorm::gpu_initialize())
        throw std::runtime_error("GPU decode test needs the D3D12 renderer");
    std::vector<std::uint8_t> bytes(64 * 1024);
    std::uint32_t seed = 0x1234567u;
    for (auto &b : bytes) { seed = seed * 1664525u + 1013904223u; b = static_cast<std::uint8_t>(seed >> 24); }
    std::array<std::uint32_t, 256> clut{};
    for (auto &c : clut) { seed = seed * 1664525u + 1013904223u; c = seed; }
    std::size_t cases = 0;
    for (std::uint32_t format = 0; format < 8; ++format)
        for (std::uint32_t swizzled = 0; swizzled < 2; ++swizzled)
            for (std::uint32_t stride : {64u, 80u})
                for (std::uint32_t clut_mode : {0xFF03u, 0xFF00u, 0xFF01u, 0xFF02u, 0x0F0403u, 0x3F0C02u, 0x7F0001u}) {
                    if (format < 4u && clut_mode != 0xFF03u) continue;  // palette mode only matters for CLUT
                    motorstorm::GeTextureSource source;
                    source.format = format;
                    source.width_log2 = 6;
                    source.height_log2 = 5;
                    source.stride = stride;
                    source.swizzled = swizzled != 0u;
                    source.bytes = bytes;
                    source.clut = {reinterpret_cast<const std::uint8_t *>(clut.data()), 1024};
                    source.clut_mode = clut_mode;
                    const auto expected = motorstorm::ge_decode_texture(source, 32);
                    motorstorm::GpuTexture texture;
                    texture.width = 64;
                    texture.height = 32;
                    texture.format = format;
                    texture.clut_mode = clut_mode;
                    texture.texture_mode = swizzled;
                    texture.clut = clut;
                    texture.raw.push_back({64, 32, stride, bytes});
                    if (motorstorm::ge_decode_raw_level(texture, 0) != expected)
                        throw std::runtime_error("Fast CPU raw decoding differs from the CPU texel path");
                    const auto actual = motorstorm::gpu_debug_decode(texture, 0);
                    if (actual != expected) {
                        std::size_t first = 0;
                        while (first < actual.size() && first < expected.size() && actual[first] == expected[first]) ++first;
                        std::fprintf(stderr, "decode mismatch format=%u swizzled=%u stride=%u clut=%06X texel=%zu gpu=%08X cpu=%08X\n",
                                     format, swizzled, stride, clut_mode, first,
                                     first < actual.size() ? actual[first] : 0u, first < expected.size() ? expected[first] : 0u);
                        throw std::runtime_error("GPU texture decoding differs from the CPU texel path");
                    }
                    ++cases;
                }
    std::printf("GPU texture decoding matches the CPU path in %zu format/swizzle/palette cases\n", cases);
}

void indexed_vertex_cache(psprecomp::GuestMemory &memory) {
    motorstorm::reset_software_ge();
    constexpr std::uint32_t indexes = kVertices + 0x2000;
    for (unsigned i = 0; i < 4; ++i) vertex(memory,i,5+i,6,0xFF102030u+i);
    for (unsigned i = 0; i < 1024; ++i) memory.store16(indexes+i*2,static_cast<std::uint16_t>(i%4));
    std::vector<std::uint32_t> list;
    command(list,0x9C,kColor); command(list,0x9D,0x040020); command(list,0xD2,3);
    command(list,0xD4,0); command(list,0xD5,31|(31<<10));
    command(list,0x12,0x80119F); command(list,0x10,0x080000); command(list,0x01,kVertices); command(list,0x02,indexes);
    for (auto cmd : {0x1D,0x1E,0x1F,0x21,0x22,0x23,0x24,0x27,0xD3,0xE8,0xE9}) command(list,cmd,0);
    command(list,0x04,1024); command(list,0x0C,0);
    for (unsigned i = 0; i < list.size(); ++i) memory.store32(kList+i*4,list[i]);
    memory.zero(kColor,32*32*4);
    motorstorm::software_ge_execute_list(memory,kList,0);
    const auto first = motorstorm::software_ge_summary();
    if (first.vertex_decodes != 4 || first.vertex_cache_hits != 1020)
        throw std::runtime_error("Indexed draws must decode each reused vertex only once");
    for (unsigned i = 0; i < 4; ++i)
        if (memory.load32(kColor+(6*32+5+i)*4) != 0xFF102030u+i)
            throw std::runtime_error("Cached indexed point output differs from original vertices");
    vertex(memory,0,5,6,0xFFAABBCCu);
    memory.zero(kColor,32*32*4);
    motorstorm::software_ge_execute_list(memory,kList,0);
    if (memory.load32(kColor+(6*32+5)*4) != 0xFFAABBCCu)
        throw std::runtime_error("A vertex cache must never retain vertex data across draws");
    std::puts("Indexed vertex reuse: 1024 references decoded 4 times, changed vertices refreshed next draw");
}

void replacement_alpha(psprecomp::GuestMemory &memory) {
    namespace tx = motorstorm::textures;
    const auto root = std::filesystem::temp_directory_path() / ("motorstorm_gpu_pack_"+std::to_string(GetCurrentProcessId()));
    std::filesystem::create_directories(root);
    constexpr std::uint64_t hashes[]{0x1122334455667788ull,0x8877665544332211ull};
    for (unsigned i = 0; i < 2; ++i) {
        char name[64]; std::snprintf(name,sizeof(name),"%016llX_2x2.png",static_cast<unsigned long long>(hashes[i]));
        const std::array<std::uint32_t,4> pixels{i ? 0x80552211u : 0x00552211u,i ? 0x80552211u : 0x00552211u,
                                               i ? 0x80552211u : 0x00552211u,i ? 0x80552211u : 0x00552211u};
        if (!tx::save_png(root/name,2,2,pixels)) throw std::runtime_error("Cannot create replacement alpha fixture");
    }
    tx::Settings settings; settings.replace=true; settings.replace_dir=root; tx::configure(settings);
    motorstorm::reset_software_ge();
    _putenv_s("PSPRECOMP_MOTORSTORM_TEXTURE_FILTER","enhanced");
    for (unsigned image = 0; image < 2; ++image)
        for (unsigned alpha : {255u,64u}) {
            motorstorm::GpuTexture texture;
            texture.key = 0xAA000000ull+image*256+alpha;
            texture.width=texture.height=2;
            texture.levels={{(alpha<<24)|0x00ABCDEFu,(alpha<<24)|0x00ABCDEFu,
                             (alpha<<24)|0x00ABCDEFu,(alpha<<24)|0x00ABCDEFu}};
            texture.opaque=alpha==255;
            texture.replacement_hash=hashes[image]; texture.replacement_width=texture.replacement_rows=2;
            motorstorm::GpuDraw draw;
            draw.framebuffer=kColor; draw.stride=32; draw.format=3; draw.right=draw.bottom=32;
            draw.commands[0x1E]=1; draw.commands[0xB8]=0x101; draw.commands[0xC9]=0x103;
            draw.commands[0xC6]=0x101;
            const auto v=[](float x,float y,float u,float vv) { return motorstorm::GpuVertex{x,y,0,0xFFFFFFFFu,0,u,vv}; };
            const std::array vertices{v(4,4,0,0),v(20,4,2,0),v(4,20,0,2),v(4,20,0,2),v(20,4,2,0),v(20,20,2,2)};
            for (unsigned attempt = 0; attempt < 500; ++attempt) {
                memory.zero(kColor,32*32*4);
                motorstorm::gpu_initialize();
                const auto before = motorstorm::gpu_report().replaced_draws;
                motorstorm::gpu_submit(memory,draw,vertices,&texture); motorstorm::gpu_sync(memory);
                if (motorstorm::gpu_report().replaced_draws > before) break;
                if (attempt == 499) throw std::runtime_error("Replacement fixture did not load");
                Sleep(2);
            }
            const std::uint32_t expected = ((image ? std::min(alpha,128u) : alpha)<<24)|0x00552211u;
            if (memory.load32(kColor+(10*32+10)*4) != expected)
                throw std::runtime_error("Skipping an opaque original changed replacement colour or runtime alpha");
        }
    tx::shutdown();
    motorstorm::gpu_shutdown();
    _putenv_s("PSPRECOMP_MOTORSTORM_TEXTURE_FILTER","");
    std::filesystem::remove_all(root);
    std::puts("Enhanced replacement colour/alpha exact for opaque, translucent and RGB-only pack images");
}


void post_pixels() {
    motorstorm::GpuImage input{256, 8, std::vector<std::uint8_t>(256 * 8 * 4)};
    for (unsigned y = 0; y < input.height; ++y)
        for (unsigned x = 0; x < input.width; ++x) {
            auto *p = input.rgba.data() + (y * input.width + x) * 4;
            p[0] = p[1] = p[2] = static_cast<std::uint8_t>(x); p[3] = 255;
        }
    motorstorm::PostSettings settings;
    // This patterned gradient exercises debanding, CAS, grade and dither.
    for (unsigned y = 0; y < input.height; ++y)
        for (unsigned x = 0; x < input.width; ++x) {
            auto *p = input.rgba.data() + (y * input.width + x) * 4;
            p[0] = p[1] = p[2] = static_cast<std::uint8_t>(120 + (x + y) % 3);
        }
    if (motorstorm::gpu_debug_post(input, settings, 0.0f).rgba != input.rgba)
        throw std::runtime_error("Zero fade must preserve the original pixels, including debanding and dither");
    if (motorstorm::gpu_debug_post(input, settings, 1.0f).rgba == input.rgba)
        throw std::runtime_error("Post effects must actually change the GPU image");
    settings.color_correction = settings.sharpening = false;
    if (motorstorm::gpu_debug_post(input, settings, 0.0f).rgba != input.rgba ||
        motorstorm::gpu_debug_post(input, settings, 1.0f).rgba == input.rgba)
        throw std::runtime_error("Debanding must fade independently of the other effects");
    // Async colour results use full float32 RGB; moving colour work out of the
    // monitor-resolution pixel shader must preserve the original post pixels.
    motorstorm::GpuImage pattern{37,19,std::vector<std::uint8_t>(37*19*4)};
    for (std::size_t p = 0; p < pattern.rgba.size(); p += 4) {
        pattern.rgba[p] = static_cast<std::uint8_t>((p*31+17)%256);
        pattern.rgba[p+1] = static_cast<std::uint8_t>((p*13+85)%256);
        pattern.rgba[p+2] = static_cast<std::uint8_t>((p*47+33)%256);
        pattern.rgba[p+3] = 255;
    }
    for (float fade : {0.0f,0.1f,0.5f,1.0f}) {
            settings = motorstorm::PostSettings{};
            settings.exposure = 0.3f; settings.contrast = 1.2f;
            settings.temperature = 0.25f; settings.tint = -0.1f;
            settings.saturation = 1.1f;
            const auto async = motorstorm::gpu_debug_post(pattern,settings,fade);
            const auto reference = motorstorm::gpu_debug_post(pattern,settings,fade,true);
            if (async.rgba != reference.rgba)
                throw std::runtime_error("Async float32 post output must equal reference shader pixels");
        }
    std::puts("Async float32 post colour matches reference pixels for all grades and fades");
    // HUD mask: pixels tagged in the depth snapshot keep the game's colours;
    // everything beyond the mask and the sharpening footprint is graded exactly as before.
    for (unsigned y = 0; y < input.height; ++y)
        for (unsigned x = 0; x < input.width; ++x) {
            auto *p = input.rgba.data() + (y * input.width + x) * 4;
            p[0] = p[1] = p[2] = static_cast<std::uint8_t>(120 + (x + y) % 3);
        }
    settings = motorstorm::PostSettings{};
    settings.exposure = 0.75f;
    std::vector<std::uint32_t> tags(input.width * input.height, 777u), untagged = tags;
    for (unsigned y = 2; y <= 5; ++y)
        for (unsigned x = 100; x <= 140; ++x)
            tags[y * input.width + x] |= 0x10000u;
    const auto graded = motorstorm::gpu_debug_post(input, settings, 1.0f);
    if (motorstorm::gpu_debug_post(input, settings, 1.0f, false, &untagged).rgba != graded.rgba)
        throw std::runtime_error("A depth snapshot without HUD tags must not change the post image");
    const auto masked = motorstorm::gpu_debug_post(input, settings, 1.0f, false, &tags);
    if (masked.rgba != motorstorm::gpu_debug_post(input, settings, 1.0f, true, &tags).rgba)
        throw std::runtime_error("HUD mask must match between the async and reference post paths");
    unsigned graded_in_hud = 0;
    for (unsigned y = 0; y < input.height; ++y)
        for (unsigned x = 0; x < input.width; ++x) {
            const bool hud = y >= 2 && y <= 5 && x >= 100 && x <= 140;
            // The mask, its one-pixel dilation and the sharpening footprint reach 3 pixels out.
            const bool distant = (x <= 97 || x >= 143);
            for (unsigned c = 0; c < 3; ++c) {
                const int in = input.rgba[(y * input.width + x) * 4 + c];
                const int g = graded.rgba[(y * input.width + x) * 4 + c];
                const int m = masked.rgba[(y * input.width + x) * 4 + c];
                if (hud && std::abs(m - in) > 1)  // only the final dither may touch the HUD
                    throw std::runtime_error("HUD pixels must keep the game's colours");
                if (hud && std::abs(g - in) > 1) ++graded_in_hud;
                if (distant && m != g)
                    throw std::runtime_error("The HUD mask must not change pixels away from the HUD");
            }
        }
    if (graded_in_hud < 100)
        throw std::runtime_error("The HUD mask test needs a grade that actually changes those pixels");
    std::puts("HUD mask: tagged pixels keep game colours, distant pixels graded exactly as before");
    std::puts("GPU post pixels: remaining effects, HUD protection and complete fade verified");
}

void widescreen_pixels(psprecomp::GuestMemory &memory) {
    motorstorm::gpu_shutdown();
    _putenv_s("PSPRECOMP_MOTORSTORM_WIDESCREEN", "auto");
    const auto run = [&](unsigned width, unsigned height, bool racing, bool hardware,
                         float left, float top, float right, float bottom, bool partial_scissor = false,
                         unsigned rows = 272) {
        motorstorm::gpu_set_output_size(width, height);
        motorstorm::gpu_set_racing(racing);
        memory.zero(kColor, 512u * rows * 4);
        motorstorm::gpu_initialize();
        motorstorm::GpuDraw draw;
        draw.framebuffer = kColor; draw.stride = 512; draw.format = 3;
        draw.right = 480; draw.bottom = static_cast<int>(rows);
        draw.hardware_transform = hardware;
        draw.model_to_clip = {1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1};
        draw.scale = {240, -136, 1, 0}; draw.center = {240, 136, 0, 0};
        if (partial_scissor) { draw.left = 20; draw.right = 100; }
        const auto v = [](float x, float y) {
            return motorstorm::GpuVertex{x,y,0,0xFFFFFFFFu};
        };
        const std::array vertices{v(left,top),v(right,top),v(left,bottom),
                                 v(left,bottom),v(right,top),v(right,bottom)};
        motorstorm::gpu_submit(memory, draw, vertices, nullptr);
        motorstorm::gpu_sync(memory);
        return motorstorm::gpu_capture(memory, kColor, 512, 3, 480, 272);
    };
    const auto count = [](const motorstorm::GpuImage &image) {
        unsigned count = 0;
        for (std::size_t p = 0; p < image.rgba.size(); p += 4)
            if (image.rgba[p]) ++count;
        return count;
    };
    if (count(run(480,272,true,true,1.1f,-0.1f,1.2f,0.1f)) != 0)
        throw std::runtime_error("Native frustum must clip geometry beyond its horizontal edge");
    for (const auto size : {std::array{1920u,1080u}, std::array{2560u,1080u}, std::array{3840u,1080u}}) {
        const float aspect = motorstorm::widescreen_scale(size[0], size[1]);
        const auto world = run(size[0],size[1],true,true,-0.25f,-0.1f,0.25f,0.1f);
        const unsigned area = count(world);
        // Horizontal expansion must compensate presentation, keeping objects
        // the same physical width/height rather than stretching or cropping.
        if (std::fabs(static_cast<float>(area) * aspect - 120.0f * 28.0f) > 120.0f)
            throw std::runtime_error("Widescreen world geometry changed its displayed proportions");
        if (aspect > 1.2f && count(run(size[0],size[1],true,true,1.1f,-0.1f,1.2f,0.1f)) == 0)
            throw std::runtime_error("Ultrawide must reveal geometry beyond the PSP frustum");
        const auto hud = run(size[0],size[1],true,false,20,20,100,60,true);
        const int expected_left = static_cast<int>(std::ceil(motorstorm::widescreen_hud_x(20,aspect)-0.5f));
        const int expected_right = static_cast<int>(std::ceil(motorstorm::widescreen_hud_x(100,aspect)-0.5f));
        for (int x = 0; x < 480; ++x) {
            const bool on = hud.rgba[(30*480+x)*4] != 0;
            if (on != (x >= expected_left && x < expected_right))
                throw std::runtime_error("Centred HUD position, width or scissor changed on an ultrawide display");
        }
        if (count(run(size[0],size[1],true,false,0,0,480,272)) != 480u*272u)
            throw std::runtime_error("Full-screen overlays must cover the expanded image");
        if (count(run(size[0],size[1],false,true,1.1f,-0.1f,1.2f,0.1f)) != 0)
            throw std::runtime_error("Menus must retain their native frustum on wider monitors");
    }
    // The race framebuffer is 512x296: its taller scissor must widen exactly like
    // the 272-row menu target (it once silently did not).
    for (const auto size : {std::array{1920u,1080u}, std::array{3440u,1440u}}) {
        const float aspect = motorstorm::widescreen_scale(size[0], size[1]);
        const unsigned area = count(run(size[0],size[1],true,true,-0.25f,-0.1f,0.25f,0.1f,false,296));
        if (std::fabs(static_cast<float>(area) * aspect - 120.0f * 28.0f) > 120.0f)
            throw std::runtime_error("Widescreen world geometry changed its proportions on the 296-row race target");
        if (aspect > 1.2f && count(run(size[0],size[1],true,true,1.1f,-0.1f,1.2f,0.1f,false,296)) == 0)
            throw std::runtime_error("Ultrawide must reveal geometry beyond the PSP frustum on the 296-row race target");
        if (aspect > 1.2f && count(run(size[0],size[1],true,false,0,0,480,272,false,296)) != 480u*272u)
            throw std::runtime_error("Full-screen overlays must cover the expanded 296-row race target");
    }
    // When the game itself renders the wider view (its camera aspect was raised),
    // the shader must not widen 3D geometry again, while the HUD keeps its
    // centred safe area. The same model-space quad then covers its native area.
    motorstorm::gpu_set_guest_widescreen(true);
    for (const unsigned rows : {272u, 296u}) {
        const auto size = std::array{3440u, 1440u};
        const float aspect = motorstorm::widescreen_scale(size[0], size[1]);
        const unsigned area = count(run(size[0],size[1],true,true,-0.25f,-0.1f,0.25f,0.1f,false,rows));
        if (std::fabs(static_cast<float>(area) - 120.0f * 28.0f) > 120.0f)
            throw std::runtime_error("With a widened game camera the shader must leave 3D geometry unscaled");
        if (count(run(size[0],size[1],true,true,1.1f,-0.1f,1.2f,0.1f,false,rows)) != 0)
            throw std::runtime_error("With a widened game camera the shader must not widen the frustum itself");
        const auto hud = run(size[0],size[1],true,false,20,20,100,60,true,rows);
        const int expected_left = static_cast<int>(std::ceil(motorstorm::widescreen_hud_x(20,aspect)-0.5f));
        const int expected_right = static_cast<int>(std::ceil(motorstorm::widescreen_hud_x(100,aspect)-0.5f));
        for (int x = 0; x < 480; ++x)
            if ((hud.rgba[(30*480+x)*4] != 0) != (x >= expected_left && x < expected_right))
                throw std::runtime_error("The HUD safe area must stay centred with a widened game camera");
    }
    motorstorm::gpu_set_guest_widescreen(false);
    motorstorm::gpu_shutdown();
    _putenv_s("PSPRECOMP_MOTORSTORM_WIDESCREEN", "psp");
    if (count(run(3840,1080,true,true,1.1f,-0.1f,1.2f,0.1f)) != 0)
        throw std::runtime_error("The PSP aspect option must disable the widened frustum");
    motorstorm::gpu_shutdown();
    _putenv_s("PSPRECOMP_MOTORSTORM_WIDESCREEN", "");
    motorstorm::gpu_set_output_size(480,272);
    motorstorm::gpu_set_racing(false);
    std::puts("GPU widescreen: 16:9 / 21:9 / 32:9 Hor+, HUD/scissors, overlays, menus and PSP opt-out passed");
}

// The race HUD (through-mode draws) is tagged in the depth words while racing;
// the game's own view of the depth buffer must stay exactly what it was.
void hud_tag_pixels(psprecomp::GuestMemory &memory) {
    constexpr std::uint32_t kStride = 512, kRows = 296;  // the race framebuffer is 512x296
    const auto run = [&](bool racing, const char *hud_ungraded, bool overlay = false, bool transparent = false) {
        motorstorm::gpu_shutdown();
        _putenv_s("PSPRECOMP_MOTORSTORM_POST_HUD_UNGRADED", hud_ungraded);
        motorstorm::gpu_set_output_size(480, 272);
        motorstorm::gpu_set_racing(racing);
        memory.zero(kColor, kStride * kRows * 4);
        for (std::uint32_t i = 0; i < kStride * kRows; ++i) memory.store16(kDepth + i * 2, 40000);
        motorstorm::gpu_initialize();
        motorstorm::GpuDraw draw;
        draw.framebuffer = kColor; draw.stride = kStride; draw.format = 3;
        draw.depthbuffer = kDepth; draw.depth_stride = kStride;
        draw.right = kStride; draw.bottom = kRows;
        draw.model_to_clip = {1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1};
        draw.scale = {240, -136, 1, 0}; draw.center = {240, 136, 1000, 0};
        const auto quad = [&](float l, float t, float r, float b, std::uint32_t color = 0xFFFFFFFFu) {
            const auto v = [&](float x, float y) { return motorstorm::GpuVertex{x, y, 0, color}; };
            return std::array{v(l,t), v(r,t), v(l,b), v(l,b), v(r,t), v(r,b)};
        };
        // The 3D scene: depth test (always) and depth write on, depth 1000.
        draw.hardware_transform = true;
        draw.commands[0x23] = 1; draw.commands[0xDE] = 1;
        // Dark grey, so a white HUD pixel drawn over it visibly changes it.
        motorstorm::gpu_submit(memory, draw, quad(-0.5f, -0.5f, 0.0f, 0.5f, 0xFF404040u), nullptr);
        // The HUD: through mode in screen coordinates, depth test off.
        draw.hardware_transform = false;
        draw.commands[0x23] = 0;
        // A full-picture overlay (tint, fade) is not HUD artwork and must not be tagged,
        // or the whole frame would escape the grade (as it once did in real races).
        auto hud = overlay ? quad(0, 0, 512, 296) : quad(200, 100, 320, 160);
        if (transparent) {
            for (auto &v : hud) v.color = 0x00FFFFFFu;  // fully transparent HUD pixels, source-alpha blended
            draw.commands[0x21] = 1; draw.commands[0xDF] = 0x32;
        }
        motorstorm::gpu_submit(memory, draw, hud, nullptr);
        motorstorm::gpu_sync(memory);
        return motorstorm::gpu_debug_depth_words(memory, kColor, kStride, 3, 480, 272);
    };
    const auto at = [](const std::vector<std::uint32_t> &words, unsigned x, unsigned y) { return words[y * 480 + x]; };
    const auto tagged = run(true, "1");
    if (tagged.size() != 480u * 272u)
        throw std::runtime_error("The depth snapshot must cover the displayed target");
    if (at(tagged, 250, 130) != (40000u | 0x10000u) || at(tagged, 220, 130) != (1000u | 0x10000u) ||
        (at(tagged, 150, 130) >> 16) != 0u || (at(tagged, 150, 130) & 0xFFFF) != 1000u ||
        at(tagged, 400, 50) != 40000u)
        throw std::runtime_error("Through-mode pixels must carry the HUD tag; 3D and untouched pixels must not");
    for (const auto word : run(true, "1", true))
        if (word >> 16)
            throw std::runtime_error("A full-picture overlay must not be tagged as HUD");
    for (const auto word : run(true, "1", false, true))
        if (word >> 16)
            throw std::runtime_error("The transparent part of a HUD quad must not be tagged");
    // A tagged pixel does not alter the guest-visible depth (the readback keeps 16 bits).
    if (memory.load16(kDepth + (130 * kStride + 250) * 2) != 40000 ||
        memory.load16(kDepth + (130 * kStride + 150) * 2) != 1000)
        throw std::runtime_error("The HUD tag must never reach guest memory");
    for (const auto &[racing, hud_ungraded] : {std::pair{false, "1"}, std::pair{true, "0"}}) {
        const auto words = run(racing, hud_ungraded);
        for (const auto word : words)
            if (word >> 16)
                throw std::runtime_error("HUD tags must be off outside races or with hud_ungraded = false");
    }
    motorstorm::gpu_shutdown();
    _putenv_s("PSPRECOMP_MOTORSTORM_POST_HUD_UNGRADED", "");
    motorstorm::gpu_set_racing(false);
    std::puts("HUD tag: through-mode pixels tagged in the depth snapshot only while racing, guest depth untouched");
}


// Soft particles: a camera-facing blended draw fades out where it meets the scene;
// a ground decal (geometry spanning a range of view depths) keeps its full strength;
// and nothing changes while the option is off or outside a race.
void soft_particle_pixels(psprecomp::GuestMemory &memory) {
    constexpr std::uint32_t kStride = 512, kRows = 296;
    const auto run = [&](bool racing, const char *enabled, std::array<std::array<float, 4>, 3> *out_alpha = nullptr) {
        motorstorm::gpu_shutdown();
        _putenv_s("PSPRECOMP_MOTORSTORM_POST_SOFT_PARTICLES", enabled);
        _putenv_s("PSPRECOMP_MOTORSTORM_POST_SOFT_PARTICLE_SOFTNESS", "500");
        motorstorm::gpu_set_output_size(480, 272);
        motorstorm::gpu_set_racing(racing);
        memory.zero(kColor, kStride * kRows * 4);
        for (std::uint32_t i = 0; i < kStride * kRows; ++i) memory.store16(kDepth + i * 2, 0);
        motorstorm::gpu_initialize();
        motorstorm::GpuDraw draw;
        draw.framebuffer = kColor; draw.stride = kStride; draw.format = 3;
        draw.depthbuffer = kDepth; draw.depth_stride = kStride;
        draw.right = kStride; draw.bottom = kRows;
        draw.model_to_clip = {1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1};
        draw.scale = {240, -136, 1, 0}; draw.center = {240, 136, 1000, 0};
        draw.hardware_transform = true;
        const auto vertex = [](float screen_x, float screen_y, float z, std::uint32_t color) {
            return motorstorm::GpuVertex{(screen_x - 240.0f) / 240.0f, (screen_y - 136.0f) / -136.0f, z, color};
        };
        const auto quad = [&](float l, float t, float r, float b, float z, std::uint32_t color = 0xFFFFFFFFu) {
            return std::vector{vertex(l,t,z,color), vertex(r,t,z,color), vertex(l,b,z,color), vertex(l,b,z,color),
                               vertex(r,t,z,color), vertex(r,b,z,color)};
        };
        // The scene: black, depth word 5000 everywhere (depth test always, depth write on).
        draw.commands[0x23] = 1; draw.commands[0xDE] = 1;
        motorstorm::gpu_submit(memory, draw, quad(0, 0, 480, 272, 4000.0f, 0xFF000000u), nullptr);
        // Particles: blended with source alpha, depth test less-or-equal, depth write off.
        draw.commands[0x21] = 1; draw.commands[0xDF] = 0x32; draw.commands[0xDE] = 5; draw.commands[0xE7] = 1;
        auto near_surface = quad(100, 100, 200, 150, 3900.0f);  // 100 in front of the scene: fade 0.2
        const auto far_in_front = quad(250, 100, 350, 150, 3000.0f);  // 1000 in front: full strength
        near_surface.insert(near_surface.end(), far_in_front.begin(), far_in_front.end());
        motorstorm::gpu_submit(memory, draw, near_surface, nullptr);
        // A ground decal: the same depth next to the surface, but its depth varies with y.
        draw.model_to_view_z = {0, -5, 0, 10};
        motorstorm::gpu_submit(memory, draw, quad(100, 200, 200, 250, 3900.0f), nullptr);
        motorstorm::gpu_sync(memory);
        const auto image = motorstorm::gpu_capture(memory, kColor, kStride, 3, 480, 272);
        const auto channel = [&](unsigned x, unsigned y) { return static_cast<int>(image.rgba[(y * 480 + x) * 4]); };
        if (out_alpha) (*out_alpha)[0] = {static_cast<float>(channel(150, 125)), static_cast<float>(channel(300, 125)),
                                           static_cast<float>(channel(150, 225)), 0.0f};
        return image;
    };
    std::array<std::array<float, 4>, 3> soft{};
    run(true, "1", &soft);
    if (soft[0][1] < 250.0f)
        throw std::runtime_error("A particle well in front of the scene must keep its full strength");
    if (soft[0][0] < 35.0f || soft[0][0] > 75.0f)
        throw std::runtime_error("A particle just in front of the scene must fade (about 0.2 of full); got " +
                                 std::to_string(soft[0][0]) + " near, " + std::to_string(soft[0][1]) + " far, " +
                                 std::to_string(soft[0][2]) + " decal");
    if (soft[0][2] < 250.0f)
        throw std::runtime_error("A ground decal (spanning view depths) must not be softened");
    std::array<std::array<float, 4>, 3> plain{};
    run(true, "0", &plain);
    if (plain[0][0] < 250.0f || plain[0][1] < 250.0f || plain[0][2] < 250.0f)
        throw std::runtime_error("Soft particles must change nothing while the option is off");
    std::array<std::array<float, 4>, 3> menu{};
    run(false, "1", &menu);
    if (menu[0][0] < 250.0f)
        throw std::runtime_error("Soft particles must change nothing outside a race");
    motorstorm::gpu_shutdown();
    _putenv_s("PSPRECOMP_MOTORSTORM_POST_SOFT_PARTICLES", "");
    _putenv_s("PSPRECOMP_MOTORSTORM_POST_SOFT_PARTICLE_SOFTNESS", "");
    motorstorm::gpu_set_racing(false);
    std::puts("Soft particles: billboards fade at the scene, ground decals and menus untouched");
}


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
        post_pixels();
        widescreen_pixels(memory);
        hud_tag_pixels(memory);
        soft_particle_pixels(memory);
        indexed_vertex_cache(memory);
        replacement_alpha(memory);
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
        // 32-bit colour while racing: 16-bit targets keep the dropped colour
        // bits on the GPU, but what the game reads back stays PSP exact.
        motorstorm::gpu_set_racing(true);
        for (std::size_t i = 0; i < cases.size(); ++i)
            if (run(memory, cases[i]) != expected[i]) {
                std::fprintf(stderr, "32-bit colour changed guest pixels case=%zu format=%u\n", i, cases[i].format);
                return 1;
            }
        const auto pixel = [&](bool racing) {
            motorstorm::gpu_set_racing(racing);
            run(memory, Case{0, {}});  // RGB565 sprite of colour D0 B0 90
            const auto image = motorstorm::gpu_capture(memory, kColor, 32, 0, 32, 32);
            const auto *p = image.rgba.data() + (10 * 32 + 10) * 4;
            return std::array<std::uint8_t, 3>{p[0], p[1], p[2]};
        };
        if (pixel(true) != std::array<std::uint8_t, 3>{0xD0, 0xB0, 0x90} ||
            pixel(false) != std::array<std::uint8_t, 3>{214, 178, 148})
            throw std::runtime_error("32-bit colour must show full channels in RGB565 only while racing");
        run(memory, Case{3, {}});  // the presentation checks below show a 32-bit target
        std::puts("32-bit colour in 16-bit targets: guest pixels exact, display precision restored");
        decode_parity();
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
        for (const int resolution : {1, 2, 3, 4, 8})
            for (const char *aa : {"none", "fxaa", "ssaa2x", "ssaa4x"}) {
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
                // Race enhancements run their passes at every scale and AA mode.
                motorstorm::gpu_set_racing(true);
                for (int frame = 0; frame < 3; ++frame) {
                    if (!motorstorm::gpu_present(memory, scaled_window, kColor, 32, 3, 32, 32))
                        throw std::runtime_error("Enhanced GPU presentation failed");
                    Sleep(20);
                }
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
