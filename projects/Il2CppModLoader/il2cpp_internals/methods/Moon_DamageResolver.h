using namespace app;

namespace app::methods::Moon::DamageResolver {
IL2CPP_REGISTER_METHOD(0x01200D00, void, AddRuleOverrides, (DamageResolver * __this, DamageResolver_Rule__Array * rulesToOverride));
IL2CPP_REGISTER_METHOD(0x01200E10, void, RemoveRuleOverrides, (DamageResolver * __this, DamageResolver_Rule__Array * rulesToRemove));
IL2CPP_REGISTER_METHOD(0x01200F00, void, RemoveRuleOverrides, (DamageResolver * __this, DamageType__Enum__Array * rulesToRemove));
IL2CPP_REGISTER_METHOD(0x01200FE0, void, ResolveDamage, (DamageResolver * __this, DamageResult * damageTickResult));
IL2CPP_REGISTER_METHOD(0x012011F0, void, __ctor, (DamageResolver * __this));
}
