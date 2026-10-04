set(MOTORSTORM_PROFILE_DIR "${CMAKE_CURRENT_SOURCE_DIR}")

# The generated corpus is 641 units of one 4 KiB guest span each, emitted with
# `psp_recomp --builtin-accessors` and compiled at /Ob0.  Small units keep each
# unit-entry stack frame (and its per-call __chkstk probe) small; the builtin
# accessors avoid out-of-line calls that /Ob0 would otherwise leave on every
# register/memory access.  See docs/PERFORMANCE_RACE_BENCH.md.  Keep MSVC
# whole-program optimization off the corpus by default; per-TU optimization
# already gives the runtime its performance.  Host code may still use
# PSPRECOMP_LTO.
option(PSPRECOMP_MOTORSTORM_AOT_LTO
    "Include generated MotorStorm AOT units in MSVC whole-program optimization" OFF)
option(PSPRECOMP_MOTORSTORM_HOST_SYMBOLS "Build MotorStormNative host sources with /Zi and a PDB for profiling" OFF)
set(PSPRECOMP_MOTORSTORM_INLINE_LEVEL "0" CACHE STRING
    "MSVC /Ob level for generated MotorStorm AOT units (0, 1, 2 or 3); /Ob1 and /Ob2 measured slower")
set_property(CACHE PSPRECOMP_MOTORSTORM_INLINE_LEVEL PROPERTY STRINGS 0 1 2 3)
if(NOT PSPRECOMP_MOTORSTORM_INLINE_LEVEL MATCHES "^[0-3]$")
    message(FATAL_ERROR "PSPRECOMP_MOTORSTORM_INLINE_LEVEL must be 0, 1, 2 or 3")
endif()

# The former 128 KiB units were ~73k lines each and several concurrent cl.exe
# front-ends exhausted a 16 GiB machine.  The 4 KiB units are small, but keep
# the project-wide /MP degree capped instead of inheriting the machine default.
set(PSPRECOMP_MOTORSTORM_MP_JOBS "4" CACHE STRING
    "Max concurrent cl.exe front-ends for the MotorStorm target")
if(NOT PSPRECOMP_MOTORSTORM_MP_JOBS MATCHES "^[0-9]+$")
    message(FATAL_ERROR "PSPRECOMP_MOTORSTORM_MP_JOBS must be a non-negative integer")
endif()
if(PSPRECOMP_MOTORSTORM_MP_JOBS STREQUAL "0")
    set(MOTORSTORM_MSVC_MP_FLAG "/MP")
elseif(PSPRECOMP_MOTORSTORM_MP_JOBS STREQUAL "1")
    set(MOTORSTORM_MSVC_MP_FLAG "")
else()
    set(MOTORSTORM_MSVC_MP_FLAG "/MP${PSPRECOMP_MOTORSTORM_MP_JOBS}")
endif()

# The generated manifest is produced by psp_recomp; normal builds never
# regenerate it (the corpus is checked in).  Rebuild only when the files change.
# PSPRECOMP_MOTORSTORM_GENERATED_DIR selects an alternate corpus (for example
# one generated with a different unit span) without touching the checked-in one.
set(PSPRECOMP_MOTORSTORM_GENERATED_DIR "${MOTORSTORM_PROFILE_DIR}/generated" CACHE PATH
    "Directory holding the generated MotorStorm AOT corpus")
set(MOTORSTORM_GENERATED_DIR "${PSPRECOMP_MOTORSTORM_GENERATED_DIR}")
set(MOTORSTORM_REGISTRY "${MOTORSTORM_GENERATED_DIR}/generated_registry.cpp")
if(NOT EXISTS "${MOTORSTORM_REGISTRY}")
    message(FATAL_ERROR
        "MotorStorm generated corpus is missing: ${MOTORSTORM_REGISTRY}. "
        "Regenerate it with psp_recomp/psp_analyze before configuring this profile.")
endif()

file(GLOB MOTORSTORM_GENERATED CONFIGURE_DEPENDS "${MOTORSTORM_GENERATED_DIR}/*.cpp")
list(LENGTH MOTORSTORM_GENERATED MOTORSTORM_GENERATED_COUNT)
if(MOTORSTORM_GENERATED_COUNT LESS 2)
    message(FATAL_ERROR "MotorStorm generated corpus is incomplete (${MOTORSTORM_GENERATED_COUNT} sources)")
endif()

if(MSVC)
    if(PSPRECOMP_GENERATED_OPT_LEVEL STREQUAL "0")
        set(MOTORSTORM_GENERATED_MSVC_OPT "/Od")
    elseif(PSPRECOMP_GENERATED_OPT_LEVEL STREQUAL "3")
        set(MOTORSTORM_GENERATED_MSVC_OPT "/Ox")
    else()
        set(MOTORSTORM_GENERATED_MSVC_OPT "/O${PSPRECOMP_GENERATED_OPT_LEVEL}")
    endif()
    set(MOTORSTORM_GENERATED_MSVC_OPTIONS
        "${MOTORSTORM_GENERATED_MSVC_OPT};/Ob${PSPRECOMP_MOTORSTORM_INLINE_LEVEL};/bigobj")
    if(PSPRECOMP_LTO AND NOT PSPRECOMP_MOTORSTORM_AOT_LTO)
        # CMAKE_INTERPROCEDURAL_OPTIMIZATION adds /GL at target scope; /GL- on
        # the generated sources keeps the whole corpus out of LTCG.
        string(APPEND MOTORSTORM_GENERATED_MSVC_OPTIONS ";/GL-")
    endif()
    set_source_files_properties(${MOTORSTORM_GENERATED} PROPERTIES COMPILE_OPTIONS
        "${MOTORSTORM_GENERATED_MSVC_OPTIONS}")
else()
    set_source_files_properties(${MOTORSTORM_GENERATED} PROPERTIES COMPILE_OPTIONS
        "-O${PSPRECOMP_GENERATED_OPT_LEVEL};-g0")
endif()

set(MOTORSTORM_HOST_SOURCES
    host/main.cpp
    host/motorstorm_config.cpp
    host/motorstorm_bootstrap.cpp
    host/motorstorm_hle.cpp
    host/motorstorm_ge.cpp
    host/motorstorm_gpu.cpp
    host/motorstorm_window.cpp
    host/motorstorm_audio.cpp
    host/motorstorm_pacing.cpp
    host/motorstorm_textures.cpp
    host/motorstorm_post.cpp
    host/motorstorm_atrac.cpp
    host/motorstorm_media.cpp
    ../vcs/host/vcs_media_decoder.cpp
)

# D3D12 shaders are compiled once at build time with the Windows SDK's fxc
# (a pinned compiler; no D3DCompile and no compile cost at startup). Every
# entry point becomes motorstorm_shader_<entry>.h with the bytecode array
# g_motorstorm_<entry>.
find_program(MOTORSTORM_FXC fxc
    HINTS "$ENV{WindowsSdkVerBinPath}/x64"
          "${CMAKE_WINDOWS_KITS_10_DIR}/bin/${CMAKE_VS_WINDOWS_TARGET_PLATFORM_VERSION}/x64"
    PATHS "C:/Program Files (x86)/Windows Kits/10/bin/${CMAKE_VS_WINDOWS_TARGET_PLATFORM_VERSION}/x64")
if(NOT MOTORSTORM_FXC)
    file(GLOB MOTORSTORM_FXC_CANDIDATES "C:/Program Files (x86)/Windows Kits/10/bin/10.*/x64/fxc.exe")
    list(SORT MOTORSTORM_FXC_CANDIDATES ORDER DESCENDING)
    list(GET MOTORSTORM_FXC_CANDIDATES 0 MOTORSTORM_FXC)
endif()
if(NOT MOTORSTORM_FXC OR NOT EXISTS "${MOTORSTORM_FXC}")
    message(FATAL_ERROR "fxc.exe (Windows 10/11 SDK) is required to compile the MotorStorm D3D12 shaders. "
                        "Install the Windows SDK or set MOTORSTORM_FXC.")
endif()
set(MOTORSTORM_SHADER_SOURCE "${MOTORSTORM_PROFILE_DIR}/host/motorstorm_gpu.hlsl")
set(MOTORSTORM_SHADER_DIR "${CMAKE_CURRENT_BINARY_DIR}/motorstorm_shaders")
set(MOTORSTORM_SHADER_HEADERS)
foreach(shader IN ITEMS VS:vs_5_1 PS:ps_5_1 PointGS:gs_5_1 PresentVS:vs_5_1 PresentPS:ps_5_1
                        ExpandCS:cs_5_1 ResolveCS:cs_5_1 CaptureCS:cs_5_1 DecodeCS:cs_5_1 MipCS:cs_5_1
                        PostResolveCS:cs_5_1 DebandCS:cs_5_1 PostPS:ps_5_1 PostCaptureCS:cs_5_1
                        PostColorCS:cs_5_1 PostPresentPS:ps_5_1 PostColorCaptureCS:cs_5_1
                        DepthResolveCS:cs_5_1 VertexCS:cs_5_1 DecodeTargetCS:cs_5_1)
    string(REPLACE ":" ";" shader_parts "${shader}")
    list(GET shader_parts 0 entry)
    list(GET shader_parts 1 profile)
    set(header "${MOTORSTORM_SHADER_DIR}/motorstorm_shader_${entry}.h")
    add_custom_command(OUTPUT "${header}"
        COMMAND ${CMAKE_COMMAND} -E make_directory "${MOTORSTORM_SHADER_DIR}"
        COMMAND "${MOTORSTORM_FXC}" /nologo /O3 /Ges /Qstrip_reflect /Qstrip_debug
                /E ${entry} /T ${profile} /Vn g_motorstorm_${entry} /Fh "${header}" "${MOTORSTORM_SHADER_SOURCE}"
        DEPENDS "${MOTORSTORM_SHADER_SOURCE}"
        COMMENT "fxc ${entry} (${profile})"
        VERBATIM)
    list(APPEND MOTORSTORM_SHADER_HEADERS "${header}")
endforeach()
add_custom_target(motorstorm_shaders DEPENDS ${MOTORSTORM_SHADER_HEADERS})
function(motorstorm_use_shaders target)
    target_include_directories(${target} PRIVATE "${MOTORSTORM_SHADER_DIR}")
    add_dependencies(${target} motorstorm_shaders)
endfunction()

file(GLOB MOTORSTORM_MEDIA_DLLS "${MOTORSTORM_PROFILE_DIR}/../vcs/third_party/ffmpeg/bin/*.dll")
function(motorstorm_target_common target)
    target_include_directories(${target} PRIVATE
        "${MOTORSTORM_PROFILE_DIR}/host"
        "${MOTORSTORM_GENERATED_DIR}")
    target_include_directories(${target} PRIVATE
        "${MOTORSTORM_PROFILE_DIR}/../vcs/host"
        "${MOTORSTORM_PROFILE_DIR}/../vcs/third_party/ffmpeg/include")
    target_link_libraries(${target} PRIVATE psprecomp_core winmm avrt d3d12 dxgi dxguid windowscodecs ole32)
    motorstorm_use_shaders(${target})
    foreach(media_library avcodec avformat avutil swresample swscale)
        target_link_libraries(${target} PRIVATE
            "${MOTORSTORM_PROFILE_DIR}/../vcs/third_party/ffmpeg/lib/${media_library}.lib")
    endforeach()
    add_custom_command(TARGET ${target} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            ${MOTORSTORM_MEDIA_DLLS} "$<TARGET_FILE_DIR:${target}>"
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${MOTORSTORM_PROFILE_DIR}/../vcs/third_party/ffmpeg/COPYING.LGPLv2.1" "$<TARGET_FILE_DIR:${target}>")
    psprecomp_enable_host_avx(${target})
endfunction()

function(motorstorm_set_runtime_output target)
    set_target_properties(${target} PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/$<CONFIG>")
endfunction()

add_executable(MotorStormNative
    ${MOTORSTORM_HOST_SOURCES}
    ${MOTORSTORM_GENERATED}
)
motorstorm_target_common(MotorStormNative)
motorstorm_set_runtime_output(MotorStormNative)

if(MSVC)
    # Keep /Ob3 on the host sources only: a target-wide /Ob3 would silently
    # override the per-source /Ob0 set on the generated corpus.  The /MP cap
    # above still applies project-wide, but /MP never conflicts with /Ob.
    target_compile_options(MotorStormNative PRIVATE ${MOTORSTORM_MSVC_MP_FLAG})
    # PSPRECOMP_MOTORSTORM_HOST_SYMBOLS adds full debug info for the host
    # sources and a PDB (publics only for the generated corpus) so
    # tools/sampler can attribute samples; code generation is unchanged.
    set(MOTORSTORM_HOST_MSVC_OPTIONS "$<$<CONFIG:Release>:/Ob3>;$<$<CONFIG:RelWithDebInfo>:/Ob3>")
    if(PSPRECOMP_MOTORSTORM_HOST_SYMBOLS)
        string(APPEND MOTORSTORM_HOST_MSVC_OPTIONS ";/Zi")
        target_link_options(MotorStormNative PRIVATE /DEBUG /OPT:REF /OPT:ICF)
    endif()
    set_source_files_properties(${MOTORSTORM_HOST_SOURCES}
        DIRECTORY "${MOTORSTORM_PROFILE_DIR}" PROPERTIES COMPILE_OPTIONS
        "${MOTORSTORM_HOST_MSVC_OPTIONS}")
    target_link_options(MotorStormNative PRIVATE /STACK:67108864)
    if(PSPRECOMP_LTO)
        target_link_options(MotorStormNative PRIVATE /LTCG:STATUS /INCREMENTAL:NO)
        if(NOT PSPRECOMP_MSVC_CGTHREADS STREQUAL "0")
            target_link_options(MotorStormNative PRIVATE "/CGTHREADS:${PSPRECOMP_MSVC_CGTHREADS}")
        endif()
    endif()
endif()

add_custom_command(TARGET MotorStormNative POST_BUILD
    COMMAND ${CMAKE_COMMAND}
        "-DSOURCE=${MOTORSTORM_PROFILE_DIR}/config/motorstorm.ini"
        "-DDESTINATION=$<TARGET_FILE_DIR:MotorStormNative>"
        -P "${MOTORSTORM_PROFILE_DIR}/scripts/stage_ini.cmake"
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "$<TARGET_FILE:MotorStormNative>"
        "$<TARGET_FILE_DIR:MotorStormNative>/MotorStormNativePhase12.exe"
    COMMENT "Staging MotorStormNative.ini and Phase12 executable alias")

# Offline texture extraction from the disc's PAK archives (no game run).
# It decodes through the runtime GE texel path, so it links the GE/GPU units.
add_executable(MotorStormTextureExtract
    tools/texture_extract/motorstorm_texture_extract.cpp
    host/motorstorm_ge.cpp
    host/motorstorm_gpu.cpp
    host/motorstorm_textures.cpp
    host/motorstorm_post.cpp)
target_include_directories(MotorStormTextureExtract PRIVATE "${MOTORSTORM_PROFILE_DIR}/host")
target_link_libraries(MotorStormTextureExtract PRIVATE psprecomp_core d3d12 dxgi dxguid windowscodecs ole32)
motorstorm_use_shaders(MotorStormTextureExtract)
motorstorm_set_runtime_output(MotorStormTextureExtract)

if(PSPRECOMP_BUILD_PROFILE_TESTS)
    if(NOT PSPRECOMP_BUILD_TESTS)
        enable_testing()
    endif()
    add_executable(motorstorm_profile_tests
        tests/motorstorm_profile_tests.cpp
        host/motorstorm_config.cpp
        host/motorstorm_bootstrap.cpp
        host/motorstorm_hle.cpp
        host/motorstorm_ge.cpp
        host/motorstorm_gpu.cpp
        host/motorstorm_window.cpp
        host/motorstorm_audio.cpp
        host/motorstorm_pacing.cpp
        host/motorstorm_textures.cpp
        host/motorstorm_post.cpp
        host/motorstorm_atrac.cpp
        host/motorstorm_media.cpp
        ../vcs/host/vcs_media_decoder.cpp)
    motorstorm_target_common(motorstorm_profile_tests)
    motorstorm_set_runtime_output(motorstorm_profile_tests)
    if(MSVC)
        target_link_options(motorstorm_profile_tests PRIVATE /STACK:67108864)
    endif()
    add_test(NAME motorstorm_profile_tests COMMAND motorstorm_profile_tests)
    add_executable(motorstorm_config_tests tests/motorstorm_config_tests.cpp host/motorstorm_config.cpp)
    target_include_directories(motorstorm_config_tests PRIVATE "${MOTORSTORM_PROFILE_DIR}/host")
    target_compile_definitions(motorstorm_config_tests PRIVATE
        MOTORSTORM_CONFIG_TEMPLATE="${MOTORSTORM_PROFILE_DIR}/config/motorstorm.ini")
    target_compile_definitions(motorstorm_config_tests PRIVATE
        MOTORSTORM_CLEAN_CONFIG="${MOTORSTORM_PROFILE_DIR}/config/MotorStormNativeClean.ini"
        MOTORSTORM_DEBUG_CONFIG="${MOTORSTORM_PROFILE_DIR}/config/MotorStormFullDebug.ini")
    motorstorm_set_runtime_output(motorstorm_config_tests)
    add_test(NAME motorstorm_config_tests COMMAND motorstorm_config_tests)
    add_executable(motorstorm_texture_tests tests/motorstorm_texture_tests.cpp host/motorstorm_textures.cpp)
    target_include_directories(motorstorm_texture_tests PRIVATE "${MOTORSTORM_PROFILE_DIR}/host")
    target_link_libraries(motorstorm_texture_tests PRIVATE windowscodecs ole32)
    motorstorm_set_runtime_output(motorstorm_texture_tests)
    add_test(NAME motorstorm_texture_tests COMMAND motorstorm_texture_tests)
    add_executable(motorstorm_post_tests tests/motorstorm_post_tests.cpp host/motorstorm_post.cpp
        host/motorstorm_config.cpp)
    target_include_directories(motorstorm_post_tests PRIVATE "${MOTORSTORM_PROFILE_DIR}/host")
    target_compile_definitions(motorstorm_post_tests PRIVATE
        MOTORSTORM_CONFIG_TEMPLATE="${MOTORSTORM_PROFILE_DIR}/config/motorstorm.ini")
    motorstorm_set_runtime_output(motorstorm_post_tests)
    add_test(NAME motorstorm_post_tests COMMAND motorstorm_post_tests)

    add_executable(motorstorm_window_tests tests/motorstorm_window_tests.cpp
        host/motorstorm_window.cpp host/motorstorm_gpu.cpp host/motorstorm_ge.cpp host/motorstorm_textures.cpp
        host/motorstorm_post.cpp)
    target_include_directories(motorstorm_window_tests PRIVATE "${MOTORSTORM_PROFILE_DIR}/host")
    target_link_libraries(motorstorm_window_tests PRIVATE psprecomp_core d3d12 dxgi dxguid user32 gdi32
        windowscodecs ole32)
    motorstorm_use_shaders(motorstorm_window_tests)
    motorstorm_set_runtime_output(motorstorm_window_tests)
    option(PSPRECOMP_MOTORSTORM_WINDOW_TESTS "Register tests requiring a Windows desktop" OFF)
    if(PSPRECOMP_MOTORSTORM_WINDOW_TESTS)
        add_test(NAME motorstorm_window_tests COMMAND motorstorm_window_tests)
        set_tests_properties(motorstorm_window_tests PROPERTIES TIMEOUT 20)
    endif()
    add_executable(motorstorm_gpu_tests tests/motorstorm_gpu_tests.cpp
        host/motorstorm_ge.cpp host/motorstorm_gpu.cpp host/motorstorm_textures.cpp host/motorstorm_post.cpp)
    target_include_directories(motorstorm_gpu_tests PRIVATE "${MOTORSTORM_PROFILE_DIR}/host")
    target_link_libraries(motorstorm_gpu_tests PRIVATE psprecomp_core d3d12 dxgi dxguid windowscodecs ole32)
    motorstorm_use_shaders(motorstorm_gpu_tests)
    motorstorm_set_runtime_output(motorstorm_gpu_tests)
    # Hardware tests are explicit: portable CI may have no D3D12/ROV adapter.
    option(PSPRECOMP_MOTORSTORM_GPU_TESTS "Register tests requiring a hardware D3D12 ROV adapter" OFF)
    if(PSPRECOMP_MOTORSTORM_GPU_TESTS)
        add_test(NAME motorstorm_gpu_tests COMMAND motorstorm_gpu_tests)
        add_test(NAME motorstorm_profile_d3d12_tests COMMAND motorstorm_profile_tests --d3d12)
        add_test(NAME motorstorm_window_d3d12_tests COMMAND motorstorm_window_tests --d3d12)
        set_tests_properties(motorstorm_window_d3d12_tests PROPERTIES TIMEOUT 30)
    endif()
endif()
