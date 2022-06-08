#include <interception_macros.h>

namespace app::methods::CC_RadialBlur {
IL2CPP_REGISTER_METHOD(0x03194F40, void, Start, (CC_RadialBlur * __this));
IL2CPP_REGISTER_METHOD(0x03194FE0, bool, CheckShader, (CC_RadialBlur * __this));
IL2CPP_REGISTER_METHOD(0x031950F0, void, OnRenderImage, (CC_RadialBlur * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03195450, Material *, get_material, (CC_RadialBlur * __this));
IL2CPP_REGISTER_METHOD(0x03195680, void, OnDisable, (CC_RadialBlur * __this));
IL2CPP_REGISTER_METHOD(0x03195760, void, __ctor, (CC_RadialBlur * __this));
}
