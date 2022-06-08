using namespace app;

namespace app::methods::Naru {
IL2CPP_REGISTER_METHOD(0x008831D0, void, Awake, (Naru * __this));
IL2CPP_REGISTER_METHOD(0x00883290, void, OnDestroy, (Naru * __this));
IL2CPP_REGISTER_METHOD(0x008833C0, CharacterCapsuleController *, get_CapsuleController, (Naru * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, DamageOwner *, get_DamageOwner, (Naru * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_DamageOwner, (Naru * __this, DamageOwner * value));
IL2CPP_REGISTER_METHOD(0x008833E0, Vector3, get_Position, (Naru * __this));
IL2CPP_REGISTER_METHOD(0x00883440, void, set_Position, (Naru * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00883490, Vector3, get_MapDisplayPosition, (Naru * __this));
IL2CPP_REGISTER_METHOD(0x008835B0, Vector3, get_DeltaPosition, (Naru * __this));
IL2CPP_REGISTER_METHOD(0x008612A0, void, Activate, (Naru * __this, bool active));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, get_GameObject, (Naru * __this));
IL2CPP_REGISTER_METHOD(0x00883720, bool, get_FaceLeft, (Naru * __this));
IL2CPP_REGISTER_METHOD(0x00883750, void, set_FaceLeft, (Naru * __this, bool value));
IL2CPP_REGISTER_METHOD(0x008837A0, Vector3, get_Speed, (Naru * __this));
IL2CPP_REGISTER_METHOD(0x008838A0, void, set_Speed, (Naru * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x008839A0, Vector2, get_PhysicsSpeed, (Naru * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, get_Transform, (Naru * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, get_CameraTarget, (Naru * __this));
IL2CPP_REGISTER_METHOD(0x008839D0, bool, get_IsOnGround, (Naru * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAlive, (Naru * __this));
IL2CPP_REGISTER_METHOD(0x00883A10, bool, PlaceOnGround, (Naru * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (Naru * __this));
}
