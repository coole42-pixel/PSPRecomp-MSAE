cmake_minimum_required(VERSION 3.22)
project(MotorStormAndroid LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
get_filename_component(MOTORSTORM_PROFILE "${CMAKE_CURRENT_LIST_DIR}/../../../../.." ABSOLUTE)
set(BUILD_SHARED_LIBS OFF CACHE BOOL "" FORCE)
add_subdirectory("${MOTORSTORM_PROFILE}/third_party/adrenotools" "adrenotools")
add_library(motorstorm_android SHARED android_bridge.cpp "${MOTORSTORM_PROFILE}/tools/android/vulkan_probe.cpp")
target_compile_definitions(motorstorm_android PRIVATE VK_USE_PLATFORM_ANDROID_KHR)
target_compile_options(motorstorm_android PRIVATE -Wall -Wextra)
target_link_libraries(motorstorm_android PRIVATE adrenotools android log dl)

if(NOT EXISTS "${MOTORSTORM_SDL_SOURCE}/CMakeLists.txt")
    message(FATAL_ERROR "SDL3 3.4.18 source required; set -PsdlSource=/path/to/source. See android/README.md.")
endif()
set(SDL_SHARED ON CACHE BOOL "" FORCE)
set(SDL_STATIC OFF CACHE BOOL "" FORCE)
set(SDL_TESTS OFF CACHE BOOL "" FORCE)
add_subdirectory("${MOTORSTORM_SDL_SOURCE}" "SDL3")
add_library(main SHARED android_main.cpp)
target_link_libraries(main PRIVATE SDL3::SDL3 android log dl adrenotools)

# Independently compile the existing AOT corpus with Clang before runtime wiring.
get_filename_component(PSPRECOMP_ROOT "${MOTORSTORM_PROFILE}/../.." ABSOLUTE)
file(GLOB AOT_SOURCES CONFIGURE_DEPENDS "${MOTORSTORM_PROFILE}/generated/*.cpp")
add_library(motorstorm_aot OBJECT ${AOT_SOURCES})
set_target_properties(motorstorm_aot PROPERTIES EXCLUDE_FROM_ALL TRUE)
target_include_directories(motorstorm_aot PRIVATE "${PSPRECOMP_ROOT}/include")
target_compile_options(motorstorm_aot PRIVATE -O2 -g0)

include(shaders.cmake)
# ZeroFG frame generation (Apache-2.0). It resolves every Vulkan entry point
# through the host's vkGetInstanceProcAddr, so it links no loader. Its shaders
# compile with the NDK's own glslc and spirv-opt.
set(ZEROFG_VULKAN_HEADERS_DIR "${MOTORSTORM_PROFILE}/third_party/vulkan/include" CACHE PATH "" FORCE)
if(NOT ZEROFG_SHADER_TOOLS_DIR)
    foreach(host IN ITEMS windows-x86_64 linux-x86_64 darwin-x86_64)
        if(EXISTS "${CMAKE_ANDROID_NDK}/shader-tools/${host}/glslc.exe" OR EXISTS "${CMAKE_ANDROID_NDK}/shader-tools/${host}/glslc")
            set(ZEROFG_SHADER_TOOLS_DIR "${CMAKE_ANDROID_NDK}/shader-tools/${host}" CACHE PATH "" FORCE)
            break()
        endif()
    endforeach()
endif()
add_subdirectory("${MOTORSTORM_PROFILE}/third_party/zerofg" "zerofg")
set(CORE_SOURCES allegrex_context decoder deflate elf32 guest_memory hle_audio_output2 hle_savedata hle_sas nid_registry program_analysis runtime sha256)
foreach(source IN LISTS CORE_SOURCES)
    list(APPEND CORE_FILES "${PSPRECOMP_ROOT}/src/${source}.cpp")
endforeach()
add_library(psprecomp_android_core STATIC ${CORE_FILES})
target_include_directories(psprecomp_android_core PUBLIC "${PSPRECOMP_ROOT}/include")
# Multiplayer transport (thin UDP + crypto + rendezvous + PSP ad-hoc engine); dependency-free.
set(NET_SOURCES crypto transport thin_udp rendezvous adhoc)
foreach(source IN LISTS NET_SOURCES)
    list(APPEND NET_FILES "${PSPRECOMP_ROOT}/src/net/${source}.cpp")
endforeach()
add_library(psprecomp_android_net STATIC ${NET_FILES})
target_include_directories(psprecomp_android_net PUBLIC "${PSPRECOMP_ROOT}/include")

set(MOTORSTORM_FFMPEG_ROOT "C:/Users/Admin/Documents/examples/ppsspp/ffmpeg/android/arm64" CACHE PATH "Local LGPL FFmpeg arm64 dependency for development")
if(NOT EXISTS "${MOTORSTORM_FFMPEG_ROOT}/include/libavcodec/avcodec.h")
    message(FATAL_ERROR "Set MOTORSTORM_FFMPEG_ROOT to an arm64 FFmpeg dependency. No download or stub decoder.")
endif()
foreach(lib IN ITEMS avformat avcodec swresample swscale avutil)
    add_library(ms_${lib} STATIC IMPORTED)
    set_target_properties(ms_${lib} PROPERTIES IMPORTED_LOCATION "${MOTORSTORM_FFMPEG_ROOT}/lib/lib${lib}.a")
    list(APPEND MEDIA_LIBS ms_${lib})
endforeach()
set(HOST_SOURCES motorstorm_config motorstorm_bootstrap motorstorm_hle motorstorm_net_hle motorstorm_ge motorstorm_gpu
    motorstorm_gpu_vulkan motorstorm_vma motorstorm_textures motorstorm_post motorstorm_atrac motorstorm_media)
foreach(source IN LISTS HOST_SOURCES)
    list(APPEND HOST_FILES "${MOTORSTORM_PROFILE}/host/${source}.cpp")
endforeach()
target_sources(main PRIVATE android_platform.cpp ${HOST_FILES} "${MOTORSTORM_PROFILE}/../vcs/host/vcs_media_decoder.cpp" $<TARGET_OBJECTS:motorstorm_aot>)
target_include_directories(main PRIVATE "${MOTORSTORM_PROFILE}/host" "${MOTORSTORM_PROFILE}/../vcs/host"
    "${MOTORSTORM_FFMPEG_ROOT}/include" "${MOTORSTORM_PROFILE}/third_party/stb")
set_property(SOURCE "${MOTORSTORM_PROFILE}/host/motorstorm_gpu.cpp" "${MOTORSTORM_PROFILE}/host/motorstorm_gpu_vulkan.cpp"
    "${MOTORSTORM_PROFILE}/host/motorstorm_vma.cpp" APPEND PROPERTY COMPILE_DEFINITIONS MOTORSTORM_VULKAN=1)
set_property(SOURCE "${MOTORSTORM_PROFILE}/host/motorstorm_gpu.cpp" "${MOTORSTORM_PROFILE}/host/motorstorm_gpu_vulkan.cpp"
    "${MOTORSTORM_PROFILE}/host/motorstorm_vma.cpp" APPEND PROPERTY INCLUDE_DIRECTORIES
    "${MOTORSTORM_PROFILE}/third_party/vulkan/include" "${MOTORSTORM_PROFILE}/third_party/vma" "${SHADER_DIR}")
# The arm64 FFmpeg archive has no atrac3/atrac3p decoder: music and movie audio
# use FFmpeg's decoders extracted to stand alone (LGPL-2.1+, see README there).
set(AT3_DIR "${MOTORSTORM_PROFILE}/third_party/at3_standalone")
add_library(motorstorm_at3 STATIC "${AT3_DIR}/atrac.cpp" "${AT3_DIR}/atrac3.cpp" "${AT3_DIR}/atrac3plus.cpp"
    "${AT3_DIR}/atrac3plusdec.cpp" "${AT3_DIR}/atrac3plusdsp.cpp" "${AT3_DIR}/get_bits.cpp" "${AT3_DIR}/compat.cpp"
    "${AT3_DIR}/fft.cpp" "${AT3_DIR}/mem.cpp")
target_include_directories(motorstorm_at3 PRIVATE "${AT3_DIR}")
target_compile_options(motorstorm_at3 PRIVATE -O2 -w)
target_link_libraries(motorstorm_at3 PRIVATE log)
set_property(SOURCE "${MOTORSTORM_PROFILE}/../vcs/host/vcs_media_decoder.cpp" APPEND PROPERTY COMPILE_DEFINITIONS PSPRECOMP_AT3_STANDALONE=1)
set_property(SOURCE "${MOTORSTORM_PROFILE}/../vcs/host/vcs_media_decoder.cpp" APPEND PROPERTY INCLUDE_DIRECTORIES "${AT3_DIR}")
target_link_libraries(main PRIVATE psprecomp_android_core psprecomp_android_net motorstorm_at3 zerofg ${MEDIA_LIBS} z m)
add_dependencies(main motorstorm_mobile_shaders)
