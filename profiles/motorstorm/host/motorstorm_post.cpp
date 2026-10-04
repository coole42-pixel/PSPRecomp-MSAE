#include "motorstorm_post.hpp"

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string_view>

namespace motorstorm {
namespace {
const char *option(const char *name) {
    const char *value = std::getenv(name);
    return value && *value ? value : nullptr;
}
bool flag(const char *name, bool fallback) {
    const char *value = option(name);
    if (!value)
        return fallback;
    return std::strcmp(value, "0") != 0 && std::strcmp(value, "false") != 0 && std::strcmp(value, "off") != 0;
}
float real(const char *name, float fallback, float minimum, float maximum) {
    const char *value = option(name);
    if (!value)
        return fallback;
    char *end{};
    const float parsed = std::strtof(value, &end);
    return end != value && std::isfinite(parsed) ? std::clamp(parsed, minimum, maximum) : fallback;
}
float luma(const std::array<float, 3> &c) { return 0.2126f * c[0] + 0.7152f * c[1] + 0.0722f * c[2]; }
} // namespace

PostSettings post_settings_from_environment() {
    PostSettings settings;
    settings.enabled = flag("PSPRECOMP_MOTORSTORM_POST", settings.enabled);
    if (const char *depth = option("PSPRECOMP_MOTORSTORM_POST_COLOR_DEPTH"))
        settings.extended_color = std::string_view(depth) != "16";
    if (const char *tonemap = option("PSPRECOMP_MOTORSTORM_POST_TONEMAP"))
        settings.agx = std::string_view(tonemap) == "agx";
    if (const char *look = option("PSPRECOMP_MOTORSTORM_POST_AGX_LOOK")) {
        const std::string_view text = look;
        settings.agx_look = text == "golden" ? 2u : text == "punchy" ? 1u : 0u;
    }
    settings.hdr_peak = real("PSPRECOMP_MOTORSTORM_POST_HDR_PEAK", settings.hdr_peak, 1.0f, 16.0f);
    settings.color_correction = flag("PSPRECOMP_MOTORSTORM_POST_COLOR_CORRECTION", settings.color_correction);
    settings.exposure = real("PSPRECOMP_MOTORSTORM_POST_EXPOSURE", settings.exposure, -3.0f, 3.0f);
    settings.contrast = real("PSPRECOMP_MOTORSTORM_POST_CONTRAST", settings.contrast, 0.5f, 2.0f);
    settings.saturation = real("PSPRECOMP_MOTORSTORM_POST_SATURATION", settings.saturation, 0.0f, 2.0f);
    settings.temperature = real("PSPRECOMP_MOTORSTORM_POST_TEMPERATURE", settings.temperature, -1.0f, 1.0f);
    settings.tint = real("PSPRECOMP_MOTORSTORM_POST_TINT", settings.tint, -1.0f, 1.0f);
    settings.lut = flag("PSPRECOMP_MOTORSTORM_POST_LUT", settings.lut);
    if (const char *file = option("PSPRECOMP_MOTORSTORM_POST_LUT_FILE"))
        settings.lut_file = file;
    settings.lut_strength = real("PSPRECOMP_MOTORSTORM_POST_LUT_STRENGTH", settings.lut_strength, 0.0f, 1.0f);
    settings.sharpening = flag("PSPRECOMP_MOTORSTORM_POST_SHARPEN", settings.sharpening);
    settings.sharpening_strength =
        real("PSPRECOMP_MOTORSTORM_POST_SHARPEN_STRENGTH", settings.sharpening_strength, 0.0f, 1.0f);
    return settings;
}

ColorLut build_photoreal_lut(std::uint32_t size) {
    size = std::clamp(size, 2u, 65u);
    ColorLut lut;
    lut.size = size;
    lut.entries.reserve(static_cast<std::size_t>(size) * size * size);
    const float step = 1.0f / static_cast<float>(size - 1u);
    for (std::uint32_t b = 0; b < size; ++b)
        for (std::uint32_t g = 0; g < size; ++g)
            for (std::uint32_t r = 0; r < size; ++r) {
                std::array<float, 3> c{r * step, g * step, b * step};
                // Gentle S-curve: a little more depth without crushing ends.
                for (auto &v : c)
                    v += 0.10f * (v * v * (3.0f - 2.0f * v) - v);
                // Split toning: cool shadows, warm highlights. Both weights are
                // zero at black and white so neither end is tinted.
                const float y = luma(c);
                const float shadows = 6.75f * y * (1.0f - y) * (1.0f - y);
                const float highlights = 6.75f * y * y * (1.0f - y);
                c[0] += -0.010f * shadows + 0.012f * highlights;
                c[1] += 0.003f * shadows + 0.004f * highlights;
                c[2] += 0.014f * shadows - 0.014f * highlights;
                // Earthier greens: vivid PSP greens lean a little toward olive.
                const float green = std::max(0.0f, c[1] - std::max(c[0], c[2]));
                c[0] += 0.06f * green;
                c[2] -= 0.03f * green;
                // Film-like saturation: soften the most saturated colours,
                // lift muted ones slightly (around the colour's own luminance).
                const float high = std::max({c[0], c[1], c[2]}), low = std::min({c[0], c[1], c[2]});
                const float chroma = high > 1e-5f ? (high - low) / high : 0.0f;
                const float factor = 1.0f + 0.20f * chroma * (1.0f - chroma) - 0.12f * chroma * chroma;
                const float centre = luma(c);
                for (auto &v : c)
                    v = std::clamp(centre + (v - centre) * factor, 0.0f, 1.0f);
                lut.entries.push_back(c);
            }
    return lut;
}

ColorLut load_cube_lut(const std::filesystem::path &path) {
    std::ifstream input(path);
    if (!input)
        throw std::runtime_error("cannot open LUT " + path.string());
    ColorLut lut;
    std::string line;
    std::size_t number = 0;
    const auto fail = [&](const std::string &why) {
        throw std::runtime_error(path.string() + ":" + std::to_string(number) + ": " + why);
    };
    while (std::getline(input, line)) {
        ++number;
        if (number == 1u && line.starts_with("\xEF\xBB\xBF"))
            line.erase(0u, 3u);
        const auto first = line.find_first_not_of(" \t\r");
        if (first == std::string::npos || line[first] == '#')
            continue;
        std::istringstream fields(line.substr(first));
        if (std::isalpha(static_cast<unsigned char>(line[first]))) {
            std::string keyword;
            fields >> keyword;
            if (keyword == "LUT_3D_SIZE") {
                fields >> lut.size;
                if (!fields || lut.size < 2u || lut.size > 65u)
                    fail("LUT_3D_SIZE must be 2 to 65");
                lut.entries.reserve(static_cast<std::size_t>(lut.size) * lut.size * lut.size);
            } else if (keyword == "LUT_1D_SIZE") {
                fail("1D LUTs are not supported; use a 3D .cube LUT");
            } else if (keyword == "DOMAIN_MIN" || keyword == "DOMAIN_MAX") {
                float a{}, b{}, c{};
                fields >> a >> b >> c;
                const float expected = keyword == "DOMAIN_MIN" ? 0.0f : 1.0f;
                if (!fields || a != expected || b != expected || c != expected)
                    fail("only the default 0..1 domain is supported");
            }
            // TITLE and other keywords carry no data.
            continue;
        }
        std::array<float, 3> entry{};
        fields >> entry[0] >> entry[1] >> entry[2];
        if (!fields)
            fail("expected three numbers");
        if (lut.size == 0u)
            fail("data before LUT_3D_SIZE");
        for (auto &v : entry)
            v = std::clamp(v, 0.0f, 1.0f);
        lut.entries.push_back(entry);
    }
    if (lut.size == 0u)
        throw std::runtime_error(path.string() + ": no LUT_3D_SIZE");
    if (lut.entries.size() != static_cast<std::size_t>(lut.size) * lut.size * lut.size)
        throw std::runtime_error(path.string() + ": expected " +
                                 std::to_string(static_cast<std::size_t>(lut.size) * lut.size * lut.size) +
                                 " entries, found " + std::to_string(lut.entries.size()));
    return lut;
}

std::vector<std::uint32_t> pack_lut(const ColorLut &lut) {
    std::vector<std::uint32_t> packed;
    packed.reserve(lut.entries.size());
    for (const auto &c : lut.entries) {
        const auto channel = [](float v) {
            return static_cast<std::uint32_t>(std::lround(std::clamp(v, 0.0f, 1.0f) * 1023.0f));
        };
        packed.push_back(channel(c[0]) | (channel(c[1]) << 10) | (channel(c[2]) << 20));
    }
    return packed;
}

float agx_display(float srgb, float hdr_peak, float gain, std::uint32_t look) noexcept {
    // Mirrors toLinear, expandSdr and agx() in motorstorm_gpu.hlsl for a grey
    // input (the inset/outset matrices leave greys unchanged).
    srgb = std::clamp(srgb, 0.0f, 1.0f);
    const float linear = srgb < 0.04045f ? srgb / 12.92f : std::pow((srgb + 0.055f) / 1.055f, 2.4f);
    float scene = gain * linear / (1.0f - linear * (1.0f - 1.0f / hdr_peak));
    constexpr float kMinEv = -12.473931188332413f, kMaxEv = 4.026068811667588f, kThreshold = 0.6060606060606061f;
    // Soft shoulder on the synthetic HDR input. Large peaks and exposure must
    // approach AgX's upper range rather than hit its hard log-domain clamp.
    const float ceiling = std::exp2(kMaxEv), knee = ceiling * 0.5f;
    if (scene > knee)
        scene = knee + (scene - knee) / (1.0f + (scene - knee) / knee);
    const float v = std::clamp((std::log2(std::max(scene, 1e-10f)) - kMinEv) / (kMaxEv - kMinEv), 0.0f, 1.0f);
    const bool down = v <= kThreshold;
    const float a = down ? 59.507875f : 69.86278913545539f, b = down ? 3.0f : 3.25f,
                c = down ? -1.0f / 3.0f : -4.0f / 13.0f;
    float out = 0.5f + (2.0f * v - 2.0f * kThreshold) * std::pow(1.0f + a * std::pow(std::fabs(v - kThreshold), b), c);
    if (look == 1u)
        out = std::pow(std::max(out, 0.0f), 1.35f);
    else if (look == 2u) {
        const float o = std::max(out, 0.0f);
        std::array<float, 3> c{std::pow(o, 0.8f), std::pow(0.9f * o, 0.8f), std::pow(0.5f * o, 0.8f)};
        const float y = luma(c);
        for (auto &channel : c)
            channel = y + 0.8f * (channel - y);
        // Golden makes a grey chromatic: unlike the neutral and punchy looks,
        // the outset matrix and per-channel clamp no longer cancel.
        const std::array<float, 3> display{
            1.1969986613119143f*c[0] - 0.09804562695225345f*c[1] - 0.09895303435966087f*c[2],
            -0.053001338688085674f*c[0] + 1.1519543730477466f*c[1] - 0.09895303435966087f*c[2],
            -0.053001338688085674f*c[0] - 0.09804562695225345f*c[1] + 1.151046965640339f*c[2]};
        std::array<float, 3> bounded = display;
        for (auto &channel : bounded)
            channel = std::clamp(channel, 0.0f, 1.0f);
        out = luma(bounded);
    }
    return std::clamp(out, 0.0f, 1.0f);
}

float agx_mid_grey_gain(float hdr_peak, std::uint32_t look) noexcept {
    constexpr float kMidGrey = 0.46f;
    float low = 0.05f, high = 20.0f;  // the output rises with the gain
    for (int i = 0; i < 60; ++i) {
        const float mid = std::sqrt(low * high);
        (agx_display(kMidGrey, hdr_peak, mid, look) < kMidGrey ? low : high) = mid;
    }
    return std::sqrt(low * high);
}

std::array<float, 3> white_balance(float temperature, float tint) noexcept {
    temperature = std::clamp(temperature, -1.0f, 1.0f);
    tint = std::clamp(tint, -1.0f, 1.0f);
    std::array<float, 3> m{1.0f + 0.10f * temperature, 1.0f - 0.08f * tint, 1.0f - 0.10f * temperature};
    const float y = luma(m);
    for (auto &v : m)
        v /= y;
    return m;
}

} // namespace motorstorm
