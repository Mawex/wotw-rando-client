#include <interception_macros.h>

namespace app::methods::Colorful::GradientRampDynamic {
IL2CPP_REGISTER_METHOD(0x03045A90, void, Start, (GradientRampDynamic * __this));
IL2CPP_REGISTER_METHOD(0x03045AC0, void, Reset, (GradientRampDynamic * __this));
IL2CPP_REGISTER_METHOD(0x03045E00, void, UpdateGradientCache, (GradientRampDynamic * __this));
IL2CPP_REGISTER_METHOD(0x03046230, void, OnRenderImage, (GradientRampDynamic * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x030463E0, String *, GetShaderName, (GradientRampDynamic * __this));
IL2CPP_REGISTER_METHOD(0x0136E930, void, __ctor, (GradientRampDynamic * __this));
}
