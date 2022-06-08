using namespace app;

namespace app::methods::System::Net::UploadStringCompletedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UploadStringCompletedEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (UploadStringCompletedEventHandler * __this, Object * sender, UploadStringCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (UploadStringCompletedEventHandler * __this, Object * sender, UploadStringCompletedEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (UploadStringCompletedEventHandler * __this, IAsyncResult * result));
}
