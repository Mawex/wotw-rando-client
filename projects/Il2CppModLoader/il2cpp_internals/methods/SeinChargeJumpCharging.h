#include <interception_macros.h>

namespace app::methods::SeinChargeJumpCharging {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinChargeJumpCharging * __this));
IL2CPP_REGISTER_METHOD(0x00A50B70, PlayerAbilities *, get_PlayerAbilities, (SeinChargeJumpCharging * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinChargeJumpCharging * __this));
IL2CPP_REGISTER_METHOD(0x00A50B90, SeinChargeJump *, get_ChargeJump, (SeinChargeJumpCharging * __this));
IL2CPP_REGISTER_METHOD(0x00A50BD0, void, UpdateCharacterState, (SeinChargeJumpCharging * __this));
IL2CPP_REGISTER_METHOD(0x00A50C40, void, EndCharge, (SeinChargeJumpCharging * __this));
IL2CPP_REGISTER_METHOD(0x00A50E80, void, OnExit, (SeinChargeJumpCharging * __this));
IL2CPP_REGISTER_METHOD(0x00A50EA0, void, ChangeState, (SeinChargeJumpCharging * __this, SeinChargeJumpCharging_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00A51C10, bool, get_IsWallCharging, (SeinChargeJumpCharging * __this));
IL2CPP_REGISTER_METHOD(0x00A51DC0, bool, get_IsGroundCharging, (SeinChargeJumpCharging * __this));
IL2CPP_REGISTER_METHOD(0x00A51F60, void, UpdateState, (SeinChargeJumpCharging * __this));
IL2CPP_REGISTER_METHOD(0x00A52340, bool, get_IsStatePerforming, (SeinChargeJumpCharging * __this));
IL2CPP_REGISTER_METHOD(0x00A52340, bool, get_IsCharging, (SeinChargeJumpCharging * __this));
IL2CPP_REGISTER_METHOD(0x00A52350, bool, get_IsCharged, (SeinChargeJumpCharging * __this));
IL2CPP_REGISTER_METHOD(0x00A52360, float, get_ChargingValue, (SeinChargeJumpCharging * __this));
IL2CPP_REGISTER_METHOD(0x00A52380, void, OnSetReferenceToSein, (SeinChargeJumpCharging * __this));
IL2CPP_REGISTER_METHOD(0x00A52450, void, __ctor, (SeinChargeJumpCharging * __this));
IL2CPP_REGISTER_METHOD(0x00A52470, void, _ChangeState_b__18_0, (SeinChargeJumpCharging * __this));
IL2CPP_REGISTER_METHODINFO(0x04785570, SeinChargeJumpCharging__ChangeState_b__18_0__MethodInfo);
}
