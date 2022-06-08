#include <interception_macros.h>

namespace app::methods::UnityStandardAssets::ImageEffects::Blur {
IL2CPP_REGISTER_METHOD(0x02515B20, Material *, get_material, (Blur * __this));
IL2CPP_REGISTER_METHOD(0x02515DA0, void, OnDisable, (Blur * __this));
IL2CPP_REGISTER_METHOD(0x02515ED0, void, Start, (Blur * __this));
IL2CPP_REGISTER_METHOD(0x02516100, void, FourTapCone, (Blur * __this, RenderTexture * source, RenderTexture * dest, int32_t iteration));
IL2CPP_REGISTER_METHOD(0x025162C0, void, DownSample4x, (Blur * __this, RenderTexture * source, RenderTexture * dest));
IL2CPP_REGISTER_METHOD(0x02516460, void, OnRenderImage, (Blur * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x025168F0, void, __ctor, (Blur * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
