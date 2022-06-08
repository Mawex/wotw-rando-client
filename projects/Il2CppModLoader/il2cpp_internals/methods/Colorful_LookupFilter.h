#include <interception_macros.h>

namespace app::methods::Colorful::LookupFilter {
IL2CPP_REGISTER_METHOD(0x03049CF0, void, OnRenderImage, (LookupFilter * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03049EF0, String *, GetShaderName, (LookupFilter * __this));
IL2CPP_REGISTER_METHOD(0x0136E930, void, __ctor, (LookupFilter * __this));
}
