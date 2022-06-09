#include <interception_macros.h>

namespace app::methods::System_Net::Dns_GetHostEntryIPCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Dns_GetHostEntryIPCallback * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01852930, IPHostEntry *, Invoke, (app::Dns_GetHostEntryIPCallback * this_ptr, app::IPAddress * host_address));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::Dns_GetHostEntryIPCallback * this_ptr, app::IPAddress * host_address, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, IPHostEntry *, EndInvoke, (app::Dns_GetHostEntryIPCallback * this_ptr, app::IAsyncResult * result));
}
