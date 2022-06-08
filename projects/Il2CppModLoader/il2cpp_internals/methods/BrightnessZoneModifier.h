#include <interception_macros.h>

namespace app::methods::BrightnessZoneModifier {
IL2CPP_REGISTER_METHOD(0x00D51450, GlobalBrightnessController_BrigthnessContributionOrder__Enum, get_BrightnessInfluceOrder, (BrightnessZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_BrightnessInfluceAdditive, (BrightnessZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x00446960, float, get_BrightnessInfluceMultiplicative, (BrightnessZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ContributeToAdditive, (BrightnessZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ContributeToMultiplicative, (BrightnessZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_BrightnessInfluceWeight, (BrightnessZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x006A5EC0, void, set_BrightnessInfluceWeight, (BrightnessZoneModifier * __this, float value));
IL2CPP_REGISTER_METHOD(0x00446970, bool, get_VisibleOnInspector, (BrightnessZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x00446980, void, set_VisibleOnInspector, (BrightnessZoneModifier * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00D51460, void, InitializeModifier, (BrightnessZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x00D51500, void, CleanUpModifier, (BrightnessZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x006A5EC0, void, UpdateModifier, (BrightnessZoneModifier * __this, float weight, float deltaTime));
IL2CPP_REGISTER_METHOD(0x008A2C20, void, __ctor, (BrightnessZoneModifier * __this));
}
