#include <interception_macros.h>

namespace app::methods::System::Data::DataRowChangeEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DataRowChangeEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (DataRowChangeEventHandler * __this, Object * sender, DataRowChangeEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (DataRowChangeEventHandler * __this, Object * sender, DataRowChangeEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (DataRowChangeEventHandler * __this, IAsyncResult * result));
}
