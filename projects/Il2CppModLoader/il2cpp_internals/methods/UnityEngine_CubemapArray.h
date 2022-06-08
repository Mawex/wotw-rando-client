#include <interception_macros.h>

namespace app::methods::UnityEngine::CubemapArray {
IL2CPP_REGISTER_METHOD(0x0242B380, void, __ctor, (CubemapArray * __this, int32_t width, int32_t cubemapCount, GraphicsFormat__Enum format, TextureCreationFlags__Enum flags));
IL2CPP_REGISTER_METHOD(0x0242B3F0, void, __ctor, (CubemapArray * __this, int32_t width, int32_t cubemapCount, TextureFormat__Enum textureFormat, bool mipChain, bool linear));
IL2CPP_REGISTER_METHOD(0x0242B4F0, void, __ctor, (CubemapArray * __this, int32_t width, int32_t cubemapCount, TextureFormat__Enum textureFormat, bool mipChain));
IL2CPP_REGISTER_METHOD(0x0242B5D0, bool, get_isReadable, (CubemapArray * __this));
IL2CPP_REGISTER_METHOD(0x0242B620, bool, Internal_CreateImpl, (CubemapArray * mono, int32_t ext, int32_t count, GraphicsFormat__Enum format, TextureCreationFlags__Enum flags));
IL2CPP_REGISTER_METHOD(0x0242B6A0, void, Internal_Create, (CubemapArray * mono, int32_t ext, int32_t count, GraphicsFormat__Enum format, TextureCreationFlags__Enum flags));
IL2CPP_REGISTER_METHODINFO(0x04734A08, CubemapArray_Internal_Create__MethodInfo);
}
