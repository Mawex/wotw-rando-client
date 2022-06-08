using namespace app;

namespace app::methods::System::Net::UploadValuesCompletedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UploadValuesCompletedEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (UploadValuesCompletedEventHandler * __this, Object * sender, UploadValuesCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (UploadValuesCompletedEventHandler * __this, Object * sender, UploadValuesCompletedEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (UploadValuesCompletedEventHandler * __this, IAsyncResult * result));
}
