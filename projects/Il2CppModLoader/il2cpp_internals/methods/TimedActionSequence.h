#include <interception_macros.h>

namespace app::methods::TimedActionSequence {
IL2CPP_REGISTER_METHOD(0x010F2920, void, Awake, (TimedActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x010F2A40, void, FindActions, (TimedActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x010F2EF0, void, OnDestroy, (TimedActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_Duration, (TimedActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Duration, (TimedActionSequence * __this, float value));
IL2CPP_REGISTER_METHOD(0x010F3010, void, Perform, (TimedActionSequence * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010F3180, void, Stop, (TimedActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x010F32C0, bool, get_IsPerforming, (TimedActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x006B5650, float, get_SequenceCurrentTime, (TimedActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x0098F5E0, void, set_SequenceCurrentTime, (TimedActionSequence * __this, float value));
IL2CPP_REGISTER_METHOD(0x0098F4A0, bool, get_IsSequenceRunning, (TimedActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x0098F4B0, void, set_IsSequenceRunning, (TimedActionSequence * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, get_Pause, (TimedActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x002FD4A0, void, set_Pause, (TimedActionSequence * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x010F3450, IEnumerator *, RunSequence, (TimedActionSequence * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0043BB90, void, __ctor, (TimedActionSequence * __this));
}
