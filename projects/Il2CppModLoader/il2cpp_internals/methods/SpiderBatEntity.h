#include <interception_macros.h>

namespace app::methods::SpiderBatEntity {
IL2CPP_REGISTER_METHOD(0x00956A60, ConfigurableJoint *, GetGeneratedConfigurableJoint, (SpiderBatEntity * __this));
IL2CPP_REGISTER_METHOD(0x00956A70, bool, GetIsAttacking, (SpiderBatEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, GetAllowShriek, (SpiderBatEntity * __this));
IL2CPP_REGISTER_METHOD(0x00956A80, bool, GetIsStunned, (SpiderBatEntity * __this));
IL2CPP_REGISTER_METHOD(0x00755600, bool, GetIsAggro, (SpiderBatEntity * __this));
IL2CPP_REGISTER_METHOD(0x00956AA0, bool, GetAllowClimb, (SpiderBatEntity * __this));
IL2CPP_REGISTER_METHOD(0x00956AB0, bool, GetIsClimbedUp, (SpiderBatEntity * __this));
IL2CPP_REGISTER_METHOD(0x00956AC0, int32_t, GetAttacksSinceClimbedUp, (SpiderBatEntity * __this));
IL2CPP_REGISTER_METHOD(0x00956AD0, int32_t, AttacksToClimb, (SpiderBatEntity * __this));
IL2CPP_REGISTER_METHOD(0x00956AE0, Action_1_Damage_ *, get_ReceivedDamageEvent, (SpiderBatEntity * __this));
IL2CPP_REGISTER_METHOD(0x00956AF0, void, set_ReceivedDamageEvent, (SpiderBatEntity * __this, Action_1_Damage_ * value));
IL2CPP_REGISTER_METHOD(0x00956B00, void, ResolveDamage, (SpiderBatEntity * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x00956CA0, void, SetIsAttacking, (SpiderBatEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00956DA0, float, ForceFromDamage, (SpiderBatEntity * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x00956E40, void, OnAwake, (SpiderBatEntity * __this));
IL2CPP_REGISTER_METHOD(0x00957020, void, ResetClimbDirection, (SpiderBatEntity * __this));
IL2CPP_REGISTER_METHOD(0x00957040, void, ResetEntity, (SpiderBatEntity * __this));
IL2CPP_REGISTER_METHOD(0x009573A0, void, FixedUpdate, (SpiderBatEntity * __this));
IL2CPP_REGISTER_METHOD(0x00957BD0, void, LateUpdate, (SpiderBatEntity * __this));
IL2CPP_REGISTER_METHOD(0x00957C00, void, AdjustAttacks, (SpiderBatEntity * __this, SpiderBatEntity_AttackSet__Enum attacks));
IL2CPP_REGISTER_METHOD(0x00957F50, void, SetModelVariation, (SpiderBatEntity * __this, SpiderBatEntity_ModelVariation__Enum variation));
IL2CPP_REGISTER_METHOD(0x00958070, void, UpdateWebRopeVisuals, (SpiderBatEntity * __this));
IL2CPP_REGISTER_METHOD(0x009585D0, void, StunnedWhileAttacking, (SpiderBatEntity * __this));
IL2CPP_REGISTER_METHOD(0x009585E0, void, DetachFromRope, (SpiderBatEntity * __this));
IL2CPP_REGISTER_METHOD(0x009586F0, void, AttachToRope, (SpiderBatEntity * __this, Rope * rope, bool attachToEnd));
IL2CPP_REGISTER_METHOD(0x009590E0, void, PerformAttachment, (SpiderBatEntity * __this));
IL2CPP_REGISTER_METHOD(0x00959740, void, BreakAttachment, (SpiderBatEntity * __this));
IL2CPP_REGISTER_METHOD(0x00959830, bool, ClimbRope, (SpiderBatEntity * __this, float distance, bool ignoreCurve));
IL2CPP_REGISTER_METHOD(0x0095AE00, void, ApplyForce, (SpiderBatEntity * __this, Vector3 force));
IL2CPP_REGISTER_METHOD(0x0095B4F0, void, __ctor, (SpiderBatEntity * __this));
}
