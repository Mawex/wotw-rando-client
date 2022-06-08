using namespace app;

namespace app::methods::Moon::ArtOptimization::ColorPixelArray {
IL2CPP_REGISTER_METHOD(0x0134A020, void, __ctor, (ColorPixelArray * __this, int32_t width, int32_t height));
IL2CPP_REGISTER_METHOD(0x0134A0C0, void, __ctor, (ColorPixelArray * __this, Texture2D * texture));
IL2CPP_REGISTER_METHOD(0x0134A160, void, CreatePixels, (ColorPixelArray * __this));
IL2CPP_REGISTER_METHOD(0x0134A1F0, void, ApplyToTexture, (ColorPixelArray * __this, Texture2D * texture));
IL2CPP_REGISTER_METHOD(0x0134A260, Color, SamplePixelLinear, (ColorPixelArray * __this, Rect rect));
IL2CPP_REGISTER_METHOD(0x0134A400, Color, SamplePixelLinearUnsafe, (ColorPixelArray * __this, Rect rect));
IL2CPP_REGISTER_METHOD(0x0134A7B0, Color, GetPixelLinear, (ColorPixelArray * __this, float x, float y));
IL2CPP_REGISTER_METHOD(0x0134A8E0, Color, GetPixelLinearUnsafe, (ColorPixelArray * __this, float x, float y));
IL2CPP_REGISTER_METHOD(0x0134AE40, Color32, GetPixel, (ColorPixelArray * __this, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x0134AF50, Color32, GetPixelUnsafe, (ColorPixelArray * __this, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x0134AF90, void, SetPixelUnsafe, (ColorPixelArray * __this, int32_t x, int32_t y, Color color));
IL2CPP_REGISTER_METHOD(0x0134AF90, void, SetPixel, (ColorPixelArray * __this, int32_t x, int32_t y, Color color));
IL2CPP_REGISTER_METHOD(0x0134B010, void, RotateTexture, (Texture2D * tex));
IL2CPP_REGISTER_METHOD(0x0134B460, Color32, Multiply, (Color32 color, float multiplier));
IL2CPP_REGISTER_METHOD(0x0134B500, Color32, Add, (Color32 c1, Color32 c2));
IL2CPP_REGISTER_METHOD(0x0134B5E0, Color32, Divide, (Color32 color, float divider));
}
