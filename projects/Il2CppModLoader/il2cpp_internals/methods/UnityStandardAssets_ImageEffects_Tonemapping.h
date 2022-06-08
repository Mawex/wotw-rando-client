#include <interception_macros.h>

namespace app::methods::UnityStandardAssets::ImageEffects::Tonemapping {
IL2CPP_REGISTER_METHOD(0x02D68DC0, bool, CheckResources, (Tonemapping * __this));
IL2CPP_REGISTER_METHOD(0x02D69010, float, UpdateCurve, (Tonemapping * __this));
IL2CPP_REGISTER_METHOD(0x02D69490, void, OnDisable, (Tonemapping * __this));
IL2CPP_REGISTER_METHOD(0x02D69630, bool, CreateInternalRenderTexture, (Tonemapping * __this));
IL2CPP_REGISTER_METHOD(0x02D69850, void, OnRenderImage, (Tonemapping * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x02D6A4E0, void, __ctor, (Tonemapping * __this));
}
