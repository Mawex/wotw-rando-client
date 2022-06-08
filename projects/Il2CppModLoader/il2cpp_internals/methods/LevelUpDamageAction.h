using namespace app;

namespace app::methods::LevelUpDamageAction {
IL2CPP_REGISTER_METHOD(0x01132D30, void, Perform, (LevelUpDamageAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01132D40, void, Awake, (LevelUpDamageAction * __this));
IL2CPP_REGISTER_METHOD(0x01132DE0, void, OnDestroy, (LevelUpDamageAction * __this));
IL2CPP_REGISTER_METHOD(0x01132E80, void, FixedUpdate, (LevelUpDamageAction * __this));
IL2CPP_REGISTER_METHOD(0x004F2320, bool, get_IsSuspended, (LevelUpDamageAction * __this));
IL2CPP_REGISTER_METHOD(0x004F2330, void, set_IsSuspended, (LevelUpDamageAction * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FD750, SuspendableMask__Enum, get_Mask, (LevelUpDamageAction * __this));
IL2CPP_REGISTER_METHOD(0x011335D0, void, set_Mask, (LevelUpDamageAction * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x01133680, void, __ctor, (LevelUpDamageAction * __this));
}
