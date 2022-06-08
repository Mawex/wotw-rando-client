using namespace app;

namespace app::methods::SeinCanPickupCondition {
IL2CPP_REGISTER_METHOD(0x00DA2F90, bool, Validate, (SeinCanPickupCondition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00DA3040, bool, IsValid, (bool requireSafe));
IL2CPP_REGISTER_METHOD(0x00DA3050, bool, CheckOri, (bool requireSafe));
IL2CPP_REGISTER_METHOD(0x00DA33A0, bool, IsSafeTestPassed, (PlatformBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SeinCanPickupCondition * __this));
}
