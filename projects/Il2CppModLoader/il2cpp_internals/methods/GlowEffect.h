#include <interception_macros.h>

namespace app::methods::GlowEffect {
IL2CPP_REGISTER_METHOD(0x024FA640, Material *, get_compositeMaterial, (GlowEffect * __this));
IL2CPP_REGISTER_METHOD(0x024FA820, Material *, get_blurMaterial, (GlowEffect * __this));
IL2CPP_REGISTER_METHOD(0x024FAA00, Material *, get_downsampleMaterial, (GlowEffect * __this));
IL2CPP_REGISTER_METHOD(0x024FABE0, void, OnDisable, (GlowEffect * __this));
IL2CPP_REGISTER_METHOD(0x024FAD70, void, Start, (GlowEffect * __this));
IL2CPP_REGISTER_METHOD(0x024FB160, void, FourTapCone, (GlowEffect * __this, RenderTexture * source, RenderTexture * dest, int32_t iteration));
IL2CPP_REGISTER_METHOD(0x024FB320, void, DownSample4x, (GlowEffect * __this, RenderTexture * source, RenderTexture * dest));
IL2CPP_REGISTER_METHOD(0x024FB440, void, OnRenderImage, (GlowEffect * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x024FB990, void, BlitGlow, (GlowEffect * __this, RenderTexture * source, RenderTexture * dest));
IL2CPP_REGISTER_METHOD(0x024FBB00, void, __ctor, (GlowEffect * __this));
}
