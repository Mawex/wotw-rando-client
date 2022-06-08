#include <interception_macros.h>

namespace app::methods::System::ComponentModel::PropertyChangingEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (PropertyChangingEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (PropertyChangingEventHandler * __this, Object * sender, PropertyChangingEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (PropertyChangingEventHandler * __this, Object * sender, PropertyChangingEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (PropertyChangingEventHandler * __this, IAsyncResult * result));
}
