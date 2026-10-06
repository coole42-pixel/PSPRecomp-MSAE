#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <android/log.h>
#include "android_platform.hpp"
#include "motorstorm_bootstrap.hpp"
#include "motorstorm_window.hpp"
#include "motorstorm_audio.hpp"
#include "motorstorm_controller.hpp"
#include "motorstorm_gpu.hpp"
#include "motorstorm_textures.hpp"
#include "motorstorm_hle.hpp"
#include <algorithm>
#include <atomic>
#include <cstdlib>
#include <fstream>
#include <pthread.h>

struct Session { motorstorm::BootstrapPaths paths; std::atomic<bool> done{}; int result{1}; };
static void *run_guest(void *opaque){
    auto &session=*static_cast<Session *>(opaque);
    try { session.result=motorstorm::run(session.paths); }
    catch(const std::exception &e){motorstorm::log_line("ERROR",e.what());}
    session.done=true;return nullptr;
}
int main(int argc, char **argv) {
    // Back reaches the game as a key (mapped to Start) instead of closing it.
    SDL_SetHint(SDL_HINT_ANDROID_TRAP_BACK_BUTTON, "1");
    // AAudio usage GAME: routed and ducked as game audio.
    SDL_SetHint(SDL_HINT_AUDIO_DEVICE_STREAM_ROLE, "Game");
    if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_GAMEPAD)) return 1;
    motorstorm::android::install_lifecycle_watch();
    std::vector<const char *> arguments{"MotorStormAndroid"};
    for(int i=1;i<argc;++i){
        const std::string key=argv[i];
        if(key=="--bench-seconds"){
            if(i+1>=argc)return 2;
            const long seconds=std::strtol(argv[++i],nullptr,10);
            if(seconds<1||seconds>3600)return 2;
            setenv("PSPRECOMP_MOTORSTORM_BENCH_START_US","115000000",1);
            setenv("PSPRECOMP_MOTORSTORM_BENCH_END_US",std::to_string(115000000ll+seconds*1000000ll).c_str(),1);
            setenv("PSPRECOMP_TIME_TICK_DISPATCHES","0",1);
            setenv("PSPRECOMP_MOTORSTORM_PROFILE","1",1);
            setenv("PSPRECOMP_MOTORSTORM_WAIT_STATS","1",1);
            continue;
        }
        if(key=="--input-script"||key=="--bench-out"||key=="--audio-capture"){
            if(i+1>=argc)return 2;
            setenv(key=="--input-script"?"PSPRECOMP_MOTORSTORM_INPUT_SCRIPT":key=="--bench-out"?"PSPRECOMP_MOTORSTORM_BENCH_OUT":
                "PSPRECOMP_MOTORSTORM_AUDIO_CAPTURE",argv[++i],1);
            continue;
        }
        // Diagnostics: --env KEY=VALUE,KEY=VALUE (A/B switches without a rebuild).
        if(key=="--env"){
            if(i+1>=argc)return 2;
            std::string list=argv[++i];
            for(std::size_t start=0;start<list.size();){
                auto end=list.find_first_of(";,",start);if(end==std::string::npos)end=list.size();
                const auto item=list.substr(start,end-start);const auto eq=item.find('=');
                // '+' stands for ',' inside a value (TU_DEBUG=gmem+nolrz).
                if(eq!=std::string::npos&&eq>0){
                    auto value=item.substr(eq+1);std::replace(value.begin(),value.end(),'+',',');
                    setenv(item.substr(0,eq).c_str(),value.c_str(),1);
                }
                start=end+1;
            }
            continue;
        }
        if(key=="--resolution-mode"||key=="--resolution-cap"||key=="--present-mode"){
            if(i+1>=argc)return 2;
            setenv(key=="--resolution-mode"?"MOTORSTORM_ANDROID_RESOLUTION":key=="--resolution-cap"?"MOTORSTORM_ANDROID_RESOLUTION_CAP":
                "MOTORSTORM_ANDROID_PRESENT_MODE",argv[++i],1);
            continue;
        }
        if(key=="--scale-mode"||key=="--scale"||key=="--scale-min"||key=="--scale-max"||key=="--sgsr-sharpness"){
            if(i+1>=argc)return 2;
            const char *env=key=="--scale-mode"?"PSPRECOMP_MOTORSTORM_SCALE_MODE":key=="--scale"?"PSPRECOMP_MOTORSTORM_SCALE":
                key=="--scale-min"?"PSPRECOMP_MOTORSTORM_SCALE_MIN":key=="--scale-max"?"PSPRECOMP_MOTORSTORM_SCALE_MAX":
                "PSPRECOMP_MOTORSTORM_SGSR_SHARPNESS";
            setenv(env,argv[++i],1);
            continue;
        }
        if(key=="--driver-dir"||key=="--driver-name"||key=="--native-lib"||key=="--driver-temp"||key=="--savedata"){
            if(i+1>=argc)return 2;
            const char *env=key=="--savedata"?"PSPRECOMP_MOTORSTORM_SAVEDATA":key=="--driver-dir"?"MOTORSTORM_ANDROID_DRIVER_DIR":key=="--driver-name"?"MOTORSTORM_ANDROID_DRIVER_NAME":
                key=="--native-lib"?"MOTORSTORM_ANDROID_NATIVE_LIB_DIR":"MOTORSTORM_ANDROID_DRIVER_TEMP";
            if(argv[++i][0])setenv(env,argv[i],1);else unsetenv(env);
        }else arguments.push_back(argv[i]);
    }
    // Not forced: TU_DEBUG=gmem measured 60.7 ms vs 72.6 ms per 1x race frame
    // on MrPurple T30 but presented whole black frames (2-5 per 8 s; 0 with the
    // driver's autotune). Diagnostic only: --env TU_DEBUG=gmem.
    int result=1;
    try {
        Session session;session.paths=motorstorm::resolve_bootstrap_paths(arguments.size(),arguments.data(),".");
        // Legacy diagnostic/filesystem paths are relative; APK process cwd is
        // read-only. All explicit game and save paths remain absolute.
        std::filesystem::current_path(session.paths.config.source.parent_path());
        motorstorm::open_log_file(session.paths.log_file);
        motorstorm::apply_native_config(session.paths.config);
        motorstorm::window_start();
        pthread_attr_t attr;pthread_attr_init(&attr);pthread_attr_setstacksize(&attr,64u*1024u*1024u);
        pthread_t guest;int created=pthread_create(&guest,&attr,run_guest,&session);pthread_attr_destroy(&attr);
        if(created)throw std::runtime_error("Guest thread creation failed");
        // Heartbeat: shows a stalled guest (time not advancing) in the log.
        std::uint64_t next_heartbeat=SDL_GetTicks()+5000;
        while(!session.done){
            motorstorm::android::pump_events();SDL_Delay(2);
            if(SDL_GetTicks()>=next_heartbeat){
                next_heartbeat+=5000;
                const auto audio=motorstorm::audio_report();
                motorstorm::log_line("HEARTBEAT","guest_us="+std::to_string(motorstorm::guest_time_us())+
                    " audio_queued="+std::to_string(audio.buffered_frames)+" audio_buffers="+std::to_string(audio.queued_buffers)+
                    " underruns="+std::to_string(audio.underruns)+" blocked_ms="+std::to_string(motorstorm::audio_blocked_us()/1000));
            }
        }
        pthread_join(guest,nullptr);result=session.result;
        motorstorm::gpu_shutdown();motorstorm::textures::shutdown();motorstorm::audio_shutdown();
        motorstorm::controller_shutdown();motorstorm::window_shutdown();motorstorm::close_log_file();
    } catch(const std::exception &e){__android_log_print(ANDROID_LOG_ERROR,"MotorStorm","%s",e.what());}
    SDL_Quit();return result;
}
