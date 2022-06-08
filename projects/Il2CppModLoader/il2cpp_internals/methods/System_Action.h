#include <interception_macros.h>

namespace app::methods::System::Action {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (Action * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (Action * __this));
IL2CPP_REGISTER_METHOD(0x00611B10, IAsyncResult *, BeginInvoke, (Action * __this, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (Action * __this, IAsyncResult * result));
}
