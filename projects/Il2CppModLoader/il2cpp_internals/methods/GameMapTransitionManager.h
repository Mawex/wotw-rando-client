using namespace app;

namespace app::methods::GameMapTransitionManager {
IL2CPP_REGISTER_METHOD(0x006A40E0, bool, get_IsTransitioning, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x006A4110, bool, get_InWorldMapMode, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x006A41C0, bool, get_InAreaMapMode, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x006A41D0, void, Awake, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x006A4480, void, OnDestroy, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_ZoomTime, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x006A45B0, float, get_ZoomDelta, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x006A45C0, bool, get_IsZoomingIn, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x006A45E0, bool, get_IsZoomingOut, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x006A4600, bool, get_CanZoomOutToWorldMap, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x006A4610, void, set_CanZoomOutToWorldMap, (GameMapTransitionManager * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_ForbidWorldMapUntilClose, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_ForbidWorldMapUntilClose, (GameMapTransitionManager * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006A4640, void, ZoomToWorldMap, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x006A46B0, void, ZoomToAreaMap, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x006A4710, void, OnDisable, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x006A4760, void, Update, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x006A4890, void, Advance, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x006A5050, void, GoToWorldMap, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x006A5270, void, GoToAreaMap, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x006A5450, void, FadeAreaMapIn, (GameMapTransitionManager * __this, float delay));
IL2CPP_REGISTER_METHOD(0x006A56E0, void, FadeAreaMapOut, (GameMapTransitionManager * __this, float delay));
IL2CPP_REGISTER_METHOD(0x006A5A50, void, GoToAreaMapInstantly, (GameMapTransitionManager * __this, bool setMenuAudioState));
IL2CPP_REGISTER_METHOD(0x006A5B40, void, ResetToAreaMap, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x006A5CC0, void, DisableAndEnableNextFrame, (GameMapTransitionManager * __this, GameObject * target));
IL2CPP_REGISTER_METHOD(0x006A5DC0, void, EnableAndDisableNextFrame, (GameMapTransitionManager * __this, GameObject * target));
IL2CPP_REGISTER_METHOD(0x006A5EC0, void, SetAreaMapZoom, (GameMapTransitionManager * __this, float zoom));
IL2CPP_REGISTER_METHOD(0x006A5ED0, void, HandleLocationAndZoomRetention, (GameMapTransitionManager * __this, bool retainZoomAndLocation));
IL2CPP_REGISTER_METHOD(0x002FA000, void, GoToWorldMapInstantly, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x006A6000, void, __ctor, (GameMapTransitionManager * __this));
IL2CPP_REGISTER_METHOD(0x006A6310, void, __cctor, (MethodInfo * method));
}
