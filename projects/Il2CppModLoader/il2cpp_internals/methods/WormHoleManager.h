using namespace app;

namespace app::methods::WormHoleManager {
IL2CPP_REGISTER_METHOD(0x0058E420, MortarWormEnemy *, FindMortarWorm, (WormHoleManager * __this));
IL2CPP_REGISTER_METHOD(0x0058E4A0, void, Awake, (WormHoleManager * __this));
IL2CPP_REGISTER_METHOD(0x0058E6C0, void, OnDestroy, (WormHoleManager * __this));
IL2CPP_REGISTER_METHOD(0x0058E8C0, void, OnMortarHide, (WormHoleManager * __this, MortarWormEnemy * mortarWormEnemy));
IL2CPP_REGISTER_METHODINFO(0x0477E248, WormHoleManager_OnMortarHide__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0058E990, void, ResetHole, (WormHoleManager * __this));
IL2CPP_REGISTER_METHOD(0x0058EB40, void, FixedUpdate, (WormHoleManager * __this));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_IsSuspended, (WormHoleManager * __this));
IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_IsSuspended, (WormHoleManager * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FDCE0, SuspendableMask__Enum, get_Mask, (WormHoleManager * __this));
IL2CPP_REGISTER_METHOD(0x0058ED90, void, set_Mask, (WormHoleManager * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0058EE40, void, __ctor, (WormHoleManager * __this));
}
