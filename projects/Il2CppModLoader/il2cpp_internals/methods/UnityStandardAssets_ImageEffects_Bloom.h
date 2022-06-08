#include <interception_macros.h>

namespace app::methods::UnityStandardAssets::ImageEffects::Bloom {
IL2CPP_REGISTER_METHOD(0x025111D0, bool, CheckResources, (Bloom * __this));
IL2CPP_REGISTER_METHOD(0x02511280, void, OnRenderImage, (Bloom * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x025128C0, void, AddTo, (Bloom * __this, float intensity_, RenderTexture * from, RenderTexture * to));
IL2CPP_REGISTER_METHOD(0x02512A90, void, BlendFlares, (Bloom * __this, RenderTexture * from, RenderTexture * to));
IL2CPP_REGISTER_METHOD(0x02512F60, void, BrightFilter, (Bloom * __this, float thresh, RenderTexture * from, RenderTexture * to));
IL2CPP_REGISTER_METHOD(0x025130F0, void, BrightFilter, (Bloom * __this, Color threshColor, RenderTexture * from, RenderTexture * to));
IL2CPP_REGISTER_METHOD(0x02513270, void, Vignette, (Bloom * __this, float amount, RenderTexture * from, RenderTexture * to));
IL2CPP_REGISTER_METHOD(0x02513570, void, __ctor, (Bloom * __this));
}
