using namespace app;

namespace app::methods::UnityEngine::Experimental::Rendering::SupportedRenderingFeatures {
IL2CPP_REGISTER_METHOD(0x02525330, void, __ctor, (SupportedRenderingFeatures * __this));
IL2CPP_REGISTER_METHOD(0x02525360, SupportedRenderingFeatures *, get_active, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02525570, void, set_active, (SupportedRenderingFeatures * value));
IL2CPP_REGISTER_METHOD(0x02525620, SupportedRenderingFeatures_LightmapMixedBakeMode__Enum, get_defaultMixedLightingMode, (SupportedRenderingFeatures * __this));
IL2CPP_REGISTER_METHOD(0x024AD170, SupportedRenderingFeatures_LightmapMixedBakeMode__Enum, get_supportedMixedLightingModes, (SupportedRenderingFeatures * __this));
IL2CPP_REGISTER_METHOD(0x024AD180, LightmapBakeType__Enum, get_supportedLightmapBakeTypes, (SupportedRenderingFeatures * __this));
IL2CPP_REGISTER_METHOD(0x00EB1C70, LightmapsMode__Enum, get_supportedLightmapsModes, (SupportedRenderingFeatures * __this));
IL2CPP_REGISTER_METHOD(0x02525630, void, FallbackMixedLightingModeByRef, (void * fallbackModePtr));
IL2CPP_REGISTER_METHOD(0x02525810, bool, IsMixedLightingModeSupported, (MixedLightingMode__Enum mixedMode));
IL2CPP_REGISTER_METHOD(0x025258C0, void, IsMixedLightingModeSupportedByRef, (MixedLightingMode__Enum mixedMode, void * isSupportedPtr));
IL2CPP_REGISTER_METHOD(0x02525A90, bool, IsLightmapBakeTypeSupported, (LightmapBakeType__Enum bakeType));
IL2CPP_REGISTER_METHOD(0x02525C40, void, IsLightmapBakeTypeSupportedByRef, (LightmapBakeType__Enum bakeType, void * isSupportedPtr));
IL2CPP_REGISTER_METHOD(0x02525D70, void, IsLightmapsModeSupportedByRef, (LightmapsMode__Enum mode, void * isSupportedPtr));
IL2CPP_REGISTER_METHOD(0x02525E30, void, __cctor, (MethodInfo * method));
}
