#include <interception_macros.h>

namespace app::methods::ShadingZoneRendererTarget {
IL2CPP_REGISTER_METHOD(0x005A8FE0, void, __ctor, (ShadingZoneRendererTarget * __this, Renderer * renderer));
IL2CPP_REGISTER_METHOD(0x005A9220, void, Unregister, (ShadingZoneRendererTarget * __this));
IL2CPP_REGISTER_METHOD(0x005A9310, Vector3, get_PointForLightCanvasShadingZone, (ShadingZoneRendererTarget * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, Renderer *, get_RendererForMoonShadingZone, (ShadingZoneRendererTarget * __this));
}
