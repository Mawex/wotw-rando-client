#include <interception_macros.h>

namespace app::methods::System_Net::DownloadProgressChangedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::DownloadProgressChangedEventHandler * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::DownloadProgressChangedEventHandler * this_ptr, app::Object * sender, app::DownloadProgressChangedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (app::DownloadProgressChangedEventHandler * this_ptr, app::Object * sender, app::DownloadProgressChangedEventArgs * e, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DownloadProgressChangedEventHandler * this_ptr, app::IAsyncResult * result));
}
