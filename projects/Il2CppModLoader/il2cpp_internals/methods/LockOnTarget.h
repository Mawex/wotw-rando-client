using namespace app;

namespace app::methods::LockOnTarget {
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetTarget, (LockOnTarget * __this, IAttackable * target));
IL2CPP_REGISTER_METHOD(0x00FC1910, void, Update, (LockOnTarget * __this));
IL2CPP_REGISTER_METHOD(0x00FC1AE0, bool, get_TargetDestroyed, (LockOnTarget * __this));
IL2CPP_REGISTER_METHOD(0x00FC1BC0, void, OnProjectileDetonated, (LockOnTarget * __this));
IL2CPP_REGISTER_METHOD(0x00FC1CD0, void, DestroyLock, (LockOnTarget * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (LockOnTarget * __this));
}
