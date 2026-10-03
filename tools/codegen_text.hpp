#pragma once

#include <charconv>
#include <string>
#include <string_view>
#include <type_traits>
#include <utility>

namespace psprecomp {

// Source emission uses only text and decimal integers. Avoid constructing a
// locale-aware stringstream for each guest instruction; MSVC's stream machinery
// becomes costly under high concurrency. Character insertion stays character
// insertion and numeric insertion uses the same decimal representation.
class CodegenText {
public:
    CodegenText &operator<<(std::string_view text) { text_.append(text); return *this; }
    CodegenText &operator<<(const std::string &text) { text_ += text; return *this; }
    CodegenText &operator<<(const char *text) { text_ += text; return *this; }
    CodegenText &operator<<(char value) { text_ += value; return *this; }
    CodegenText &operator<<(unsigned char value) { text_ += static_cast<char>(value); return *this; }
    CodegenText &operator<<(signed char value) { text_ += static_cast<char>(value); return *this; }
    CodegenText &operator<<(bool value) { text_ += value ? '1' : '0'; return *this; }
    template <class Integer> requires std::is_integral_v<Integer>
    CodegenText &operator<<(Integer value) {
        char buffer[32];
        const auto converted = std::to_chars(buffer, buffer + sizeof(buffer), value);
        text_.append(buffer, converted.ptr);
        return *this;
    }
    void reserve(std::size_t capacity) { text_.reserve(capacity); }
    std::size_t size() const noexcept { return text_.size(); }
    std::string take() { return std::exchange(text_, {}); }
private:
    std::string text_;
};

} // namespace psprecomp
