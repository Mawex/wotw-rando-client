#include <interception_macros.h>

namespace app::methods::System::Net::UploadProgressChangedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UploadProgressChangedEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (UploadProgressChangedEventHandler * __this, Object * sender, UploadProgressChangedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (UploadProgressChangedEventHandler * __this, Object * sender, UploadProgressChangedEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (UploadProgressChangedEventHandler * __this, IAsyncResult * result));
}
