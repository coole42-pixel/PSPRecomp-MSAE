#include "android_platform.hpp"
#include "motorstorm_window.hpp"
#include "motorstorm_audio.hpp"
#include "motorstorm_controller.hpp"
#include "motorstorm_pacing.hpp"
#include "motorstorm_gpu.hpp"
#include "motorstorm_bootstrap.hpp"
#include "motorstorm_hle.hpp"
#include "motorstorm_mobile.hpp"
#include <SDL3/SDL.h>
#if defined(__ANDROID__)
#include <jni.h>
#endif
#include <algorithm>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <cstdlib>
#include <mutex>
#include <thread>
#include <cstring>
#include <fstream>
#include <unordered_map>
#include <time.h>
#include <dlfcn.h>
#include <unistd.h>

namespace motorstorm {
namespace {
SDL_Window *display{};
std::atomic<bool> stopped{}, paused{};
std::mutex input_mutex, audio_mutex;
std::condition_variable pause_cv;
PadInput live;
std::uint32_t pressed{};
std::unordered_map<SDL_JoystickID,SDL_Gamepad *> pads;
std::unordered_map<SDL_FingerID,SDL_TouchFingerEvent> fingers;
SDL_AudioStream *audio_stream{};
AudioReport audio_stats;
std::atomic<std::uint64_t> blocked_us{};
AudioPacingReserve reserve;
std::uint32_t sample_rate{44100};
// PCM queued ahead of the device, as on Windows WASAPI (12288 frames, 0.28 s).
// The guest delivers audio in uneven bursts; a 0.1 s queue ran dry often.
std::uint32_t queue_frames{12288};
std::uint64_t last_open_attempt_us{};
std::FILE *capture{};
std::uint64_t capture_bytes{};
void capture_header(){
    if(!capture)return;
    const auto put32=[](std::uint8_t *at,std::uint32_t value){std::memcpy(at,&value,4);};
    const auto put16=[](std::uint8_t *at,std::uint16_t value){std::memcpy(at,&value,2);};
    std::uint8_t header[44]{};
    std::memcpy(header,"RIFF",4);std::memcpy(header+8,"WAVEfmt ",8);std::memcpy(header+36,"data",4);
    put32(header+4,static_cast<std::uint32_t>(36+capture_bytes));put32(header+16,16);put16(header+20,1);put16(header+22,2);
    put32(header+24,sample_rate);put32(header+28,sample_rate*4);put16(header+32,4);put16(header+34,16);
    put32(header+40,static_cast<std::uint32_t>(capture_bytes));
    std::fseek(capture,0,SEEK_SET);std::fwrite(header,1,sizeof(header),capture);std::fseek(capture,0,SEEK_END);
}
std::atomic<std::uint64_t> back_until_us{};
bool enabled(const char *key,bool fallback=true){const char *v=std::getenv(key);return v?std::string(v)!="0"&&std::string(v)!="false":fallback;}
}
std::uint64_t host_time_us() noexcept {
    timespec now{};clock_gettime(CLOCK_MONOTONIC,&now);return static_cast<std::uint64_t>(now.tv_sec)*1000000+now.tv_nsec/1000;
}
void host_sleep_us(std::uint64_t us) noexcept { timespec delay{static_cast<time_t>(us/1000000),static_cast<long>((us%1000000)*1000)};while(nanosleep(&delay,&delay)&&errno==EINTR){} }
void host_sleep_until_us(std::uint64_t deadline) noexcept { timespec until{static_cast<time_t>(deadline/1000000),static_cast<long>((deadline%1000000)*1000)};while(clock_nanosleep(CLOCK_MONOTONIC,TIMER_ABSTIME,&until,nullptr)==EINTR){} }
// Android performance hints (ADPF, API 33+). The guest thread works in a burst
// each frame and then sleeps or waits for the GPU, so the governor sees a
// mostly idle thread and keeps its core slow. Reporting each frame's work
// against three quarters of the frame time lets it raise the clock first.
// PSPRECOMP_MOTORSTORM_PERF_HINT=0 turns it off for A/B runs.
void host_report_frame_work(std::uint64_t work_us,std::uint64_t frame_us) noexcept {
    using GetManager=void*(*)();
    using CreateSession=void*(*)(void*,const std::int32_t*,std::size_t,std::int64_t);
    using Report=int(*)(void*,std::int64_t);
    using UpdateTarget=int(*)(void*,std::int64_t);
    static bool opened{};
    static void *session{};
    static Report report{};
    static UpdateTarget update{};
    static std::uint64_t target_frame_us{};
    if(!opened){
        opened=true;
        if(!enabled("PSPRECOMP_MOTORSTORM_PERF_HINT")){log_line("ANDROID","performance hint off (PSPRECOMP_MOTORSTORM_PERF_HINT=0)");return;}
        void *library=dlopen("libandroid.so",RTLD_NOW|RTLD_LOCAL);
        const auto manager=library?reinterpret_cast<GetManager>(dlsym(library,"APerformanceHint_getManager")):nullptr;
        const auto create=library?reinterpret_cast<CreateSession>(dlsym(library,"APerformanceHint_createSession")):nullptr;
        report=library?reinterpret_cast<Report>(dlsym(library,"APerformanceHint_reportActualWorkDuration")):nullptr;
        update=library?reinterpret_cast<UpdateTarget>(dlsym(library,"APerformanceHint_updateTargetWorkDuration")):nullptr;
        void *hints=manager&&create&&report?manager():nullptr;
        const std::int32_t thread=static_cast<std::int32_t>(gettid());
        target_frame_us=frame_us;
        session=hints?create(hints,&thread,1,static_cast<std::int64_t>(frame_us)*750):nullptr;
        log_line("ANDROID",std::string("performance hint ")+(session?"on":"unavailable")+" for the guest thread, target "+
                 std::to_string(frame_us*3/4)+" us of work a frame");
    }
    if(!session||work_us==0)return;
    if(frame_us!=target_frame_us&&update){target_frame_us=frame_us;update(session,static_cast<std::int64_t>(frame_us)*750);}
    report(session,static_cast<std::int64_t>(work_us)*1000);
}
bool window_enabled(){return enabled("PSPRECOMP_MOTORSTORM_WINDOW");}
void window_start(){if(!display)display=SDL_CreateWindow("MotorStorm: Arctic Edge",960,544,SDL_WINDOW_FULLSCREEN);if(!display)throw std::runtime_error(SDL_GetError());}
void window_set_fullscreen(bool value){if(display)SDL_SetWindowFullscreen(display,value);}
bool window_fullscreen(){return true;}
bool window_close_requested(){return stopped;}
void window_present(psprecomp::GuestMemory &memory,std::uint32_t fb,std::uint32_t stride,std::uint32_t format,std::uint32_t width,std::uint32_t height){
    android::pause_wait();
    static std::uint64_t count{}, previous{}, last_present{};
    const auto now=host_time_us();
    if(const char *bench=std::getenv("PSPRECOMP_MOTORSTORM_BENCH_OUT")) {
        if(now-previous>2000000) {
            log_line("ANDROID", "guest_us="+std::to_string(guest_time_us())+" flips="+std::to_string(count)+
                " gpu_draws="+std::to_string(gpu_report().draws));previous=now;
        }
        const auto report=gpu_report();
        const double cpu_ms=last_present?static_cast<double>(now-last_present)/1000.0:0;
        const char *fps=std::getenv("PSPRECOMP_MOTORSTORM_FPS");
        const int target=fps&&std::strcmp(fps,"60")==0?60:30;
        const int late=cpu_ms>frame_budget_ms(target)?1:0;
        std::string path=bench;
        const auto slash=path.find_last_of("/\\");
        path=(slash==std::string::npos?std::string():path.substr(0,slash+1))+"frame-times.csv";
        static std::ofstream out(path,std::ios::trunc);
        static bool header=false;
        if(!header){out<<"cpu_ms,gpu_ms,render_scale,late\n";header=true;}
        out<<cpu_ms<<','<<report.last_gpu_ms<<','<<report.render_scale<<','<<late<<'\n';
        if((count&63u)==0u)out.flush();
        ++count;
    }
    last_present=now;
    if(!stopped && display)gpu_present(memory,display,fb,stride,format,width,height);
}
PadInput window_input(){std::lock_guard lock(input_mutex);PadInput result=live;result.buttons|=pressed;pressed=0;return result;}
std::uint32_t window_pad(){return window_input().buttons;}
void window_shutdown(){if(display){SDL_DestroyWindow(display);display=nullptr;}}
ControllerSettings controller_settings_from_environment(){ControllerSettings out;out.api="sdl";return out;}
void controller_start(){}
void controller_shutdown(){for(auto &[id,pad]:pads)SDL_CloseGamepad(pad);pads.clear();}
PadInput controller_input(){return window_input();}
void controller_set_rumble(const RumbleOutput &){} // Mobile rumble is pending; never leave motors running.
void controller_set_focus(bool focused){if(!focused){std::lock_guard lock(input_mutex);live={};pressed=0;}}
std::string controller_backend(){return "SDL3 Android";}
bool audio_enabled(){return enabled("PSPRECOMP_MOTORSTORM_AUDIO");}
// Opens the SDL (AAudio/OpenSL ES) output stream. Some Adreno/AAudio devices
// refuse the first open at boot, so a failed open is retried from
// audio_submit at most once a second instead of leaving the game silent.
void audio_start(std::uint32_t rate){
    if(!audio_enabled())return;
    std::lock_guard lock(audio_mutex);if(audio_stream)return;
    if(rate)sample_rate=rate;
    const auto now=host_time_us();
    if(last_open_attempt_us&&now-last_open_attempt_us<1000000)return;
    last_open_attempt_us=now;
    if(const char *value=std::getenv("PSPRECOMP_MOTORSTORM_AUDIO_QUEUE");value&&*value)
        queue_frames=static_cast<std::uint32_t>(std::clamp<long long>(std::atoll(value),2048,32768));
    SDL_AudioSpec format{SDL_AUDIO_S16,2,static_cast<int>(sample_rate)};
    audio_stream=SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK,&format,nullptr,nullptr);
    if(!audio_stream){++audio_stats.errors;log_line("AUDIO",std::string("SDL audio open failed: ")+SDL_GetError()+"; retrying");return;}
    if(!SDL_ResumeAudioStreamDevice(audio_stream))log_line("AUDIO",std::string("SDL audio resume failed: ")+SDL_GetError());
    audio_stats.opened=true;audio_stats.playing=true;
    if(const char *path=std::getenv("PSPRECOMP_MOTORSTORM_AUDIO_CAPTURE");path&&*path&&!capture){
        capture=std::fopen(path,"wb");capture_bytes=0;capture_header();
    }
    SDL_AudioSpec device{};int device_frames=0;
    SDL_GetAudioDeviceFormat(SDL_GetAudioStreamDevice(audio_stream),&device,&device_frames);
    const char *driver=SDL_GetCurrentAudioDriver();
    log_line("AUDIO","SDL audio opened driver="+std::string(driver?driver:"?")+
        " guest="+std::to_string(sample_rate)+"Hz stereo S16 device="+std::to_string(device.freq)+"Hz ch="+
        std::to_string(device.channels)+" period="+std::to_string(device_frames)+" queue="+std::to_string(queue_frames));
}
void audio_submit(const psprecomp::GuestMemory &memory,std::uint32_t at,std::uint32_t frames,std::uint32_t volume){
    if(!audio_enabled()||!frames||!at)return;android::pause_wait();
    if(!memory.contains(at,static_cast<std::size_t>(frames)*4))return;
    audio_start(sample_rate);
    std::vector<std::int16_t> pcm(static_cast<std::size_t>(frames)*2);
    memory.copy_out(at,std::span(reinterpret_cast<std::uint8_t *>(pcm.data()),pcm.size()*2));
    for(auto &value:pcm)value=static_cast<std::int16_t>(std::clamp<std::int64_t>(static_cast<std::int64_t>(value)*volume/0x8000,-32768,32767));
    // Backpressure: the guest waits while the queue is full, like WASAPI.
    const auto start=host_time_us();
    const auto deadline=start+2000000;
    for(;;){
        std::uint64_t queued=0;
        {std::lock_guard lock(audio_mutex);if(!audio_stream)return;
            queued=static_cast<std::uint64_t>(std::max(0,SDL_GetAudioStreamQueued(audio_stream)))/4;}
        if(queued+frames<=queue_frames||stopped||paused)break;
        const auto now=host_time_us();
        if(now>=deadline){std::lock_guard lock(audio_mutex);audio_stats.dropped_frames+=frames;++audio_stats.errors;return;}
        const auto excess=queued+frames-queue_frames;
        host_sleep_us(std::clamp<std::uint64_t>(excess*1000000ull/sample_rate,500u,5000u));
    }
    if(const auto waited=host_time_us()-start;waited>200)blocked_us.fetch_add(waited);
    std::lock_guard lock(audio_mutex);if(!audio_stream)return;
    if(SDL_GetAudioStreamQueued(audio_stream)==0&&audio_stats.queued_buffers>6)++audio_stats.underruns;
    for(const auto value:pcm){
        const auto magnitude=static_cast<std::uint32_t>(std::abs(static_cast<int>(value)));
        audio_stats.peak=std::max(audio_stats.peak,magnitude);if(magnitude)++audio_stats.nonzero_samples;
    }
    if(!SDL_PutAudioStreamData(audio_stream,pcm.data(),static_cast<int>(pcm.size()*2)))++audio_stats.errors;
    else {++audio_stats.queued_buffers;audio_stats.queued_frames+=frames;}
    if(capture&&capture_bytes<0x7FFF0000ull){std::fwrite(pcm.data(),2,pcm.size(),capture);capture_bytes+=pcm.size()*2;}
}
AudioReport audio_report(){std::lock_guard lock(audio_mutex);auto out=audio_stats;if(audio_stream)out.buffered_frames=std::max(0,SDL_GetAudioStreamQueued(audio_stream))/4;return out;}
void audio_shutdown(){
    std::lock_guard lock(audio_mutex);if(audio_stream)SDL_DestroyAudioStream(audio_stream);audio_stream=nullptr;audio_stats.playing=false;
    if(capture){capture_header();std::fclose(capture);capture=nullptr;}
    log_line("AUDIO","queued_buffers="+std::to_string(audio_stats.queued_buffers)+" queued_frames="+std::to_string(audio_stats.queued_frames)+
        " nonzero_samples="+std::to_string(audio_stats.nonzero_samples)+" peak="+std::to_string(audio_stats.peak)+
        " underruns="+std::to_string(audio_stats.underruns)+" dropped_frames="+std::to_string(audio_stats.dropped_frames)+
        " errors="+std::to_string(audio_stats.errors)+" api=sdl");
}
std::uint64_t audio_blocked_us() noexcept {return blocked_us;}
bool audio_frame_pacing_ready(){if(!audio_enabled())return true;auto report=audio_report();return reserve.ready(report.buffered_frames,queue_frames);}

namespace android {
std::atomic<int> skin_buttons{}, skin_axis_x{128}, skin_axis_y{128}, skin_analog{}, skin_generation{};
void request_stop(){stopped=true;paused=false;pause_cv.notify_all();}
// Pause the guest and audio as soon as SDL queues the background event: an
// event watch runs then, before SDL's pump blocks for the paused activity.
void enter_background(){
    if(paused.exchange(true))return;
    controller_set_focus(false);
    std::lock_guard lock(audio_mutex);if(audio_stream)SDL_PauseAudioStreamDevice(audio_stream);
}
void enter_foreground(){
    {std::lock_guard lock(audio_mutex);if(audio_stream)SDL_ResumeAudioStreamDevice(audio_stream);}
    {std::lock_guard lock(input_mutex);paused=false;}
    pause_cv.notify_all();
}
bool SDLCALL lifecycle_watch(void *,SDL_Event *event){
    if(event->type==SDL_EVENT_WILL_ENTER_BACKGROUND)enter_background();
    else if(event->type==SDL_EVENT_DID_ENTER_FOREGROUND)enter_foreground();
    return true;
}
void install_lifecycle_watch(){SDL_AddEventWatch(lifecycle_watch,nullptr);}
void pause_wait(){if(paused){std::unique_lock lock(input_mutex);pause_cv.wait(lock,[]{return !paused||stopped;});}}
void pump_events(){
    SDL_Event event;
    while(SDL_PollEvent(&event)){
        if(event.type==SDL_EVENT_QUIT||event.type==SDL_EVENT_TERMINATING)request_stop();
        if(event.type==SDL_EVENT_WILL_ENTER_BACKGROUND)enter_background();
        if(event.type==SDL_EVENT_DID_ENTER_FOREGROUND)enter_foreground();
        // Back opens the game's pause menu (Start) instead of closing the game.
        if(event.type==SDL_EVENT_KEY_DOWN&&event.key.scancode==SDL_SCANCODE_AC_BACK)back_until_us=host_time_us()+150000;
        if(event.type==SDL_EVENT_GAMEPAD_ADDED){if(auto *pad=SDL_OpenGamepad(event.gdevice.which))pads[event.gdevice.which]=pad;}
        if(event.type==SDL_EVENT_GAMEPAD_REMOVED){auto it=pads.find(event.gdevice.which);if(it!=pads.end()){SDL_CloseGamepad(it->second);pads.erase(it);}}
        if(event.type==SDL_EVENT_FINGER_DOWN||event.type==SDL_EVENT_FINGER_MOTION)fingers[event.tfinger.fingerID]=event.tfinger;
        if(event.type==SDL_EVENT_FINGER_UP||event.type==SDL_EVENT_FINGER_CANCELED)fingers.erase(event.tfinger.fingerID);
        if(event.type==SDL_EVENT_WINDOW_PIXEL_SIZE_CHANGED&&display){int width{},height{};SDL_GetWindowSizeInPixels(display,&width,&height);gpu_set_output_size(width,height);}
    }
    PadInput next;
    if(!paused){
        for(auto &[id,pad]:pads){GamepadState sample;
            for(int button=0;button<=SDL_GAMEPAD_BUTTON_TOUCHPAD;++button)if(SDL_GetGamepadButton(pad,static_cast<SDL_GamepadButton>(button)))sample.buttons|=1u<<button;
            sample.left_x=SDL_GetGamepadAxis(pad,SDL_GAMEPAD_AXIS_LEFTX);sample.left_y=SDL_GetGamepadAxis(pad,SDL_GAMEPAD_AXIS_LEFTY);
            sample.left_trigger=SDL_GetGamepadAxis(pad,SDL_GAMEPAD_AXIS_LEFT_TRIGGER);sample.right_trigger=SDL_GetGamepadAxis(pad,SDL_GAMEPAD_AXIS_RIGHT_TRIGGER);
            next=merge_inputs(next,map_gamepad(sample));
        }
        PadInput touch;
        if(skin_generation.load()){
            touch.buttons=static_cast<std::uint32_t>(skin_buttons.load());
            if(skin_analog.load()){touch.x=static_cast<std::uint8_t>(skin_axis_x.load());touch.y=static_cast<std::uint8_t>(skin_axis_y.load());}
        } else {
            for(auto &[id,finger]:fingers){
                const auto hit=touch_sample(finger.x,finger.y);
                if(hit.axis_x>=0){touch.x=static_cast<std::uint8_t>(hit.axis_x);touch.y=static_cast<std::uint8_t>(hit.axis_y);}
                touch.buttons|=hit.buttons;
            }
        }
        next=merge_inputs(next,touch);
        if(host_time_us()<back_until_us.load())next.buttons|=0x0008u;
    } else fingers.clear();
    std::lock_guard lock(input_mutex);pressed|=next.buttons&~live.buttons;live=next;
}
}
}
#if defined(__ANDROID__)
extern "C" JNIEXPORT void JNICALL
Java_org_psprecomp_motorstorm_GameActivity_setTouch(JNIEnv *, jclass, jint buttons, jint axis_x, jint axis_y, jboolean analog) {
    motorstorm::android::skin_buttons.store(buttons);
    motorstorm::android::skin_axis_x.store(axis_x);
    motorstorm::android::skin_axis_y.store(axis_y);
    motorstorm::android::skin_analog.store(analog ? 1 : 0);
    motorstorm::android::skin_generation.store(1);
}
#endif
