#include <interception_macros.h>

namespace app::methods::XGamingRuntime::Interop::XAsyncCompletionRoutine {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XAsyncCompletionRoutine * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01D253C0, void, Invoke, (XAsyncCompletionRoutine * __this, XAsyncBlockPtr asyncBlock));
IL2CPP_REGISTER_METHOD(0x030B1820, IAsyncResult *, BeginInvoke, (XAsyncCompletionRoutine * __this, XAsyncBlockPtr asyncBlock, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XAsyncCompletionRoutine * __this, IAsyncResult * result));
}
