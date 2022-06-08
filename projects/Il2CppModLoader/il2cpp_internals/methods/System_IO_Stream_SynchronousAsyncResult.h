#include <interception_macros.h>

namespace app::methods::System::IO::Stream_SynchronousAsyncResult {
IL2CPP_REGISTER_METHOD(0x0237F2D0, void, __ctor, (Stream_SynchronousAsyncResult * __this, int32_t bytesRead, Object * asyncStateObject));
IL2CPP_REGISTER_METHOD(0x020D0390, void, __ctor, (Stream_SynchronousAsyncResult * __this, Object * asyncStateObject));
IL2CPP_REGISTER_METHOD(0x0237F2E0, void, __ctor, (Stream_SynchronousAsyncResult * __this, Exception * ex, Object * asyncStateObject, bool isWrite));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCompleted, (Stream_SynchronousAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x0237F330, WaitHandle *, get_AsyncWaitHandle, (Stream_SynchronousAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, Object *, get_AsyncState, (Stream_SynchronousAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CompletedSynchronously, (Stream_SynchronousAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x0237F530, void, ThrowIfError, (Stream_SynchronousAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x0237D910, int32_t, EndRead, (IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHOD(0x0237DC70, void, EndWrite, (IAsyncResult * asyncResult));
}
