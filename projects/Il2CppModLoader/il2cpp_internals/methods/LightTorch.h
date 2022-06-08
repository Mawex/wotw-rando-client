#include <interception_macros.h>

namespace app::methods::LightTorch {
IL2CPP_REGISTER_METHOD(0x00601090, bool, get_IsChasing, (LightTorch * __this));
IL2CPP_REGISTER_METHOD(0x0114FF40, bool, get_IsCarried, (LightTorch * __this));
IL2CPP_REGISTER_METHOD(0x0114FF70, void, Awake, (LightTorch * __this));
IL2CPP_REGISTER_METHOD(0x011501A0, void, OnDestroy, (LightTorch * __this));
IL2CPP_REGISTER_METHOD(0x01150350, void, Serialize, (LightTorch * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_Position, (LightTorch * __this));
IL2CPP_REGISTER_METHOD(0x011503A0, bool, get_SeinInsideTorchZone, (LightTorch * __this));
IL2CPP_REGISTER_METHOD(0x01150610, void, OnGameReset, (LightTorch * __this));
IL2CPP_REGISTER_METHODINFO(0x0473D350, LightTorch_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01150740, void, SetToNormal, (LightTorch * __this));
IL2CPP_REGISTER_METHOD(0x011508F0, void, ChangeToNormalImmediate, (LightTorch * __this));
IL2CPP_REGISTER_METHOD(0x01150A90, void, ChangeToNormal, (LightTorch * __this));
IL2CPP_REGISTER_METHOD(0x01150DF0, void, ChangeToChase, (LightTorch * __this));
IL2CPP_REGISTER_METHOD(0x01151300, void, FixedUpdate, (LightTorch * __this));
IL2CPP_REGISTER_METHOD(0x01151A50, void, UpdateChasing, (LightTorch * __this));
IL2CPP_REGISTER_METHOD(0x00603D60, bool, get_IsSuspended, (LightTorch * __this));
IL2CPP_REGISTER_METHOD(0x00603D70, void, set_IsSuspended, (LightTorch * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00881B70, SuspendableMask__Enum, get_Mask, (LightTorch * __this));
IL2CPP_REGISTER_METHOD(0x011524E0, void, set_Mask, (LightTorch * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x011525A0, void, __ctor, (LightTorch * __this));
}
