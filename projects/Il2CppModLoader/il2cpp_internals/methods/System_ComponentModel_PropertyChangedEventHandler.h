#include <interception_macros.h>

namespace app::methods::System::ComponentModel::PropertyChangedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (PropertyChangedEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (PropertyChangedEventHandler * __this, Object * sender, PropertyChangedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (PropertyChangedEventHandler * __this, Object * sender, PropertyChangedEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (PropertyChangedEventHandler * __this, IAsyncResult * result));
}
