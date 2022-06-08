#include <interception_macros.h>

namespace app::methods::System::AssemblyLoadEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (AssemblyLoadEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (AssemblyLoadEventHandler * __this, Object * sender, AssemblyLoadEventArgs * args));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (AssemblyLoadEventHandler * __this, Object * sender, AssemblyLoadEventArgs * args, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (AssemblyLoadEventHandler * __this, IAsyncResult * result));
}
