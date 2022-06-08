#include <interception_macros.h>

namespace app::methods::System::Net::TimerThread_InfiniteTimerQueue {
IL2CPP_REGISTER_METHOD(0x01D1D120, void, __ctor, (TimerThread_InfiniteTimerQueue * __this));
IL2CPP_REGISTER_METHOD(0x020A8E30, TimerThread_Timer *, CreateTimer, (TimerThread_InfiniteTimerQueue * __this, TimerThread_Callback * callback, Object * context));
}
