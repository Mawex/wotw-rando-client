#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::TelemetryTimelineScene {
IL2CPP_REGISTER_METHOD(0x010AA7F0, void, __ctor, (TelemetryTimelineScene * __this, MoonTelemetrySceneEvent__Array * sceneEvents));
IL2CPP_REGISTER_METHOD(0x010AAB00, void, OnGui, (TelemetryTimelineScene * __this, DrawingContext context));
IL2CPP_REGISTER_METHOD(0x010AB090, void, OnHeaderGui, (TelemetryTimelineScene * __this, Rect rect));
IL2CPP_REGISTER_METHOD(0x010AB1D0, void, OnStateZoneGui, (TelemetryTimelineScene * __this, Rect rect, Color color));
IL2CPP_REGISTER_METHOD(0x010AB440, Single__Array *, GetEventsLength, (TelemetryTimelineScene * __this, MoonTelemetrySceneEvent__Array * sceneEvents));
IL2CPP_REGISTER_METHOD(0x002FA000, void, InitGui, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
