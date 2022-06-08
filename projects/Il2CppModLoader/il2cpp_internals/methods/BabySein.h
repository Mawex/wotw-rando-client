using namespace app;

namespace app::methods::BabySein {
IL2CPP_REGISTER_METHOD(0x00860D50, void, Awake, (BabySein * __this));
IL2CPP_REGISTER_METHOD(0x00860E10, void, OnDestroy, (BabySein * __this));
IL2CPP_REGISTER_METHOD(0x00860F40, CharacterCapsuleController *, get_CapsuleController, (BabySein * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, DamageOwner *, get_DamageOwner, (BabySein * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_DamageOwner, (BabySein * __this, DamageOwner * value));
IL2CPP_REGISTER_METHOD(0x00860F60, Vector3, get_Position, (BabySein * __this));
IL2CPP_REGISTER_METHOD(0x00860FC0, void, set_Position, (BabySein * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00861010, Vector3, get_MapDisplayPosition, (BabySein * __this));
IL2CPP_REGISTER_METHOD(0x00861130, Vector3, get_DeltaPosition, (BabySein * __this));
IL2CPP_REGISTER_METHOD(0x008612A0, void, Activate, (BabySein * __this, bool active));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, get_GameObject, (BabySein * __this));
IL2CPP_REGISTER_METHOD(0x00861360, bool, get_FaceLeft, (BabySein * __this));
IL2CPP_REGISTER_METHOD(0x00861390, void, set_FaceLeft, (BabySein * __this, bool value));
IL2CPP_REGISTER_METHOD(0x008613E0, Vector3, get_Speed, (BabySein * __this));
IL2CPP_REGISTER_METHOD(0x008614E0, void, set_Speed, (BabySein * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x008615E0, Vector2, get_PhysicsSpeed, (BabySein * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, get_Transform, (BabySein * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, get_CameraTarget, (BabySein * __this));
IL2CPP_REGISTER_METHOD(0x00861610, bool, get_IsOnGround, (BabySein * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAlive, (BabySein * __this));
IL2CPP_REGISTER_METHOD(0x00861650, bool, PlaceOnGround, (BabySein * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (BabySein * __this));
}
