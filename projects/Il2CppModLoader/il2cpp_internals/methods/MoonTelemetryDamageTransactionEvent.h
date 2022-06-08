using namespace app;

namespace app::methods::MoonTelemetryDamageTransactionEvent {
IL2CPP_REGISTER_METHOD(0x0146DB30, MoonTelemetryDamageTransactionEvent_DamageEntity__Enum, TypeToDamageEntity, (Type * objectToCast));
IL2CPP_REGISTER_METHOD(0x0146DC50, void, __ctor, (MoonTelemetryDamageTransactionEvent * __this));
IL2CPP_REGISTER_METHOD(0x0146DD90, void, __ctor, (MoonTelemetryDamageTransactionEvent * __this, Object_1 * damageSource, Object_1 * damageTarget, Damage * damage, bool isKilled));
IL2CPP_REGISTER_METHOD(0x00A64230, String *, get_Name, (MoonTelemetryDamageTransactionEvent * __this));
IL2CPP_REGISTER_METHOD(0x0146E3F0, void, SerializeToObject, (MoonTelemetryDamageTransactionEvent * __this, JsonBuilder_Object obj));
IL2CPP_REGISTER_METHOD(0x0146E8E0, void, __cctor, (MethodInfo * method));
}
