#include <interception_macros.h>

namespace app::methods::WindowsVideoPlayer {
IL2CPP_REGISTER_METHOD(0x0057B9F0, void, set_Filename, (WindowsVideoPlayer * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBC00, OnDelegate *, get_OnPlaybackFinished, (WindowsVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_OnPlaybackFinished, (WindowsVideoPlayer * __this, OnDelegate * value));
IL2CPP_REGISTER_METHOD(0x0057BAB0, bool, get_IsPlaying, (WindowsVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_IsPaused, (WindowsVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_IsPaused, (WindowsVideoPlayer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0057BAD0, void, Play, (WindowsVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x0057BAF0, void, Pause, (WindowsVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x0057BB40, void, MovieFinished, (WindowsVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x0057BB70, void, Stop, (WindowsVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x0057BBE0, void, __ctor, (WindowsVideoPlayer * __this));
}
