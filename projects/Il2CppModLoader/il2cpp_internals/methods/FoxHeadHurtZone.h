using namespace app;

namespace app::methods::FoxHeadHurtZone {
IL2CPP_REGISTER_METHOD(0x01633580, void, add_ReceiveDamageCallback, (FoxHeadHurtZone * __this, Action_1_Damage_ * value));
IL2CPP_REGISTER_METHOD(0x01633670, void, remove_ReceiveDamageCallback, (FoxHeadHurtZone * __this, Action_1_Damage_ * value));
IL2CPP_REGISTER_METHOD(0x01633760, void, OnRecieveDamage, (FoxHeadHurtZone * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x01633800, void, __ctor, (FoxHeadHurtZone * __this));
}
