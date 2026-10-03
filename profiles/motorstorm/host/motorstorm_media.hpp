#pragma once
#include "psprecomp/runtime.hpp"
#include <filesystem>
#include <span>
namespace motorstorm {
void install_mpeg_hle(psprecomp::Runtime &runtime);
void report_mpeg_summary(const psprecomp::Runtime &runtime);
void record_psmf_read(const std::filesystem::path &source, std::uint64_t offset,
                       std::span<const std::uint8_t> header);
}
