using namespace app;

namespace app::methods::ColorVariationSettings {
IL2CPP_REGISTER_METHOD(0x011DA260, void, Copy, (ColorVariationSettings * __this, ColorVariationSettings * source));
IL2CPP_REGISTER_METHOD(0x011DA290, ColorVariationSettings *, Clone, (ColorVariationSettings * __this));
IL2CPP_REGISTER_METHOD(0x011DA410, void, Lerp, (ColorVariationSettings * from, ColorVariationSettings * to, ColorVariationSettings * * destination, float t));
IL2CPP_REGISTER_METHOD(0x011DA5B0, void, CopyFrom, (ColorVariationSettings * __this, ColorVariationSettings * settingsColorVariationSettings));
IL2CPP_REGISTER_METHOD(0x011DA5E0, void, __ctor, (ColorVariationSettings * __this));
}
