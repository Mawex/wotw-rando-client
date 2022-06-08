using namespace app;

namespace app::methods::System::Net::Dns_GetHostAddressesCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (Dns_GetHostAddressesCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x014347E0, IPAddress__Array *, Invoke, (Dns_GetHostAddressesCallback * __this, String * hostName));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (Dns_GetHostAddressesCallback * __this, String * hostName, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, IPAddress__Array *, EndInvoke, (Dns_GetHostAddressesCallback * __this, IAsyncResult * result));
}
