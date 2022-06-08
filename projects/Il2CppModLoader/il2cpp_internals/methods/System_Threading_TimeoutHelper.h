#include <interception_macros.h>

namespace app::methods::System::Threading::TimeoutHelper {
IL2CPP_REGISTER_METHOD(0x01A193E0, uint32_t, GetTime, ());
IL2CPP_REGISTER_METHOD(0x02349810, int32_t, UpdateTimeOut, (uint32_t startTime, int32_t originalWaitMillisecondsTimeout));
}
