using namespace app;

namespace app::methods::UnityEngine::Texture2D {
IL2CPP_REGISTER_METHOD(0x02C66B50, void, __ctor, (Texture2D * __this, int32_t width, int32_t height, GraphicsFormat__Enum format, TextureCreationFlags__Enum flags, void * nativeTex));
IL2CPP_REGISTER_METHOD(0x02C66BD0, void, __ctor, (Texture2D * __this, int32_t width, int32_t height, GraphicsFormat__Enum format, TextureCreationFlags__Enum flags));
IL2CPP_REGISTER_METHOD(0x02C66CC0, void, __ctor, (Texture2D * __this, int32_t width, int32_t height, TextureFormat__Enum textureFormat, bool mipChain, bool linear, void * nativeTex));
IL2CPP_REGISTER_METHOD(0x02C66DD0, void, __ctor, (Texture2D * __this, int32_t width, int32_t height, TextureFormat__Enum textureFormat, bool mipChain, bool linear));
IL2CPP_REGISTER_METHOD(0x02C66EA0, void, __ctor, (Texture2D * __this, int32_t width, int32_t height, TextureFormat__Enum textureFormat, bool mipChain));
IL2CPP_REGISTER_METHOD(0x02C66F70, void, __ctor, (Texture2D * __this, int32_t width, int32_t height));
IL2CPP_REGISTER_METHOD(0x02C67090, int32_t, get_mipmapCount, (Texture2D * __this));
IL2CPP_REGISTER_METHOD(0x02C670E0, TextureFormat__Enum, get_format, (Texture2D * __this));
IL2CPP_REGISTER_METHOD(0x02C67130, Texture2D *, get_whiteTexture, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x018F9090, Texture2D *, get_blackTexture, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02C67180, void, Compress, (Texture2D * __this, bool highQuality));
IL2CPP_REGISTER_METHOD(0x02C671E0, bool, Internal_CreateImpl, (Texture2D * mono, int32_t w, int32_t h, GraphicsFormat__Enum format, TextureCreationFlags__Enum flags, void * nativeTex));
IL2CPP_REGISTER_METHOD(0x02C67260, void, Internal_Create, (Texture2D * mono, int32_t w, int32_t h, GraphicsFormat__Enum format, TextureCreationFlags__Enum flags, void * nativeTex));
IL2CPP_REGISTER_METHODINFO(0x04773920, Texture2D_Internal_Create__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C67390, bool, get_isReadable, (Texture2D * __this));
IL2CPP_REGISTER_METHOD(0x02C673E0, void, ApplyImpl, (Texture2D * __this, bool updateMipmaps, bool makeNoLongerReadable));
IL2CPP_REGISTER_METHOD(0x02C67460, bool, ResizeImpl, (Texture2D * __this, int32_t width, int32_t height));
IL2CPP_REGISTER_METHOD(0x02C674D0, void, SetPixelImpl, (Texture2D * __this, int32_t image, int32_t x, int32_t y, Color color));
IL2CPP_REGISTER_METHOD(0x02C67560, Color, GetPixelImpl, (Texture2D * __this, int32_t image, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x02C67610, Color, GetPixelBilinearImpl, (Texture2D * __this, int32_t image, float x, float y));
IL2CPP_REGISTER_METHOD(0x02C676C0, bool, ResizeWithFormatImpl, (Texture2D * __this, int32_t width, int32_t height, TextureFormat__Enum format, bool hasMipMap));
IL2CPP_REGISTER_METHOD(0x02C67750, void, ReadPixelsImpl, (Texture2D * __this, Rect source, int32_t destX, int32_t destY, bool recalculateMipMaps));
IL2CPP_REGISTER_METHOD(0x02C677E0, void, SetPixelsImpl, (Texture2D * __this, int32_t x, int32_t y, int32_t w, int32_t h, Color__Array * pixel, int32_t miplevel, int32_t frame));
IL2CPP_REGISTER_METHOD(0x02C67860, bool, LoadRawTextureDataImpl, (Texture2D * __this, void * data, int32_t size));
IL2CPP_REGISTER_METHOD(0x02C678D0, bool, LoadRawTextureDataImplArray, (Texture2D * __this, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x02C67930, void *, GetWritableImageData, (Texture2D * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x02C67990, int64_t, GetRawImageDataSize, (Texture2D * __this));
IL2CPP_REGISTER_METHOD(0x02C679E0, void, GenerateAtlasImpl, (Vector2__Array * sizes, int32_t padding, int32_t atlasSize, Rect__Array * rect));
IL2CPP_REGISTER_METHOD(0x02C67A60, bool, get_streamingMipmaps, (Texture2D * __this));
IL2CPP_REGISTER_METHOD(0x02C67AB0, int32_t, get_streamingMipmapsPriority, (Texture2D * __this));
IL2CPP_REGISTER_METHOD(0x02C67B00, int32_t, get_requestedMipmapLevel, (Texture2D * __this));
IL2CPP_REGISTER_METHOD(0x02C67B50, void, set_requestedMipmapLevel, (Texture2D * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02C67BB0, int32_t, get_desiredMipmapLevel, (Texture2D * __this));
IL2CPP_REGISTER_METHOD(0x02C67C00, int32_t, get_loadingMipmapLevel, (Texture2D * __this));
IL2CPP_REGISTER_METHOD(0x02C67C50, int32_t, get_loadedMipmapLevel, (Texture2D * __this));
IL2CPP_REGISTER_METHOD(0x02C67CA0, void, ClearRequestedMipmapLevel, (Texture2D * __this));
IL2CPP_REGISTER_METHOD(0x02C67CF0, bool, IsRequestedMipmapLevelLoaded, (Texture2D * __this));
IL2CPP_REGISTER_METHOD(0x02C67D40, void, UpdateExternalTexture, (Texture2D * __this, void * nativeTex));
IL2CPP_REGISTER_METHOD(0x02C67DA0, void, SetAllPixels32, (Texture2D * __this, Color32__Array * colors, int32_t miplevel));
IL2CPP_REGISTER_METHOD(0x02C67E10, void, SetBlockOfPixels32, (Texture2D * __this, int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, Color32__Array * colors, int32_t miplevel));
IL2CPP_REGISTER_METHOD(0x02C67E90, Byte__Array *, GetRawTextureData, (Texture2D * __this));
IL2CPP_REGISTER_METHOD(0x02C67EE0, Color__Array *, GetPixels, (Texture2D * __this, int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, int32_t miplevel));
IL2CPP_REGISTER_METHOD(0x02C67F60, Color__Array *, GetPixels, (Texture2D * __this, int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight));
IL2CPP_REGISTER_METHOD(0x02C67FF0, Color32__Array *, GetPixels32, (Texture2D * __this, int32_t miplevel));
IL2CPP_REGISTER_METHOD(0x02C68050, Color32__Array *, GetPixels32, (Texture2D * __this));
IL2CPP_REGISTER_METHOD(0x02C680B0, Rect__Array *, PackTextures, (Texture2D * __this, Texture2D__Array * textures, int32_t padding, int32_t maximumAtlasSize, bool makeNoLongerReadable));
IL2CPP_REGISTER_METHOD(0x02C68140, Rect__Array *, PackTextures, (Texture2D * __this, Texture2D__Array * textures, int32_t padding, int32_t maximumAtlasSize));
IL2CPP_REGISTER_METHOD(0x02C681D0, Rect__Array *, PackTextures, (Texture2D * __this, Texture2D__Array * textures, int32_t padding));
IL2CPP_REGISTER_METHOD(0x02C68250, Texture2D *, CreateExternalTexture, (int32_t width, int32_t height, TextureFormat__Enum format, bool mipChain, bool linear, void * nativeTex));
IL2CPP_REGISTER_METHODINFO(0x047221B0, Texture2D_CreateExternalTexture__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C68430, void, SetPixel, (Texture2D * __this, int32_t x, int32_t y, Color color));
IL2CPP_REGISTER_METHODINFO(0x04766620, Texture2D_SetPixel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C68560, void, SetPixels, (Texture2D * __this, int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, Color__Array * colors, int32_t miplevel));
IL2CPP_REGISTER_METHODINFO(0x04774D98, Texture2D_SetPixels__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C68690, void, SetPixels, (Texture2D * __this, int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, Color__Array * colors));
IL2CPP_REGISTER_METHOD(0x02C686C0, void, SetPixels, (Texture2D * __this, Color__Array * colors, int32_t miplevel));
IL2CPP_REGISTER_METHOD(0x02C68770, void, SetPixels, (Texture2D * __this, Color__Array * colors));
IL2CPP_REGISTER_METHOD(0x02C687E0, Color, GetPixel, (Texture2D * __this, int32_t x, int32_t y));
IL2CPP_REGISTER_METHODINFO(0x04724B00, Texture2D_GetPixel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C68920, Color, GetPixelBilinear, (Texture2D * __this, float x, float y));
IL2CPP_REGISTER_METHODINFO(0x0475E510, Texture2D_GetPixelBilinear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C68A60, void, LoadRawTextureData, (Texture2D * __this, void * data, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x04708850, Texture2D_LoadRawTextureData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C68BE0, void, LoadRawTextureData, (Texture2D * __this, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x04705458, Texture2D_LoadRawTextureData_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C68D50, void, Apply, (Texture2D * __this, bool updateMipmaps, bool makeNoLongerReadable));
IL2CPP_REGISTER_METHODINFO(0x04764018, Texture2D_Apply__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C68E60, void, Apply, (Texture2D * __this, bool updateMipmaps));
IL2CPP_REGISTER_METHOD(0x02C68E70, void, Apply, (Texture2D * __this));
IL2CPP_REGISTER_METHOD(0x02C68E80, bool, Resize, (Texture2D * __this, int32_t width, int32_t height));
IL2CPP_REGISTER_METHODINFO(0x04711890, Texture2D_Resize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C68F90, bool, Resize, (Texture2D * __this, int32_t width, int32_t height, TextureFormat__Enum format, bool hasMipMap));
IL2CPP_REGISTER_METHODINFO(0x04758A50, Texture2D_Resize_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C690C0, void, ReadPixels, (Texture2D * __this, Rect source, int32_t destX, int32_t destY, bool recalculateMipMaps));
IL2CPP_REGISTER_METHODINFO(0x047209D8, Texture2D_ReadPixels__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C691F0, void, ReadPixels, (Texture2D * __this, Rect source, int32_t destX, int32_t destY));
IL2CPP_REGISTER_METHOD(0x02C69220, bool, GenerateAtlas, (Vector2__Array * sizes, int32_t padding, int32_t atlasSize, List_1_UnityEngine_Rect_ * results));
IL2CPP_REGISTER_METHODINFO(0x0475FE78, Texture2D_GenerateAtlas__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C67DA0, void, SetPixels32, (Texture2D * __this, Color32__Array * colors, int32_t miplevel));
IL2CPP_REGISTER_METHOD(0x02C69520, void, SetPixels32, (Texture2D * __this, Color32__Array * colors));
IL2CPP_REGISTER_METHOD(0x02C67E10, void, SetPixels32, (Texture2D * __this, int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, Color32__Array * colors, int32_t miplevel));
IL2CPP_REGISTER_METHOD(0x02C69590, void, SetPixels32, (Texture2D * __this, int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, Color32__Array * colors));
IL2CPP_REGISTER_METHOD(0x02C69620, Color__Array *, GetPixels, (Texture2D * __this, int32_t miplevel));
IL2CPP_REGISTER_METHOD(0x02C696F0, Color__Array *, GetPixels, (Texture2D * __this));
IL2CPP_REGISTER_METHOD(0x02C697B0, void, SetPixelImpl_Injected, (Texture2D * __this, int32_t image, int32_t x, int32_t y, Color * color));
IL2CPP_REGISTER_METHOD(0x02C69830, void, GetPixelImpl_Injected, (Texture2D * __this, int32_t image, int32_t x, int32_t y, Color * ret));
IL2CPP_REGISTER_METHOD(0x02C698B0, void, GetPixelBilinearImpl_Injected, (Texture2D * __this, int32_t image, float x, float y, Color * ret));
IL2CPP_REGISTER_METHOD(0x02C69930, void, ReadPixelsImpl_Injected, (Texture2D * __this, Rect * source, int32_t destX, int32_t destY, bool recalculateMipMaps));
}
