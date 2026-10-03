#include "motorstorm_audio.hpp"
#include "motorstorm_bootstrap.hpp"
#include "motorstorm_perf.hpp"
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <mmsystem.h>
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
std::chrono::steady_clock::time_point g_starved_since;
constexpr std::size_t kQueuedFrames=8192;

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
    // The feeder shares the machine with a CPU-hungry recompiler; raising its
    // priority keeps completed buffers recycled before the device runs dry.
    SetThreadPriority(GetCurrentThread(),THREAD_PRIORITY_HIGHEST);
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
            std::fill(g_buffers[slot].begin(),g_buffers[slot].end(),0);
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
} // namespace

bool audio_enabled() {return g_enabled.load();}
AudioReport audio_report() {std::lock_guard lock(g_mutex);completed();auto report=g_report;report.buffered_frames=g_pcm.size()/2;return report;}
void audio_start(std::uint32_t sample_rate) {
    if(!requested()) return;
    std::lock_guard lock(g_mutex);if(g_open.load()) return;
    g_report={};g_next=0;g_rate=sample_rate?sample_rate:44100;g_pcm.clear();g_stopping=false;g_starved=false;
    g_event=CreateEventW(nullptr,FALSE,FALSE,nullptr);
    if(!g_event) {error(MMSYSERR_NOMEM,"completion event");return;}
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
    g_capture_bytes=0;
    if(const char *path=std::getenv("PSPRECOMP_MOTORSTORM_AUDIO_CAPTURE")) {
        const auto target=std::filesystem::path(path);
        if(!target.parent_path().empty()) std::filesystem::create_directories(target.parent_path());
        g_capture.open(target,std::ios::binary|std::ios::trunc);capture_header();g_capture.seekp(44);
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
    {
        perf::Scope audio_profile(perf::kAudioWait);
        while(g_pcm.size()/2+sample_count>kQueuedFrames && g_enabled.load() && !g_stopping) {
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
        " silent_frames="+std::to_string(g_report.silent_frames));
}
} // namespace motorstorm
