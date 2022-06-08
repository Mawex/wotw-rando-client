using namespace app;

namespace app::methods::DebugProjectileTester {
IL2CPP_REGISTER_METHOD(0x00DFDD30, void, Shoot, (DebugProjectileTester * __this));
IL2CPP_REGISTER_METHOD(0x00DFE2C0, void, SpawnProjectile, (DebugProjectileTester * __this, Vector2 shootPoint, Vector3 shootVelocity));
IL2CPP_REGISTER_METHOD(0x00DFE5B0, void, Update, (DebugProjectileTester * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FixedUpdate, (DebugProjectileTester * __this));
IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_IsSuspended, (DebugProjectileTester * __this));
IL2CPP_REGISTER_METHOD(0x00DFE810, void, set_IsSuspended, (DebugProjectileTester * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF2B0, SuspendableMask__Enum, get_Mask, (DebugProjectileTester * __this));
IL2CPP_REGISTER_METHOD(0x00DFE820, void, set_Mask, (DebugProjectileTester * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00DFE8D0, void, __ctor, (DebugProjectileTester * __this));
}
