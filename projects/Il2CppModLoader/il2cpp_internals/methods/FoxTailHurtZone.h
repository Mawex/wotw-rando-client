using namespace app;

namespace app::methods::FoxTailHurtZone {
IL2CPP_REGISTER_METHOD(0x01633ED0, void, add_ReceiveDamageCallback, (FoxTailHurtZone * __this, Action_1_Damage_ * value));
IL2CPP_REGISTER_METHOD(0x01633FC0, void, remove_ReceiveDamageCallback, (FoxTailHurtZone * __this, Action_1_Damage_ * value));
IL2CPP_REGISTER_METHOD(0x016340B0, void, OnRecieveDamage, (FoxTailHurtZone * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x01634150, void, __ctor, (FoxTailHurtZone * __this));
}
