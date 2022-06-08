#include <interception_macros.h>

namespace app::methods::UnityEngine::Events::InvokableCall {
IL2CPP_REGISTER_METHOD(0x0242EB20, void, __ctor, (InvokableCall * __this, Object * target, MethodInfo_1 * theFunction));
IL2CPP_REGISTER_METHOD(0x0242EC50, void, __ctor, (InvokableCall * __this, UnityAction * action));
IL2CPP_REGISTER_METHOD(0x0242EC60, void, add_Delegate, (InvokableCall * __this, UnityAction * value));
IL2CPP_REGISTER_METHOD(0x0242ED50, void, remove_Delegate, (InvokableCall * __this, UnityAction * value));
IL2CPP_REGISTER_METHOD(0x0242EE40, void, Invoke, (InvokableCall * __this, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x0242EE40, void, Invoke, (InvokableCall * __this));
IL2CPP_REGISTER_METHOD(0x0242EE80, bool, Find, (InvokableCall * __this, Object * targetObj, MethodInfo_1 * method_1));
}
