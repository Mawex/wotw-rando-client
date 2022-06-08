#include <interception_macros.h>

namespace app::methods::MoonTelemetryShrineEndEvent {
IL2CPP_REGISTER_METHOD(0x01472650, void, __ctor, (MoonTelemetryShrineEndEvent * __this, float time, MoonTelemetryShrineEndEvent_ShrineResult__Enum result, String * sceneName));
IL2CPP_REGISTER_METHOD(0x006A63A0, String *, get_Name, (MoonTelemetryShrineEndEvent * __this));
IL2CPP_REGISTER_METHOD(0x01472760, void, SerializeToObject, (MoonTelemetryShrineEndEvent * __this, JsonBuilder_Object obj));
}
