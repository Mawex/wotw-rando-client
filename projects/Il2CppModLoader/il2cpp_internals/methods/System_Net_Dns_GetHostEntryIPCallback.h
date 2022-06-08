using namespace app;

namespace app::methods::System::Net::Dns_GetHostEntryIPCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (Dns_GetHostEntryIPCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01852930, IPHostEntry *, Invoke, (Dns_GetHostEntryIPCallback * __this, IPAddress * hostAddress));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (Dns_GetHostEntryIPCallback * __this, IPAddress * hostAddress, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, IPHostEntry *, EndInvoke, (Dns_GetHostEntryIPCallback * __this, IAsyncResult * result));
}
