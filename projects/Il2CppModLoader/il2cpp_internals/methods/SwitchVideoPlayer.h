#include <interception_macros.h>

namespace app::methods::SwitchVideoPlayer {
IL2CPP_REGISTER_METHOD(0x002FB9F0, OnDelegate *, get_OnPlaybackFinished, (SwitchVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_OnPlaybackFinished, (SwitchVideoPlayer * __this, OnDelegate * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (SwitchVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x005135E0, void, set_Filename, (SwitchVideoPlayer * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsPlaying, (SwitchVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsPaused, (SwitchVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Play, (SwitchVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UnitySwitchVideoPlayerOnMovieEvent, (SwitchVideoPlayer * __this, int32_t eventType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (SwitchVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Pause, (SwitchVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (SwitchVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (SwitchVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SwitchVideoPlayer * __this));
}
