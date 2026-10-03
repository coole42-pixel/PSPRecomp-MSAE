#pragma once

#include "psprecomp/common.hpp"
#include <array>
#include <cstring>
#include <filesystem>
#include <fstream>
#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#endif

namespace psprecomp {

inline bool identical_files(const std::filesystem::path &a, const std::filesystem::path &b) {
    if (!std::filesystem::exists(b) || std::filesystem::file_size(a) != std::filesystem::file_size(b)) return false;
    std::ifstream left(a, std::ios::binary), right(b, std::ios::binary);
    if (!left || !right) throw Error("Cannot compare generated file: " + b.string());
    std::array<char, 65536> x{}, y{};
    do {
        left.read(x.data(), x.size());
        right.read(y.data(), y.size());
        if (left.bad() || right.bad()) throw Error("Cannot read generated file: " + b.string());
        if (left.gcount() != right.gcount() || std::memcmp(x.data(), y.data(), static_cast<std::size_t>(left.gcount())) != 0) return false;
    } while (left.gcount() != 0);
    return true;
}

// A complete file becomes visible in one rename, including replacement of an
// existing file on Windows. Destruction after any failure removes the temporary.
class AtomicTextFile {
public:
    explicit AtomicTextFile(const std::filesystem::path &path) : path_(path), temporary_(path.string() + ".tmp") {
        stream_.rdbuf()->pubsetbuf(buffer_.data(), buffer_.size());
        stream_.open(temporary_, std::ios::binary | std::ios::trunc);
        if (!stream_) throw Error("Cannot create generated file: " + temporary_.string());
    }
    AtomicTextFile(const AtomicTextFile &) = delete;
    AtomicTextFile &operator=(const AtomicTextFile &) = delete;
    ~AtomicTextFile() {
        if (pending_) {
            stream_.close();
            std::error_code ignored;
            std::filesystem::remove(temporary_, ignored);
        }
    }
    std::ostream &stream() { return stream_; }
    bool commit() {
        stream_.flush();
        if (!stream_) throw Error("Cannot write generated file: " + temporary_.string());
        stream_.close();
        if (!stream_) throw Error("Cannot close generated file: " + temporary_.string());
        if (identical_files(temporary_, path_)) {
            std::filesystem::remove(temporary_);
            pending_ = false;
            return false;
        }
#ifdef _WIN32
        if (!MoveFileExW(temporary_.c_str(), path_.c_str(), MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH)) {
            throw Error("Cannot publish generated file " + path_.string() + ": " +
                        std::error_code(static_cast<int>(GetLastError()), std::system_category()).message());
        }
#else
        std::filesystem::rename(temporary_, path_);
#endif
        pending_ = false;
        return true;
    }
private:
    std::filesystem::path path_, temporary_;
    std::array<char, 65536> buffer_{};
    std::ofstream stream_;
    bool pending_{true};
};

} // namespace psprecomp
