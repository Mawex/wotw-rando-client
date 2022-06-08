#include <interception_macros.h>

namespace app::methods::Moon::ArtOptimization::ModifierWrapper {
IL2CPP_REGISTER_METHOD(0x0134CF00, void, __ctor, (ModifierWrapper * __this, int32_t id, UberShaderModifier * modifier, SerializableUberSaderModifierWrapper * serializableModifierWrapper));
IL2CPP_REGISTER_METHOD(0x0134D0C0, void, SetSample, (ModifierWrapper * __this, int32_t index, Sample * sample));
IL2CPP_REGISTER_METHODINFO(0x04718088, ModifierWrapper_SetSample__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0134D1F0, void, RecalculateEnergy, (ModifierWrapper * __this, Sample * sample));
IL2CPP_REGISTER_METHODINFO(0x04707D70, ModifierWrapper_RecalculateEnergy__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0134D4D0, Sample *, GetSample, (ModifierWrapper * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0134D5B0, void, CleanUp, (ModifierWrapper * __this));
IL2CPP_REGISTER_METHOD(0x00C3DD50, float, get_Energy, (ModifierWrapper * __this));
}
