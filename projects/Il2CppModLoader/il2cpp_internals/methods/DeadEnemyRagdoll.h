#include <interception_macros.h>

namespace app::methods::DeadEnemyRagdoll {
IL2CPP_REGISTER_METHOD(0x00DD7B80, void, OnReceiveContext, (DeadEnemyRagdoll * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00DD7C80, void, OnRecieveDamage, (DeadEnemyRagdoll * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x007DE870, bool, get_IsSuspended, (DeadEnemyRagdoll * __this));
IL2CPP_REGISTER_METHOD(0x007DE880, void, set_IsSuspended, (DeadEnemyRagdoll * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006B90B0, SuspendableMask__Enum, get_Mask, (DeadEnemyRagdoll * __this));
IL2CPP_REGISTER_METHOD(0x00DD82E0, void, set_Mask, (DeadEnemyRagdoll * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00DD83A0, void, ChangeState, (DeadEnemyRagdoll * __this, DeadEnemyRagdoll_State__Enum state));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterBounce, (DeadEnemyRagdoll * __this));
IL2CPP_REGISTER_METHOD(0x00DD8420, void, OnEnterDrown, (DeadEnemyRagdoll * __this));
IL2CPP_REGISTER_METHOD(0x00DD8430, void, OnEnterPlumit, (DeadEnemyRagdoll * __this));
IL2CPP_REGISTER_METHOD(0x00DD8480, void, OnEnterFlatLand, (DeadEnemyRagdoll * __this));
IL2CPP_REGISTER_METHOD(0x00DD8630, void, UpdatePlummit, (DeadEnemyRagdoll * __this));
IL2CPP_REGISTER_METHOD(0x00DD8E70, void, UpdateBounce, (DeadEnemyRagdoll * __this));
IL2CPP_REGISTER_METHOD(0x00DD90E0, void, UpdateLand, (DeadEnemyRagdoll * __this));
IL2CPP_REGISTER_METHOD(0x00DD9330, void, UpdateDrown, (DeadEnemyRagdoll * __this));
IL2CPP_REGISTER_METHOD(0x00DD9600, void, UpdateState, (DeadEnemyRagdoll * __this));
IL2CPP_REGISTER_METHOD(0x00DD96B0, void, OnCollisionEnter, (DeadEnemyRagdoll * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00DD96B0, void, OnCollisionStay, (DeadEnemyRagdoll * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00DD96C0, void, OnCollision, (DeadEnemyRagdoll * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00DD9910, void, Explode, (DeadEnemyRagdoll * __this));
IL2CPP_REGISTER_METHOD(0x00DD9B50, void, OnHitFloor, (DeadEnemyRagdoll * __this, Vector3 normal, GameObject * targetGameObject));
IL2CPP_REGISTER_METHOD(0x00DDA980, void, Awake, (DeadEnemyRagdoll * __this));
IL2CPP_REGISTER_METHOD(0x00DDAB40, void, Start, (DeadEnemyRagdoll * __this));
IL2CPP_REGISTER_METHOD(0x00DDABF0, void, OnDestroy, (DeadEnemyRagdoll * __this));
IL2CPP_REGISTER_METHOD(0x00DDAC90, void, FixedUpdate, (DeadEnemyRagdoll * __this));
IL2CPP_REGISTER_METHOD(0x00DDAF60, void, __ctor, (DeadEnemyRagdoll * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (DeadEnemyRagdoll * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (DeadEnemyRagdoll * __this));
}
