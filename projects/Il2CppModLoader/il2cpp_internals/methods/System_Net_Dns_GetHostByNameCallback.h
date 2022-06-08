#include <interception_macros.h>

namespace app::methods::System::Net::Dns_GetHostByNameCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (Dns_GetHostByNameCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01852930, IPHostEntry *, Invoke, (Dns_GetHostByNameCallback * __this, String * hostName));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (Dns_GetHostByNameCallback * __this, String * hostName, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, IPHostEntry *, EndInvoke, (Dns_GetHostByNameCallback * __this, IAsyncResult * result));
}
