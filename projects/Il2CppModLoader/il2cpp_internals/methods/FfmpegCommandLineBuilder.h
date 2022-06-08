#include <interception_macros.h>

namespace app::methods::FfmpegCommandLineBuilder {
IL2CPP_REGISTER_METHOD(0x0099AE60, FfmpegCommandLineBuilder *, WithPixelFormatBGRA, (FfmpegCommandLineBuilder * __this));
IL2CPP_REGISTER_METHOD(0x0099AF00, FfmpegCommandLineBuilder *, WithPixelFormatYUC420P, (FfmpegCommandLineBuilder * __this));
IL2CPP_REGISTER_METHOD(0x0099AFA0, FfmpegCommandLineBuilder *, WithVideoBitrate, (FfmpegCommandLineBuilder * __this, String * bitrate));
IL2CPP_REGISTER_METHOD(0x0099AFB0, FfmpegCommandLineBuilder *, WithVideoCodec, (FfmpegCommandLineBuilder * __this, String * codec));
IL2CPP_REGISTER_METHOD(0x0099AFC0, FfmpegCommandLineBuilder *, WithUrl, (FfmpegCommandLineBuilder * __this, String * url));
IL2CPP_REGISTER_METHOD(0x0099AFD0, FfmpegCommandLineBuilder *, WithResolution, (FfmpegCommandLineBuilder * __this, int32_t width, int32_t height));
IL2CPP_REGISTER_METHOD(0x0099AFE0, FfmpegCommandLineBuilder *, WithPixelFormat, (FfmpegCommandLineBuilder * __this, String * pixelFormat));
IL2CPP_REGISTER_METHOD(0x0099AFA0, FfmpegCommandLineBuilder *, WithMP4Bitrate, (FfmpegCommandLineBuilder * __this, String * bitrate));
IL2CPP_REGISTER_METHOD(0x0099AFF0, FfmpegCommandLineBuilder *, WithFileFormat, (FfmpegCommandLineBuilder * __this, String * fileFormat));
IL2CPP_REGISTER_METHOD(0x0099B000, FfmpegCommandLineBuilder *, WithThreads, (FfmpegCommandLineBuilder * __this, int32_t threads));
IL2CPP_REGISTER_METHOD(0x0099B010, FfmpegCommandLineBuilder *, WithReport, (FfmpegCommandLineBuilder * __this, bool doReport));
IL2CPP_REGISTER_METHOD(0x0099B020, FfmpegCommandLineBuilder *, WithFramerate, (FfmpegCommandLineBuilder * __this, int32_t framerate));
IL2CPP_REGISTER_METHOD(0x0099B0E0, FfmpegCommandLineBuilder *, WithOutputFile, (FfmpegCommandLineBuilder * __this, String * outFile));
IL2CPP_REGISTER_METHOD(0x0099B0F0, String *, BuildCommandLine, (FfmpegCommandLineBuilder * __this, bool doProres, bool bakeFrameCount, int32_t startFrame));
IL2CPP_REGISTER_METHODINFO(0x047722B0, FfmpegCommandLineBuilder_BuildCommandLine__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099B590, void, __ctor, (FfmpegCommandLineBuilder * __this));
IL2CPP_REGISTER_METHOD(0x0099B670, void, __cctor, ());
}
