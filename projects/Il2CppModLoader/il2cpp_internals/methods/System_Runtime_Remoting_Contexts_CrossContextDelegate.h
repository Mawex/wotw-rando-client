#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Contexts::CrossContextDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (CrossContextDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (CrossContextDelegate * __this));
IL2CPP_REGISTER_METHOD(0x00611B10, IAsyncResult *, BeginInvoke, (CrossContextDelegate * __this, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (CrossContextDelegate * __this, IAsyncResult * result));
}
