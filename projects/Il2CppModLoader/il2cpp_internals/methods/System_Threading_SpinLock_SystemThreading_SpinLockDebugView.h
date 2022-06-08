#include <interception_macros.h>

namespace app::methods::System::Threading::SpinLock_SystemThreading_SpinLockDebugView {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (SpinLock_SystemThreading_SpinLockDebugView * __this, SpinLock spinLock));
IL2CPP_REGISTER_METHOD(0x0232DFA0, Nullable_1_Boolean_, get_IsHeldByCurrentThread, (SpinLock_SystemThreading_SpinLockDebugView * __this));
IL2CPP_REGISTER_METHOD(0x0232E050, Nullable_1_Int32_, get_OwnerThreadID, (SpinLock_SystemThreading_SpinLockDebugView * __this));
IL2CPP_REGISTER_METHOD(0x0232E100, bool, get_IsHeld, (SpinLock_SystemThreading_SpinLockDebugView * __this));
}
