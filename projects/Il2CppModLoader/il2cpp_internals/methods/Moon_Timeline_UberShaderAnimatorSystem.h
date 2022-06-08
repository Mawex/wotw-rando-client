#include <interception_macros.h>

namespace app::methods::Moon::Timeline::UberShaderAnimatorSystem {
IL2CPP_REGISTER_METHOD(0x00D19A50, UberShaderAnimatorStrategyBase *, get_Strategy, ());
IL2CPP_REGISTER_METHOD(0x00D19C00, void, ToggleStrategy, ());
IL2CPP_REGISTER_METHOD(0x00D19EC0, UberShaderAnimatorSystem *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x00D1A1E0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00D1A300, void, Awake, (UberShaderAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (UberShaderAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x00D1A550, void, SubmitDynamicColor, (UberShaderAnimatorSystem * __this, Renderer * renderer, UberShaderProperty_Color__Enum property, Color value, float weight));
IL2CPP_REGISTER_METHOD(0x00D1A5D0, void, SubmitStaticColor, (UberShaderAnimatorSystem * __this, Renderer * renderer, UberShaderProperty_Color__Enum property, Color value, float weight));
IL2CPP_REGISTER_METHOD(0x00D1A650, void, SubmitDynamicVector4, (UberShaderAnimatorSystem * __this, Renderer * renderer, UberShaderProperty_Vector__Enum property, Vector4 value, float weight));
IL2CPP_REGISTER_METHOD(0x00D1A6D0, void, SubmitStaticVector4, (UberShaderAnimatorSystem * __this, Renderer * renderer, UberShaderProperty_Vector__Enum property, Vector4 value, float weight));
IL2CPP_REGISTER_METHOD(0x00D1A750, void, SubmitDynamicFloat, (UberShaderAnimatorSystem * __this, Renderer * renderer, UberShaderProperty_Float__Enum property, float value, float weight));
IL2CPP_REGISTER_METHOD(0x00D1A7C0, void, SubmitStaticFloat, (UberShaderAnimatorSystem * __this, Renderer * renderer, UberShaderProperty_Float__Enum property, float value, float weight));
IL2CPP_REGISTER_METHOD(0x00D1A830, void, ClearColorRequests, (UberShaderAnimatorSystem * __this, Renderer__Array * targetRenderers));
IL2CPP_REGISTER_METHOD(0x00D1A870, void, ClearVector4Requests, (UberShaderAnimatorSystem * __this, Renderer__Array * targetRenderers));
IL2CPP_REGISTER_METHOD(0x00D1A8B0, void, ClearFloatRequests, (UberShaderAnimatorSystem * __this, Renderer__Array * targetRenderers));
IL2CPP_REGISTER_METHOD(0x00D1A8F0, Vector4, GetStaticVector, (UberShaderAnimatorSystem * __this, Renderer * targetRenderer, UberShaderProperty_Vector__Enum property));
IL2CPP_REGISTER_METHOD(0x00D1A960, void, OnUpdate, (UberShaderAnimatorSystem * __this, float delta));
IL2CPP_REGISTER_METHOD(0x00D1A9A0, void, ApplyColor, (Renderer * renderer, UberShaderProperty_Color__Enum property, Color value));
IL2CPP_REGISTER_METHOD(0x00D1AB50, void, ApplyVector4, (Renderer * renderer, UberShaderProperty_Vector__Enum property, Vector4 value));
IL2CPP_REGISTER_METHOD(0x00D1AD00, void, ApplyFloat, (Renderer * renderer, UberShaderProperty_Float__Enum property, float value));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (UberShaderAnimatorSystem * __this));
}
