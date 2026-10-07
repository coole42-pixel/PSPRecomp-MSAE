#pragma once

#include <cstdlib>
#include <string_view>

namespace motorstorm {
// Preserve the distinct measured platform defaults when no diagnostic override
// is supplied. In particular, Android must not inherit Windows' eager mode.
constexpr bool lazy_publication_policy(const char *override_value, bool android) noexcept {
    if (!override_value || !*override_value)
        return android;
    const std::string_view value(override_value);
    return value != "0" && value != "false";
}
} // namespace motorstorm

// Presence of a diagnostic environment switch, read once per call site.
// std::getenv scans the whole environment block on every call; several trace
// switches are checked per frame, per GE list or per audio block.
#define MOTORSTORM_ENV_FLAG(name) \
    ([]() noexcept { static const bool value = std::getenv(name) != nullptr; return value; }())
