#include <interception_macros.h>

namespace app::methods::DeadBatEnemy {
IL2CPP_REGISTER_METHOD(0x00DD66F0, void, OnReceiveContext, (DeadBatEnemy * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00DD68F0, void, OnRecieveDamage, (DeadBatEnemy * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00601090, bool, get_IsSuspended, (DeadBatEnemy * __this));
IL2CPP_REGISTER_METHOD(0x0041DB70, void, set_IsSuspended, (DeadBatEnemy * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FFCE0, SuspendableMask__Enum, get_Mask, (DeadBatEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00DD6A10, void, set_Mask, (DeadBatEnemy * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00DD6AD0, void, ChangeState, (DeadBatEnemy * __this, DeadBatEnemy_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00DD6D70, void, UpdateState, (DeadBatEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00DD71C0, void, OnCollisionEnter, (DeadBatEnemy * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00DD71C0, void, OnCollisionStay, (DeadBatEnemy * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00DD7380, void, OnHitFloor, (DeadBatEnemy * __this, Vector3 normal));
IL2CPP_REGISTER_METHOD(0x00DD7740, void, Awake, (DeadBatEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00DD7950, void, Start, (DeadBatEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00DD7960, void, OnDestroy, (DeadBatEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00DD7A00, void, FixedUpdate, (DeadBatEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00DD7B60, void, __ctor, (DeadBatEnemy * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (DeadBatEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (DeadBatEnemy * __this));
}
