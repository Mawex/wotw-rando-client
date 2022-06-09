#include <interception_macros.h>

namespace app::methods::System_Net::UploadDataCompletedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::UploadDataCompletedEventHandler * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::UploadDataCompletedEventHandler * this_ptr, app::Object * sender, app::UploadDataCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (app::UploadDataCompletedEventHandler * this_ptr, app::Object * sender, app::UploadDataCompletedEventArgs * e, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::UploadDataCompletedEventHandler * this_ptr, app::IAsyncResult * result));
}
