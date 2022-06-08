using namespace app;

namespace app::methods::SpriteRotationController {
IL2CPP_REGISTER_METHOD(0x009AE9E0, void, Awake, (SpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x009AEAD0, void, OnDestroy, (SpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x009AEB70, void, FixedUpdate, (SpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x009AED40, void, RotateBackToNormal, (SpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x009AED50, void, RotateTowardsTarget, (SpriteRotationController * __this, Vector3 target, bool faceLeft));
IL2CPP_REGISTER_METHOD(0x009AEE40, void, RotateTowardsTarget, (SpriteRotationController * __this, Vector3 target, float angleOffset));
IL2CPP_REGISTER_METHOD(0x009AEF20, void, RotateToTargetImmediately, (SpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsSuspended, (SpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x005150D0, void, set_IsSuspended, (SpriteRotationController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0057AAC0, SuspendableMask__Enum, get_Mask, (SpriteRotationController * __this));
IL2CPP_REGISTER_METHOD(0x009AF080, void, set_Mask, (SpriteRotationController * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x009AF130, void, __ctor, (SpriteRotationController * __this));
}
