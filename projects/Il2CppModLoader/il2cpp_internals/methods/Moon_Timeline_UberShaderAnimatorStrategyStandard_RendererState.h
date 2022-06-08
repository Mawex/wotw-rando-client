#include <interception_macros.h>

namespace app::methods::Moon::Timeline::UberShaderAnimatorStrategyStandard_RendererState {
IL2CPP_REGISTER_METHOD(0x00D18960, bool, get_IsValid, (UberShaderAnimatorStrategyStandard_RendererState * __this));
IL2CPP_REGISTER_METHOD(0x00D18A60, void, AddColorRequest, (UberShaderAnimatorStrategyStandard_RendererState * __this, Renderer * renderer, UberShaderProperty_Color__Enum property, Color value, float weight, bool persist));
IL2CPP_REGISTER_METHOD(0x00D18DD0, Color, GetBaseColor, (UberShaderAnimatorStrategyStandard_RendererState * __this, Renderer * renderer, UberShaderProperty_Color__Enum property));
IL2CPP_REGISTER_METHOD(0x00D19040, void, AddVector4Request, (UberShaderAnimatorStrategyStandard_RendererState * __this, Renderer * renderer, UberShaderProperty_Vector__Enum property, Vector4 value, float weight, bool persist));
IL2CPP_REGISTER_METHOD(0x00D193B0, void, AddFloatRequest, (UberShaderAnimatorStrategyStandard_RendererState * __this, Renderer * renderer, UberShaderProperty_Float__Enum property, float value, float weight, bool persist));
IL2CPP_REGISTER_METHOD(0x00D19700, void, __ctor, (UberShaderAnimatorStrategyStandard_RendererState * __this));
}
