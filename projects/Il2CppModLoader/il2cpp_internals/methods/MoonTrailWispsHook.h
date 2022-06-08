using namespace app;

namespace app::methods::MoonTrailWispsHook {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldDisable, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldEnable, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldChildrenEnable, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSetMoonReady, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x014743E0, bool, get_IsSuspended, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x01474430, void, set_IsSuspended, (MoonTrailWispsHook * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00998570, SuspendableMask__Enum, get_Mask, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_Mask, (MoonTrailWispsHook * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_InsideFrustum, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x014744B0, Bounds, get_Bounds, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x01474670, void, OnValidate, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x01474710, void, Awake, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x014747E0, void, OnEnable, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x014749F0, void, OnDisable, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x01474B50, void, OnFrustumEnter, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x01474D00, void, OnFrustumExit, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x01474EB0, void, UpdateBounds, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x00417920, UpdateType__Enum, get_UpdateType, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_Position, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Position, (MoonTrailWispsHook * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x014750B0, Vector3, get_Speed, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x014750D0, void, set_Speed, (MoonTrailWispsHook * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x014750E0, void, OnUpdate, (MoonTrailWispsHook * __this, float delta));
IL2CPP_REGISTER_METHOD(0x014751D0, void, OnGoThroughPortal, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapEnter, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapExit, (MoonTrailWispsHook * __this));
IL2CPP_REGISTER_METHOD(0x014751E0, void, __ctor, (MoonTrailWispsHook * __this));
}
