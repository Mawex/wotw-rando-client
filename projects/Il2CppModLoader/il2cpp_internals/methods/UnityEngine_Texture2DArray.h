#include <interception_macros.h>

namespace app::methods::UnityEngine::Texture2DArray {
IL2CPP_REGISTER_METHOD(0x02C699C0, void, __ctor, (Texture2DArray * __this, int32_t width, int32_t height, int32_t depth, GraphicsFormat__Enum format, TextureCreationFlags__Enum flags));
IL2CPP_REGISTER_METHOD(0x02C69A50, void, __ctor, (Texture2DArray * __this, int32_t width, int32_t height, int32_t depth, TextureFormat__Enum textureFormat, bool mipChain, bool linear));
IL2CPP_REGISTER_METHOD(0x02C69B60, void, __ctor, (Texture2DArray * __this, int32_t width, int32_t height, int32_t depth, TextureFormat__Enum textureFormat, bool mipChain));
IL2CPP_REGISTER_METHOD(0x02C69C50, bool, get_isReadable, (Texture2DArray * __this));
IL2CPP_REGISTER_METHOD(0x02C69CA0, bool, Internal_CreateImpl, (Texture2DArray * mono, int32_t w, int32_t h, int32_t d, GraphicsFormat__Enum format, TextureCreationFlags__Enum flags));
IL2CPP_REGISTER_METHOD(0x02C69D20, void, Internal_Create, (Texture2DArray * mono, int32_t w, int32_t h, int32_t d, GraphicsFormat__Enum format, TextureCreationFlags__Enum flags));
IL2CPP_REGISTER_METHODINFO(0x04731328, Texture2DArray_Internal_Create__MethodInfo);
}
