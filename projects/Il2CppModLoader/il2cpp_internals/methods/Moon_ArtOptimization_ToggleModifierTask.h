#include <interception_macros.h>

namespace app::methods::Moon::ArtOptimization::ToggleModifierTask {
IL2CPP_REGISTER_METHOD(0x00CB3630, void, __ctor, (ToggleModifierTask * __this, UberShaderComponent * uberShader, UberShaderModifier * modifier, bool modifierState));
IL2CPP_REGISTER_METHOD(0x00CB3640, void, Update, (ToggleModifierTask * __this));
IL2CPP_REGISTER_METHOD(0x00CB1B60, void, OnEnterContext, (ToggleModifierTask * __this, IOptimizationTask * antecedent, Object * contextData));
}
