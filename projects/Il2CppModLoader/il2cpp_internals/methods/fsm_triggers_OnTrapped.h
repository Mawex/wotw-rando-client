using namespace app;

namespace app::methods::fsm::triggers::OnTrapped {
IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_Amount, (OnTrapped * __this));
IL2CPP_REGISTER_METHOD(0x004C87C0, void, set_Amount, (OnTrapped * __this, float value));
IL2CPP_REGISTER_METHOD(0x00CC59E0, DamageType__Enum, get_DamageType, (OnTrapped * __this));
IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_DamageType, (OnTrapped * __this, DamageType__Enum value));
IL2CPP_REGISTER_METHOD(0x00A3F4E0, void, __ctor, (OnTrapped * __this, float amount, DamageType__Enum damageType));
}
