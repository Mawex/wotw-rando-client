#include <interception_macros.h>

namespace app::methods::Colorful::GaussianBlur {
IL2CPP_REGISTER_METHOD(0x03043B80, void, OnRenderImage, (GaussianBlur * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03043E30, void, OnePassBlur, (GaussianBlur * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03044280, void, MultiPassBlur, (GaussianBlur * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x030449B0, String *, GetShaderName, (GaussianBlur * __this));
IL2CPP_REGISTER_METHOD(0x03044A30, void, __ctor, (GaussianBlur * __this));
}
