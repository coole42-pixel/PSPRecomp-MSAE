cmake_minimum_required(VERSION 3.22)
project(zerofg VERSION 1.0.0 LANGUAGES CXX)

# ZeroFG: a Vulkan frame generation engine. This builds the static library
# `zerofg` (and the alias `zerofg::zerofg`).
#
# Needs at configure/build time:
#   - Python 3, and glslangValidator plus spirv-opt (the Vulkan SDK: set
#     VULKAN_SDK, or have both on PATH) to compile the shaders;
#   - the Vulkan headers: ZEROFG_VULKAN_HEADERS_DIR, or a Vulkan SDK that
#     find_package(Vulkan) can locate.
# Nothing links against a Vulkan loader: ZeroFG resolves every entry point
# through the vkGetInstanceProcAddr the host passes in.

set(ZEROFG_VULKAN_HEADERS_DIR "" CACHE PATH
    "Directory holding vulkan/vulkan.h (empty: find_package(Vulkan))")
# Local change for PSPRecomp: a folder holding glslc and spirv-opt (the Android
# NDK's shader-tools/<host>) used when the Vulkan SDK is not installed.
set(ZEROFG_SHADER_TOOLS_DIR "" CACHE PATH
    "Directory holding glslc and spirv-opt (empty: Vulkan SDK or PATH)")

find_package(Python3 REQUIRED COMPONENTS Interpreter)
if(ZEROFG_VULKAN_HEADERS_DIR)
  set(_zerofg_vulkan_include "${ZEROFG_VULKAN_HEADERS_DIR}")
else()
  find_package(Vulkan REQUIRED)
  set(_zerofg_vulkan_include "${Vulkan_INCLUDE_DIRS}")
endif()

set(_zerofg_shader_compiler
    "${CMAKE_CURRENT_SOURCE_DIR}/tools/compile_vulkan13_shader.py")
set(_zerofg_shader_source_dir "${CMAKE_CURRENT_SOURCE_DIR}/shaders/rc3")
set(_zerofg_shader_output_dir "${CMAKE_CURRENT_BINARY_DIR}/generated/rc3")
set(_zerofg_shader_headers)

function(zerofg_compile_shader output_name source_name symbol)
  set(_output "${_zerofg_shader_output_dir}/${output_name}.h")
  add_custom_command(
    OUTPUT "${_output}"
    COMMAND "${CMAKE_COMMAND}" -E env "ZEROFG_SHADER_TOOLS=${ZEROFG_SHADER_TOOLS_DIR}"
            "${Python3_EXECUTABLE}" "${_zerofg_shader_compiler}"
            "${_zerofg_shader_source_dir}/${source_name}"
            "${_output}" "${symbol}" ${ARGN}
    DEPENDS "${_zerofg_shader_source_dir}/${source_name}"
            "${_zerofg_shader_source_dir}/rc3_common.glsl"
            "${_zerofg_shader_source_dir}/d4c_common.glsl"
            "${_zerofg_shader_compiler}"
    VERBATIM
    COMMENT "Compiling ZeroFG shader ${output_name} for Vulkan 1.3")
  set(_zerofg_shader_headers ${_zerofg_shader_headers} "${_output}"
      PARENT_SCOPE)
endfunction()

zerofg_compile_shader(rc3_crop crop.comp zerofg_rc3_crop_spv)
zerofg_compile_shader(rc3_d0 d0_frontend.comp zerofg_rc3_d0_spv)
zerofg_compile_shader(rc3_d0a d0a_lattice.comp zerofg_rc3_d0a_spv)
zerofg_compile_shader(rc3_d0b d0b_luma_full.comp zerofg_rc3_d0b_spv)
zerofg_compile_shader(rc3_d0p d0p_photo.comp zerofg_rc3_d0p_spv)
zerofg_compile_shader(rc3_d1 d1_evidence.comp zerofg_rc3_d1_spv)
zerofg_compile_shader(rc3_d2_h0 d2_refine.comp zerofg_rc3_d2_h0_spv
                      -DZFG_H1_ENABLED=0)
zerofg_compile_shader(rc3_d3 d3_cells.comp zerofg_rc3_d3_spv)
zerofg_compile_shader(rc3_d4 d4_fine.comp zerofg_rc3_d4_spv)
zerofg_compile_shader(rc3_d4sg d4_fine.comp zerofg_rc3_d4sg_spv
                      -DZFG_SUBGROUP=1)
zerofg_compile_shader(rc3_d4c d4c_camera.comp zerofg_rc3_d4c_spv)
zerofg_compile_shader(rc3_d4cc d4c_cost.comp zerofg_rc3_d4cc_spv)
zerofg_compile_shader(rc3_d4cp d4c_pick.comp zerofg_rc3_d4cp_spv)
zerofg_compile_shader(rc3_d5a d5a_resolve.comp zerofg_rc3_d5a_spv)
zerofg_compile_shader(rc3_d5ah d5a_resolve.comp zerofg_rc3_d5ah_spv
                      -DZFG_HALF=1)

set_source_files_properties(${_zerofg_shader_headers} PROPERTIES GENERATED TRUE)

add_library(zerofg STATIC
  src/zerofg.cc
  src/rc3/rc3_context.cc
  ${_zerofg_shader_headers}
)
add_library(zerofg::zerofg ALIAS zerofg)

target_include_directories(zerofg
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${_zerofg_vulkan_include}
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${_zerofg_shader_output_dir}
)
target_compile_features(zerofg PUBLIC cxx_std_20)
