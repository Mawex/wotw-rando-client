using namespace app;

namespace app::methods::System::Net::UploadDataCompletedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UploadDataCompletedEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (UploadDataCompletedEventHandler * __this, Object * sender, UploadDataCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (UploadDataCompletedEventHandler * __this, Object * sender, UploadDataCompletedEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (UploadDataCompletedEventHandler * __this, IAsyncResult * result));
}
