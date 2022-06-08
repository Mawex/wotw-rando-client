using namespace app;

namespace app::methods::Moon::ArtOptimization::UberShaderWrapper {
IL2CPP_REGISTER_METHOD(0x00CB3690, void, __ctor, (UberShaderWrapper * __this, UberShaderComponent * uberShader, SerializableUberShaderWrapper * serializableWrapper));
IL2CPP_REGISTER_METHOD(0x00CB3B00, void, SetFrustumState, (UberShaderWrapper * __this, int32_t index, bool state));
IL2CPP_REGISTER_METHOD(0x00CB3BC0, void, SetSample, (UberShaderWrapper * __this, int32_t index, Sample * sample));
IL2CPP_REGISTER_METHODINFO(0x0478C410, UberShaderWrapper_SetSample__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CB3CF0, void, RecalculateEnergy, (UberShaderWrapper * __this, Sample * sample));
IL2CPP_REGISTER_METHODINFO(0x0473B3E8, UberShaderWrapper_RecalculateEnergy__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CB3FD0, Sample *, GetSample, (UberShaderWrapper * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00CB40B0, void, CleanUp, (UberShaderWrapper * __this));
IL2CPP_REGISTER_METHOD(0x00CB42C0, ModifierWrapper *, GetOrCreateModifierWrapper, (UberShaderWrapper * __this, UberShaderModifier * modifier));
IL2CPP_REGISTER_METHOD(0x00CB4530, Sample *, GetMasterForModifier, (UberShaderWrapper * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00CB4600, bool, IsInsideFrustum, (UberShaderWrapper * __this, int32_t sampleIndex));
IL2CPP_REGISTER_METHOD(0x00446960, float, get_Energy, (UberShaderWrapper * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, List_1_Moon_ArtOptimization_ModifierWrapper_ *, get_Modifiers, (UberShaderWrapper * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ *, get_ModifiersMap, (UberShaderWrapper * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetLocalIdentifierInFile, (Object_1 * obj));
}
