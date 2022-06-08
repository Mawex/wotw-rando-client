using namespace app;

namespace app::methods::MoonTelemetrySceneEvent {
IL2CPP_REGISTER_METHOD(0x01471630, void, __ctor, (MoonTelemetrySceneEvent * __this, RuntimeSceneMetaData * metaData, MoonTelemetrySceneEvent_EventSceneState__Enum eventSceneState));
IL2CPP_REGISTER_METHOD(0x01471780, void, __ctor, (MoonTelemetrySceneEvent * __this, SceneMetaData * metaData, MoonTelemetrySceneEvent_EventSceneState__Enum eventSceneState));
IL2CPP_REGISTER_METHOD(0x006A63A0, String *, get_Name, (MoonTelemetrySceneEvent * __this));
IL2CPP_REGISTER_METHOD(0x014718E0, void, SerializeToObject, (MoonTelemetrySceneEvent * __this, JsonBuilder_Object obj));
}
