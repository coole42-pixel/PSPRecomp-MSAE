get_filename_component(PSPRECOMP_ROOT "${MOTORSTORM_PROFILE}/../.." ABSOLUTE)
set(MOTORSTORM_DXC "${PSPRECOMP_ROOT}/out/motorstorm/_deps/dxc-v1.9.2609/bin/x64/dxc.exe" CACHE FILEPATH "Host SPIR-V compiler")
if(NOT EXISTS "${MOTORSTORM_DXC}")
    message(FATAL_ERROR "Set MOTORSTORM_DXC to the host SPIR-V-capable DXC; no automatic download")
endif()
set(SHADER_DIR "${CMAKE_CURRENT_BINARY_DIR}/motorstorm_spirv")
set(SHADER_HEADERS)
foreach(shader IN ITEMS VS:VS:vs_6_0:flip VSPoint:VS:vs_6_0:none PointVS:PointVS:vs_6_0:flip
    PointGS:PointGS:gs_6_0:flip PS:PS:ps_6_0:position PresentVS:PresentVS:vs_6_0:flip
    PresentPS:PresentPS:ps_6_0:none PostPS:PostPS:ps_6_0:none PostPresentPS:PostPresentPS:ps_6_0:none
    ExpandCS:ExpandCS:cs_6_0:none ResolveCS:ResolveCS:cs_6_0:none CaptureCS:CaptureCS:cs_6_0:none
    DecodeCS:DecodeCS:cs_6_0:none MipCS:MipCS:cs_6_0:none VertexCS:VertexCS:cs_6_0:none
    DecodeTargetCS:DecodeTargetCS:cs_6_0:none PostResolveCS:PostResolveCS:cs_6_0:none
    DebandCS:DebandCS:cs_6_0:none PostCaptureCS:PostCaptureCS:cs_6_0:none PostColorCS:PostColorCS:cs_6_0:none
    PostColorCaptureCS:PostColorCaptureCS:cs_6_0:none DepthResolveCS:DepthResolveCS:cs_6_0:none
    PresentConvertCS:PresentConvertCS:cs_6_0:none)
    string(REPLACE ":" ";" parts "${shader}")
    list(GET parts 0 name)
    list(GET parts 1 entry)
    list(GET parts 2 profile)
    list(GET parts 3 option)
    set(flags)
    if(option STREQUAL "flip")
        list(APPEND flags -fvk-invert-y)
    elseif(option STREQUAL "position")
        list(APPEND flags -fvk-use-dx-position-w)
    endif()
    set(header "${SHADER_DIR}/motorstorm_spirv_${name}.h")
    add_custom_command(OUTPUT "${header}"
        COMMAND ${CMAKE_COMMAND} -E make_directory "${SHADER_DIR}"
        COMMAND "${MOTORSTORM_DXC}" -nologo -spirv -HV 2018 -fspv-target-env=vulkan1.1 -O3
            -DMOTORSTORM_VK_ATTACHMENT=1 ${flags} -T ${profile} -E ${entry}
            -Vn g_motorstorm_spirv_${name} -Fh "${header}" "${MOTORSTORM_PROFILE}/host/motorstorm_gpu.hlsl"
        DEPENDS "${MOTORSTORM_PROFILE}/host/motorstorm_gpu.hlsl" VERBATIM)
    list(APPEND SHADER_HEADERS "${header}")
endforeach()
set(pslock "${SHADER_DIR}/motorstorm_spirv_PSLock.h")
add_custom_command(OUTPUT "${pslock}"
    COMMAND ${CMAKE_COMMAND} -E make_directory "${SHADER_DIR}"
    COMMAND "${MOTORSTORM_DXC}" -nologo -spirv -HV 2018 -fspv-target-env=vulkan1.1spirv1.4 -O3
        -DMOTORSTORM_VK_ATOMIC=1 -fvk-use-dx-position-w -T ps_6_0 -E PS
        -Vn g_motorstorm_spirv_PSLock -Fh "${pslock}" "${MOTORSTORM_PROFILE}/host/motorstorm_gpu.hlsl"
    DEPENDS "${MOTORSTORM_PROFILE}/host/motorstorm_gpu.hlsl" VERBATIM)
list(APPEND SHADER_HEADERS "${pslock}")
# Diagnostics only: the ordered-attachment pixel shader without input
# attachment reads (wrong blending/depth), to measure feedback-loop cost.
set(psnoread "${SHADER_DIR}/motorstorm_spirv_PSNoRead.h")
add_custom_command(OUTPUT "${psnoread}"
    COMMAND ${CMAKE_COMMAND} -E make_directory "${SHADER_DIR}"
    COMMAND "${MOTORSTORM_DXC}" -nologo -spirv -HV 2018 -fspv-target-env=vulkan1.1 -O3
        -DMOTORSTORM_VK_ATTACHMENT=1 -DMOTORSTORM_VK_NOREAD=1 -fvk-use-dx-position-w -T ps_6_0 -E PS
        -Vn g_motorstorm_spirv_PSNoRead -Fh "${psnoread}" "${MOTORSTORM_PROFILE}/host/motorstorm_gpu.hlsl"
    DEPENDS "${MOTORSTORM_PROFILE}/host/motorstorm_gpu.hlsl" VERBATIM)
list(APPEND SHADER_HEADERS "${psnoread}")
set(pstrivial "${SHADER_DIR}/motorstorm_spirv_PSTrivial.h")
add_custom_command(OUTPUT "${pstrivial}"
    COMMAND ${CMAKE_COMMAND} -E make_directory "${SHADER_DIR}"
    COMMAND "${MOTORSTORM_DXC}" -nologo -spirv -HV 2018 -fspv-target-env=vulkan1.1 -O3
        -DMOTORSTORM_VK_ATTACHMENT=1 -DMOTORSTORM_VK_TRIVIAL=1 -fvk-use-dx-position-w -T ps_6_0 -E PS
        -Vn g_motorstorm_spirv_PSTrivial -Fh "${pstrivial}" "${MOTORSTORM_PROFILE}/host/motorstorm_gpu.hlsl"
    DEPENDS "${MOTORSTORM_PROFILE}/host/motorstorm_gpu.hlsl" VERBATIM)
list(APPEND SHADER_HEADERS "${pstrivial}")
set(psnoshade "${SHADER_DIR}/motorstorm_spirv_PSNoShade.h")
add_custom_command(OUTPUT "${psnoshade}"
    COMMAND ${CMAKE_COMMAND} -E make_directory "${SHADER_DIR}"
    COMMAND "${MOTORSTORM_DXC}" -nologo -spirv -HV 2018 -fspv-target-env=vulkan1.1 -O3
        -DMOTORSTORM_VK_ATTACHMENT=1 -DMOTORSTORM_VK_NOSHADE=1 -fvk-use-dx-position-w -T ps_6_0 -E PS
        -Vn g_motorstorm_spirv_PSNoShade -Fh "${psnoshade}" "${MOTORSTORM_PROFILE}/host/motorstorm_gpu.hlsl"
    DEPENDS "${MOTORSTORM_PROFILE}/host/motorstorm_gpu.hlsl" VERBATIM)
list(APPEND SHADER_HEADERS "${psnoshade}")
# Fixed-function pixel path. Separate entries so the ordered PS (pixelUpdate +
# SubpassLoad) stays the fallback compile above.
foreach(shader IN ITEMS VSFast:VSFast:vs_6_0:flip PointVSFast:PointVSFast:vs_6_0:flip
    PSFast:PSFast:ps_6_0:position PSFastAlpha:PSFastAlpha:ps_6_0:position PSFastAlphaEarly:PSFastAlphaEarly:ps_6_0:position
    PSFastFeedback:PSFastFeedback:ps_6_0:position PSFastAlphaFeedback:PSFastAlphaFeedback:ps_6_0:position
    PSLoad:PSLoad:ps_6_0:position
    PackColorCS:PackColorCS:cs_6_0:none PackDepthCS:PackDepthCS:cs_6_0:none)
    string(REPLACE ":" ";" parts "${shader}")
    list(GET parts 0 name)
    list(GET parts 1 entry)
    list(GET parts 2 profile)
    list(GET parts 3 option)
    set(flags)
    if(option STREQUAL "flip")
        list(APPEND flags -fvk-invert-y)
    elseif(option STREQUAL "position")
        list(APPEND flags -fvk-use-dx-position-w)
    endif()
    set(header "${SHADER_DIR}/motorstorm_spirv_${name}.h")
    add_custom_command(OUTPUT "${header}"
        COMMAND ${CMAKE_COMMAND} -E make_directory "${SHADER_DIR}"
        COMMAND "${MOTORSTORM_DXC}" -nologo -spirv -HV 2018 -fspv-target-env=vulkan1.1 -O3
            -DMOTORSTORM_VK_HARDWARE=1 ${flags} -T ${profile} -E ${entry}
            -Vn g_motorstorm_spirv_${name} -Fh "${header}" "${MOTORSTORM_PROFILE}/host/motorstorm_gpu.hlsl"
        DEPENDS "${MOTORSTORM_PROFILE}/host/motorstorm_gpu.hlsl" VERBATIM)
    list(APPEND SHADER_HEADERS "${header}")
endforeach()
add_custom_target(motorstorm_mobile_shaders DEPENDS ${SHADER_HEADERS})
