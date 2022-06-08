using namespace app;

namespace app::methods::UnityEngine::Experimental::Rendering::GraphicsFormatUtility {
IL2CPP_REGISTER_METHOD(0x02434390, GraphicsFormat__Enum, GetGraphicsFormat, (TextureFormat__Enum format, bool isSRGB));
IL2CPP_REGISTER_METHOD(0x02434390, GraphicsFormat__Enum, GetGraphicsFormat_Native_TextureFormat, (TextureFormat__Enum format, bool isSRGB));
IL2CPP_REGISTER_METHOD(0x024343F0, bool, IsSRGBFormat, (GraphicsFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x02434440, RenderTextureFormat__Enum, GetRenderTextureFormat, (GraphicsFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x02434490, bool, IsCompressedTextureFormat, (TextureFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x024344E0, bool, IsCrunchFormat, (TextureFormat__Enum format));
}
