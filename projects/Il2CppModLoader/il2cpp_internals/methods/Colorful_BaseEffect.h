#include <interception_macros.h>

namespace app::methods::Colorful::BaseEffect {
IL2CPP_REGISTER_METHOD(0x0303DB90, Shader *, get_ShaderSafe, (BaseEffect * __this));
IL2CPP_REGISTER_METHOD(0x0303DCA0, Material *, get_Material, (BaseEffect * __this));
IL2CPP_REGISTER_METHOD(0x0303DE90, void, Start, (BaseEffect * __this));
IL2CPP_REGISTER_METHOD(0x0303E0C0, void, OnDisable, (BaseEffect * __this));
IL2CPP_REGISTER_METHOD(0x0303E1A0, void, Apply, (BaseEffect * __this, Texture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRenderImage, (BaseEffect * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x0303E3A0, String *, GetShaderName, (BaseEffect * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (BaseEffect * __this));
}
