#include <interception_macros.h>

namespace app::methods::FfmpegCommandLineBuilder {
IL2CPP_REGISTER_METHOD(0x0099AE60, FfmpegCommandLineBuilder *, WithPixelFormatBGRA, (app::FfmpegCommandLineBuilder * this_ptr));
IL2CPP_REGISTER_METHOD(0x0099AF00, FfmpegCommandLineBuilder *, WithPixelFormatYUC420P, (app::FfmpegCommandLineBuilder * this_ptr));
IL2CPP_REGISTER_METHOD(0x0099AFA0, FfmpegCommandLineBuilder *, WithVideoBitrate, (app::FfmpegCommandLineBuilder * this_ptr, app::String * bitrate));
IL2CPP_REGISTER_METHOD(0x0099AFB0, FfmpegCommandLineBuilder *, WithVideoCodec, (app::FfmpegCommandLineBuilder * this_ptr, app::String * codec));
IL2CPP_REGISTER_METHOD(0x0099AFC0, FfmpegCommandLineBuilder *, WithUrl, (app::FfmpegCommandLineBuilder * this_ptr, app::String * url));
IL2CPP_REGISTER_METHOD(0x0099AFD0, FfmpegCommandLineBuilder *, WithResolution, (app::FfmpegCommandLineBuilder * this_ptr, int32_t width, int32_t height));
IL2CPP_REGISTER_METHOD(0x0099AFE0, FfmpegCommandLineBuilder *, WithPixelFormat, (app::FfmpegCommandLineBuilder * this_ptr, app::String * pixel_format));
IL2CPP_REGISTER_METHOD(0x0099AFA0, FfmpegCommandLineBuilder *, WithMP4Bitrate, (app::FfmpegCommandLineBuilder * this_ptr, app::String * bitrate));
IL2CPP_REGISTER_METHOD(0x0099AFF0, FfmpegCommandLineBuilder *, WithFileFormat, (app::FfmpegCommandLineBuilder * this_ptr, app::String * file_format));
IL2CPP_REGISTER_METHOD(0x0099B000, FfmpegCommandLineBuilder *, WithThreads, (app::FfmpegCommandLineBuilder * this_ptr, int32_t threads));
IL2CPP_REGISTER_METHOD(0x0099B010, FfmpegCommandLineBuilder *, WithReport, (app::FfmpegCommandLineBuilder * this_ptr, bool do_report));
IL2CPP_REGISTER_METHOD(0x0099B020, FfmpegCommandLineBuilder *, WithFramerate, (app::FfmpegCommandLineBuilder * this_ptr, int32_t framerate));
IL2CPP_REGISTER_METHOD(0x0099B0E0, FfmpegCommandLineBuilder *, WithOutputFile, (app::FfmpegCommandLineBuilder * this_ptr, app::String * out_file));
IL2CPP_REGISTER_METHOD(0x0099B0F0, String *, BuildCommandLine, (app::FfmpegCommandLineBuilder * this_ptr, bool do_prores, bool bake_frame_count, int32_t start_frame));
IL2CPP_REGISTER_METHODINFO(0x047722B0, FfmpegCommandLineBuilder_BuildCommandLine__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099B590, void, __ctor, (app::FfmpegCommandLineBuilder * this_ptr));
IL2CPP_REGISTER_METHOD(0x0099B670, void, __cctor, ());
}
