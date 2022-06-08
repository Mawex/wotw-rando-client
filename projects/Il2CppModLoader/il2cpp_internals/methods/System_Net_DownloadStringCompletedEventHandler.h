#include <interception_macros.h>

namespace app::methods::System::Net::DownloadStringCompletedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DownloadStringCompletedEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (DownloadStringCompletedEventHandler * __this, Object * sender, DownloadStringCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (DownloadStringCompletedEventHandler * __this, Object * sender, DownloadStringCompletedEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (DownloadStringCompletedEventHandler * __this, IAsyncResult * result));
}
