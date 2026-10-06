#pragma once

#include <cstdint>
#include <filesystem>
#include <functional>
#include <string>

namespace psprecomp {
class Runtime;

// Installs the PSP savedata utility on a private host memory-stick directory.
// Operations retain the guest dialog lifecycle and report real filesystem errors.
// The observer receives each completed operation (parameter address and result).
void install_savedata_hle(Runtime &runtime, std::filesystem::path root,
                          std::function<void(std::uint32_t, std::uint32_t)> observer = {});

// Host error text of the last operation that failed with a filesystem error
// (empty after a success), for the observer's log.
const std::string &savedata_last_error();
}
