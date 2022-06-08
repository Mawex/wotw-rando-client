using namespace app;

namespace app::methods::System::Data::DataRowCreatedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DataRowCreatedEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (DataRowCreatedEventHandler * __this, Object * sender, DataRow * r));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (DataRowCreatedEventHandler * __this, Object * sender, DataRow * r, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (DataRowCreatedEventHandler * __this, IAsyncResult * result));
}
