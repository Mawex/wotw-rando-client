#include <interception_macros.h>

namespace app::methods::System::Runtime::InteropServices::SafeHandle {
IL2CPP_REGISTER_METHOD(0x01A96E40, void, __ctor, (SafeHandle * __this, void * invalidHandleValue, bool ownsHandle));
IL2CPP_REGISTER_METHOD(0x01A96F10, void, Finalize, (SafeHandle * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, SetHandle, (SafeHandle * __this, void * handle));
IL2CPP_REGISTER_METHOD(0x002FA280, void *, DangerousGetHandle, (SafeHandle * __this));
IL2CPP_REGISTER_METHOD(0x01A96FB0, bool, get_IsClosed, (SafeHandle * __this));
IL2CPP_REGISTER_METHOD(0x01A8DC40, void, Close, (SafeHandle * __this));
IL2CPP_REGISTER_METHOD(0x01A8DC40, void, Dispose, (SafeHandle * __this));
IL2CPP_REGISTER_METHOD(0x01A96FC0, void, Dispose, (SafeHandle * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01A970C0, void, SetHandleAsInvalid, (SafeHandle * __this));
IL2CPP_REGISTER_METHOD(0x01A971A0, void, DangerousAddRef, (SafeHandle * __this, bool * success));
IL2CPP_REGISTER_METHODINFO(0x0472E948, SafeHandle_DangerousAddRef__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A972B0, void, DangerousRelease, (SafeHandle * __this));
IL2CPP_REGISTER_METHOD(0x01A972C0, void, InternalDispose, (SafeHandle * __this));
IL2CPP_REGISTER_METHODINFO(0x0474D4D8, SafeHandle_InternalDispose__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A973A0, void, InternalFinalize, (SafeHandle * __this));
IL2CPP_REGISTER_METHOD(0x01A973C0, void, DangerousReleaseInternal, (SafeHandle * __this, bool dispose));
IL2CPP_REGISTER_METHODINFO(0x04702688, SafeHandle_DangerousReleaseInternal__MethodInfo);
}
