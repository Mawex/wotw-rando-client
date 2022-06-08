#include <interception_macros.h>

namespace app::methods::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated {
IL2CPP_REGISTER_METHOD(0x02D54500, void, CreateMaterials, (DepthOfFieldDeprecated * __this));
IL2CPP_REGISTER_METHOD(0x02D54680, bool, CheckResources, (DepthOfFieldDeprecated * __this));
IL2CPP_REGISTER_METHOD(0x02D54820, void, OnDisable, (DepthOfFieldDeprecated * __this));
IL2CPP_REGISTER_METHOD(0x02D548B0, void, OnEnable, (DepthOfFieldDeprecated * __this));
IL2CPP_REGISTER_METHOD(0x02D549E0, float, FocalDistance01, (DepthOfFieldDeprecated * __this, float worldDist));
IL2CPP_REGISTER_METHOD(0x02D54E10, int32_t, GetDividerBasedOnQuality, (DepthOfFieldDeprecated * __this));
IL2CPP_REGISTER_METHOD(0x02D54E30, int32_t, GetLowResolutionDividerBasedOnQuality, (DepthOfFieldDeprecated * __this, int32_t baseDivider));
IL2CPP_REGISTER_METHOD(0x02D54E50, void, OnRenderImage, (DepthOfFieldDeprecated * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x02D55DC0, void, Blur, (DepthOfFieldDeprecated * __this, RenderTexture * from, RenderTexture * to, DepthOfFieldDeprecated_DofBlurriness__Enum iterations, int32_t blurPass, float spread));
IL2CPP_REGISTER_METHOD(0x02D56220, void, BlurFg, (DepthOfFieldDeprecated * __this, RenderTexture * from, RenderTexture * to, DepthOfFieldDeprecated_DofBlurriness__Enum iterations, int32_t blurPass, float spread));
IL2CPP_REGISTER_METHOD(0x02D56710, void, BlurHex, (DepthOfFieldDeprecated * __this, RenderTexture * from, RenderTexture * to, int32_t blurPass, float spread, RenderTexture * tmp));
IL2CPP_REGISTER_METHOD(0x02D56B30, void, Downsample, (DepthOfFieldDeprecated * __this, RenderTexture * from, RenderTexture * to));
IL2CPP_REGISTER_METHOD(0x02D56D70, void, AddBokeh, (DepthOfFieldDeprecated * __this, RenderTexture * bokehInfo, RenderTexture * tempTex, RenderTexture * finalTarget));
IL2CPP_REGISTER_METHOD(0x02D57480, void, ReleaseTextures, (DepthOfFieldDeprecated * __this));
IL2CPP_REGISTER_METHOD(0x02D57800, void, AllocateTextures, (DepthOfFieldDeprecated * __this, bool blurForeground, RenderTexture * source, int32_t divider, int32_t lowTexDivider));
IL2CPP_REGISTER_METHOD(0x02D58040, void, __ctor, (DepthOfFieldDeprecated * __this));
IL2CPP_REGISTER_METHOD(0x02D58100, void, __cctor, ());
}
