#pragma once

#include <cstdlib>

// Presence of a diagnostic environment switch, read once per call site.
// std::getenv scans the whole environment block on every call; several trace
// switches are checked per frame, per GE list or per audio block.
#define MOTORSTORM_ENV_FLAG(name) \
    ([]() noexcept { static const bool value = std::getenv(name) != nullptr; return value; }())
