#include <interception_macros.h>

namespace app::methods::BombableSolidWall {
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, ShouldCreateCheckpointOnDestruction, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00D37770, void, OnEnable, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00D37960, void, OnDisable, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00D37B50, void, OnRestoreCheckpoint, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHODINFO(0x04751F60, BombableSolidWall_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D37C50, void, OnRecieveDamage, (BombableSolidWall * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_Position, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHomingMissiled, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00D37E50, Vector2, get_BabyWormAutoTargetPosition, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_BabyWormAutoTargetPriority, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_TargetActive, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00D37FB0, void, Apply, (BombableSolidWall * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00CBC5E0, IUberState__Array *, get_AffectingUberStates, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00D380E0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00D38200, IDesiredUberState *, GetRequirementsForTimeline, (BombableSolidWall * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00D38420, void, Awake, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x002FBC00, IDamageReciever__Array *, get_AffectedReceivers, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00D38610, void, __ctor, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (BombableSolidWall * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (BombableSolidWall * __this));
}
