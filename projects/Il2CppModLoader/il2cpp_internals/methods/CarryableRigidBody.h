using namespace app;

namespace app::methods::CarryableRigidBody {
IL2CPP_REGISTER_METHOD(0x00B26440, void, add_OnAnyCarryablePickedUpAction, (Action * value));
IL2CPP_REGISTER_METHOD(0x00B26580, void, remove_OnAnyCarryablePickedUpAction, (Action * value));
IL2CPP_REGISTER_METHOD(0x00B266C0, void, Start, (CarryableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B26760, Vector3, get_Position, (CarryableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B267F0, void, set_Position, (CarryableRigidBody * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00B26870, void, Awake, (CarryableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B26A60, void, OnEnable, (CarryableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B26B20, void, OnDisable, (CarryableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B26C00, void, Serialize, (CarryableRigidBody * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00B26E30, bool, CanBeCarried, (CarryableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B270B0, bool, get_IsCarried, (CarryableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B270C0, void, Pickup, (CarryableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B27460, void, SetToCarryMode, (CarryableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B27960, void, SetToDropMode, (CarryableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B27BE0, void, Drop, (CarryableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B280E0, void, Throw, (CarryableRigidBody * __this, Vector3 target));
IL2CPP_REGISTER_METHOD(0x00B26760, Vector3, get_CarryablePosition, (CarryableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B28180, void, add_OnDropEvent, (CarryableRigidBody * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00B28270, void, remove_OnDropEvent, (CarryableRigidBody * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00B28360, void, ExplodeAndRespawn, (CarryableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B286C0, void, FixedUpdate, (CarryableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B28C60, void, OnCollisionEnter, (CarryableRigidBody * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00B29060, void, OnCollisionStay, (CarryableRigidBody * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00B29250, void, OnRecieveDamage, (CarryableRigidBody * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00B295C0, void, __ctor, (CarryableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B297B0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (CarryableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (CarryableRigidBody * __this));
}
