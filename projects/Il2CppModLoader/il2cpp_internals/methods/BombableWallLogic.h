using namespace app;

namespace app::methods::BombableWallLogic {
IL2CPP_REGISTER_METHOD(0x00D388C0, Vector3, get_Position, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, ShouldCreateCheckpointOnDestruction, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonSetupAnimator *, get_MoonSetupAnimator, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00D38AD0, void, set_MoonSetupAnimator, (BombableWallLogic * __this, IMoonSetupAnimator * value));
IL2CPP_REGISTER_METHOD(0x00D38BA0, Vector2, get_BabyWormAutoTargetPosition, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_BabyWormAutoTargetPriority, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00D38C60, bool, get_TargetActive, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00D38D80, void, Apply, (BombableWallLogic * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00D38F20, void, Awake, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00D391E0, void, OnEnable, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00D39380, void, OnDisable, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00D39500, void, OnRecieveDamage, (BombableWallLogic * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x04708A40, BombableWallLogic_OnRecieveDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D39530, void, DestroyWall, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00C32A40, IUberState__Array *, get_AffectingUberStates, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00D398F0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00BDCCA0, bool, IsDead, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHomingMissiled, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x002FBC20, IDamageReciever__Array *, get_AffectedReceivers, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00D39A20, bool, OnRange, (BombableWallLogic * __this, Vector2 point));
IL2CPP_REGISTER_METHOD(0x00D39A80, Vector2, GasBallBaitCenter, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_GasBallAttractionTime, (BombableWallLogic * __this));
IL2CPP_REGISTER_METHOD(0x00D39B40, void, __ctor, (BombableWallLogic * __this));
}
