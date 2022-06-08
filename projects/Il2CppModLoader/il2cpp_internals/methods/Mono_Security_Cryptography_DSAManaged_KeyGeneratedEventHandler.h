#include <interception_macros.h>

namespace app::methods::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DSAManaged_KeyGeneratedEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke, (DSAManaged_KeyGeneratedEventHandler * __this, Object * sender, EventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (DSAManaged_KeyGeneratedEventHandler * __this, Object * sender, EventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (DSAManaged_KeyGeneratedEventHandler * __this, IAsyncResult * result));
}
