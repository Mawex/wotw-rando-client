using namespace app;

namespace app::methods::IgnoreCollisionsHelper {
IL2CPP_REGISTER_METHOD(0x00113420, bool, IsIgnorning, (IgnoreCollisionsHelper__Boxed * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x001134D0, void, __ctor, (IgnoreCollisionsHelper__Boxed * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x001134E0, void, IgnoreCollision, (IgnoreCollisionsHelper__Boxed * __this, Collider * other, bool ignore));
IL2CPP_REGISTER_METHOD(0x001134F0, void, ResetCollisions, (IgnoreCollisionsHelper__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00113500, void, ApplyIgnoredColliders, (IgnoreCollisionsHelper__Boxed * __this));
}
