using namespace app;

namespace app::methods::Swing::TextureExtensions {
IL2CPP_REGISTER_METHOD(0x0182FB70, float, ratio, (Texture * _this));
IL2CPP_REGISTER_METHOD(0x0182FBD0, Int2, size, (Texture * _this));
IL2CPP_REGISTER_METHOD(0x0182FC20, int32_t, pixelCount, (Texture2D * _texture));
IL2CPP_REGISTER_METHOD(0x0182FC70, bool, hasMipmaps, (Texture2D * _texture));
IL2CPP_REGISTER_METHOD(0x0182FCE0, float, bpp, (TextureFormat__Enum _format));
IL2CPP_REGISTER_METHOD(0x0182FD30, int32_t, vramSize, (Texture2D * _texture));
IL2CPP_REGISTER_METHOD(0x0182FF30, void, fill, (Texture2D * _this, Color _color));
IL2CPP_REGISTER_METHOD(0x01830000, void, copyTo, (Texture2D * _source, Texture2D * _dest));
}
