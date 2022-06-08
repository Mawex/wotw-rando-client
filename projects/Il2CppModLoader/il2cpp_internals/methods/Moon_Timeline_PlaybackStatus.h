using namespace app;

namespace app::methods::Moon::Timeline::PlaybackStatus {
IL2CPP_REGISTER_METHOD(0x011FE8D0, bool, get_IsPending, (PlaybackStatus * __this));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsFinished, (PlaybackStatus * __this));
IL2CPP_REGISTER_METHOD(0x0052C650, void, set_IsFinished, (PlaybackStatus * __this, bool value));
IL2CPP_REGISTER_METHOD(0x011FE860, bool, get_IsPlaying, (PlaybackStatus * __this));
IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_IsStarted, (PlaybackStatus * __this));
IL2CPP_REGISTER_METHOD(0x0052C660, void, set_IsStarted, (PlaybackStatus * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00B83F30, float, get_StartTime, (PlaybackStatus * __this));
IL2CPP_REGISTER_METHOD(0x00B83F40, void, set_StartTime, (PlaybackStatus * __this, float value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_StartFrame, (PlaybackStatus * __this));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_StartFrame, (PlaybackStatus * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00573170, float, get_EndTime, (PlaybackStatus * __this));
IL2CPP_REGISTER_METHOD(0x008FDC10, void, set_EndTime, (PlaybackStatus * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_EndFrame, (PlaybackStatus * __this));
IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_EndFrame, (PlaybackStatus * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00E2F880, float, get_LocalTime, (PlaybackStatus * __this));
IL2CPP_REGISTER_METHOD(0x012219F0, void, set_LocalTime, (PlaybackStatus * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_LocalFrame, (PlaybackStatus * __this));
IL2CPP_REGISTER_METHOD(0x002FB980, void, set_LocalFrame, (PlaybackStatus * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01E79450, void, Reset, (PlaybackStatus * __this));
IL2CPP_REGISTER_METHOD(0x01E79470, void, ReportStart, (PlaybackStatus * __this, float time, int32_t frame));
IL2CPP_REGISTER_METHOD(0x01E79480, void, ReportStop, (PlaybackStatus * __this, float time, int32_t frame));
IL2CPP_REGISTER_METHOD(0x01E79490, void, ReportLocal, (PlaybackStatus * __this, float time, int32_t frame));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PlaybackStatus * __this));
}
