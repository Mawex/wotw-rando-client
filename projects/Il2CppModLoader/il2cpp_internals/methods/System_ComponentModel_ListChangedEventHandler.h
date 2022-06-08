#include <interception_macros.h>

namespace app::methods::System::ComponentModel::ListChangedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ListChangedEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (ListChangedEventHandler * __this, Object * sender, ListChangedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (ListChangedEventHandler * __this, Object * sender, ListChangedEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (ListChangedEventHandler * __this, IAsyncResult * result));
}
