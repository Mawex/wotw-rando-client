using namespace app;

namespace app::methods::UnityEngine::Cubemap {
IL2CPP_REGISTER_METHOD(0x0242AE70, void, __ctor, (Cubemap * __this, int32_t width, GraphicsFormat__Enum format, TextureCreationFlags__Enum flags));
IL2CPP_REGISTER_METHOD(0x0242AF50, void, __ctor, (Cubemap * __this, int32_t width, TextureFormat__Enum textureFormat, bool mipChain, void * nativeTex));
IL2CPP_REGISTER_METHOD(0x0242B030, void, __ctor, (Cubemap * __this, int32_t width, TextureFormat__Enum textureFormat, bool mipChain));
IL2CPP_REGISTER_METHOD(0x0242B180, bool, Internal_CreateImpl, (Cubemap * mono, int32_t ext, GraphicsFormat__Enum format, TextureCreationFlags__Enum flags, void * nativeTex));
IL2CPP_REGISTER_METHOD(0x0242B200, void, Internal_Create, (Cubemap * mono, int32_t ext, GraphicsFormat__Enum format, TextureCreationFlags__Enum flags, void * nativeTex));
IL2CPP_REGISTER_METHODINFO(0x04738F48, Cubemap_Internal_Create__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0242B330, bool, get_isReadable, (Cubemap * __this));
}
