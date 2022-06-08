#include <interception_macros.h>

namespace app::methods::System::Timers::Timer {
IL2CPP_REGISTER_METHOD(0x02A7AED0, void, __ctor, (Timer_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A7B060, void, __ctor, (Timer_1 * __this, double interval));
IL2CPP_REGISTER_METHODINFO(0x04765608, Timer_1__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A7B1D0, void, set_AutoReset, (Timer_1 * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02A7B260, void, set_Enabled, (Timer_1 * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x0471DA00, Timer_1_set_Enabled__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A7B590, int32_t, CalculateRoundedInterval, (double interval, bool argumentCheck));
IL2CPP_REGISTER_METHODINFO(0x0472D7E8, Timer_1_CalculateRoundedInterval__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A7B780, void, UpdateTimer, (Timer_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A7B7D0, void, set_Interval, (Timer_1 * __this, double value));
IL2CPP_REGISTER_METHODINFO(0x047415E8, Timer_1_set_Interval__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A7B980, void, add_Elapsed, (Timer_1 * __this, ElapsedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x02A7BA40, void, remove_Elapsed, (Timer_1 * __this, ElapsedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x02A7BB00, void, set_Site, (Timer_1 * __this, ISite * value));
IL2CPP_REGISTER_METHOD(0x002FB930, ISite *, get_Site, (Timer_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A7BB30, ISynchronizeInvoke *, get_SynchronizingObject, (Timer_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A7BC90, void, BeginInit, (Timer_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A7BCD0, void, Close, (Timer_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A7BD10, void, Dispose, (Timer_1 * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x02A7BD60, void, EndInit, (Timer_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A7BD70, void, Start, (Timer_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A7BD80, void, Stop, (Timer_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A7BD90, void, MyTimerCallback, (Timer_1 * __this, Object * state));
IL2CPP_REGISTER_METHODINFO(0x0471D3A8, Timer_1_MyTimerCallback__MethodInfo);
}
