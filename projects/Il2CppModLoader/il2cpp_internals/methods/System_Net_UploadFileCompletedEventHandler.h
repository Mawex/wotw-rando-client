using namespace app;

namespace app::methods::System::Net::UploadFileCompletedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UploadFileCompletedEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (UploadFileCompletedEventHandler * __this, Object * sender, UploadFileCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (UploadFileCompletedEventHandler * __this, Object * sender, UploadFileCompletedEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (UploadFileCompletedEventHandler * __this, IAsyncResult * result));
}
