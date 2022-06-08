#include <interception_macros.h>

namespace app::methods::System::Net::OpenReadCompletedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (OpenReadCompletedEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (OpenReadCompletedEventHandler * __this, Object * sender, OpenReadCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (OpenReadCompletedEventHandler * __this, Object * sender, OpenReadCompletedEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (OpenReadCompletedEventHandler * __this, IAsyncResult * result));
}
