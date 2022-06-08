using namespace app;

namespace app::methods::UnityStandardAssets::ImageEffects::ImageEffects {
IL2CPP_REGISTER_METHOD(0x02D5A430, void, RenderDistortion, (Material * material, RenderTexture * source, RenderTexture * destination, float angle, Vector2 center, Vector2 radius));
IL2CPP_REGISTER_METHOD(0x02D5A920, void, Blit, (RenderTexture * source, RenderTexture * dest));
IL2CPP_REGISTER_METHOD(0x02D5A9D0, void, BlitWithMaterial, (Material * material, RenderTexture * source, RenderTexture * dest));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ImageEffects * __this));
}
