using namespace app;

namespace app::methods::EntityFreezeController {
IL2CPP_REGISTER_METHOD(0x00C90FE0, void, Awake, (EntityFreezeController * __this));
IL2CPP_REGISTER_METHOD(0x00C91310, void, OnDestroy, (EntityFreezeController * __this));
IL2CPP_REGISTER_METHOD(0x00C91500, void, OnModifyDamage, (EntityFreezeController * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x0470B330, EntityFreezeController_OnModifyDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C91660, void, FixedUpdate, (EntityFreezeController * __this));
IL2CPP_REGISTER_METHOD(0x00C917A0, void, Freeze, (EntityFreezeController * __this));
IL2CPP_REGISTER_METHOD(0x00C918C0, void, Unfreeze, (EntityFreezeController * __this));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsSuspended, (EntityFreezeController * __this));
IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsSuspended, (EntityFreezeController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00608710, SuspendableMask__Enum, get_Mask, (EntityFreezeController * __this));
IL2CPP_REGISTER_METHOD(0x00C919E0, void, set_Mask, (EntityFreezeController * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00C91A90, void, __ctor, (EntityFreezeController * __this));
}
