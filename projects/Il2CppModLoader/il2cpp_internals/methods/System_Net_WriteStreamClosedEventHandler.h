#include <interception_macros.h>

namespace app::methods::System::Net::WriteStreamClosedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (WriteStreamClosedEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (WriteStreamClosedEventHandler * __this, Object * sender, WriteStreamClosedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (WriteStreamClosedEventHandler * __this, Object * sender, WriteStreamClosedEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (WriteStreamClosedEventHandler * __this, IAsyncResult * result));
}
