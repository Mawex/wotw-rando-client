using namespace app;

namespace app::methods::System::Net::DownloadDataCompletedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DownloadDataCompletedEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (DownloadDataCompletedEventHandler * __this, Object * sender, DownloadDataCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (DownloadDataCompletedEventHandler * __this, Object * sender, DownloadDataCompletedEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (DownloadDataCompletedEventHandler * __this, IAsyncResult * result));
}
