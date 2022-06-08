using namespace app;

namespace app::methods::MoonTelemetryShrineStartEvent {
IL2CPP_REGISTER_METHOD(0x01472910, void, __ctor, (MoonTelemetryShrineStartEvent * __this, String * sceneName));
IL2CPP_REGISTER_METHOD(0x01472A00, MoonTelemetryShrineStartEvent_ShrineID__Enum, ParseName, (String * sceneName));
IL2CPP_REGISTER_METHOD(0x0049F2B0, String *, get_Name, (MoonTelemetryShrineStartEvent * __this));
IL2CPP_REGISTER_METHOD(0x01472CB0, void, SerializeToObject, (MoonTelemetryShrineStartEvent * __this, JsonBuilder_Object obj));
}
