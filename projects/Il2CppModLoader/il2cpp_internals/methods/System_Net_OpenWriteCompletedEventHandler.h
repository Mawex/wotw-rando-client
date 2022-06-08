#include <interception_macros.h>

namespace app::methods::System::Net::OpenWriteCompletedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (OpenWriteCompletedEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (OpenWriteCompletedEventHandler * __this, Object * sender, OpenWriteCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (OpenWriteCompletedEventHandler * __this, Object * sender, OpenWriteCompletedEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (OpenWriteCompletedEventHandler * __this, IAsyncResult * result));
}
