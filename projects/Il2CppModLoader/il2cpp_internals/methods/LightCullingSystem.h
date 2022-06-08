#include <interception_macros.h>

namespace app::methods::LightCullingSystem {
IL2CPP_REGISTER_METHOD(0x0114B1F0, void, Update, (LightCullingSystem * __this, List_1_PointLightMaskModifier_ * lights, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0114B2A0, bool, FlaggedForCulling, (LightCullingSystem * __this, PointLightMaskModifier * light));
IL2CPP_REGISTER_METHOD(0x0114B420, void, Clear, (LightCullingSystem * __this));
IL2CPP_REGISTER_METHOD(0x0114B4B0, void, ApplySettings, (LightCullingSystem * __this, LightCullingSystem_LightCullingSettings settings));
IL2CPP_REGISTER_METHOD(0x0114B5F0, void, __ctor, (LightCullingSystem * __this));
}
