#include <interception_macros.h>

namespace app::methods::SpiderBossAcidAttack {
IL2CPP_REGISTER_METHOD(0x009628E0, bool, get_IsAttacking, (SpiderBossAcidAttack * __this));
IL2CPP_REGISTER_METHOD(0x009628F0, void, OnEnter, (SpiderBossAcidAttack * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00962D30, void, StartAttack, (SpiderBossAcidAttack * __this));
IL2CPP_REGISTER_METHODINFO(0x047178E8, SpiderBossAcidAttack_StartAttack__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00963400, void, StopAttack, (SpiderBossAcidAttack * __this));
IL2CPP_REGISTER_METHODINFO(0x04797DA0, SpiderBossAcidAttack_StopAttack__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009634D0, BehaviourStatus__Enum, OnExecute, (SpiderBossAcidAttack * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00963920, void, Shoot, (SpiderBossAcidAttack * __this, Vector3 startPos, Vector3 targetPos));
IL2CPP_REGISTER_METHOD(0x00963B60, void, ProjectileCollision, (SpiderBossAcidAttack * __this, Collision * collision));
IL2CPP_REGISTER_METHODINFO(0x04773930, SpiderBossAcidAttack_ProjectileCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00963EE0, void, SpawnProjectile, (SpiderBossAcidAttack * __this, Vector2 shootPoint, Vector3 shootVelocity));
IL2CPP_REGISTER_METHOD(0x009645D0, bool, CanSpawnCreep, (SpiderBossAcidAttack * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00964780, void, SpawnCreep, (SpiderBossAcidAttack * __this, Vector3 position, Vector3 up, Transform * parent));
IL2CPP_REGISTER_METHOD(0x002FA000, void, LateUpdate, (SpiderBossAcidAttack * __this));
IL2CPP_REGISTER_METHOD(0x00964A10, void, OnExit, (SpiderBossAcidAttack * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00964DE0, void, OnDrawGizmos, (SpiderBossAcidAttack * __this));
IL2CPP_REGISTER_METHOD(0x00964E80, void, __ctor, (SpiderBossAcidAttack * __this));
}
