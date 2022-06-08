using namespace app;

namespace app::methods::DeadJumpingSootEnemy {
IL2CPP_REGISTER_METHOD(0x00DDB010, void, OnReceiveContext, (DeadJumpingSootEnemy * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00DDB260, void, OnRecieveDamage, (DeadJumpingSootEnemy * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x003FFD00, bool, get_IsSuspended, (DeadJumpingSootEnemy * __this));
IL2CPP_REGISTER_METHOD(0x003FFD10, void, set_IsSuspended, (DeadJumpingSootEnemy * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006515B0, SuspendableMask__Enum, get_Mask, (DeadJumpingSootEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00DDB3E0, void, set_Mask, (DeadJumpingSootEnemy * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00DDB4A0, void, ChangeState, (DeadJumpingSootEnemy * __this, DeadJumpingSootEnemy_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00DDB6B0, void, UpdateState, (DeadJumpingSootEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00DDBAD0, void, OnCollisionEnter, (DeadJumpingSootEnemy * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00DDBAD0, void, OnCollisionStay, (DeadJumpingSootEnemy * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00DDBC90, void, OnHitFloor, (DeadJumpingSootEnemy * __this, Vector3 normal));
IL2CPP_REGISTER_METHOD(0x00DDC050, void, Awake, (DeadJumpingSootEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00DDC260, void, Start, (DeadJumpingSootEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00DDC270, void, OnDestroy, (DeadJumpingSootEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00DDC310, void, FixedUpdate, (DeadJumpingSootEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00DDC470, void, __ctor, (DeadJumpingSootEnemy * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (DeadJumpingSootEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (DeadJumpingSootEnemy * __this));
}
