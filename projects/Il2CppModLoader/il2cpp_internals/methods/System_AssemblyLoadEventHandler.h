#include <interception_macros.h>

namespace app::methods::System::AssemblyLoadEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::AssemblyLoadEventHandler * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::AssemblyLoadEventHandler * this_ptr, app::Object * sender, app::AssemblyLoadEventArgs * args));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (app::AssemblyLoadEventHandler * this_ptr, app::Object * sender, app::AssemblyLoadEventArgs * args, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::AssemblyLoadEventHandler * this_ptr, app::IAsyncResult * result));
}
