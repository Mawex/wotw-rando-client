using namespace app;

namespace app::methods::Colorful::Glitch {
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsActive, (Glitch * __this));
IL2CPP_REGISTER_METHOD(0x03044A50, void, Start, (Glitch * __this));
IL2CPP_REGISTER_METHOD(0x03044BE0, void, Update, (Glitch * __this));
IL2CPP_REGISTER_METHOD(0x03044EA0, void, OnRenderImage, (Glitch * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x030450F0, void, DoInterferences, (Glitch * __this, RenderTexture * source, RenderTexture * destination, Glitch_InterferenceSettings * settings));
IL2CPP_REGISTER_METHOD(0x03045300, void, DoTearing, (Glitch * __this, RenderTexture * source, RenderTexture * destination, Glitch_TearingSettings * settings));
IL2CPP_REGISTER_METHOD(0x03045500, String *, GetShaderName, (Glitch * __this));
IL2CPP_REGISTER_METHOD(0x03045580, void, __ctor, (Glitch * __this));
}
