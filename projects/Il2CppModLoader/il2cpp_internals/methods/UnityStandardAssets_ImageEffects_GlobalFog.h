#include <interception_macros.h>

namespace app::methods::UnityStandardAssets::ImageEffects::GlobalFog {
IL2CPP_REGISTER_METHOD(0x02D589F0, bool, CheckResources, (GlobalFog * __this));
IL2CPP_REGISTER_METHOD(0x02D58A40, void, OnRenderImage, (GlobalFog * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x02D597F0, void, CustomGraphicsBlit, (RenderTexture * source, RenderTexture * dest, Material * fxMaterial, int32_t passNr));
IL2CPP_REGISTER_METHOD(0x02D59D70, void, __ctor, (GlobalFog * __this));
}
