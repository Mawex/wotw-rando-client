using namespace app;

namespace app::methods::System::Net::SimpleAsyncCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (SimpleAsyncCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (SimpleAsyncCallback * __this, SimpleAsyncResult * result));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (SimpleAsyncCallback * __this, SimpleAsyncResult * result, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (SimpleAsyncCallback * __this, IAsyncResult * result));
}
