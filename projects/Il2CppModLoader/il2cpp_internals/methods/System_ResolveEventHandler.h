#include <interception_macros.h>

namespace app::methods::System::ResolveEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::ResolveEventHandler * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01434D20, Assembly *, Invoke, (app::ResolveEventHandler * this_ptr, app::Object * sender, app::ResolveEventArgs * args));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (app::ResolveEventHandler * this_ptr, app::Object * sender, app::ResolveEventArgs * args, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, Assembly *, EndInvoke, (app::ResolveEventHandler * this_ptr, app::IAsyncResult * result));
}
