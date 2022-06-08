using namespace app;

namespace app::methods::UnityEngine::ComputeShader {
IL2CPP_REGISTER_METHOD(0x0242A6B0, int32_t, FindKernel, (ComputeShader * __this, String * name));
IL2CPP_REGISTER_METHOD(0x0242A710, void, SetFloat, (ComputeShader * __this, int32_t nameID, float val));
IL2CPP_REGISTER_METHOD(0x0242A780, void, SetInt, (ComputeShader * __this, int32_t nameID, int32_t val));
IL2CPP_REGISTER_METHOD(0x0242A7F0, void, SetVector, (ComputeShader * __this, int32_t nameID, Vector4 val));
IL2CPP_REGISTER_METHOD(0x0242A860, void, SetFloatArray, (ComputeShader * __this, int32_t nameID, Single__Array * values));
IL2CPP_REGISTER_METHOD(0x0242A8D0, void, SetTexture, (ComputeShader * __this, int32_t kernelIndex, int32_t nameID, Texture * texture, int32_t mipLevel));
IL2CPP_REGISTER_METHOD(0x0242A950, void, SetBuffer, (ComputeShader * __this, int32_t kernelIndex, int32_t nameID, ComputeBuffer * buffer));
IL2CPP_REGISTER_METHOD(0x0242A9D0, void, Dispatch, (ComputeShader * __this, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ));
IL2CPP_REGISTER_METHOD(0x0242AA50, void, Internal_DispatchIndirect, (ComputeShader * __this, int32_t kernelIndex, ComputeBuffer * argsBuffer, uint32_t argsOffset));
IL2CPP_REGISTER_METHOD(0x0242A860, void, SetFloats, (ComputeShader * __this, int32_t nameID, Single__Array * values));
IL2CPP_REGISTER_METHOD(0x0242AAD0, void, SetTexture, (ComputeShader * __this, int32_t kernelIndex, int32_t nameID, Texture * texture));
IL2CPP_REGISTER_METHOD(0x0242AB60, void, DispatchIndirect, (ComputeShader * __this, int32_t kernelIndex, ComputeBuffer * argsBuffer, uint32_t argsOffset));
IL2CPP_REGISTER_METHODINFO(0x0473CFB0, ComputeShader_DispatchIndirect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0242ACC0, void, SetVector_Injected, (ComputeShader * __this, int32_t nameID, Vector4 * val));
}
