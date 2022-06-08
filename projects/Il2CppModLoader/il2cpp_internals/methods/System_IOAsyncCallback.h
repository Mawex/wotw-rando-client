#include <interception_macros.h>

namespace app::methods::System::IOAsyncCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IOAsyncCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (IOAsyncCallback * __this, IOAsyncResult * ioares));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (IOAsyncCallback * __this, IOAsyncResult * ioares, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (IOAsyncCallback * __this, IAsyncResult * result));
}
