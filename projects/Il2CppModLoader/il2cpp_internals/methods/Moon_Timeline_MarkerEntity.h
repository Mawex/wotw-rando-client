#include <interception_macros.h>

namespace app::methods::Moon::Timeline::MarkerEntity {
IL2CPP_REGISTER_METHOD(0x002FC6D0, AnimatorPlayState__Enum, get_PlayState, (MarkerEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, PlaybackStatus *, get_PlaybackStatus, (MarkerEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BC1650, double, get_PreviewTime, (MarkerEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BC1660, void, set_PreviewTime, (MarkerEntity * __this, double value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StartPlayback, (MarkerEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01BC1670, void, StopPlayback, (MarkerEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PausePlayback, (MarkerEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResumePlayback, (MarkerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (MarkerEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BC1680, int32_t, get_Hash, (MarkerEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BC16E0, String *, get_Name, (MarkerEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BC1760, bool, HasFinished, (MarkerEntity * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x002FB9F0, IEventReciever *, get_EventReciever, (MarkerEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_EventReciever, (MarkerEntity * __this, IEventReciever * value));
IL2CPP_REGISTER_METHOD(0x01BC19C0, void, __ctor, (MarkerEntity * __this));
}
