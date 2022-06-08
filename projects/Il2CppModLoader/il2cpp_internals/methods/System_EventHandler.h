#include <interception_macros.h>

namespace app::methods::System::EventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (EventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke, (EventHandler * __this, Object * sender, EventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (EventHandler * __this, Object * sender, EventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (EventHandler * __this, IAsyncResult * result));
}
