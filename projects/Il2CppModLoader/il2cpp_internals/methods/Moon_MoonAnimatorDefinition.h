#include <interception_macros.h>

namespace app::methods::Moon::MoonAnimatorDefinition {
IL2CPP_REGISTER_METHOD(0x0211B730, MoonAnimatorLayerDefinition__Array *, get_AdditionalLayers, (MoonAnimatorDefinition * __this));
IL2CPP_REGISTER_METHOD(0x0211B820, int32_t, get_AdditionalLayerCount, (MoonAnimatorDefinition * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, GameObject *, get_Rig, (MoonAnimatorDefinition * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Rig, (MoonAnimatorDefinition * __this, GameObject * value));
IL2CPP_REGISTER_METHOD(0x0211B8B0, MoonAnimatorLayerDefinition, GetAdditionalLayer, (MoonAnimatorDefinition * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0211B980, MoonAnimatorLayerDefinition, GetAdditionalLayer, (MoonAnimatorDefinition * __this, MoonAnimatorLayerName layerName));
IL2CPP_REGISTER_METHOD(0x0211BAD0, MoonAnimatorLayerDefinition, GetAdditionalLayer, (MoonAnimatorDefinition * __this, String * displayName));
IL2CPP_REGISTER_METHOD(0x0211BC70, int32_t, GetAdditionalLayerIndex, (MoonAnimatorDefinition * __this, MoonAnimatorLayerName layerName));
IL2CPP_REGISTER_METHOD(0x0211BD60, void, SetAdditionalLayerIndex, (MoonAnimatorDefinition * __this, MoonAnimatorLayerName layerName, int32_t newIndex));
IL2CPP_REGISTER_METHOD(0x0211BFD0, MoonAnimatorLayerDefinition, CreateNewAdditionalLayer, (MoonAnimatorDefinition * __this, String * displayName));
IL2CPP_REGISTER_METHOD(0x0211C180, void, RemoveAdditionalLayer, (MoonAnimatorDefinition * __this, MoonAnimatorLayerName layerName));
IL2CPP_REGISTER_METHOD(0x0211C2D0, void, RemoveAdditionalLayer, (MoonAnimatorDefinition * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0211C400, void, UpdateAdditionalLayer, (MoonAnimatorDefinition * __this, MoonAnimatorLayerDefinition layer));
IL2CPP_REGISTER_METHOD(0x0211C510, void, __ctor, (MoonAnimatorDefinition * __this));
}
