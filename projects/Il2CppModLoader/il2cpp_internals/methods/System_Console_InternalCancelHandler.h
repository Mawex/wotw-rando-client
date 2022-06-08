#include <interception_macros.h>

namespace app::methods::System::Console_InternalCancelHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (Console_InternalCancelHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (Console_InternalCancelHandler * __this));
IL2CPP_REGISTER_METHOD(0x00611B10, IAsyncResult *, BeginInvoke, (Console_InternalCancelHandler * __this, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (Console_InternalCancelHandler * __this, IAsyncResult * result));
}
