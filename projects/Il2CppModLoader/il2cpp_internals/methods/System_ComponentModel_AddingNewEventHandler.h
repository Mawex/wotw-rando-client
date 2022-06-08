#include <interception_macros.h>

namespace app::methods::System::ComponentModel::AddingNewEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (AddingNewEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (AddingNewEventHandler * __this, Object * sender, AddingNewEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (AddingNewEventHandler * __this, Object * sender, AddingNewEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (AddingNewEventHandler * __this, IAsyncResult * result));
}
