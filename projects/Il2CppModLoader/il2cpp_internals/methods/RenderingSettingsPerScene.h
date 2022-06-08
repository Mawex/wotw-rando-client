#include <interception_macros.h>

namespace app::methods::RenderingSettingsPerScene {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_DeferredLightingEnabled, (RenderingSettingsPerScene * __this));
IL2CPP_REGISTER_METHOD(0x0052C660, void, set_DeferredLightingEnabled, (RenderingSettingsPerScene * __this, bool value));
IL2CPP_REGISTER_METHOD(0x008FDBD0, float, get_DRSMagicPower, (RenderingSettingsPerScene * __this));
IL2CPP_REGISTER_METHOD(0x008FDC10, void, set_DRSMagicPower, (RenderingSettingsPerScene * __this, float value));
IL2CPP_REGISTER_METHOD(0x008FDC20, int32_t, get_SceneRTDRSDownscaleCap, (RenderingSettingsPerScene * __this));
IL2CPP_REGISTER_METHOD(0x00529E90, void, set_SceneRTDRSDownscaleCap, (RenderingSettingsPerScene * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x008FDC50, int32_t, get_SceneRTDRSDownscaleYCap, (RenderingSettingsPerScene * __this));
IL2CPP_REGISTER_METHOD(0x005C4000, void, set_SceneRTDRSDownscaleYCap, (RenderingSettingsPerScene * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x008FDC80, void, Lerp, (RenderingSettingsPerScene * from, RenderingSettingsPerScene * to, RenderingSettingsPerScene * * destination, float curveValue));
IL2CPP_REGISTER_METHOD(0x008FE140, RenderingSettingsPerScene *, Clone, (RenderingSettingsPerScene * __this));
IL2CPP_REGISTER_METHOD(0x008FE2B0, void, CopyFrom, (RenderingSettingsPerScene * __this, RenderingSettingsPerScene * other));
IL2CPP_REGISTER_METHOD(0x008FE390, void, __ctor, (RenderingSettingsPerScene * __this));
}
