#include <interception_macros.h>

namespace app::methods::OnDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (OnDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (OnDelegate * __this));
IL2CPP_REGISTER_METHOD(0x00611B10, IAsyncResult *, BeginInvoke, (OnDelegate * __this, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (OnDelegate * __this, IAsyncResult * result));
}
