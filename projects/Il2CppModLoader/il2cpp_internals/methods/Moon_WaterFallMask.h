#include <interception_macros.h>

namespace app::methods::Moon::WaterFallMask {
IL2CPP_REGISTER_METHOD(0x011A7910, float, get_LineWidth, (WaterFallMask * __this));
IL2CPP_REGISTER_METHOD(0x011A7930, Vector3, get_RootPosition, (WaterFallMask * __this));
IL2CPP_REGISTER_METHOD(0x011A7AC0, void, Init, (WaterFallMask * __this, LayerMask staticCollisionMask, LayerMask dynamicLayerMask));
IL2CPP_REGISTER_METHOD(0x00D2CDF0, bool, get_IsSuspended, (WaterFallMask * __this));
IL2CPP_REGISTER_METHOD(0x011A8100, void, set_IsSuspended, (WaterFallMask * __this, bool value));
IL2CPP_REGISTER_METHOD(0x011A8110, SuspendableMask__Enum, get_Mask, (WaterFallMask * __this));
IL2CPP_REGISTER_METHOD(0x011A8120, void, set_Mask, (WaterFallMask * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x011A81E0, void, OnEnable, (WaterFallMask * __this));
IL2CPP_REGISTER_METHOD(0x011A8450, void, OnDisable, (WaterFallMask * __this));
IL2CPP_REGISTER_METHOD(0x011A8680, void, Simulate, (WaterFallMask * __this, float deltaTIme, List_1_Moon_IWaterfallInteractionAgent_ * agents));
IL2CPP_REGISTER_METHOD(0x011A8790, void, PopulateRenderers, (WaterFallMask * __this));
IL2CPP_REGISTER_METHOD(0x011A8980, void, PopulateInBuilds, (WaterFallMask * __this));
IL2CPP_REGISTER_METHOD(0x011A8AE0, void, CheckForInterruptions, (WaterFallMask * __this, List_1_Moon_IWaterfallInteractionAgent_ * agents));
IL2CPP_REGISTER_METHOD(0x011AA040, bool, AgentIntersectRect, (WaterFallMask * __this, IWaterfallInteractionAgent * currentAgent, WaterFallMask_WaterLineGroup * waterLine, Vector2 * intersectionPoint, bool * tunnelThrough));
IL2CPP_REGISTER_METHOD(0x011AA2F0, void, SetShaderProperties, (WaterFallMask * __this));
IL2CPP_REGISTER_METHOD(0x011AA5D0, Vector3, GetStartPositionForLine, (WaterFallMask * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x011AA750, void, ComputeMaskTransform, (WaterFallMask * __this, int32_t idx));
IL2CPP_REGISTER_METHOD(0x011AABD0, ParticleSystem *, CreateStaticCollisionEffect, (WaterFallMask * __this, Vector2 position, Vector2 normal));
IL2CPP_REGISTER_METHOD(0x011AAED0, void, OnFrustumEnter, (WaterFallMask * __this));
IL2CPP_REGISTER_METHOD(0x011AB080, void, OnFrustumExit, (WaterFallMask * __this));
IL2CPP_REGISTER_METHOD(0x01173700, bool, get_InsideFrustum, (WaterFallMask * __this));
IL2CPP_REGISTER_METHOD(0x011AB230, Bounds, get_Bounds, (WaterFallMask * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (WaterFallMask * __this));
IL2CPP_REGISTER_METHOD(0x011AB250, void, CalculateBounds, (WaterFallMask * __this));
IL2CPP_REGISTER_METHOD(0x011AB580, void, __ctor, (WaterFallMask * __this));
}
