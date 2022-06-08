#include <interception_macros.h>

namespace app::methods::System::Net::DownloadProgressChangedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DownloadProgressChangedEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (DownloadProgressChangedEventHandler * __this, Object * sender, DownloadProgressChangedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (DownloadProgressChangedEventHandler * __this, Object * sender, DownloadProgressChangedEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (DownloadProgressChangedEventHandler * __this, IAsyncResult * result));
}
