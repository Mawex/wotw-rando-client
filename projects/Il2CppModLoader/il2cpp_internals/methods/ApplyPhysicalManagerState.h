#include <interception_macros.h>

namespace app::methods::ApplyPhysicalManagerState {
IL2CPP_REGISTER_METHOD(0x005072F0, void, OnEnable, (ApplyPhysicalManagerState * __this));
IL2CPP_REGISTER_METHOD(0x005076C0, void, OnDisable, (ApplyPhysicalManagerState * __this));
IL2CPP_REGISTER_METHOD(0x00507A40, void, ApplyState, (ApplyPhysicalManagerState * __this));
IL2CPP_REGISTER_METHODINFO(0x047307B8, ApplyPhysicalManagerState_ApplyState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (ApplyPhysicalManagerState * __this));
IL2CPP_REGISTER_METHOD(0x00507A70, void, OnUpdate, (ApplyPhysicalManagerState * __this, float dt));
IL2CPP_REGISTER_METHOD(0x00507B60, void, __ctor, (ApplyPhysicalManagerState * __this));
}
