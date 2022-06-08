#include <interception_macros.h>

namespace app::methods::Colorful::ChromaticAberration {
IL2CPP_REGISTER_METHOD(0x03040DA0, void, OnRenderImage, (ChromaticAberration * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03040FA0, String *, GetShaderName, (ChromaticAberration * __this));
IL2CPP_REGISTER_METHOD(0x03041020, void, __ctor, (ChromaticAberration * __this));
}
