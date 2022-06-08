#include <interception_macros.h>

namespace app::methods::MoonTelemetryCharacterBaseEvent {
IL2CPP_REGISTER_METHOD(0x01288790, Vector2, get_Position, (MoonTelemetryCharacterBaseEvent * __this));
IL2CPP_REGISTER_METHOD(0x01466B20, Vector2, get_LastScreenPosition, (MoonTelemetryCharacterBaseEvent * __this));
IL2CPP_REGISTER_METHOD(0x01466B40, void, set_LastScreenPosition, (MoonTelemetryCharacterBaseEvent * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01466B70, void, InvalidateAbilitiesCache, ());
IL2CPP_REGISTER_METHOD(0x01466C10, void, UpdateAbilitiesCache, ());
IL2CPP_REGISTER_METHOD(0x01467190, void, InvalidateShardCache, ());
IL2CPP_REGISTER_METHOD(0x01467230, void, UpdateShardCache, ());
IL2CPP_REGISTER_METHOD(0x014677D0, void, SetValue, (MoonTelemetryCharacterBaseEvent * __this, String * name, String * value));
IL2CPP_REGISTER_METHOD(0x014679F0, Dictionary_2_System_String_System_Reflection_FieldInfo_ *, GetFieldsCollection, (MoonTelemetryCharacterBaseEvent * __this));
IL2CPP_REGISTER_METHOD(0x01467DF0, void, SetValue_Internal, (MoonTelemetryCharacterBaseEvent * __this, FieldInfo_1 * info, String * value));
IL2CPP_REGISTER_METHOD(0x01467F40, void, SynchronousInitialize, (MoonTelemetryCharacterBaseEvent * __this));
IL2CPP_REGISTER_METHOD(0x01468A10, void, AsynchronousInitialize, (MoonTelemetryCharacterBaseEvent * __this));
IL2CPP_REGISTER_METHOD(0x01468CE0, void, SerializeToObject, (MoonTelemetryCharacterBaseEvent * __this, JsonBuilder_Object obj));
IL2CPP_REGISTER_METHOD(0x01469C80, void, __ctor, (MoonTelemetryCharacterBaseEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
