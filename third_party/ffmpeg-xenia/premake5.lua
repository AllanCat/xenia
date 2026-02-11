group("third_party")

--
-- Call this function in subproject scope to set the needed include
-- dirs and defines.
--
function ffmpeg_common()
  defines({
    "HAVE_AV_CONFIG_H",
    "_USE_MATH_DEFINES", -- For M_PI/etc
  })

  -- Paths are relative to the calling script (sub-library premake files),
  -- which are one level deeper (e.g. libavcodec/premake5.lua).
  includedirs({
    "..",           -- ffmpeg-xenia/ (config.h, avconfig.h, ffversion.h)
    "../../FFmpeg", -- FFmpeg source headers
  })
  filter({"platforms:Windows", "configurations:Debug or configurations:Checked"})
    optimize("Size") -- dead code elimination is mandatory
    removebuildoptions({
      "/RTCsu",      -- '/O1' and '/RTCs' command-line options are incompatible
    })
  filter({"platforms:Windows", "configurations:Release"})
    linktimeoptimization("Off")
  filter("platforms:Windows")
    includedirs({
      "../../FFmpeg/compat/atomics/win32",
    })
    links({
      "bcrypt",
    })
  filter("platforms:Linux")
    includedirs({
      "../../FFmpeg/compat/atomics/gcc",
    })
  filter({})
end

include("libavcodec/premake5.lua")
include("libavformat/premake5.lua")
include("libavutil/premake5.lua")
