#include <interception_macros.h>

namespace app::methods::Moon::Wwise::WwiseEventSystem_EventState {
IL2CPP_REGISTER_METHOD(0x01B67070, bool, get_IsDispatched, (WwiseEventSystem_EventState * __this));
IL2CPP_REGISTER_METHOD(0x00CB2DA0, bool, get_IsPlaying, (WwiseEventSystem_EventState * __this));
IL2CPP_REGISTER_METHOD(0x02713770, bool, get_IsForceStopped, (WwiseEventSystem_EventState * __this));
IL2CPP_REGISTER_METHOD(0x01DE3650, bool, get_IsFinished, (WwiseEventSystem_EventState * __this));
IL2CPP_REGISTER_METHOD(0x005150C0, bool, get_IsIdle, (WwiseEventSystem_EventState * __this));
IL2CPP_REGISTER_METHOD(0x02713790, bool, get_IsPaused, (WwiseEventSystem_EventState * __this));
IL2CPP_REGISTER_METHOD(0x002FC780, void, Reset, (WwiseEventSystem_EventState * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ApplyStatus, (WwiseEventSystem_EventState * __this, WwiseEventSystem_EventStatus__Enum status));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (WwiseEventSystem_EventState * __this));
}
