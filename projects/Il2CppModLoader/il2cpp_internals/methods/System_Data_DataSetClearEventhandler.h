#include <interception_macros.h>

namespace app::methods::System::Data::DataSetClearEventhandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DataSetClearEventhandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (DataSetClearEventhandler * __this, Object * sender, DataTable * table));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (DataSetClearEventhandler * __this, Object * sender, DataTable * table, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (DataSetClearEventhandler * __this, IAsyncResult * result));
}
