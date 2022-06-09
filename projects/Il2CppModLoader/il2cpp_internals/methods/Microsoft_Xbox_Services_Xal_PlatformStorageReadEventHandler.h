#include <interception_macros.h>

namespace app::methods::Microsoft_Xbox_Services_Xal::PlatformStorageReadEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::PlatformStorageReadEventHandler * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x014347E0, Task_1_System_Byte_ *, Invoke, (app::PlatformStorageReadEventHandler * this_ptr, app::String * key));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::PlatformStorageReadEventHandler * this_ptr, app::String * key, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, Task_1_System_Byte_ *, EndInvoke, (app::PlatformStorageReadEventHandler * this_ptr, app::IAsyncResult * result));
}
