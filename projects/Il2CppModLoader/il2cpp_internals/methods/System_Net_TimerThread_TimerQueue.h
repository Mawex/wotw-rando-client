#include <interception_macros.h>

namespace app::methods::System::Net::TimerThread_TimerQueue {
IL2CPP_REGISTER_METHOD(0x020A96E0, void, __ctor, (TimerThread_TimerQueue * __this, int32_t durationMilliseconds));
IL2CPP_REGISTER_METHOD(0x020A9880, TimerThread_Timer *, CreateTimer, (TimerThread_TimerQueue * __this, TimerThread_Callback * callback, Object * context));
IL2CPP_REGISTER_METHOD(0x020A9BF0, bool, Fire, (TimerThread_TimerQueue * __this, int32_t * nextExpiration));
}
