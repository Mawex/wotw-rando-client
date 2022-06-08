#include <interception_macros.h>

namespace app::methods::UnityStandardAssets::CinematicEffects::RenderTextureUtility {
IL2CPP_REGISTER_METHOD(0x025088F0, RenderTexture *, GetTemporaryRenderTexture, (RenderTextureUtility * __this, int32_t width, int32_t height, int32_t depthBuffer, RenderTextureFormat__Enum format, FilterMode__Enum filterMode));
IL2CPP_REGISTER_METHOD(0x02508A80, void, ReleaseTemporaryRenderTexture, (RenderTextureUtility * __this, RenderTexture * rt));
IL2CPP_REGISTER_METHOD(0x02508C60, void, ReleaseAllTemporaryRenderTextures, (RenderTextureUtility * __this));
IL2CPP_REGISTER_METHOD(0x02508DD0, void, __ctor, (RenderTextureUtility * __this));
}
