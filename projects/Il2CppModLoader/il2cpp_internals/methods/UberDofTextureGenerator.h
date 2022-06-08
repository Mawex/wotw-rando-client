using namespace app;

namespace app::methods::UberDofTextureGenerator {
IL2CPP_REGISTER_METHOD(0x013E6B30, Material *, GetBlurMaterial, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013E7060, Texture *, CreatePreviewDofTexture, (Texture2D * originalTexture, Vector2 blurSize));
IL2CPP_REGISTER_METHOD(0x013E7220, Texture *, CreateDofTexture, (Texture2D * originalTexture, Vector2 blurSize));
IL2CPP_REGISTER_METHOD(0x013E73A0, Texture *, CreateDofTextureNearestPot, (Texture * originalTexture, Vector2 blurSize, Vector2 maxScreenSize));
IL2CPP_REGISTER_METHOD(0x013E76C0, Texture *, CreateDofTexture, (Texture * originalTexture, Vector2 blurSize, int32_t textureWidth, int32_t textureHeight));
}
