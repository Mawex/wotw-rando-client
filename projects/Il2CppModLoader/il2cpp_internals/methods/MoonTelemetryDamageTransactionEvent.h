#include <interception_macros.h>

namespace app::methods::MoonTelemetryDamageTransactionEvent {
IL2CPP_REGISTER_METHOD(0x0146DB30, MoonTelemetryDamageTransactionEvent_DamageEntity__Enum, TypeToDamageEntity, (app::Type * object_to_cast));
IL2CPP_REGISTER_METHOD(0x0146DC50, void, __ctor_1, (app::MoonTelemetryDamageTransactionEvent * this_ptr));
IL2CPP_REGISTER_METHOD(0x0146DD90, void, __ctor_2, (app::MoonTelemetryDamageTransactionEvent * this_ptr, app::Object_1 * damage_source, app::Object_1 * damage_target, app::Damage * damage, bool is_killed));
IL2CPP_REGISTER_METHOD(0x00A64230, String *, get_Name, (app::MoonTelemetryDamageTransactionEvent * this_ptr));
IL2CPP_REGISTER_METHOD(0x0146E3F0, void, SerializeToObject, (app::MoonTelemetryDamageTransactionEvent * this_ptr, app::JsonBuilder_Object obj));
IL2CPP_REGISTER_METHOD(0x0146E8E0, void, __cctor, ());
}
