#pragma once

namespace psprecomp {
// The renderer may distinguish a CPU write's implicit old-value read from a
// guest scalar query. Context is local to the accessing host thread.
[[nodiscard]] bool memory_access_is_write() noexcept;
}
