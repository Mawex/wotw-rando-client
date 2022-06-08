#include <interception_macros.h>

namespace app::methods::XboxOneVideoPlayer {
IL2CPP_REGISTER_METHOD(0x01C5C140, void, OnRenderImage, (XboxOneVideoPlayer * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (XboxOneVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01C5C2E0, void, set_Filename, (XboxOneVideoPlayer * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsPlaying, (XboxOneVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00675C60, bool, get_IsPaused, (XboxOneVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, OnDelegate *, get_OnPlaybackFinished, (XboxOneVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_OnPlaybackFinished, (XboxOneVideoPlayer * __this, OnDelegate * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Play, (XboxOneVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Pause, (XboxOneVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (XboxOneVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01C5C380, void, __ctor, (XboxOneVideoPlayer * __this));
}
