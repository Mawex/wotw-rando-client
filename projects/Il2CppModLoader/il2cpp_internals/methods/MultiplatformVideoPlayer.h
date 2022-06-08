#include <interception_macros.h>

namespace app::methods::MultiplatformVideoPlayer {
IL2CPP_REGISTER_METHOD(0x00879500, void, Perform, (MultiplatformVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00879830, void, OnApplicationFocus, (MultiplatformVideoPlayer * __this, bool focusStatus));
IL2CPP_REGISTER_METHOD(0x00879910, void, Stop, (MultiplatformVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x008799A0, void, Pause, (MultiplatformVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00879A30, bool, IsPaused, (MultiplatformVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00879AC0, bool, IsPlaying, (MultiplatformVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00879B50, void, OnPlaybackFinished, (MultiplatformVideoPlayer * __this));
IL2CPP_REGISTER_METHODINFO(0x0475C658, MultiplatformVideoPlayer_OnPlaybackFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00879D50, void, OnDestroy, (MultiplatformVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (MultiplatformVideoPlayer * __this));
}
