#include <interception_macros.h>

namespace app::methods::Microsoft::Xbox::Services::Xal::PlatformStorageReadEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (PlatformStorageReadEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x014347E0, Task_1_System_Byte_ *, Invoke, (PlatformStorageReadEventHandler * __this, String * key));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (PlatformStorageReadEventHandler * __this, String * key, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, Task_1_System_Byte_ *, EndInvoke, (PlatformStorageReadEventHandler * __this, IAsyncResult * result));
}
