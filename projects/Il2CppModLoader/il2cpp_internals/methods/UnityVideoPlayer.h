#include <interception_macros.h>

namespace app::methods::UnityVideoPlayer {
IL2CPP_REGISTER_METHOD(0x002FB990, OnDelegate *, get_OnPlaybackFinished, (UnityVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_OnPlaybackFinished, (UnityVideoPlayer * __this, OnDelegate * value));
IL2CPP_REGISTER_METHOD(0x013ABA20, void, set_Filename, (UnityVideoPlayer * __this, String * value));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsPlaying, (UnityVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x004379C0, bool, get_IsPaused, (UnityVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x013ABB00, void, Play, (UnityVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x013ABD90, void, Pause, (UnityVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x013ABDF0, void, Stop, (UnityVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x013ABE50, void, Update, (UnityVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x013ABE60, void, EndReached, (UnityVideoPlayer * __this, VideoPlayer * vp));
IL2CPP_REGISTER_METHODINFO(0x0475C9E8, UnityVideoPlayer_EndReached__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013ABEA0, void, EnsureImgui, (UnityVideoPlayer * __this, bool registered));
IL2CPP_REGISTER_METHOD(0x013ABF90, void, OnDestroy, (UnityVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (UnityVideoPlayer * __this));
}
