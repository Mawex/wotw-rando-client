#include <interception_macros.h>

namespace app::methods::Kino::Motion {
IL2CPP_REGISTER_METHOD(0x00446960, float, get_shutterAngle, (Motion_1 * __this));
IL2CPP_REGISTER_METHOD(0x00724010, void, set_shutterAngle, (Motion_1 * __this, float value));
IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_sampleCount, (Motion_1 * __this));
IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_sampleCount, (Motion_1 * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_frameBlending, (Motion_1 * __this));
IL2CPP_REGISTER_METHOD(0x006A5EC0, void, set_frameBlending, (Motion_1 * __this, float value));
IL2CPP_REGISTER_METHOD(0x00E751A0, void, OnEnable, (Motion_1 * __this));
IL2CPP_REGISTER_METHOD(0x00E753B0, void, OnDisable, (Motion_1 * __this));
IL2CPP_REGISTER_METHOD(0x00E755D0, void, Update, (Motion_1 * __this));
IL2CPP_REGISTER_METHOD(0x00E75700, void, OnRenderImage, (Motion_1 * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x00E75A20, void, __ctor, (Motion_1 * __this));
}
