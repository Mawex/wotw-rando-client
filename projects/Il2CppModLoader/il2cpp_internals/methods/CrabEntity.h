#include <interception_macros.h>

namespace app::methods::CrabEntity {
IL2CPP_REGISTER_METHOD(0x00DB3EC0, void, set_ShouldReflectArrows, (CrabEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00DB3EF0, bool, get_ShouldReflectArrows, (CrabEntity * __this));
IL2CPP_REGISTER_METHOD(0x00DB3F20, bool, get_MeetsRetaliationConditions, (CrabEntity * __this));
IL2CPP_REGISTER_METHOD(0x00DB3F40, void, set_MeetsRetaliationConditions, (CrabEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00DB3F50, bool, get_ShouldGiveUpOnChasing, (CrabEntity * __this));
IL2CPP_REGISTER_METHOD(0x00DB3FB0, float, get_GroupBehaviourExtraDelay, (CrabEntity * __this));
IL2CPP_REGISTER_METHOD(0x00DB4090, float, get_AttackInterval, (CrabEntity * __this));
IL2CPP_REGISTER_METHOD(0x00DB4190, float, get_SmallGroupBehaviourExtraDelay, (CrabEntity * __this));
IL2CPP_REGISTER_METHOD(0x00DB4280, void, ResolveDamage, (CrabEntity * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x00DB4410, void, WwiseOnClawAttackInterrupted, (CrabEntity * __this));
IL2CPP_REGISTER_METHOD(0x00DB4500, void, OnFixedUpdate, (CrabEntity * __this));
IL2CPP_REGISTER_METHOD(0x00DB4520, void, UpdateRetaliationLogic, (CrabEntity * __this));
IL2CPP_REGISTER_METHOD(0x00DB4820, void, __ctor, (CrabEntity * __this));
IL2CPP_REGISTER_METHOD(0x00DB49A0, void, __cctor, ());
}
