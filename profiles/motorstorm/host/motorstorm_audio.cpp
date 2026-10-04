#include "motorstorm_audio.hpp"
#include "motorstorm_bootstrap.hpp"
#include "motorstorm_perf.hpp"
#include "motorstorm_audio_recovery.hpp"
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <mmsystem.h>
#include <avrt.h>
#include <mmdeviceapi.h>
#include <audioclient.h>
#include <functiondiscoverykeys_devpkey.h>
#include <algorithm>
#include <atomic>
#include <array>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <mutex>
#include <vector>
#include <deque>
#include <thread>
#include <condition_variable>
#include <cstdio>
#include <future>
#include <span>
#include <string>

namespace motorstorm {
namespace {
constexpr std::size_t kBufferFrames=512,kBufferCount=24;
constexpr std::size_t kStartupBuffers=6;
std::atomic<bool> g_enabled{},g_open{};
HWAVEOUT g_device{};
HANDLE g_event{};
std::mutex g_mutex;
WAVEHDR g_headers[kBufferCount]{};
std::vector<std::int16_t> g_buffers[kBufferCount];
bool g_pending[kBufferCount]{};
std::size_t g_next{};
std::uint32_t g_rate=44100;
AudioReport g_report;
std::ofstream g_capture;
std::uint64_t g_capture_bytes{};
std::deque<std::int16_t> g_pcm;
std::thread g_worker;
std::condition_variable g_room;
bool g_stopping{};
bool g_starved{};
AudioRecoveryRamp g_recovery;
std::chrono::steady_clock::time_point g_starved_since;
// PCM queued ahead of the device. waveOut adds its own 24 x 512 frames of
// buffers on top (about 0.47 s in all); WASAPI only about 30 ms. The WASAPI
// queue (0.28 s, 0.31 s in all) covers the few seconds at a race start where
// the guest runs slightly below real time; 8,192 frames ran the device dry
// about 200 times per race start there, 12,288 not at all.
constexpr std::size_t kWaveOutQueuedFrames=8192;
std::size_t wasapi_queued_frames() {
    if(const char *value=std::getenv("PSPRECOMP_MOTORSTORM_AUDIO_QUEUE"); value && *value)
        return std::clamp<std::size_t>(std::strtoull(value,nullptr,10),2048u,32768u);
    return 12288u;
}
std::size_t g_queued_limit=kWaveOutQueuedFrames;
bool g_wasapi{};
std::atomic<std::uint64_t> g_blocked_us{};
// Last PCM submission: tells a real guest stall from the normal few
// milliseconds between grains.
std::chrono::steady_clock::time_point g_last_submit;

void completed() {
    for(std::size_t i=0;i<kBufferCount;++i)
        if(g_pending[i] && (g_headers[i].dwFlags&WHDR_DONE) && !(g_headers[i].dwFlags&WHDR_INQUEUE)) {
            g_pending[i]=false;++g_report.completed_buffers;
        }
}
bool requested() {
    if(const char *value=std::getenv("PSPRECOMP_MOTORSTORM_AUDIO"))
        return std::strcmp(value,"0")!=0 && std::strcmp(value,"off")!=0;
    const char *window=std::getenv("PSPRECOMP_MOTORSTORM_WINDOW");
    return window && std::strcmp(window,"0")!=0;
}
void error(MMRESULT result,const char *operation) {
    ++g_report.errors;
    char message[256]{};waveOutGetErrorTextA(result,message,sizeof(message));
    log_line("AUDIO",std::string(operation)+" failed: "+message+" code="+std::to_string(result));
}
void error_text(const std::string &message) {
    ++g_report.errors;
    log_line("AUDIO",message);
}
void close_device() {
    if(g_device) {
        waveOutReset(g_device);
        for(auto &header:g_headers) if(header.dwFlags&WHDR_PREPARED)
            waveOutUnprepareHeader(g_device,&header,sizeof(WAVEHDR));
        waveOutClose(g_device);g_device=nullptr;
    }
    if(g_event) {CloseHandle(g_event);g_event=nullptr;}
    std::fill(std::begin(g_pending),std::end(g_pending),false);
}
void capture_header() {
    if(!g_capture.is_open()) return;
    // Little-endian stereo PCM RIFF; update sizes at shutdown.
    std::array<std::uint8_t,44> header{};
    std::memcpy(header.data(),"RIFF",4);std::memcpy(header.data()+8,"WAVEfmt ",8);
    std::memcpy(header.data()+36,"data",4);
    const auto put32=[&](std::size_t at,std::uint32_t value){std::memcpy(header.data()+at,&value,4);};
    const auto put16=[&](std::size_t at,std::uint16_t value){std::memcpy(header.data()+at,&value,2);};
    put32(4,static_cast<std::uint32_t>(36+g_capture_bytes));put32(16,16);put16(20,1);put16(22,2);
    put32(24,g_rate);put32(28,g_rate*4);put16(32,4);put16(34,16);put32(40,static_cast<std::uint32_t>(g_capture_bytes));
    g_capture.seekp(0);g_capture.write(reinterpret_cast<const char *>(header.data()),header.size());
}
void audio_worker() {
#if defined(_WIN32)
    // Let Windows schedule this as audio work rather than an ordinary high
    // priority thread. Registration/reversion must occur on the same thread.
    struct MultimediaTask {
        HANDLE handle{};
        ~MultimediaTask() { if (handle) AvRevertMmThreadCharacteristics(handle); }
    } task;
    DWORD task_index{};
    task.handle = AvSetMmThreadCharacteristicsW(L"Audio", &task_index);
    if (task.handle) AvSetMmThreadPriority(task.handle, AVRT_PRIORITY_HIGH);
    else SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_HIGHEST);
    {
        std::lock_guard lock(g_mutex);
        g_report.mmcss = task.handle != nullptr;
    }
#endif
    for(;;) {
        std::unique_lock lock(g_mutex);completed();
        std::size_t outstanding=static_cast<std::size_t>(
            std::count(std::begin(g_pending),std::end(g_pending),true));
        if(g_stopping && g_pcm.empty() && outstanding==0u) return;
        std::size_t slot=kBufferCount;
        for(std::size_t probe=0;probe<kBufferCount;++probe) {
            const auto candidate=(g_next+probe)%kBufferCount;
            if(!(g_headers[candidate].dwFlags&WHDR_INQUEUE)) {slot=candidate;break;}
        }
        const bool pcm_ready=g_pcm.size()>=kBufferFrames*2;
        bool wrote=false;
        if(slot<kBufferCount && (pcm_ready || (g_stopping && !g_pcm.empty()))) {
            const auto frames=std::min(kBufferFrames,g_pcm.size()/2);
            for(std::size_t i=0;i<frames*2;++i) {g_buffers[slot][i]=g_pcm.front();g_pcm.pop_front();}
            g_recovery.pcm({g_buffers[slot].data(), frames * 2u}, g_rate, g_starved);
            g_room.notify_all();g_headers[slot].dwBufferLength=static_cast<DWORD>(frames*4);
            const auto result=waveOutWrite(g_device,&g_headers[slot],sizeof(WAVEHDR));
            if(result!=MMSYSERR_NOERROR) {error(result,"waveOutWrite");g_report.dropped_frames+=frames;g_pcm.clear();g_enabled.store(false);g_room.notify_all();return;}
            g_pending[slot]=true;++g_report.queued_buffers;g_report.queued_frames+=frames;g_next=(slot+1)%kBufferCount;
            if(g_starved) {
                const auto gap=std::chrono::duration_cast<std::chrono::microseconds>(
                    std::chrono::steady_clock::now()-g_starved_since).count();
                g_report.longest_gap_us=std::max(g_report.longest_gap_us,static_cast<std::uint64_t>(gap));
                g_starved=false;
            }
            wrote=true;
        } else if(slot<kBufferCount && g_report.playing && !g_stopping && outstanding==0u) {
            // The guest has not produced the next grain in time.  Feed silence
            // instead of pausing the device: pause/restart cycles click, and a
            // stopped device would need a fresh start-up reserve to resume.
            // The gap is still reported through the underrun counters.
            g_recovery.silence(g_buffers[slot], g_rate);
            g_headers[slot].dwBufferLength=static_cast<DWORD>(kBufferFrames*4);
            const auto result=waveOutWrite(g_device,&g_headers[slot],sizeof(WAVEHDR));
            if(result!=MMSYSERR_NOERROR) {error(result,"waveOutWrite(silence)");g_enabled.store(false);g_room.notify_all();return;}
            g_pending[slot]=true;g_next=(slot+1)%kBufferCount;
            ++g_report.queued_buffers;g_report.silent_frames+=kBufferFrames;
            if(!g_starved) {g_starved=true;g_starved_since=std::chrono::steady_clock::now();++g_report.underruns;}
            wrote=true;
        }
        outstanding=static_cast<std::size_t>(
            std::count(std::begin(g_pending),std::end(g_pending),true));
        if(!g_report.playing && outstanding!=0u && (g_stopping || outstanding>=kStartupBuffers)) {
            const auto result=waveOutRestart(g_device);
            if(result!=MMSYSERR_NOERROR) {error(result,"waveOutRestart");g_enabled.store(false);g_room.notify_all();return;}
            g_report.playing=true;
        }
        if(wrote && g_pcm.size()>=kBufferFrames*2) continue;
        lock.unlock();WaitForSingleObject(g_event,5);
    }
}
// WASAPI shared mode, event driven. The device buffer is short (about 30 ms)
// and refilled from g_pcm whenever the engine signals; the format is
// converted to the mix format by the audio engine (AUTOCONVERTPCM).
struct Wasapi {
    IMMDeviceEnumerator *enumerator{};
    IMMDevice *device{};
    IAudioClient *client{};
    IAudioRenderClient *render{};
    HANDLE event{};
    UINT32 buffer_frames{};
    std::string name;
    void release() {
        if (client) client->Stop();
        if (render) { render->Release(); render = nullptr; }
        if (client) { client->Release(); client = nullptr; }
        if (device) { device->Release(); device = nullptr; }
        if (enumerator) { enumerator->Release(); enumerator = nullptr; }
        if (event) { CloseHandle(event); event = nullptr; }
    }
};
constexpr REFERENCE_TIME kWasapiBuffer = 300000;  // 30 ms in 100 ns units
std::string wasapi_error(const char *operation, HRESULT result) {
    char code[16]{};
    std::snprintf(code, sizeof(code), "%08lX", static_cast<unsigned long>(result));
    return std::string(operation) + " failed hr=0x" + code;
}
bool wasapi_open(Wasapi &w, std::string &failure) {
    w.release();
    HRESULT hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), nullptr, CLSCTX_ALL,
                                  __uuidof(IMMDeviceEnumerator), reinterpret_cast<void **>(&w.enumerator));
    if (FAILED(hr)) { failure = wasapi_error("MMDeviceEnumerator", hr); return false; }
    hr = w.enumerator->GetDefaultAudioEndpoint(eRender, eConsole, &w.device);
    if (FAILED(hr)) { failure = wasapi_error("GetDefaultAudioEndpoint", hr); return false; }
    hr = w.device->Activate(__uuidof(IAudioClient), CLSCTX_ALL, nullptr, reinterpret_cast<void **>(&w.client));
    if (FAILED(hr)) { failure = wasapi_error("IAudioClient", hr); return false; }
    WAVEFORMATEX format{};
    format.wFormatTag = WAVE_FORMAT_PCM;
    format.nChannels = 2;
    format.nSamplesPerSec = g_rate;
    format.wBitsPerSample = 16;
    format.nBlockAlign = 4;
    format.nAvgBytesPerSec = g_rate * 4;
    hr = w.client->Initialize(AUDCLNT_SHAREMODE_SHARED,
                              AUDCLNT_STREAMFLAGS_EVENTCALLBACK | AUDCLNT_STREAMFLAGS_AUTOCONVERTPCM |
                                  AUDCLNT_STREAMFLAGS_SRC_DEFAULT_QUALITY | AUDCLNT_STREAMFLAGS_NOPERSIST,
                              kWasapiBuffer, 0, &format, nullptr);
    if (FAILED(hr)) { failure = wasapi_error("IAudioClient::Initialize", hr); return false; }
    w.event = CreateEventW(nullptr, FALSE, FALSE, nullptr);
    if (!w.event) { failure = "WASAPI event creation failed"; return false; }
    hr = w.client->SetEventHandle(w.event);
    if (FAILED(hr)) { failure = wasapi_error("SetEventHandle", hr); return false; }
    hr = w.client->GetBufferSize(&w.buffer_frames);
    if (FAILED(hr)) { failure = wasapi_error("GetBufferSize", hr); return false; }
    hr = w.client->GetService(__uuidof(IAudioRenderClient), reinterpret_cast<void **>(&w.render));
    if (FAILED(hr)) { failure = wasapi_error("IAudioRenderClient", hr); return false; }
    IPropertyStore *properties{};
    if (SUCCEEDED(w.device->OpenPropertyStore(STGM_READ, &properties))) {
        PROPVARIANT value;
        PropVariantInit(&value);
        if (SUCCEEDED(properties->GetValue(PKEY_Device_FriendlyName, &value)) && value.vt == VT_LPWSTR) {
            const int bytes = WideCharToMultiByte(CP_UTF8, 0, value.pwszVal, -1, nullptr, 0, nullptr, nullptr);
            if (bytes > 1) {
                w.name.resize(static_cast<std::size_t>(bytes - 1));
                WideCharToMultiByte(CP_UTF8, 0, value.pwszVal, -1, w.name.data(), bytes, nullptr, nullptr);
            }
        }
        PropVariantClear(&value);
        properties->Release();
    }
    return true;
}
// Writes `frames` frames from g_pcm (or silence when `silence`) to the
// device buffer. Called with g_mutex held.
bool wasapi_write(Wasapi &w, UINT32 frames, bool silence) {
    BYTE *data{};
    const HRESULT hr = w.render->GetBuffer(frames, &data);
    if (FAILED(hr)) {
        log_line("AUDIO", wasapi_error("GetBuffer", hr));
        return false;
    }
    std::span<std::int16_t> samples{reinterpret_cast<std::int16_t *>(data), static_cast<std::size_t>(frames) * 2u};
    if (silence) {
        g_recovery.silence(samples, g_rate);
        g_report.silent_frames += frames;
    } else {
        std::copy_n(g_pcm.begin(), samples.size(), samples.begin());
        g_pcm.erase(g_pcm.begin(), g_pcm.begin() + static_cast<std::ptrdiff_t>(samples.size()));
        g_recovery.pcm(samples, g_rate, g_starved);
        g_report.queued_frames += frames;
    }
    w.render->ReleaseBuffer(frames, 0);
    ++g_report.queued_buffers;
    ++g_report.completed_buffers;
    return true;
}
void wasapi_worker(std::promise<std::string> opened) {
    const HRESULT com = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
    struct MultimediaTask {
        HANDLE handle{};
        ~MultimediaTask() { if (handle) AvRevertMmThreadCharacteristics(handle); }
    } task;
    DWORD task_index{};
    task.handle = AvSetMmThreadCharacteristicsW(L"Pro Audio", &task_index);
    if (!task.handle) SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_TIME_CRITICAL);
    Wasapi w;
    std::string failure;
    if (!wasapi_open(w, failure)) {
        w.release();
        if (SUCCEEDED(com)) CoUninitialize();
        opened.set_value(failure.empty() ? std::string("WASAPI unavailable") : failure);
        return;
    }
    log_line("AUDIO", "WASAPI shared opened device=\"" + w.name + "\" rate=" + std::to_string(g_rate) +
                          " buffer=" + std::to_string(w.buffer_frames) + " frames");
    opened.set_value({});  // audio_start holds g_mutex until this is consumed
    {
        std::lock_guard lock(g_mutex);
        g_report.mmcss = task.handle != nullptr;
    }
    // Start once a short reserve exists; afterwards top the device buffer up
    // on every engine period. Silence is written only when the device is
    // about to run dry, so a slow guest never adds latency later.
    const UINT32 startup = static_cast<UINT32>(kStartupBuffers * kBufferFrames);
    const UINT32 low_water = std::max<UINT32>(64u, g_rate / 200u);  // 5 ms
    for (;;) {
        HANDLE events[]{w.event, g_event};
        WaitForMultipleObjects(2, events, FALSE, 20);
        std::unique_lock lock(g_mutex);
        UINT32 padding{};
        HRESULT hr = w.client->GetCurrentPadding(&padding);
        if (hr == AUDCLNT_E_DEVICE_INVALIDATED) {
            // Default device changed (headphones unplugged, ...): follow it.
            log_line("AUDIO", "device invalidated; reopening default device");
            const bool was_playing = g_report.playing;
            g_report.playing = false;
            if (!wasapi_open(w, failure)) {
                error_text(failure);
                g_enabled.store(false);
                g_pcm.clear();
                g_room.notify_all();
                break;
            }
            log_line("AUDIO", "WASAPI reopened device=\"" + w.name + "\"");
            (void)was_playing;
            continue;
        }
        if (FAILED(hr)) {
            error_text(wasapi_error("GetCurrentPadding", hr));
            g_enabled.store(false);
            g_pcm.clear();
            g_room.notify_all();
            break;
        }
        const UINT32 room = w.buffer_frames - padding;
        const UINT32 available = static_cast<UINT32>(g_pcm.size() / 2u);
        if (padding == 0u && g_report.playing && !g_stopping && !g_starved) ++g_report.device_dry;
        if (g_stopping && available == 0u && (padding == 0u || !g_report.playing))
            break;
        if (!g_report.playing) {
            if (available >= startup || (g_stopping && available)) {
                const UINT32 frames = std::min(room, available);
                if (frames && !wasapi_write(w, frames, false)) { g_enabled.store(false); g_room.notify_all(); break; }
                if (FAILED(hr = w.client->Start())) {
                    error_text(wasapi_error("IAudioClient::Start", hr));
                    g_enabled.store(false);
                    g_room.notify_all();
                    break;
                }
                g_report.playing = true;
            }
        } else if (available && room) {
            const UINT32 frames = std::min(room, available);
            if (!wasapi_write(w, frames, false)) { g_enabled.store(false); g_room.notify_all(); break; }
            if (g_starved) {
                const auto gap = std::chrono::duration_cast<std::chrono::microseconds>(
                                     std::chrono::steady_clock::now() - g_starved_since).count();
                g_report.longest_gap_us = std::max(g_report.longest_gap_us, static_cast<std::uint64_t>(gap));
                g_starved = false;
            }
        } else if (!available && !g_stopping && padding < low_water && room &&
                   std::chrono::steady_clock::now() - g_last_submit > std::chrono::milliseconds(40)) {
            // A real guest stall (no PCM for 40 ms): fade out to silence once
            // rather than letting the device glitch. Within the normal gap
            // between grains the next one arrives (and wakes this thread via
            // g_event) before the device runs dry, so nothing is injected.
            const UINT32 frames = std::min(room, low_water * 2u);
            if (!wasapi_write(w, frames, true)) { g_enabled.store(false); g_room.notify_all(); break; }
            if (!g_starved) {
                g_starved = true;
                g_starved_since = std::chrono::steady_clock::now();
                ++g_report.underruns;
            }
        }
        g_room.notify_all();
    }
    w.release();
    if (SUCCEEDED(com)) CoUninitialize();
}
} // namespace

bool audio_enabled() {return g_enabled.load();}
std::uint64_t audio_blocked_us() noexcept {return g_blocked_us.load(std::memory_order_relaxed);}
AudioReport audio_report() {std::lock_guard lock(g_mutex);completed();auto report=g_report;report.buffered_frames=g_pcm.size()/2;return report;}
void audio_start(std::uint32_t sample_rate) {
    if(!requested()) return;
    std::lock_guard lock(g_mutex);if(g_open.load()) return;
    g_report={};g_next=0;g_rate=sample_rate?sample_rate:44100;g_pcm.clear();g_stopping=false;g_starved=false;g_recovery={};
    g_event=CreateEventW(nullptr,FALSE,FALSE,nullptr);
    if(!g_event) {error(MMSYSERR_NOMEM,"completion event");return;}
    g_capture_bytes=0;
    if(const char *path=std::getenv("PSPRECOMP_MOTORSTORM_AUDIO_CAPTURE")) {
        const auto target=std::filesystem::path(path);
        if(!target.parent_path().empty()) std::filesystem::create_directories(target.parent_path());
        g_capture.open(target,std::ios::binary|std::ios::trunc);capture_header();g_capture.seekp(44);
    }
    // WASAPI shared mode by default; PSPRECOMP_MOTORSTORM_AUDIO_API=waveout
    // (or a WASAPI failure) selects the legacy waveOut path.
    const char *api=std::getenv("PSPRECOMP_MOTORSTORM_AUDIO_API");
    if(!api || std::strcmp(api,"waveout")!=0) {
        std::promise<std::string> promise;
        auto result=promise.get_future();
        std::thread worker(wasapi_worker,std::move(promise));
        const auto failure=result.get();
        if(failure.empty()) {
            g_wasapi=true;g_queued_limit=wasapi_queued_frames();
            g_open.store(true);g_enabled.store(true);g_report.opened=true;
            g_worker=std::move(worker);
            return;
        }
        worker.join();
        log_line("AUDIO",failure+"; falling back to waveOut");
    }
    g_wasapi=false;g_queued_limit=kWaveOutQueuedFrames;
    WAVEFORMATEX format{};format.wFormatTag=WAVE_FORMAT_PCM;format.nChannels=2;
    format.nSamplesPerSec=g_rate;format.wBitsPerSample=16;format.nBlockAlign=4;format.nAvgBytesPerSec=g_rate*4;
    const auto opened=waveOutOpen(&g_device,WAVE_MAPPER,&format,reinterpret_cast<DWORD_PTR>(g_event),0,CALLBACK_EVENT);
    if(opened!=MMSYSERR_NOERROR) {error(opened,"waveOutOpen");close_device();return;}
    const auto paused=waveOutPause(g_device);
    if(paused!=MMSYSERR_NOERROR) {error(paused,"waveOutPause");close_device();return;}
    for(std::size_t i=0;i<kBufferCount;++i) {
        g_buffers[i].assign(kBufferFrames*2,0);g_headers[i]={};g_pending[i]=false;
        g_headers[i].lpData=reinterpret_cast<LPSTR>(g_buffers[i].data());
        g_headers[i].dwBufferLength=static_cast<DWORD>(g_buffers[i].size()*sizeof(std::int16_t));
        const auto prepared=waveOutPrepareHeader(g_device,&g_headers[i],sizeof(WAVEHDR));
        if(prepared!=MMSYSERR_NOERROR) {error(prepared,"waveOutPrepareHeader");close_device();return;}
    }
    g_open.store(true);g_enabled.store(true);g_report.opened=true;
    g_worker=std::thread(audio_worker);
    UINT id{};WAVEOUTCAPSA caps{};
    if(waveOutGetID(g_device,&id)==MMSYSERR_NOERROR) waveOutGetDevCapsA(id,&caps,sizeof(caps));
    log_line("AUDIO",std::string("waveOut opened device=\"")+caps.szPname+"\" rate="+std::to_string(g_rate)+" stereo PCM16");
}
void audio_submit(const psprecomp::GuestMemory &memory,std::uint32_t buffer,std::uint32_t sample_count,std::uint32_t volume) {
    if(!g_enabled.load() || !buffer || !sample_count) return;
    if(!memory.contains(buffer,static_cast<std::size_t>(sample_count)*4)) return;
    std::vector<std::int16_t> samples(sample_count*2);
    memory.copy_out(buffer,{reinterpret_cast<std::uint8_t *>(samples.data()),samples.size()*2});
    for(auto &sample:samples) sample=static_cast<std::int16_t>(std::clamp<std::int64_t>(static_cast<std::int64_t>(sample)*volume/0x8000,-32768,32767));
    std::unique_lock lock(g_mutex);
    const auto deadline=std::chrono::steady_clock::now()+std::chrono::seconds(2);
    if(g_pcm.size()/2+sample_count>g_queued_limit) {
        perf::Scope audio_profile(perf::kAudioWait);
        const auto blocked_since=std::chrono::steady_clock::now();
        struct Account {
            std::chrono::steady_clock::time_point since;
            ~Account() {
                g_blocked_us.fetch_add(static_cast<std::uint64_t>(std::chrono::duration_cast<std::chrono::microseconds>(
                    std::chrono::steady_clock::now()-since).count()),std::memory_order_relaxed);
            }
        } account{blocked_since};
        while(g_pcm.size()/2+sample_count>g_queued_limit && g_enabled.load() && !g_stopping) {
            if(g_room.wait_until(lock,deadline)==std::cv_status::timeout) {
                error(MMSYSERR_ERROR,"PCM queue timeout");g_report.dropped_frames+=sample_count;return;
            }
        }
    }
    if(!g_enabled.load() || g_stopping) return;
    for(const auto sample:samples) {
        const auto magnitude=static_cast<std::uint32_t>(std::abs(static_cast<int>(sample)));
        g_report.peak=std::max(g_report.peak,magnitude);if(magnitude) ++g_report.nonzero_samples;
    }
    // Copy guest grains immediately and feed short native blocks on a separate
    // thread. Prebuffer before starting; if the guest stalls later the worker
    // keeps the device clock alive with silence instead of pausing it.
    g_pcm.insert(g_pcm.end(),samples.begin(),samples.end());
    g_last_submit=std::chrono::steady_clock::now();
    if(g_capture.is_open() && g_capture_bytes+samples.size()*2<0xFFFF0000ull) {
        g_capture.write(reinterpret_cast<const char *>(samples.data()),samples.size()*2);g_capture_bytes+=samples.size()*2;
    }
    SetEvent(g_event);
}
void audio_shutdown() {
    {
        std::lock_guard lock(g_mutex);
        if(!g_open.exchange(false)) return;
        g_enabled.store(false);g_stopping=true;g_room.notify_all();SetEvent(g_event);
    }
    if(g_worker.joinable()) g_worker.join();
    std::lock_guard lock(g_mutex);completed();close_device();g_report.opened=false;g_report.playing=false;
    if(g_capture.is_open()) {capture_header();g_capture.close();}
    log_line("AUDIO","queued_buffers="+std::to_string(g_report.queued_buffers)+
        " completed_buffers="+std::to_string(g_report.completed_buffers)+" queued_frames="+std::to_string(g_report.queued_frames)+
        " nonzero_samples="+std::to_string(g_report.nonzero_samples)+" peak="+std::to_string(g_report.peak)+
        " dropped_frames="+std::to_string(g_report.dropped_frames)+" errors="+std::to_string(g_report.errors));
    log_line("AUDIO","underruns="+std::to_string(g_report.underruns)+" longest_gap_us="+std::to_string(g_report.longest_gap_us)+
        " silent_frames="+std::to_string(g_report.silent_frames)+" mmcss="+std::to_string(g_report.mmcss)+
        " api="+(g_wasapi?"wasapi":"waveout")+" device_dry="+std::to_string(g_report.device_dry));
}
} // namespace motorstorm
