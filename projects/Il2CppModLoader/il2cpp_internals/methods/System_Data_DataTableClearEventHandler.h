#include <interception_macros.h>

namespace app::methods::System::Data::DataTableClearEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DataTableClearEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (DataTableClearEventHandler * __this, Object * sender, DataTableClearEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (DataTableClearEventHandler * __this, Object * sender, DataTableClearEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (DataTableClearEventHandler * __this, IAsyncResult * result));
}
