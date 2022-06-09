#include <interception_macros.h>

namespace app::methods::System_Threading::Mutex {
IL2CPP_REGISTER_METHOD(0x027E0FD0, bool, ReleaseMutex_internal, (app::void * handle));
IL2CPP_REGISTER_METHOD(0x027E0FF0, void *, CreateMutex_internal, (bool initially_owned, app::String * name, app::bool * created));
IL2CPP_REGISTER_METHOD(0x027E10C0, void, __ctor, (app::Mutex * this_ptr));
IL2CPP_REGISTER_METHOD(0x027E11B0, void, ReleaseMutex, (app::Mutex * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04703600, Mutex_ReleaseMutex__MethodInfo);
}
