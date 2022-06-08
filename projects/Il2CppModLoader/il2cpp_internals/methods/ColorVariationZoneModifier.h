using namespace app;

namespace app::methods::ColorVariationZoneModifier {
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_VisibleOnInspector, (ColorVariationZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_VisibleOnInspector, (ColorVariationZoneModifier * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00724020, float, get_ColorVariationWeight, (ColorVariationZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x00724030, void, set_ColorVariationWeight, (ColorVariationZoneModifier * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FB990, ColorVariationSettings *, get_ColorVariationSettings, (ColorVariationZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, ColorVariationManager_ColorVariationInfluencerOrder__Enum, get_ColorVariationInfluencerOrder, (ColorVariationZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x011DA600, void, InitializeModifier, (ColorVariationZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x011DA6A0, void, CleanUpModifier, (ColorVariationZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x00724030, void, UpdateModifier, (ColorVariationZoneModifier * __this, float weight, float deltaTime));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ColorVariationZoneModifier * __this));
}
