using namespace app;

namespace app::methods::CartController {
IL2CPP_REGISTER_METHOD(0x00738690, float, get_ControllerExtraSpeed, (CartController * __this));
IL2CPP_REGISTER_METHOD(0x00990EC0, void, set_ControllerExtraSpeed, (CartController * __this, float value));
IL2CPP_REGISTER_METHOD(0x00B33940, bool, get_InputLocked, (CartController * __this));
IL2CPP_REGISTER_METHOD(0x00B339F0, float, get_NormalizedBrakeTime, (CartController * __this));
IL2CPP_REGISTER_METHOD(0x00B33A30, bool, get_CanBrake, (CartController * __this));
IL2CPP_REGISTER_METHOD(0x00B33AC0, bool, get_IsBraking, (CartController * __this));
IL2CPP_REGISTER_METHOD(0x00B33AD0, bool, get_CanMove, (CartController * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, Transform *, get_Transform, (CartController * __this));
IL2CPP_REGISTER_METHOD(0x00A20A00, bool, get_IsSuspended, (CartController * __this));
IL2CPP_REGISTER_METHOD(0x00B11500, void, set_IsSuspended, (CartController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00736620, SuspendableMask__Enum, get_Mask, (CartController * __this));
IL2CPP_REGISTER_METHOD(0x00B33B90, void, set_Mask, (CartController * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00B33C50, void, Awake, (CartController * __this));
IL2CPP_REGISTER_METHOD(0x00B33E60, void, OnDestroy, (CartController * __this));
IL2CPP_REGISTER_METHOD(0x00B33F20, void, Start, (CartController * __this));
IL2CPP_REGISTER_METHOD(0x00B33F80, void, FixedUpdate, (CartController * __this));
IL2CPP_REGISTER_METHOD(0x00B34050, void, ProvideComponents, (CartController * __this));
IL2CPP_REGISTER_METHOD(0x00B34130, void, HandleMoving, (CartController * __this));
IL2CPP_REGISTER_METHOD(0x00B341F0, float, GetMoveInput, (CartController * __this));
IL2CPP_REGISTER_METHOD(0x00B34260, float, CalculateSpeedFromHeight, (CartController * __this, float height));
IL2CPP_REGISTER_METHOD(0x00B34380, void, HandleInput, (CartController * __this));
IL2CPP_REGISTER_METHODINFO(0x04707740, CartController_HandleInput__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B34DE0, void, HandleCustomInputAcceleration, (CartController * __this));
IL2CPP_REGISTER_METHOD(0x00B34F50, void, HandleTriggersAcceleration, (CartController * __this));
IL2CPP_REGISTER_METHOD(0x00B351D0, void, HandleFulRangeAnalogStickAcceleration, (CartController * __this, float axisMagnitude));
IL2CPP_REGISTER_METHOD(0x00B35460, void, HandleLeftRightAnalogStickAcceleration, (CartController * __this, float axisMagnitude));
IL2CPP_REGISTER_METHOD(0x00B35880, void, HandleAutoForwardLean, (CartController * __this));
IL2CPP_REGISTER_METHOD(0x00B35A30, void, HandleOffscreenIssue, (CartController * __this));
IL2CPP_REGISTER_METHOD(0x0090CE60, void, Serialize, (CartController * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x002FBCB0, void, ICanActivatePressurePlate_OnPressed, (CartController * __this, IPressurePlate * plate));
IL2CPP_REGISTER_METHOD(0x00B35B90, void, ICanActivatePressurePlate_OnReleased, (CartController * __this, IPressurePlate * plate));
IL2CPP_REGISTER_METHOD(0x00B35BA0, void, __ctor, (CartController * __this));
}
