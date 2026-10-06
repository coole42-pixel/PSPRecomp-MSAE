#include "psprecomp/hle_savedata.hpp"
#include "psprecomp/runtime.hpp"

#include <algorithm>
#include <array>
#include <fstream>
#include <memory>
#include <string>
#include <vector>

namespace psprecomp {
namespace {
std::string last_error;
struct Dialog {
    std::uint32_t status{}, parameter{}, size{};
    std::filesystem::path root;
    std::function<void(std::uint32_t, std::uint32_t)> observer;
};

std::string fixed_string(const GuestMemory &m, std::uint32_t address, std::uint32_t length) {
    std::string s;
    for (std::uint32_t i = 0; i < length; ++i) {
        const auto c = m.load8(address + i);
        if (c == 0) break;
        s.push_back(static_cast<char>(c));
    }
    return s;
}
bool valid_component(const std::string &s, bool empty = false) {
    return (empty || !s.empty()) && s != "." && s != ".." &&
           std::none_of(s.begin(), s.end(), [](unsigned char c) {
               return c < 32 || c == '/' || c == '\\' || c == ':' || c == '*'
                      || c == '?' || c == '"' || c == '<' || c == '>' || c == '|';
           });
}
void write_string(GuestMemory &m, std::uint32_t address, std::uint32_t capacity, const std::string &s) {
    m.zero(address, capacity);
    for (std::uint32_t i = 0; i < std::min<std::size_t>(s.size(), capacity - 1); ++i)
        m.store8(address + i, static_cast<std::uint8_t>(s[i]));
}
std::uint32_t execute(Runtime &rt, const Dialog &d) {
    auto &m = rt.memory();
    const auto p = d.parameter;
    const auto mode = m.load32(p + 0x30);
    const auto game = fixed_string(m, p + 0x3C, 13);
    auto save = fixed_string(m, p + 0x4C, 20);
    const auto file = fixed_string(m, p + 0x64, 13);
    if ((mode == 4 || mode == 5) && save.empty()) {
        const auto list = m.load32(p + 0x60);
        std::vector<std::string> slots;
        for (std::uint32_t i=0; i<256; ++i) {
            const auto at=static_cast<std::uint64_t>(list)+i*20;
            if (!list || at>UINT32_MAX || !m.contains(static_cast<std::uint32_t>(at),20)) return 0x80110300u;
            const auto candidate=fixed_string(m,static_cast<std::uint32_t>(at),20);
            if (candidate.empty()) break;
            if (!valid_component(candidate)) return 0x80110300u;
            slots.push_back(candidate);
        }
        // The frontend has already chosen New or Load. For a new profile use
        // an unused requested slot; for load use an existing requested slot.
        for (const auto &slot : slots) {
            const bool exists=std::filesystem::is_regular_file(d.root/(game+slot)/file);
            if ((mode == 4 && exists) || (mode == 5 && !exists)) {save=slot;break;}
        }
        if (save.empty()) return mode==4?0x80110307u:0x80110386u;
        write_string(m,p+0x4C,20,save);
    }
    const bool list_pattern = mode == 11 && (save == "*" || save.empty());
    if (!valid_component(game) || (!list_pattern && !valid_component(save, true)) || !valid_component(file, true))
        return 0x80110300u;
    const auto directory = d.root / (game + save);
    const auto path = directory / file;
    if (mode == 11) { // LIST: enumerate slots, without fabricating profiles.
        if (d.size < 0x5F8) return 0x80110328u;
        const auto info = m.load32(p + 0x5F4);
        if (!m.contains(info, 12)) return 0x80110328u;
        const auto capacity = m.load32(info), entries = m.load32(info + 8);
        if (capacity > 4096 || (capacity && !m.contains(entries, capacity * 72ull))) return 0x80110328u;
        std::vector<std::string> names;
        if (std::filesystem::is_directory(d.root)) {
            for (const auto &entry : std::filesystem::directory_iterator(d.root)) {
                const auto name = entry.path().filename().string();
                if (entry.is_directory() && name.starts_with(game) && name.size() - game.size() < 20)
                    names.push_back(name.substr(game.size()));
            }
        }
        std::sort(names.begin(), names.end());
        names.resize(std::min<std::size_t>(names.size(), capacity));
        for (std::uint32_t i = 0; i < names.size(); ++i) {
            m.zero(entries + i * 72, 72);
            m.store32(entries + i * 72, 0x11FF);
            write_string(m, entries + i * 72 + 52, 20, names[i]);
        }
        m.store32(info + 4, static_cast<std::uint32_t>(names.size()));
        return 0;
    }
    if (mode == 8) { // SIZES
        if (d.size < 0x5DC) return 0x801103C8u;
        const auto free = m.load32(p + 0x5D0), data = m.load32(p + 0x5D4), used = m.load32(p + 0x5D8);
        if ((free && !m.contains(free, 20)) || (data && !m.contains(data, 64)) ||
            (used && !m.contains(used, 28))) return 0x801103C8u;
        std::filesystem::create_directories(d.root);
        const auto available = std::filesystem::space(d.root).available;
        const auto kb = static_cast<std::uint32_t>(std::min<std::uint64_t>(available / 1024, 0x7FFFFFFF));
        if (free) {
            m.store32(free, 32768); m.store32(free + 4, kb / 32); m.store32(free + 8, kb);
            write_string(m, free + 12, 8, std::to_string(std::min(kb, 99999u)) + "KB");
        }
        std::uint64_t bytes = 0;
        if (std::filesystem::is_directory(directory))
            for (const auto &entry : std::filesystem::directory_iterator(directory))
                if (entry.is_regular_file()) bytes += entry.file_size();
        const auto write_used = [&](std::uint32_t at) {
            const auto kilobytes = static_cast<std::uint32_t>((bytes + 1023) / 1024);
            const auto clusters = static_cast<std::uint32_t>((bytes + 32767) / 32768);
            m.store32(at, clusters); m.store32(at + 4, kilobytes);
            write_string(m, at + 8, 8, std::to_string(std::min(kilobytes, 99999u)) + "KB");
            m.store32(at + 16, clusters * 32);
            write_string(m, at + 20, 8, std::to_string(std::min(clusters * 32, 99999u)) + "KB");
        };
        if (data) {
            m.zero(data, 64); write_string(m, data, 13, game); write_string(m, data + 16, 20, save);
            write_used(data + 36);
        }
        if (used) write_used(used);
        return 0;
    }
    const bool load = mode == 0 || mode == 2 || mode == 4 || mode == 15 || mode == 16;
    const bool write = mode == 1 || mode == 3 || mode == 5 || mode == 13 || mode == 14 || mode == 17 || mode == 18;
    const bool raw = mode >= 13;
    // Delete-family modes (pspsdk PspUtilitySavedataMode): 6 LISTDELETE,
    // 7 LISTALLDELETE, 9 AUTODELETE, 10 DELETE, 21 DELETEDATA.  The game puts
    // the slots it wants removed in saveNameList (offset 0x60); direct modes
    // name one slot in saveName.  The PSP would show a confirmation dialog;
    // this HLE has no UI, so it performs the requested removal directly.
    const bool list_delete = mode == 6 || mode == 7;
    const bool direct_delete = mode == 9 || mode == 10 || mode == 21;
    if (list_delete || direct_delete) {
        std::vector<std::string> targets;
        if (direct_delete) {
            if (!save.empty()) targets.push_back(save);
        } else {
            const auto list = m.load32(p + 0x60);
            if (list) {
                for (std::uint32_t i = 0; i < 256; ++i) {
                    const auto at = static_cast<std::uint64_t>(list) + i * 20;
                    if (at > UINT32_MAX || !m.contains(static_cast<std::uint32_t>(at), 20)) break;
                    const auto candidate = fixed_string(m, static_cast<std::uint32_t>(at), 20);
                    if (candidate.empty()) break;
                    if (!valid_component(candidate)) return 0x80110300u;
                    targets.push_back(candidate);
                }
            }
            if (!save.empty() && std::find(targets.begin(), targets.end(), save) == targets.end())
                targets.push_back(save);
        }
        if (targets.empty() && mode == 7) {
            // LISTALLDELETE with no explicit list: the real dialog would list
            // the saves and delete the chosen one.  Without a UI there is no
            // choice to apply, so report success without touching any save;
            // a named list (below) is the path the game actually uses.
            return 0;
        }
        if (targets.empty()) return 0x80110307u;
        bool removed = false;
        for (const auto &target : targets) {
            const auto target_directory = d.root / (game + target);
            std::error_code ec;
            if (std::filesystem::is_directory(target_directory, ec)) {
                std::filesystem::remove_all(target_directory, ec);
                if (!ec) removed = true;
            }
        }
        return removed || mode == 7 ? 0u : 0x80110307u;
    }
    if (!load && !write) return 0x80110300u;
    if (file.empty()) return 0x80110300u;
    const auto buffer = m.load32(p + 0x74), capacity = m.load32(p + 0x78);
    if (load) {
        if (!std::filesystem::is_regular_file(path)) return raw ? 0x80110329u : 0x80110307u;
        const auto size = std::filesystem::file_size(path);
        if (size > capacity || (size && !m.contains(buffer, static_cast<std::size_t>(size))))
            return raw ? 0x80110328u : 0x80110308u;
        std::vector<std::uint8_t> bytes(static_cast<std::size_t>(size));
        std::ifstream input(path, std::ios::binary);
        if (!input.read(reinterpret_cast<char *>(bytes.data()), static_cast<std::streamsize>(size)))
            return raw ? 0x80110329u : 0x80110305u;
        if (size) m.copy_in(buffer, bytes);
        m.store32(p + 0x7C, static_cast<std::uint32_t>(size));
        return 0;
    }
    const auto size = m.load32(p + 0x7C);
    if (size > capacity || (size && !m.contains(buffer, size))) return raw ? 0x80110328u : 0x80110388u;
    std::filesystem::create_directories(directory);
    const auto write_file = [&](const std::filesystem::path &target, std::uint32_t src, std::uint32_t length) {
        std::vector<std::uint8_t> bytes(length);
        for (std::uint32_t i = 0; i < length; ++i) bytes[i] = m.load8(src + i);
        const auto temporary = target.string() + ".tmp";
        std::ofstream output(temporary, std::ios::binary | std::ios::trunc);
        output.write(reinterpret_cast<const char *>(bytes.data()), bytes.size());
        output.close();
        if (!output) return false;
        // Windows rename cannot replace an existing file. Copy the completed
        // temporary file only after all guest bytes have been read and written.
        std::filesystem::copy_file(temporary, target, std::filesystem::copy_options::overwrite_existing);
        std::filesystem::remove(temporary);
        return true;
    };
    if (!write_file(path, buffer, size)) return raw ? 0x80110329u : 0x80110385u;
    if (!raw) {
        constexpr std::array<const char *, 4> names{"ICON0.PNG", "ICON1.PMF", "PIC1.PNG", "SND0.AT3"};
        for (std::uint32_t i = 0; i < names.size(); ++i) {
            const auto descriptor = p + 0x584 + i * 16;
            const auto src = m.load32(descriptor), limit = m.load32(descriptor + 4), length = m.load32(descriptor + 8);
            if (!src || !length) continue;
            if (length > limit || !m.contains(src, length) || !write_file(directory / names[i], src, length))
                return 0x80110385u;
        }
    }
    return 0;
}
}

const std::string &savedata_last_error() { return last_error; }

void install_savedata_hle(Runtime &rt, std::filesystem::path root,
                          std::function<void(std::uint32_t, std::uint32_t)> observer) {
    auto d = std::make_shared<Dialog>(); d->root = std::move(root); d->observer = std::move(observer);
    rt.register_hle("sceUtility", 0x50C4CD57u, [d](Runtime &r, AllegrexContext &c) {
        if (d->status) { c.set_gpr(2, 0x80110001u); return; }
        const auto p = c.gpr[4];
        if (!r.memory().contains(p, 4)) { c.set_gpr(2, 0x80110002u); return; }
        const auto size = r.memory().load32(p);
        if ((size != 1480 && size != 1500 && size != 1536) || !r.memory().contains(p, size)) {
            c.set_gpr(2, 0x80110004u); return;
        }
        d->parameter = p; d->size = size; d->status = 1; c.set_gpr(2, 0);
    });
    rt.register_hle("sceUtility", 0x8874DBE0u, [d](Runtime &, AllegrexContext &c) {
        c.set_gpr(2, d->status);
        if (d->status == 1) d->status = 2;
        else if (d->status == 4) d->status = 0;
    });
    rt.register_hle("sceUtility", 0xD4B95FFBu, [d](Runtime &r, AllegrexContext &c) {
        if (d->status != 2) { c.set_gpr(2, 0x80110001u); return; }
        std::uint32_t result = 0;
        last_error.clear();
        try { result = execute(r, *d); }
        catch (const std::filesystem::filesystem_error &error) { result = 0x80110305u; last_error = error.what(); }
        r.memory().store32(d->parameter + 0x1C, result);
        d->status = 3;
        if (d->observer) d->observer(d->parameter, result);
        c.set_gpr(2, 0);
    });
    rt.register_hle("sceUtility", 0x9790B33Cu, [d](Runtime &, AllegrexContext &c) {
        if (d->status != 3) { c.set_gpr(2, 0x80110001u); return; }
        d->status = 4; c.set_gpr(2, 0);
    });
}
}
