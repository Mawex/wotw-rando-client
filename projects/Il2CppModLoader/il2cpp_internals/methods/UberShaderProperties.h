using namespace app;

namespace app::methods::UberShaderProperties {
IL2CPP_REGISTER_METHOD(0x019170F0, int32_t, get_MainTexturePropertyID, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01917190, int32_t, get_MainColorPropertyID, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01917220, int32_t, GetTexturePropertyId, (UberShaderProperty_Texture__Enum property, UberShaderProperties_TextureSuffixType__Enum suffixType));
IL2CPP_REGISTER_METHODINFO(0x0472C4A8, UberShaderProperties_GetTexturePropertyId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01917570, int32_t, GetColorPropertyId, (UberShaderProperty_Color__Enum property));
IL2CPP_REGISTER_METHOD(0x01917640, int32_t, GetVectorPropertyId, (UberShaderProperty_Vector__Enum property));
IL2CPP_REGISTER_METHOD(0x01917710, int32_t, GetFloatPropertyId, (UberShaderProperty_Float__Enum property));
IL2CPP_REGISTER_METHOD(0x019177E0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01919E20, void, CreateTextureBindings, (UberShaderProperty_Texture__Enum property, String * bindingName));
IL2CPP_REGISTER_METHOD(0x0191A260, UberShaderProperty_Texture__Enum, GetTextureProperty, (int32_t propertyId, bool * propertyFound));
}
