#include <interception_macros.h>

namespace app::methods::UberShaderRuntimeAnchoredTexture {
IL2CPP_REGISTER_METHOD(0x00575450, bool, get_HasAnchor, (UberShaderRuntimeAnchoredTexture * __this));
IL2CPP_REGISTER_METHOD(0x00575460, void, set_HasAnchor, (UberShaderRuntimeAnchoredTexture * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00575470, bool, get_HasLookAtTarget, (UberShaderRuntimeAnchoredTexture * __this));
IL2CPP_REGISTER_METHOD(0x00575480, void, set_HasLookAtTarget, (UberShaderRuntimeAnchoredTexture * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReady, (UberShaderRuntimeAnchoredTexture * __this));
IL2CPP_REGISTER_METHOD(0x0191C830, void, Populate, (UberShaderRuntimeAnchoredTexture * __this, UberShaderTexture * uberShaderTexture, UberShaderModifier * modifier));
IL2CPP_REGISTER_METHOD(0x0191CAD0, void, UpdateFlags, (UberShaderRuntimeAnchoredTexture * __this));
IL2CPP_REGISTER_METHOD(0x0191CB90, void, OnEnable, (UberShaderRuntimeAnchoredTexture * __this));
IL2CPP_REGISTER_METHOD(0x0191CC50, void, OnDisable, (UberShaderRuntimeAnchoredTexture * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (UberShaderRuntimeAnchoredTexture * __this));
}
