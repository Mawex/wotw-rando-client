using namespace app;

namespace app::methods::UnityEngine::RenderTextureDescriptor {
IL2CPP_REGISTER_METHOD(0x00218070, void, __ctor, (RenderTextureDescriptor__Boxed * __this, int32_t width, int32_t height));
IL2CPP_REGISTER_METHOD(0x002180C0, void, __ctor, (RenderTextureDescriptor__Boxed * __this, int32_t width, int32_t height, RenderTextureFormat__Enum colorFormat, int32_t depthBufferBits));
IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, get_width, (RenderTextureDescriptor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_width, (RenderTextureDescriptor__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00218130, int32_t, get_height, (RenderTextureDescriptor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00113CF0, void, set_height, (RenderTextureDescriptor__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x001DF780, int32_t, get_msaaSamples, (RenderTextureDescriptor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00127510, void, set_msaaSamples, (RenderTextureDescriptor__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00218140, int32_t, get_volumeDepth, (RenderTextureDescriptor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EC7C0, void, set_volumeDepth, (RenderTextureDescriptor__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00120160, RenderTextureFormat__Enum, get_colorFormat, (RenderTextureDescriptor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00116230, void, set_colorFormat, (RenderTextureDescriptor__Boxed * __this, RenderTextureFormat__Enum value));
IL2CPP_REGISTER_METHOD(0x00218150, int32_t, get_depthBufferBits, (RenderTextureDescriptor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00218160, void, set_depthBufferBits, (RenderTextureDescriptor__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0010FB70, void, set_dimension, (RenderTextureDescriptor__Boxed * __this, TextureDimension__Enum value));
IL2CPP_REGISTER_METHOD(0x0010FB80, void, set_shadowSamplingMode, (RenderTextureDescriptor__Boxed * __this, ShadowSamplingMode__Enum value));
IL2CPP_REGISTER_METHOD(0x001542F0, void, set_vrUsage, (RenderTextureDescriptor__Boxed * __this, VRTextureUsage__Enum value));
IL2CPP_REGISTER_METHOD(0x001CF280, void, set_memoryless, (RenderTextureDescriptor__Boxed * __this, RenderTextureMemoryless__Enum value));
IL2CPP_REGISTER_METHOD(0x00218180, void, SetOrClearRenderTextureCreationFlag, (RenderTextureDescriptor__Boxed * __this, bool value, RenderTextureCreationFlags__Enum flag));
IL2CPP_REGISTER_METHOD(0x002181A0, void, set_sRGB, (RenderTextureDescriptor__Boxed * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002181C0, bool, get_useMipMap, (RenderTextureDescriptor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002181D0, void, set_enableRandomWrite, (RenderTextureDescriptor__Boxed * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002181F0, void, set_bindMS, (RenderTextureDescriptor__Boxed * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00218210, void, set_createdFromScript, (RenderTextureDescriptor__Boxed * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00218230, void, set_useDynamicScale, (RenderTextureDescriptor__Boxed * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02972820, void, __cctor, (MethodInfo * method));
}
