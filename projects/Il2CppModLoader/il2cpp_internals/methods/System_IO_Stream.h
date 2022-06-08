#include <interception_macros.h>

namespace app::methods::System::IO::Stream {
IL2CPP_REGISTER_METHOD(0x0237B350, SemaphoreSlim *, EnsureAsyncActiveSemaphoreInitialized, (Stream * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanTimeout, (Stream * __this));
IL2CPP_REGISTER_METHOD(0x0237B550, int32_t, get_ReadTimeout, (Stream * __this));
IL2CPP_REGISTER_METHODINFO(0x047330C8, Stream_get_ReadTimeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0237B5C0, void, set_ReadTimeout, (Stream * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x0471AD98, Stream_set_ReadTimeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0237B630, int32_t, get_WriteTimeout, (Stream * __this));
IL2CPP_REGISTER_METHODINFO(0x0476CBF8, Stream_get_WriteTimeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0237B6A0, void, set_WriteTimeout, (Stream * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04751188, Stream_set_WriteTimeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F86A90, void, Close, (Stream * __this));
IL2CPP_REGISTER_METHOD(0x01E113B0, void, Dispose, (Stream * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (Stream * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x0237B710, Task *, FlushAsync, (Stream * __this, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x0237B970, IAsyncResult *, BeginRead, (Stream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x0237B9A0, IAsyncResult *, BeginReadInternal, (Stream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * callback, Object * state, bool serializeAsynchronously));
IL2CPP_REGISTER_METHOD(0x0237BDA0, int32_t, EndRead, (Stream * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x0473A928, Stream_EndRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0237C0B0, Task_1_System_Int32_ *, ReadAsync, (Stream * __this, Byte__Array * buffer, int32_t offset, int32_t count, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x0237C1B0, Task_1_System_Int32_ *, BeginEndReadAsync, (Stream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x0237C510, IAsyncResult *, BeginWrite, (Stream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x0237C540, IAsyncResult *, BeginWriteInternal, (Stream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * callback, Object * state, bool serializeAsynchronously));
IL2CPP_REGISTER_METHOD(0x0237C940, void, RunReadWriteTaskWhenReady, (Stream * __this, Task * asyncWaiter, Stream_ReadWriteTask * readWriteTask));
IL2CPP_REGISTER_METHOD(0x0237CBB0, void, RunReadWriteTask, (Stream * __this, Stream_ReadWriteTask * readWriteTask));
IL2CPP_REGISTER_METHOD(0x0237CC80, void, EndWrite, (Stream * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x0474AAD0, Stream_EndWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0237CF70, Task *, WriteAsync, (Stream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x0237D060, Task *, WriteAsync, (Stream * __this, Byte__Array * buffer, int32_t offset, int32_t count, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x0237D160, Task *, BeginEndWriteAsync, (Stream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x0237D4C0, int32_t, ReadByte, (Stream * __this));
IL2CPP_REGISTER_METHOD(0x0237D5B0, void, WriteByte, (Stream * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x0237D690, IAsyncResult *, BlockingBeginRead, (Stream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x0237D910, int32_t, BlockingEndRead, (IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHOD(0x0237D9F0, IAsyncResult *, BlockingBeginWrite, (Stream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x0237DC70, void, BlockingEndWrite, (IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Stream * __this));
IL2CPP_REGISTER_METHOD(0x0237DD50, void, __cctor, ());
}
