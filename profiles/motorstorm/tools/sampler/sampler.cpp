// Minimal user-mode sampling profiler (no administrator rights or ETW needed).
// usage: sampler <delay_s> <duration_s> <out.txt> <exe> [args...]
// Launches exe (inheriting env/cwd), waits delay_s, then samples every busy
// thread (up to ~1000x/s; ~450/s in practice) for duration_s, walking stacks
// with DbgHelp.  Writes self, inclusive, per-thread and caller tables.
// Symbols need a /Zi + /DEBUG build; see progress/PERFORMANCE_RACE_BENCH.md.
// Build from a VS x64 developer prompt:
//   cl /nologo /O2 /EHsc /std:c++20 sampler.cpp winmm.lib
#define NOMINMAX
#include <windows.h>
#include <dbghelp.h>
#include <tlhelp32.h>
#include <algorithm>
#include <chrono>
#include <cstdio>
#include <map>
#include <set>
#include <string>
#include <thread>
#include <unordered_map>
#include <vector>
#pragma comment(lib, "dbghelp.lib")

struct Sample { DWORD tid; std::vector<DWORD64> frames; };

int wmain(int argc, wchar_t **argv) {
    if (argc < 5) { std::fprintf(stderr, "usage\n"); return 2; }
    const double delay = _wtof(argv[1]), duration = _wtof(argv[2]);
    const std::wstring out = argv[3];
    std::wstring cmd;
    for (int i = 4; i < argc; ++i) { if (i > 4) cmd += L' '; cmd += L'"'; cmd += argv[i]; cmd += L'"'; }
    STARTUPINFOW si{sizeof(si)}; PROCESS_INFORMATION pi{};
    if (!CreateProcessW(nullptr, cmd.data(), nullptr, nullptr, TRUE, 0, nullptr, nullptr, &si, &pi)) {
        std::fprintf(stderr, "CreateProcess failed %lu\n", GetLastError()); return 3;
    }
    if (WaitForSingleObject(pi.hProcess, static_cast<DWORD>(delay * 1000)) == WAIT_OBJECT_0) {
        std::fprintf(stderr, "process exited during delay\n"); return 4;
    }
    SymSetOptions(SYMOPT_UNDNAME | SYMOPT_DEFERRED_LOADS | SYMOPT_LOAD_LINES * 0);
    SymInitializeW(pi.hProcess, nullptr, TRUE);
    std::vector<Sample> samples; samples.reserve(200000);
    std::unordered_map<DWORD, std::pair<HANDLE, ULONG64>> threads;
    const auto start = std::chrono::steady_clock::now();
    std::size_t ticks = 0;
    timeBeginPeriod(1);
    while (std::chrono::duration<double>(std::chrono::steady_clock::now() - start).count() < duration) {
        if (WaitForSingleObject(pi.hProcess, 0) == WAIT_OBJECT_0) break;
        if (ticks % 200 == 0) {
            HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
            THREADENTRY32 te{sizeof(te)};
            for (BOOL ok = Thread32First(snap, &te); ok; ok = Thread32Next(snap, &te)) {
                if (te.th32OwnerProcessID != pi.dwProcessId || threads.count(te.th32ThreadID)) continue;
                HANDLE h = OpenThread(THREAD_SUSPEND_RESUME | THREAD_GET_CONTEXT | THREAD_QUERY_INFORMATION, FALSE, te.th32ThreadID);
                if (h) { ULONG64 c = 0; QueryThreadCycleTime(h, &c); threads[te.th32ThreadID] = {h, c}; }
            }
            CloseHandle(snap);
        }
        ++ticks;
        for (auto &[tid, entry] : threads) {
            ULONG64 cycles = 0;
            if (!QueryThreadCycleTime(entry.first, &cycles)) continue;
            const bool busy = cycles - entry.second > 200000; // ~>0.05 ms of CPU since last tick
            entry.second = cycles;
            if (!busy) continue;
            if (SuspendThread(entry.first) == static_cast<DWORD>(-1)) continue;
            CONTEXT ctx{}; ctx.ContextFlags = CONTEXT_FULL;
            if (GetThreadContext(entry.first, &ctx)) {
                Sample s{tid, {}};
                STACKFRAME64 frame{};
                frame.AddrPC.Offset = ctx.Rip; frame.AddrPC.Mode = AddrModeFlat;
                frame.AddrFrame.Offset = ctx.Rbp; frame.AddrFrame.Mode = AddrModeFlat;
                frame.AddrStack.Offset = ctx.Rsp; frame.AddrStack.Mode = AddrModeFlat;
                for (int depth = 0; depth < 48; ++depth) {
                    if (!StackWalk64(IMAGE_FILE_MACHINE_AMD64, pi.hProcess, entry.first, &frame, &ctx, nullptr,
                                     SymFunctionTableAccess64, SymGetModuleBase64, nullptr)) break;
                    if (frame.AddrPC.Offset == 0) break;
                    s.frames.push_back(frame.AddrPC.Offset);
                }
                if (!s.frames.empty()) samples.push_back(std::move(s));
            }
            ResumeThread(entry.first);
        }
        Sleep(1);
    }
    timeEndPeriod(1);
    std::fprintf(stderr, "samples=%zu ticks=%zu\n", samples.size(), ticks);
    std::unordered_map<DWORD64, std::string> names;
    auto name_of = [&](DWORD64 a) -> const std::string & {
        auto it = names.find(a); if (it != names.end()) return it->second;
        alignas(SYMBOL_INFO) char buf[sizeof(SYMBOL_INFO) + 512]{};
        auto *sym = reinterpret_cast<SYMBOL_INFO *>(buf); sym->SizeOfStruct = sizeof(SYMBOL_INFO); sym->MaxNameLen = 511;
        DWORD64 disp = 0; std::string n;
        if (SymFromAddr(pi.hProcess, a, &disp, sym)) n = sym->Name;
        else {
            IMAGEHLP_MODULE64 mod{sizeof(mod)};
            char tmp[64]; std::snprintf(tmp, sizeof(tmp), "?%llx", a);
            n = SymGetModuleInfo64(pi.hProcess, a, &mod) ? std::string(mod.ModuleName) + "!" + tmp : tmp;
        }
        return names.emplace(a, n).first->second;
    };
    std::map<std::string, double> self, incl;
    std::map<DWORD, double> per_thread;
    std::map<std::pair<DWORD, std::string>, double> thread_self;
    for (const auto &s : samples) {
        self[name_of(s.frames[0])] += 1; per_thread[s.tid] += 1;
        thread_self[{s.tid, name_of(s.frames[0])}] += 1;
        std::set<std::string> seen;
        for (auto f : s.frames) { const auto &n = name_of(f); if (seen.insert(n).second) incl[n] += 1; }
    }
    FILE *f = _wfopen(out.c_str(), L"w");
    const double total = static_cast<double>(samples.size());
    auto dump = [&](const char *title, const std::map<std::string, double> &m, std::size_t n) {
        std::vector<std::pair<double, std::string>> v; for (auto &[k, c] : m) v.push_back({c, k});
        std::sort(v.rbegin(), v.rend());
        std::fprintf(f, "== %s (total samples %.0f)\n", title, total);
        for (std::size_t i = 0; i < std::min(n, v.size()); ++i)
            std::fprintf(f, "%8.0f %6.2f%%  %s\n", v[i].first, 100.0 * v[i].first / total, v[i].second.c_str());
    };
    std::fprintf(f, "== threads\n");
    for (auto &[t, c] : per_thread) std::fprintf(f, "tid %lu: %.0f (%.1f%%)\n", t, c, 100 * c / total);
    dump("self", self, 150);
    dump("inclusive", incl, 150);
    std::vector<std::pair<double, std::pair<DWORD, std::string>>> tv;
    for (auto &[k, c] : thread_self) tv.push_back({c, k});
    std::sort(tv.rbegin(), tv.rend());
    std::fprintf(f, "== thread/self top\n");
    for (std::size_t i = 0; i < std::min<std::size_t>(60, tv.size()); ++i)
        std::fprintf(f, "%8.0f tid %lu %s\n", tv[i].first, tv[i].second.first, tv[i].second.second.c_str());
    // Callers of the hottest self functions (immediate parent).
    std::map<std::string, std::map<std::string, double>> callers;
    for (const auto &s : samples) if (s.frames.size() > 1) callers[name_of(s.frames[0])][name_of(s.frames[1])] += 1;
    std::vector<std::pair<double, std::string>> v; for (auto &[k, c] : self) v.push_back({c, k});
    std::sort(v.rbegin(), v.rend());
    std::fprintf(f, "== callers of top self\n");
    for (std::size_t i = 0; i < std::min<std::size_t>(25, v.size()); ++i) {
        std::fprintf(f, "%s\n", v[i].second.c_str());
        std::vector<std::pair<double, std::string>> c; for (auto &[k, n] : callers[v[i].second]) c.push_back({n, k});
        std::sort(c.rbegin(), c.rend());
        for (std::size_t j = 0; j < std::min<std::size_t>(6, c.size()); ++j)
            std::fprintf(f, "    %8.0f  %s\n", c[j].first, c[j].second.c_str());
    }
    std::fclose(f);
    WaitForSingleObject(pi.hProcess, INFINITE);
    return 0;
}
