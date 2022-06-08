using namespace app;

namespace app::methods::UnityStandardAssets::ImageEffects::PostEffectsHelper {
IL2CPP_REGISTER_METHOD(0x02D5EF20, void, OnRenderImage, (PostEffectsHelper * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x02D5EFC0, void, DrawLowLevelPlaneAlignedWithCamera, (float dist, RenderTexture * source, RenderTexture * dest, Material * material, Camera * cameraForProjectionMatrix));
IL2CPP_REGISTER_METHOD(0x02D5F570, void, DrawBorder, (RenderTexture * dest, Material * material));
IL2CPP_REGISTER_METHOD(0x02D5FA80, void, DrawLowLevelQuad, (float x1, float x2, float y1, float y2, RenderTexture * source, RenderTexture * dest, Material * material));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (PostEffectsHelper * __this));
}
