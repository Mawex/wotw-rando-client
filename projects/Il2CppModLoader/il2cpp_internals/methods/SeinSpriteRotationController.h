#include <interception_macros.h>

namespace app::methods::SeinSpriteRotationController {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinSpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, CharacterPlatformMovement *, get_PlatformMovement, (SeinSpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x00A79BE0, SeinCrouch *, get_Crouch, (SeinSpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x00A79C20, SeinStomp *, get_Stomp, (SeinSpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x00A79C60, SeinBashAttack *, get_BashAttack, (SeinSpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x00A79CA0, bool, get_IsStomping, (SeinSpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x00A79DD0, void, BeginTiltLeftRightInAir, (SeinSpriteRotationController * __this, float duration));
IL2CPP_REGISTER_METHOD(0x00A79DF0, void, ResetTiltAir, (SeinSpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x00A79F80, void, BeginTiltUpDownInAir, (SeinSpriteRotationController * __this, float duration));
IL2CPP_REGISTER_METHOD(0x00A79F90, void, UpdateUnderwaterRotation, (SeinSpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x00A7A040, void, UpdateCinematicRotation, (SeinSpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x00A7A1E0, void, UpdateRegularRotation, (SeinSpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x00A7B490, void, UpdateCharacterState, (SeinSpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x00A7BBB0, void, UpdateDashingRotation, (SeinSpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x00A7BCC0, void, UpdateSpiritSlashRotation, (SeinSpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x00A7BDD0, void, UpdateRotation, (SeinSpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x00A7BFC0, void, Serialize, (SeinSpriteRotationController * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, (SeinSpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x005C9550, void, __ctor, (SeinSpriteRotationController * __this));
}
