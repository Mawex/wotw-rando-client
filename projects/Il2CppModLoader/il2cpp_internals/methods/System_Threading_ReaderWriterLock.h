#include <interception_macros.h>

namespace app::methods::System::Threading::ReaderWriterLock {
IL2CPP_REGISTER_METHOD(0x02329970, void, __ctor, (ReaderWriterLock * __this));
IL2CPP_REGISTER_METHOD(0x02329BB0, void, Finalize, (ReaderWriterLock * __this));
IL2CPP_REGISTER_METHOD(0x02329BE0, void, AcquireWriterLock, (ReaderWriterLock * __this, int32_t millisecondsTimeout));
IL2CPP_REGISTER_METHOD(0x02329BF0, void, AcquireWriterLock, (ReaderWriterLock * __this, int32_t millisecondsTimeout, int32_t initialLockCount));
IL2CPP_REGISTER_METHODINFO(0x047856A8, ReaderWriterLock_AcquireWriterLock_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02329E50, void, ReleaseWriterLock, (ReaderWriterLock * __this));
IL2CPP_REGISTER_METHODINFO(0x0474A1C0, ReaderWriterLock_ReleaseWriterLock__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0232A040, void, ReleaseWriterLock, (ReaderWriterLock * __this, int32_t releaseCount));
IL2CPP_REGISTER_METHOD(0x0232A0A0, bool, HasWriterLock, (ReaderWriterLock * __this));
}
