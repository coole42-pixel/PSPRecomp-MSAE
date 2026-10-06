#include <jni.h>
#include <android/native_window_jni.h>
#include <android/log.h>
#include <adrenotools/driver.h>
#include <dlfcn.h>
#include <exception>
#include <stdexcept>
#include <string>
namespace motorstorm::android { std::string vulkan_probe(void *, ANativeWindow *); }
namespace {
std::string text(JNIEnv *env,jstring value){
    if(!value)return {}; const char *p=env->GetStringUTFChars(value,nullptr);
    std::string result=p?p:""; if(p)env->ReleaseStringUTFChars(value,p);return result;
}
}
extern "C" JNIEXPORT jstring JNICALL Java_org_psprecomp_motorstorm_NativeBridge_probe(
    JNIEnv *env,jclass,jobject surface,jstring hook_path,jstring driver_path,jstring driver_name,jstring temp_path){
    const auto hook=text(env,hook_path), directory=text(env,driver_path), name=text(env,driver_name), temp=text(env,temp_path);
    ANativeWindow *window=surface?ANativeWindow_fromSurface(env,surface):nullptr;
    void *loader=nullptr;
    std::string report, failure;
    if(!directory.empty() && !name.empty()) {
        loader=adrenotools_open_libvulkan(RTLD_NOW|RTLD_LOCAL,ADRENOTOOLS_DRIVER_CUSTOM,temp.c_str(),hook.c_str(),
            (directory+"/").c_str(),name.c_str(),nullptr,nullptr);
        if(!loader)failure="Imported driver failed to load; using System";
    }
    if(loader){
        try{report=motorstorm::android::vulkan_probe(loader,window);}
        catch(const std::exception &e){failure="Imported driver initialization failed: "+std::string(e.what());}
        dlclose(loader);loader=nullptr;
    }
    if(report.empty()){
        loader=dlopen("libvulkan.so",RTLD_NOW|RTLD_LOCAL);
        try{
            if(!loader)throw std::runtime_error("System Vulkan loader unavailable");
            report=motorstorm::android::vulkan_probe(loader,window);
        }catch(const std::exception &e){failure += "; System probe failed: "+std::string(e.what());report="{}";}
        if(loader)dlclose(loader);
    }
    if(window)ANativeWindow_release(window);
    // Report the user-facing error separately, avoiding hand-escaped JSON.
    if(!failure.empty())__android_log_print(ANDROID_LOG_ERROR,"MotorStorm","%s",failure.c_str());
    env->SetStaticObjectField(env->FindClass("org/psprecomp/motorstorm/NativeBridge"),
        env->GetStaticFieldID(env->FindClass("org/psprecomp/motorstorm/NativeBridge"),"lastMessage","Ljava/lang/String;"),env->NewStringUTF(failure.c_str()));
    return env->NewStringUTF(report.c_str());
}
