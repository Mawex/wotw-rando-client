using namespace app;

namespace app::methods::UnityEngine::Texture3D {
IL2CPP_REGISTER_METHOD(0x02C69E50, void, __ctor, (Texture3D * __this, int32_t width, int32_t height, int32_t depth, GraphicsFormat__Enum format, TextureCreationFlags__Enum flags));
IL2CPP_REGISTER_METHOD(0x02C69EE0, void, __ctor, (Texture3D * __this, int32_t width, int32_t height, int32_t depth, TextureFormat__Enum textureFormat, bool mipChain));
IL2CPP_REGISTER_METHOD(0x02C69FD0, bool, get_isReadable, (Texture3D * __this));
IL2CPP_REGISTER_METHOD(0x02C6A020, bool, Internal_CreateImpl, (Texture3D * mono, int32_t w, int32_t h, int32_t d, GraphicsFormat__Enum format, TextureCreationFlags__Enum flags));
IL2CPP_REGISTER_METHOD(0x02C6A0A0, void, Internal_Create, (Texture3D * mono, int32_t w, int32_t h, int32_t d, GraphicsFormat__Enum format, TextureCreationFlags__Enum flags));
IL2CPP_REGISTER_METHODINFO(0x0476AF08, Texture3D_Internal_Create__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C6A1D0, void, ApplyImpl, (Texture3D * __this, bool updateMipmaps, bool makeNoLongerReadable));
IL2CPP_REGISTER_METHOD(0x02C6A250, void, SetPixels, (Texture3D * __this, Color__Array * colors, int32_t miplevel));
IL2CPP_REGISTER_METHOD(0x02C6A2C0, void, SetPixels, (Texture3D * __this, Color__Array * colors));
IL2CPP_REGISTER_METHOD(0x02C6A330, void, Apply, (Texture3D * __this, bool updateMipmaps, bool makeNoLongerReadable));
IL2CPP_REGISTER_METHODINFO(0x04731428, Texture3D_Apply__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C6A440, void, Apply, (Texture3D * __this));
}
