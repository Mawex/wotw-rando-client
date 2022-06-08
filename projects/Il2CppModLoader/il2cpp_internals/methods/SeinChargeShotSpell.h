#include <interception_macros.h>

namespace app::methods::SeinChargeShotSpell {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinChargeShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, CharacterPlatformMovement *, get_PlatformMovement, (SeinChargeShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A53DA0, void, OnSetReferenceToSein, (SeinChargeShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A54090, void, OnDestroy, (SeinChargeShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A543F0, void, ModifyGravityPlatformMovementSettings, (SeinChargeShotSpell * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x04701348, SeinChargeShotSpell_ModifyGravityPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A54420, void, OnExit, (SeinChargeShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A54430, void, Start, (SeinChargeShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A54570, bool, get_IsStatePerforming, (SeinChargeShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A54580, void, UpdateCharacterState, (SeinChargeShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A54BF0, void, UpdateNormalState, (SeinChargeShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A54570, bool, KeepPlayingAnimation, (SeinChargeShotSpell * __this));
IL2CPP_REGISTER_METHODINFO(0x04770F58, SeinChargeShotSpell_KeepPlayingAnimation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A553C0, bool, KeepPlayingRecoilAnimation, (SeinChargeShotSpell * __this));
IL2CPP_REGISTER_METHODINFO(0x04735C78, SeinChargeShotSpell_KeepPlayingRecoilAnimation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A55480, void, UpdatePreChargeState, (SeinChargeShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A556D0, void, UpdatePreAirShotState, (SeinChargeShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A55800, void, UpdateAirShot, (SeinChargeShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A558D0, void, UpdateChargingState, (SeinChargeShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A55C50, void, UpdateFullyChargedState, (SeinChargeShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A55CC0, void, ChangeState, (SeinChargeShotSpell * __this, SeinChargeShotSpell_State__Enum newState));
IL2CPP_REGISTER_METHOD(0x00A55FC0, void, UpdateProjectile, (SeinChargeShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A566B0, void, ModifyHorizontalPlatformMovementSettings, (SeinChargeShotSpell * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x047618C8, SeinChargeShotSpell_ModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A56700, void, InstantiateProjectile, (SeinChargeShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A56A30, bool, TestScatterShotShard, (SeinChargeShotSpell * __this, int32_t * count, float * interval, bool * splitDamage));
IL2CPP_REGISTER_METHOD(0x00A56B60, void, ReleaseProjectile, (SeinChargeShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A57350, void, ReleaseProjectileSingle, (SeinChargeShotSpell * __this, float angleOffset));
IL2CPP_REGISTER_METHOD(0x00A57830, float, GetCooldown, (SeinChargeShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A57850, void, __ctor, (SeinChargeShotSpell * __this));
}
