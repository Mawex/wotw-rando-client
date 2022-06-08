#include <interception_macros.h>

namespace app::methods::Colorful::LoFiPalette {
IL2CPP_REGISTER_METHOD(0x03049300, void, OnRenderImage, (LoFiPalette * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x030494C0, void, RenderLut2D, (LoFiPalette * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03049910, void, RenderLut3D, (LoFiPalette * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03049CD0, void, __ctor, (LoFiPalette * __this));
}
