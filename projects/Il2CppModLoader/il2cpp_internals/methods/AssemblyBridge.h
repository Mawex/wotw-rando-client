#include <interception_macros.h>

namespace app::methods::AssemblyBridge {
IL2CPP_REGISTER_METHOD(0x03136110, Type *, GetTypeGlobal, (app::String * name));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::AssemblyBridge * this_ptr));
IL2CPP_REGISTER_METHOD(0x03136420, void, __cctor, ());
}
