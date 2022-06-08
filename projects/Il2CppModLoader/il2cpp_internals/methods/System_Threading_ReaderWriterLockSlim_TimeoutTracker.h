#include <interception_macros.h>

namespace app::methods::System::Threading::ReaderWriterLockSlim_TimeoutTracker {
IL2CPP_REGISTER_METHOD(0x00240600, void, __ctor, (ReaderWriterLockSlim_TimeoutTracker__Boxed * __this, int32_t millisecondsTimeout));
IL2CPP_REGISTER_METHODINFO(0x047882B8, ReaderWriterLockSlim_TimeoutTracker__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00240610, int32_t, get_RemainingMilliseconds, (ReaderWriterLockSlim_TimeoutTracker__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00240620, bool, get_IsExpired, (ReaderWriterLockSlim_TimeoutTracker__Boxed * __this));
}
