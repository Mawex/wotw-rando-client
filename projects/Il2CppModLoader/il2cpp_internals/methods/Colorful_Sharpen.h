#include <interception_macros.h>

namespace app::methods::Colorful::Sharpen {
IL2CPP_REGISTER_METHOD(0x03052960, bool, IRenderPostprocessor_get_enabled, (Sharpen * __this));
IL2CPP_REGISTER_METHOD(0x030529C0, void, OnRenderImage, (Sharpen * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03052C10, void, IRenderPostprocessor_OnRenderImage, (Sharpen * __this, PostProcessRenderContext * context));
IL2CPP_REGISTER_METHOD(0x03052FB0, String *, GetShaderName, (Sharpen * __this));
IL2CPP_REGISTER_METHOD(0x03053030, void, __ctor, (Sharpen * __this));
}
