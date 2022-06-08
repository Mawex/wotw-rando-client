using namespace app;

namespace app::methods::SeinDamageReciever {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006E4180, SeinDamageReceiverPuppet *, get_Puppet, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x005D06F0, CharacterLeftRightMovement *, get_CharacterLeftRightMovement, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006E4240, CharacterGravity *, get_CharacterGravity, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006E4270, CharacterInstantStop *, get_CharacterInstantStop, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006E42A0, SeinHealthController *, get_HealthController, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006E42D0, Renderer *, get_Sprite, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006E4310, Ku *, get_Ku, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006E43A0, bool, get_IsRidingKu, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006E44F0, bool, get_IsDrowning, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006E4500, void, set_IsDrowning, (SeinDamageReciever * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006E4510, bool, get_KickbackEnabled, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006E4520, void, set_KickbackEnabled, (SeinDamageReciever * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006E4530, void, add_OnTakeDamage, (SeinDamageReciever * __this, Action_1_Damage_ * value));
IL2CPP_REGISTER_METHOD(0x006E4620, void, remove_OnTakeDamage, (SeinDamageReciever * __this, Action_1_Damage_ * value));
IL2CPP_REGISTER_METHOD(0x006E4710, void, add_OnKickback, (SeinDamageReciever * __this, Action_1_Damage_ * value));
IL2CPP_REGISTER_METHOD(0x006E4800, void, remove_OnKickback, (SeinDamageReciever * __this, Action_1_Damage_ * value));
IL2CPP_REGISTER_METHOD(0x006E48F0, void, OnAwake, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006E4B60, bool, CheckForDamageBeforeMovement, (SeinDamageReciever * __this, Vector3 direction, float distance, RaycastHit * hitInfo));
IL2CPP_REGISTER_METHOD(0x006E4D30, void, Start, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006E5210, void, OnDestroy, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006E5700, void, OnEnter, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006E5760, void, OnExit, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006E57C0, bool, IsActiveAndPlaying, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006E57E0, void, OnRecieveDamage, (SeinDamageReciever * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x006E6B80, void, HandleAnimationAndKickback, (SeinDamageReciever * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x006E6E60, void, HandleGroundAnimationAndKickback, (SeinDamageReciever * __this, Damage * damage, bool kickbackEnabled, float * hurtTimeremaining, ActiveAnimationHandle * activeAnimation, SeinDamageReceiverPuppet * puppet));
IL2CPP_REGISTER_METHOD(0x006E7960, Vector2, ComputeSpeedTransfer, (SeinDamageReciever * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x006E7C90, float, GetAdjustedDamageAmountAfterShards, (SeinDamageReciever * __this, float amount, DamageType__Enum type));
IL2CPP_REGISTER_METHOD(0x006E7F20, void, HandleDamageBoostShard, (SeinDamageReciever * __this, Damage * * damage));
IL2CPP_REGISTER_METHOD(0x006E80F0, void, HandleCounterstrikeShard, (SeinDamageReciever * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x006E8A60, void, HandleHardMode, (SeinDamageReciever * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x006E8B90, void, PerformCounterstrikeEffects, (SeinDamageReciever * __this, EnemyEntity * enemy));
IL2CPP_REGISTER_METHOD(0x006E8E30, void, PerformCounterstrikeDamage, (SeinDamageReciever * __this, Damage * damage, EnemyEntity * enemy, DamageReceiver * damageReceiver));
IL2CPP_REGISTER_METHOD(0x006E93B0, void, UpdateCharacterState, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006E9990, void, UpdateColliderState, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006E9AD0, void, ModifyHorizontalPlatformMovementSettings, (SeinDamageReciever * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x0471C748, SeinDamageReciever_ModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006E9C40, void, ModifyGravityPlatformMovementSettings, (SeinDamageReciever * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x0477E608, SeinDamageReciever_ModifyGravityPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006E9D00, void, MakeInvincible, (SeinDamageReciever * __this, float duration));
IL2CPP_REGISTER_METHOD(0x006E9DC0, void, MakeInvincibleToEnemies, (SeinDamageReciever * __this, float duration));
IL2CPP_REGISTER_METHOD(0x006E9E80, void, MakeInvincibleOnRespawn, (SeinDamageReciever * __this, float duration));
IL2CPP_REGISTER_METHOD(0x006E9F40, void, MakeInvincibleToEnemyEntity, (SeinDamageReciever * __this, Entity * entity, float duration));
IL2CPP_REGISTER_METHOD(0x006E9F50, void, MakeInvincibleToDamageOfType, (SeinDamageReciever * __this, DamageType__Enum damageType, float duration));
IL2CPP_REGISTER_METHOD(0x006EA100, void, ResetInviciblity, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006EA110, void, OnRestoreCheckpoint, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHODINFO(0x04786000, SeinDamageReciever_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006EA340, void, OnLoad, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHODINFO(0x0471B9F8, SeinDamageReciever_OnLoad__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006EA370, void, Flash, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006EA4C0, IEnumerator *, FlashSprite, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006EA610, void, SpriteMaterialTintColor, (SeinDamageReciever * __this, Color color));
IL2CPP_REGISTER_METHOD(0x006EAA30, void, OnEnable, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006EAA70, bool, get_IsInvinsible, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x005E1300, bool, ShouldHurtAnimationKeepPlaying, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHODINFO(0x04785510, SeinDamageReciever_ShouldHurtAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006EAA90, bool, ShouldHurtAnimationKeepPlayingStartedOnGround, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006EAAE0, void, OnKill, (SeinDamageReciever * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x006EB700, void, ToggleColliders, (SeinDamageReciever * __this, bool on));
IL2CPP_REGISTER_METHOD(0x006EBB20, void, FinishDeathSequence, (SeinDamageReciever * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x006EC3D0, void, InstantiateDeathEffect, (SeinDamageReciever * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x006EC8A0, IEnumerator *, OnKillRoutine, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006EC9F0, void, OnKillFadeInComplete, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHODINFO(0x04701BC0, SeinDamageReciever_OnKillFadeInComplete__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006ECAE0, bool, CanDetonateProjectiles, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006ECB00, void, Serialize, (SeinDamageReciever * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x006ECB60, bool, get_IsLeached, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006ECB70, Vector3, get_LastLeachPosition, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006ECB90, void, ILeachable_StartLeach, (SeinDamageReciever * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x006ECBB0, void, ILeachable_ReleaseLeach, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006ECC70, void, ILeachable_UpdateLeach, (SeinDamageReciever * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x006ECC90, bool, get_IsPinned, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006ECCA0, Vector3, get_LastPinPosition, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006ECCC0, void, IPinnable_StartPin, (SeinDamageReciever * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x006ECCE0, void, IPinnable_ReleasePin, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006ECDA0, void, IPinnable_UpdatePin, (SeinDamageReciever * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x006ECDC0, bool, get_IsRavage, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006ECDD0, void, IPinnable_StartRavage, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006ECDE0, void, IPinnable_EndRavage, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, IPinnable_UpdateRavage, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006ECDF0, void, __ctor, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (SeinDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (SeinDamageReciever * __this));
}
