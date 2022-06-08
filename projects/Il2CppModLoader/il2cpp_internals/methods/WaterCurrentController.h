#include <interception_macros.h>

namespace app::methods::WaterCurrentController {
IL2CPP_REGISTER_METHOD(0x008D3BB0, WaterCurrentController *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x008D3C30, Vector2, get_CurrentDirection, (WaterCurrentController * __this));
IL2CPP_REGISTER_METHOD(0x008D3D20, void, Awake, (WaterCurrentController * __this));
IL2CPP_REGISTER_METHOD(0x008D3E20, void, FixedUpdate, (WaterCurrentController * __this));
IL2CPP_REGISTER_METHODINFO(0x04781228, WaterCurrentController_FixedUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008D4500, float, get_CurrentForceMultiplierForSein, (WaterCurrentController * __this));
IL2CPP_REGISTER_METHOD(0x008D46F0, bool, get_ShouldApplyWaterCurrent, (WaterCurrentController * __this));
IL2CPP_REGISTER_METHOD(0x008D4700, void, ChangeState, (WaterCurrentController * __this, WaterCurrentController_State__Enum newState));
IL2CPP_REGISTER_METHODINFO(0x047271A0, WaterCurrentController_ChangeState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008D4800, bool, get_SeinInWaterCurrent, (WaterCurrentController * __this));
IL2CPP_REGISTER_METHOD(0x008D4970, bool, PointInsideWaterCurrent, (WaterCurrentController * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x008D4B50, Vector2, VelocityAtPoint, (WaterCurrentController * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (WaterCurrentController * __this));
}
