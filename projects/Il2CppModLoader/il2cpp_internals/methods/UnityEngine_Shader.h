using namespace app;

namespace app::methods::UnityEngine::Shader {
IL2CPP_REGISTER_METHOD(0x0297D2D0, void, __ctor, (Shader * __this));
IL2CPP_REGISTER_METHOD(0x0297D360, Shader *, Find, (String * name));
IL2CPP_REGISTER_METHOD(0x0297D3B0, void, set_maximumLOD, (Shader * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0297D410, bool, get_isSupported, (Shader * __this));
IL2CPP_REGISTER_METHOD(0x0297D460, int32_t, KeywordToID, (String * keyword));
IL2CPP_REGISTER_METHOD(0x0297D4B0, void, EnableKeyword, (int32_t keywordID));
IL2CPP_REGISTER_METHOD(0x0297D500, void, DisableKeyword, (int32_t keywordID));
IL2CPP_REGISTER_METHOD(0x0297D550, int32_t, PropertyToID, (String * name));
IL2CPP_REGISTER_METHOD(0x0297D5A0, void, SetGlobalFloatImpl, (int32_t name, float value));
IL2CPP_REGISTER_METHOD(0x0297D600, void, SetGlobalVectorImpl, (int32_t name, Vector4 value));
IL2CPP_REGISTER_METHOD(0x0297D660, void, SetGlobalMatrixImpl, (int32_t name, Matrix4x4 value));
IL2CPP_REGISTER_METHOD(0x0297D6C0, void, SetGlobalTextureImpl, (int32_t name, Texture * value));
IL2CPP_REGISTER_METHOD(0x0297D720, void, SetGlobalVectorArrayImpl, (int32_t name, Vector4__Array * values, int32_t count));
IL2CPP_REGISTER_METHOD(0x0297D790, void, SetGlobalVectorArray, (int32_t name, Vector4__Array * values, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0470D378, Shader_SetGlobalVectorArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0297D5A0, void, SetGlobalFloat, (int32_t nameID, float value));
IL2CPP_REGISTER_METHOD(0x0297D910, void, SetGlobalInt, (int32_t nameID, int32_t value));
IL2CPP_REGISTER_METHOD(0x0297D970, void, SetGlobalVector, (int32_t nameID, Vector4 value));
IL2CPP_REGISTER_METHOD(0x0297D9D0, void, SetGlobalMatrix, (int32_t nameID, Matrix4x4 value));
IL2CPP_REGISTER_METHOD(0x0297D6C0, void, SetGlobalTexture, (int32_t nameID, Texture * value));
IL2CPP_REGISTER_METHOD(0x0297DA50, void, SetGlobalVectorArray, (int32_t nameID, Vector4__Array * values));
IL2CPP_REGISTER_METHOD(0x0297DBA0, void, SetGlobalVectorImpl_Injected, (int32_t name, Vector4 * value));
IL2CPP_REGISTER_METHOD(0x0297DC00, void, SetGlobalMatrixImpl_Injected, (int32_t name, Matrix4x4 * value));
}
