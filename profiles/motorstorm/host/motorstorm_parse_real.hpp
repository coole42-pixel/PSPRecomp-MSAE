#pragma once
#include <charconv>
#include <cmath>
#include <string>
#include <string_view>
#include <cstdlib>
#include <cerrno>
namespace motorstorm {
template<class Real> bool parse_real(std::string_view text, Real &value) {
#if defined(__ANDROID__)
    // NDK libc++ does not implement floating-point from_chars. The Android
    // process retains the C locale; reject leading whitespace/+ as from_chars does.
    if(text.empty() || text.front()=='+' || text.front()<=' ')return false;
    const std::string terminated(text);char *end{};errno=0;
    const double parsed=std::strtod(terminated.c_str(),&end);
    if(errno==ERANGE || end!=terminated.c_str()+terminated.size() || !std::isfinite(parsed))return false;
    value=static_cast<Real>(parsed);return std::isfinite(value);
#else
    const auto result=std::from_chars(text.data(),text.data()+text.size(),value);
    return result.ec==std::errc{} && result.ptr==text.data()+text.size();
#endif
}
}
