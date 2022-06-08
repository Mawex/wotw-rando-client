using namespace app;

namespace app::methods::UnityStandardAssets::ImageEffects::BloomAndFlares {
IL2CPP_REGISTER_METHOD(0x02513620, bool, CheckResources, (BloomAndFlares * __this));
IL2CPP_REGISTER_METHOD(0x02513730, void, OnRenderImage, (BloomAndFlares * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x02514740, void, AddTo, (BloomAndFlares * __this, float intensity_, RenderTexture * from, RenderTexture * to));
IL2CPP_REGISTER_METHOD(0x025148B0, void, BlendFlares, (BloomAndFlares * __this, RenderTexture * from, RenderTexture * to));
IL2CPP_REGISTER_METHOD(0x02514D20, void, BrightFilter, (BloomAndFlares * __this, float thresh, float useAlphaAsMask, RenderTexture * from, RenderTexture * to));
IL2CPP_REGISTER_METHOD(0x02515020, void, Vignette, (BloomAndFlares * __this, float amount, RenderTexture * from, RenderTexture * to));
IL2CPP_REGISTER_METHOD(0x02515220, void, __ctor, (BloomAndFlares * __this));
}
