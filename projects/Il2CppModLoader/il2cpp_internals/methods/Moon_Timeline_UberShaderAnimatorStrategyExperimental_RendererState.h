#include <interception_macros.h>

namespace app::methods::Moon::Timeline::UberShaderAnimatorStrategyExperimental_RendererState {
IL2CPP_REGISTER_METHOD(0x00D15290, void, __ctor, (UberShaderAnimatorStrategyExperimental_RendererState * __this));
IL2CPP_REGISTER_METHOD(0x00D15660, bool, get_IsValid, (UberShaderAnimatorStrategyExperimental_RendererState * __this));
IL2CPP_REGISTER_METHOD(0x00D15720, void, AddRequest, (UberShaderAnimatorStrategyExperimental_RendererState * __this, Renderer * renderer, UberShaderProperty_Color__Enum property, Color value, float weight, bool persist));
IL2CPP_REGISTER_METHOD(0x00D159B0, void, AddRequest, (UberShaderAnimatorStrategyExperimental_RendererState * __this, Renderer * renderer, UberShaderProperty_Vector__Enum property, Vector4 value, float weight, bool persist));
IL2CPP_REGISTER_METHOD(0x00D15C40, void, AddRequest, (UberShaderAnimatorStrategyExperimental_RendererState * __this, Renderer * renderer, UberShaderProperty_Float__Enum property, float value, float weight, bool persist));
IL2CPP_REGISTER_METHOD(0x00D15EC0, void, Reset, (UberShaderAnimatorStrategyExperimental_RendererState * __this));
}
