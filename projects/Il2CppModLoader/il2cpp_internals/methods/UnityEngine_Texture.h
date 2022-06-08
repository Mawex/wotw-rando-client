using namespace app;

namespace app::methods::UnityEngine::Texture {
IL2CPP_REGISTER_METHOD(0x02C65D20, void, __ctor, (Texture * __this));
IL2CPP_REGISTER_METHOD(0x02C65DB0, int32_t, GetDataWidth, (Texture * __this));
IL2CPP_REGISTER_METHOD(0x02C65E00, int32_t, GetDataHeight, (Texture * __this));
IL2CPP_REGISTER_METHOD(0x02C65DB0, int32_t, get_width, (Texture * __this));
IL2CPP_REGISTER_METHOD(0x02C65E50, void, set_width, (Texture * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04798C18, Texture_set_width__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C65E00, int32_t, get_height, (Texture * __this));
IL2CPP_REGISTER_METHOD(0x02C65EA0, void, set_height, (Texture * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x0471D7C8, Texture_set_height__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C65EF0, void, set_dimension, (Texture * __this, TextureDimension__Enum value));
IL2CPP_REGISTER_METHODINFO(0x04731EE0, Texture_set_dimension__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C65F40, bool, get_isReadable, (Texture * __this));
IL2CPP_REGISTER_METHOD(0x02C65F90, TextureWrapMode__Enum, get_wrapMode, (Texture * __this));
IL2CPP_REGISTER_METHOD(0x02C65FE0, void, set_wrapMode, (Texture * __this, TextureWrapMode__Enum value));
IL2CPP_REGISTER_METHOD(0x02C66040, FilterMode__Enum, get_filterMode, (Texture * __this));
IL2CPP_REGISTER_METHOD(0x02C66090, void, set_filterMode, (Texture * __this, FilterMode__Enum value));
IL2CPP_REGISTER_METHOD(0x02C660F0, int32_t, get_anisoLevel, (Texture * __this));
IL2CPP_REGISTER_METHOD(0x02C66140, void, set_anisoLevel, (Texture * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02C661A0, void, set_mipMapBias, (Texture * __this, float value));
IL2CPP_REGISTER_METHOD(0x02C66200, Vector2, get_texelSize, (Texture * __this));
IL2CPP_REGISTER_METHOD(0x02C66270, void *, GetNativeTexturePtr, (Texture * __this));
IL2CPP_REGISTER_METHOD(0x02C662C0, uint64_t, get_totalTextureMemory, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02C66310, uint64_t, get_desiredTextureMemory, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02C66360, uint64_t, get_targetTextureMemory, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x010A8370, uint64_t, get_currentTextureMemory, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02C663B0, uint64_t, get_nonStreamingTextureMemory, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02C66400, bool, ValidateFormat, (Texture * __this, RenderTextureFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x02C66560, bool, ValidateFormat, (Texture * __this, TextureFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x02C66730, bool, ValidateFormat, (Texture * __this, GraphicsFormat__Enum format, FormatUsage__Enum usage));
IL2CPP_REGISTER_METHOD(0x02C66920, UnityException *, CreateNonReadableException, (Texture * __this, Texture * t));
IL2CPP_REGISTER_METHOD(0x02C66AF0, void, get_texelSize_Injected, (Texture * __this, Vector2 * ret));
}
