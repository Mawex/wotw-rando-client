#include <interception_macros.h>

namespace app::methods::SeinSpiritSlash {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00A6D210, bool, get_IsStatePerforming, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00A6D210, bool, get_IsAttacking, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00A6D220, bool, get_OverrideSpriteRotation, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00A6D240, Vector3, get_SeinPosition, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00A6D2B0, Vector3, get_GetTargetPosition, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00A6D5F0, bool, get_HasStringerShardEquipped, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00A6D6B0, bool, get_SpriteMirrorLock, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00A6D6C0, void, set_SpriteMirrorLock, (SeinSpiritSlash * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00A6D780, void, OnSetReferenceToSein, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00A6D860, void, Start, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00A6DB60, void, OnDestroy, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00A6DE70, void, ModifyGravityPlatformMovementSettings, (SeinSpiritSlash * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x047948A0, SeinSpiritSlash_ModifyGravityPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A6DEA0, void, ChangeState, (SeinSpiritSlash * __this, SeinSpiritSlash_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00A6DF20, bool, CanPerformStinger, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00A6DFD0, void, BeginAttack, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00A6D210, bool, ShouldAnimationKeepPlaying, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHODINFO(0x04729E38, SeinSpiritSlash_ShouldAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A6E7C0, void, UpdateCharacterState, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00A6E940, void, UpdateClosestAttackable, (SeinSpiritSlash * __this, bool bothDirections));
IL2CPP_REGISTER_METHOD(0x00A6EA50, void, UpdateIdle, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00A6EB40, bool, get_OnAttackButtonPressed, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00A6EC40, void, LimitSpeedNearTarget, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00A6EF30, void, UpdateSlashAngle, (SeinSpiritSlash * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x00A6F390, void, UpdateAttacking, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00A701B0, bool, CanLightAttack, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00A706F0, void, DealDamage, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00A71100, void, OnResetAirLimits, (SeinSpiritSlash * __this));
IL2CPP_REGISTER_METHODINFO(0x0478B970, SeinSpiritSlash_OnResetAirLimits__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A71120, ISpiritSlashAttackable *, FindClosestAttackHandler, (SeinSpiritSlash * __this, bool bothDirections));
IL2CPP_REGISTER_METHOD(0x00A71810, void, __ctor, (SeinSpiritSlash * __this));
}
