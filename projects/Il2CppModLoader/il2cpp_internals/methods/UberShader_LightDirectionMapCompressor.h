using namespace app;

namespace app::methods::UberShader::LightDirectionMapCompressor {
IL2CPP_REGISTER_METHOD(0x018F95D0, Texture2D *, GenerateErrorTexture, (LightDirectionMapCompressor * __this, Texture2D * leftTex, Texture2D * rightTex, Texture2D * topTex, Texture2D * bottomTex));
IL2CPP_REGISTER_METHOD(0x018F9F10, Texture2D *, Process, (LightDirectionMapCompressor * __this, Texture2D * leftTex, Texture2D * rightTex, Texture2D * topTex, Texture2D * bottomTex, Texture2D * frontTex, Texture2D * rimTex, float downsamplingFactor));
IL2CPP_REGISTER_METHOD(0x018FAA30, int32_t, GetTextureWidth, (LightDirectionMapCompressor * __this, Texture2D * tex));
IL2CPP_REGISTER_METHOD(0x018FAB00, int32_t, GetTextureHeight, (LightDirectionMapCompressor * __this, Texture2D * tex));
IL2CPP_REGISTER_METHOD(0x018FABD0, void, __ctor, (LightDirectionMapCompressor * __this));
}
