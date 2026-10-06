#pragma once

// Minimal stand-in for PPSSPP's ppsspp_config.h: only the architecture tests
// that atrac3plusdsp.cpp uses. Written for this profile (not PPSSPP code).
#define PPSSPP_ARCH(x) (MOTORSTORM_AT3_ARCH_##x)

#if defined(__aarch64__) || defined(_M_ARM64) || defined(__ARM_NEON)
#define MOTORSTORM_AT3_ARCH_ARM_NEON 1
#else
#define MOTORSTORM_AT3_ARCH_ARM_NEON 0
#endif
#if defined(_M_ARM64)
#define MOTORSTORM_AT3_ARCH_ARM64 1
#else
#define MOTORSTORM_AT3_ARCH_ARM64 0
#endif
#if defined(__x86_64__) || defined(_M_X64) || defined(__i386__) || defined(_M_IX86)
#define MOTORSTORM_AT3_ARCH_X86 1
#define MOTORSTORM_AT3_ARCH_AMD64 1
#define MOTORSTORM_AT3_ARCH_SSE2 1
#else
#define MOTORSTORM_AT3_ARCH_X86 0
#define MOTORSTORM_AT3_ARCH_AMD64 0
#define MOTORSTORM_AT3_ARCH_SSE2 0
#endif
