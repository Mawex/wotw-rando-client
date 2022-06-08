using namespace app;

namespace app::methods::LockOnTargetProjectile {
IL2CPP_REGISTER_METHOD(0x00FC1DC0, Vector3, get_TargetPosition, (LockOnTargetProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00FC1E90, Vector3, get_Position, (LockOnTargetProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00FC1F20, void, Awake, (LockOnTargetProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00FC2000, void, Update, (LockOnTargetProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00FC25A0, void, Detonate, (LockOnTargetProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00FC2C60, void, SetTarget, (LockOnTargetProjectile * __this, LockOnTarget * target));
IL2CPP_REGISTER_METHOD(0x00FC2DE0, void, __ctor, (LockOnTargetProjectile * __this));
}
