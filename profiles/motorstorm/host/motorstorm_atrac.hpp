#pragma once
#include "psprecomp/runtime.hpp"
#include <filesystem>
#include <span>
namespace motorstorm {
void install_atrac_hle(psprecomp::Runtime &);
void record_atrac_read(const std::filesystem::path &,std::uint64_t,std::span<const std::uint8_t>);
}
