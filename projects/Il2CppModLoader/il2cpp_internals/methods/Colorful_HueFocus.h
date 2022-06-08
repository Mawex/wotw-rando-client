#include <interception_macros.h>

namespace app::methods::Colorful::HueFocus {
IL2CPP_REGISTER_METHOD(0x03047190, void, OnRenderImage, (HueFocus * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03047450, String *, GetShaderName, (HueFocus * __this));
IL2CPP_REGISTER_METHOD(0x030474D0, void, __ctor, (HueFocus * __this));
}
