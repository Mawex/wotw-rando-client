#include <interception_macros.h>

namespace app::methods::System::IO::Stream___c {
IL2CPP_REGISTER_METHOD(0x0237DF10, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Stream_c * __this));
IL2CPP_REGISTER_METHOD(0x0237E050, SemaphoreSlim *, _EnsureAsyncActiveSemaphoreInitialized_b__4_0, (Stream_c * __this));
IL2CPP_REGISTER_METHODINFO(0x04797A28, Stream_c__EnsureAsyncActiveSemaphoreInitialized_b__4_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0237E1A0, void, _FlushAsync_b__36_0, (Stream_c * __this, Object * state));
IL2CPP_REGISTER_METHODINFO(0x04722A00, Stream_c__FlushAsync_b__36_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0237E2C0, int32_t, _BeginReadInternal_b__39_0, (Stream_c * __this, Object * _p0_));
IL2CPP_REGISTER_METHODINFO(0x04732398, Stream_c__BeginReadInternal_b__39_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0237E3C0, IAsyncResult *, _BeginEndReadAsync_b__43_0, (Stream_c * __this, Stream * stream, Stream_ReadWriteParameters args, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHODINFO(0x0478AF38, Stream_c__BeginEndReadAsync_b__43_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0237E430, int32_t, _BeginEndReadAsync_b__43_1, (Stream_c * __this, Stream * stream, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x04706548, Stream_c__BeginEndReadAsync_b__43_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0237E460, int32_t, _BeginWriteInternal_b__46_0, (Stream_c * __this, Object * _p0_));
IL2CPP_REGISTER_METHODINFO(0x04701698, Stream_c__BeginWriteInternal_b__46_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0237E560, void, _RunReadWriteTaskWhenReady_b__47_0, (Stream_c * __this, Task * t, Object * state));
IL2CPP_REGISTER_METHODINFO(0x047039C0, Stream_c__RunReadWriteTaskWhenReady_b__47_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0237E650, IAsyncResult *, _BeginEndWriteAsync_b__53_0, (Stream_c * __this, Stream * stream, Stream_ReadWriteParameters args, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHODINFO(0x0471EB18, Stream_c__BeginEndWriteAsync_b__53_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0237E6C0, VoidTaskResult, _BeginEndWriteAsync_b__53_1, (Stream_c * __this, Stream * stream, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x0470F0E8, Stream_c__BeginEndWriteAsync_b__53_1__MethodInfo);
}
