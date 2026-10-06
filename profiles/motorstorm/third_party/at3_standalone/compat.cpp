// av_log for the standalone ATRAC decoders. Written for this profile in place of
// PPSSPP's compat.cpp, which routes to PPSSPP's logging (not PPSSPP code).
#include <cstdarg>
#include <cstdio>

#include "compat.h"

#if defined(__ANDROID__)
#include <android/log.h>
#endif

void av_log(int level, const char *fmt, ...) {
    if (level > AV_LOG_WARNING)
        return;
    char buffer[512];
    va_list arguments;
    va_start(arguments, fmt);
    std::vsnprintf(buffer, sizeof(buffer), fmt, arguments);
    va_end(arguments);
#if defined(__ANDROID__)
    __android_log_print(level <= AV_LOG_ERROR ? ANDROID_LOG_ERROR : ANDROID_LOG_WARN, "MotorStormAtrac", "%s", buffer);
#else
    std::fprintf(stderr, "[atrac] %s\n", buffer);
#endif
}
