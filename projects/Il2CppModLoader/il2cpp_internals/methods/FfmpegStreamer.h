#include <interception_macros.h>

namespace app::methods::FfmpegStreamer {
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_PipeError, (FfmpegStreamer * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_PipeError, (FfmpegStreamer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01254320, FfmpegStreamer *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x012543A0, void, set_Instance, (FfmpegStreamer * value));
IL2CPP_REGISTER_METHOD(0x01254430, int32_t, get_LastPipedFrame, ());
IL2CPP_REGISTER_METHOD(0x01254450, void, Open, (int32_t width, int32_t height, String * outFile, bool bakeFrameCount, int32_t startFrame));
IL2CPP_REGISTER_METHOD(0x01254530, void, Close, ());
IL2CPP_REGISTER_METHOD(0x012546B0, void, Pipe, (Byte__Array * data, int32_t frame));
IL2CPP_REGISTER_METHOD(0x01254830, void, __ctor, (FfmpegStreamer * __this, int32_t width, int32_t height, String * outFile, bool bakeFrameCount, int32_t startFrame));
IL2CPP_REGISTER_METHOD(0x01254DA0, void, Send, (FfmpegStreamer * __this, Byte__Array * data, int32_t frame));
IL2CPP_REGISTER_METHOD(0x012553E0, void, Flush, (FfmpegStreamer * __this, Byte__Array * data, int32_t frame));
IL2CPP_REGISTER_METHOD(0x01255450, void, Flush, (FfmpegStreamer * __this));
IL2CPP_REGISTER_METHOD(0x01255690, void, TryCleanup, (FfmpegStreamer * __this));
}
