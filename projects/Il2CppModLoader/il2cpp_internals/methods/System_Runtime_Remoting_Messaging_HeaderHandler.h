#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Messaging::HeaderHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::HeaderHandler * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01852930, Object *, Invoke, (app::HeaderHandler * this_ptr, app::Header__Array * headers));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::HeaderHandler * this_ptr, app::Header__Array * headers, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, Object *, EndInvoke, (app::HeaderHandler * this_ptr, app::IAsyncResult * result));
}
