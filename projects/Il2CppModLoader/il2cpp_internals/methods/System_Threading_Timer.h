#include <interception_macros.h>

namespace app::methods::System::Threading::Timer {
IL2CPP_REGISTER_METHOD(0x02349880, void, __ctor, (Timer * __this, TimerCallback * callback, Object * state, int32_t dueTime, int32_t period));
IL2CPP_REGISTER_METHOD(0x023498A0, void, __ctor, (Timer * __this, TimerCallback * callback, Object * state, TimeSpan dueTime, TimeSpan period));
IL2CPP_REGISTER_METHOD(0x02349920, void, Init, (Timer * __this, TimerCallback * callback, Object * state, int64_t dueTime, int64_t period));
IL2CPP_REGISTER_METHODINFO(0x0477D6F0, Timer_Init__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02349A20, bool, Change, (Timer * __this, int32_t dueTime, int32_t period));
IL2CPP_REGISTER_METHOD(0x02349A40, bool, Change, (Timer * __this, TimeSpan dueTime, TimeSpan period));
IL2CPP_REGISTER_METHOD(0x02349AC0, void, Dispose, (Timer * __this));
IL2CPP_REGISTER_METHOD(0x02349B90, bool, Change, (Timer * __this, int64_t dueTime, int64_t period, bool first));
IL2CPP_REGISTER_METHODINFO(0x04776C98, Timer_Change_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, KeepRootedWhileScheduled, (Timer * __this));
IL2CPP_REGISTER_METHOD(0x02004240, int64_t, GetTimeMonotonic, ());
IL2CPP_REGISTER_METHOD(0x02349E20, void, __cctor, ());
}
