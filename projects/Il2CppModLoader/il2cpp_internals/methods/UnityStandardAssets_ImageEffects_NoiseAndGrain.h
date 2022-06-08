using namespace app;

namespace app::methods::UnityStandardAssets::ImageEffects::NoiseAndGrain {
IL2CPP_REGISTER_METHOD(0x02D5B2F0, bool, CheckResources, (NoiseAndGrain * __this));
IL2CPP_REGISTER_METHOD(0x02D5B370, void, OnRenderImage, (NoiseAndGrain * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x02D5C030, void, DrawNoiseQuadGrid, (RenderTexture * source, RenderTexture * dest, Material * fxMaterial, Texture2D * noise, int32_t passNr));
IL2CPP_REGISTER_METHOD(0x02D5C670, void, __ctor, (NoiseAndGrain * __this));
IL2CPP_REGISTER_METHOD(0x02D5C700, void, __cctor, (MethodInfo * method));
}
