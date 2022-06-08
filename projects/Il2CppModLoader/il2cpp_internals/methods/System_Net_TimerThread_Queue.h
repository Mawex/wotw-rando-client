#include <interception_macros.h>

namespace app::methods::System::Net::TimerThread_Queue {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (TimerThread_Queue * __this, int32_t durationMilliseconds));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Duration, (TimerThread_Queue * __this));
IL2CPP_REGISTER_METHOD(0x020A8FA0, TimerThread_Timer *, CreateTimer, (TimerThread_Queue * __this));
}
