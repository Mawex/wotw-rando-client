#include <interception_macros.h>

namespace app::methods::DofZoneModifier {
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_VisibleOnInspector, (DofZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_VisibleOnInspector, (DofZoneModifier * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0043C0F0, float, get_SliceRenderSettingsWeight, (DofZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x0043C100, void, set_SliceRenderSettingsWeight, (DofZoneModifier * __this, float value));
IL2CPP_REGISTER_METHOD(0x00B9C600, SliceRenderSettingsInfluencerOrder__Enum, get_SliceRenderInfluenceOrder, (DofZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_SliceRenderInfluenceOrderOffset, (DofZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x00B9C610, void, InitializeModifier, (DofZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x00B9C6B0, void, CleanUpModifier, (DofZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x0043C100, void, UpdateModifier, (DofZoneModifier * __this, float weight, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00B9C750, float, GetBlurOffsetForLayer, (DofZoneModifier * __this, int32_t layer, SliceRenderSettings * settings));
IL2CPP_REGISTER_METHOD(0x00B9C7B0, float, GetDownsamplingOffsetForLayer, (DofZoneModifier * __this, int32_t layer, SliceRenderSettings * settings));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (DofZoneModifier * __this));
}
