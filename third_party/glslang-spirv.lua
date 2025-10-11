group("third_party")
project("glslang-spirv")
  uuid("1cc8f45e-91e2-4daf-a55e-666bf8b5e6b2")
  kind("StaticLib")
  language("C++")

  includedirs({
    "glslang",
  })

  files({
    "glslang/SPIRV/*.cpp",
    "glslang/SPIRV/*.h",
    "glslang/SPIRV/*.hpp11",
    "glslang/glslang/Include/visibility.h",
  })

  removefiles({
    "glslang/SPIRV/GlslangToSpv.cpp",
  })
