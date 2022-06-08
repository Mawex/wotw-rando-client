#include <interception_macros.h>

namespace app::methods::System::Threading::WaitHandle {
IL2CPP_REGISTER_METHOD(0x0234B740, void, __ctor, (WaitHandle * __this));
IL2CPP_REGISTER_METHOD(0x0234B740, void, Init, (WaitHandle * __this));
IL2CPP_REGISTER_METHOD(0x0234B800, void *, get_Handle, (WaitHandle * __this));
IL2CPP_REGISTER_METHOD(0x0234B8D0, void, set_Handle, (WaitHandle * __this, void * value));
IL2CPP_REGISTER_METHOD(0x0234BAB0, SafeWaitHandle *, get_SafeWaitHandle, (WaitHandle * __this));
IL2CPP_REGISTER_METHOD(0x0234BC60, void, set_SafeWaitHandle, (WaitHandle * __this, SafeWaitHandle * value));
IL2CPP_REGISTER_METHOD(0x0234BD70, void, SetHandleInternal, (WaitHandle * __this, SafeWaitHandle * handle));
IL2CPP_REGISTER_METHOD(0x0234BDA0, bool, WaitOne, (WaitHandle * __this, int32_t millisecondsTimeout, bool exitContext));
IL2CPP_REGISTER_METHODINFO(0x047198E8, WaitHandle_WaitOne__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0234BE90, bool, WaitOne, (WaitHandle * __this, TimeSpan timeout, bool exitContext));
IL2CPP_REGISTER_METHODINFO(0x0474CF98, WaitHandle_WaitOne_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0234BFB0, bool, WaitOne, (WaitHandle * __this));
IL2CPP_REGISTER_METHOD(0x01F938C0, bool, WaitOne, (WaitHandle * __this, int32_t millisecondsTimeout));
IL2CPP_REGISTER_METHOD(0x0234BFD0, bool, WaitOne, (WaitHandle * __this, TimeSpan timeout));
IL2CPP_REGISTER_METHOD(0x0234BFF0, bool, WaitOne, (WaitHandle * __this, int64_t timeout, bool exitContext));
IL2CPP_REGISTER_METHOD(0x0234C1E0, bool, InternalWaitOne, (SafeHandle * waitableSafeHandle, int64_t millisecondsTimeout, bool hasThreadAffinity, bool exitContext));
IL2CPP_REGISTER_METHODINFO(0x04718438, WaitHandle_InternalWaitOne__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0234C340, int32_t, WaitAny, (WaitHandle__Array * waitHandles, int32_t millisecondsTimeout, bool exitContext));
IL2CPP_REGISTER_METHODINFO(0x0478DBC0, WaitHandle_WaitAny__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0234C6E0, int32_t, WaitAny, (WaitHandle__Array * waitHandles, TimeSpan timeout, bool exitContext));
IL2CPP_REGISTER_METHODINFO(0x0474F230, WaitHandle_WaitAny_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0234C820, void, ThrowAbandonedMutexException, ());
IL2CPP_REGISTER_METHODINFO(0x047150D0, WaitHandle_ThrowAbandonedMutexException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0234C870, void, ThrowAbandonedMutexException, (int32_t location, WaitHandle * handle));
IL2CPP_REGISTER_METHODINFO(0x0472B4D0, WaitHandle_ThrowAbandonedMutexException_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0234C8D0, void, Close, (WaitHandle * __this));
IL2CPP_REGISTER_METHOD(0x0234C980, void, Dispose, (WaitHandle * __this, bool explicitDisposing));
IL2CPP_REGISTER_METHOD(0x0234C9D0, void, Dispose, (WaitHandle * __this));
IL2CPP_REGISTER_METHOD(0x0234CA80, int32_t, WaitMultiple, (WaitHandle__Array * waitHandles, int32_t millisecondsTimeout, bool exitContext, bool WaitAll));
IL2CPP_REGISTER_METHODINFO(0x047297E8, WaitHandle_WaitMultiple__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0234CDA0, int32_t, WaitOneNative, (SafeHandle * waitableSafeHandle, uint32_t millisecondsTimeout, bool hasThreadAffinity, bool exitContext));
IL2CPP_REGISTER_METHOD(0x0234CF30, int32_t, Wait_internal, (void * * handles, int32_t numHandles, bool waitAll, int32_t ms));
IL2CPP_REGISTER_METHOD(0x0234CF40, void, __cctor, ());
}
