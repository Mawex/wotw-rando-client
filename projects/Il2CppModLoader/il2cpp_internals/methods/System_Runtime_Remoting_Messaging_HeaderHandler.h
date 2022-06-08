#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::HeaderHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (HeaderHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01852930, Object *, Invoke, (HeaderHandler * __this, Header__Array * headers));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (HeaderHandler * __this, Header__Array * headers, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, Object *, EndInvoke, (HeaderHandler * __this, IAsyncResult * result));
}
