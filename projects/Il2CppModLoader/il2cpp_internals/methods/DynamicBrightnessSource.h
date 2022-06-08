#include <interception_macros.h>

namespace app::methods::DynamicBrightnessSource {
IL2CPP_REGISTER_METHOD(0x00BE8F10, Vector2, get_CameraPosition, (DynamicBrightnessSource * __this));
IL2CPP_REGISTER_METHOD(0x00BE90D0, bool, get_IsWithinRadius, (DynamicBrightnessSource * __this));
IL2CPP_REGISTER_METHOD(0x00BE90F0, float, get_RadiusDiff, (DynamicBrightnessSource * __this));
IL2CPP_REGISTER_METHOD(0x00BE9110, float, get_OutterRadius, (DynamicBrightnessSource * __this));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_BrightnessInfluceAdditive, (DynamicBrightnessSource * __this));
IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_BrightnessInfluceMultiplicative, (DynamicBrightnessSource * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ContributeToAdditive, (DynamicBrightnessSource * __this));
IL2CPP_REGISTER_METHOD(0x00BE9120, bool, get_ContributeToMultiplicative, (DynamicBrightnessSource * __this));
IL2CPP_REGISTER_METHOD(0x00BE9150, Bounds, get_Bounds, (DynamicBrightnessSource * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (DynamicBrightnessSource * __this));
IL2CPP_REGISTER_METHOD(0x008556D0, GlobalBrightnessController_BrigthnessContributionOrder__Enum, get_BrightnessInfluceOrder, (DynamicBrightnessSource * __this));
IL2CPP_REGISTER_METHOD(0x00BE9170, float, get_BrightnessInfluceWeight, (DynamicBrightnessSource * __this));
IL2CPP_REGISTER_METHOD(0x00BE9190, bool, get_InsideFrustum, (DynamicBrightnessSource * __this));
IL2CPP_REGISTER_METHOD(0x00724140, void, set_InsideFrustum, (DynamicBrightnessSource * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00BE91A0, void, OnEnable, (DynamicBrightnessSource * __this));
IL2CPP_REGISTER_METHOD(0x00BE9220, void, Awake, (DynamicBrightnessSource * __this));
IL2CPP_REGISTER_METHOD(0x00BE92E0, void, OnDestroy, (DynamicBrightnessSource * __this));
IL2CPP_REGISTER_METHOD(0x00BE9440, void, UpdateBrigthnessInfluence, (DynamicBrightnessSource * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00BE9760, void, OnFrustumEnter, (DynamicBrightnessSource * __this));
IL2CPP_REGISTER_METHOD(0x00778590, void, OnFrustumExit, (DynamicBrightnessSource * __this));
IL2CPP_REGISTER_METHOD(0x00BE9770, void, UpdateBounds, (DynamicBrightnessSource * __this));
IL2CPP_REGISTER_METHOD(0x00BE9930, void, OnDrawGizmosSelected, (DynamicBrightnessSource * __this));
IL2CPP_REGISTER_METHOD(0x00BE9B50, void, __ctor, (DynamicBrightnessSource * __this));
}
