using namespace app;

namespace app::methods::UWPVideoPlayer {
IL2CPP_REGISTER_METHOD(0x013DDDB0, void, Play, (UWPVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x013DDF50, void, Pause, (UWPVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x013DE020, void, Stop, (UWPVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x013DE0D0, void, XAMLFinished, (UWPVideoPlayer * __this));
IL2CPP_REGISTER_METHODINFO(0x04731088, UWPVideoPlayer_XAMLFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, OnDelegate *, get_OnPlaybackFinished, (UWPVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_OnPlaybackFinished, (UWPVideoPlayer * __this, OnDelegate * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Filename, (UWPVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Filename, (UWPVideoPlayer * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsPlaying, (UWPVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_IsPlaying, (UWPVideoPlayer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00DF3DF0, bool, get_IsPaused, (UWPVideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00DF3E00, void, set_IsPaused, (UWPVideoPlayer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (UWPVideoPlayer * __this));
}
