#include <interception_macros.h>

namespace app::methods::System::ComponentModel::HandledEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (HandledEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (HandledEventHandler * __this, Object * sender, HandledEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (HandledEventHandler * __this, Object * sender, HandledEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (HandledEventHandler * __this, IAsyncResult * result));
}
