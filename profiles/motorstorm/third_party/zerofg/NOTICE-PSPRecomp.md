# ZeroFG in PSPRecomp

This folder is the ZeroFG 1.0 engine (`include/`, `src/`, `shaders/`, `tools/`,
`CMakeLists.txt`, `LICENSE`, the upstream README and INTEGRATION.md) copied from
https://github.com/hy300leosquizz-ctrl/ZeroFG at commit
`0b2941dbea77a6b0c879948ffcc704e90ce68056`. It is licensed under the Apache
License 2.0 (`LICENSE`). The Xenia-derived presenter in upstream `host/` is not
included.

Local changes (marked in the files):

- `tools/compile_vulkan13_shader.py`: uses the NDK's `glslc` when
  `glslangValidator` is not installed, and looks for tools in
  `ZEROFG_SHADER_TOOLS`.
- `CMakeLists.txt`: the `ZEROFG_SHADER_TOOLS_DIR` option passes that folder to the
  script.

How MotorStorm uses it: `docs/FRAME_GENERATION.md`.
