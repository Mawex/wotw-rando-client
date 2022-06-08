using namespace app;

namespace app::methods::CameraOffsetZone {
IL2CPP_REGISTER_METHOD(0x003FF790, bool, get_IsPerformingZoomOutAndDisable, (CameraOffsetZone * __this));
IL2CPP_REGISTER_METHOD(0x003FF790, bool, get_AutoZoomOutAndDisable, (CameraOffsetZone * __this));
IL2CPP_REGISTER_METHOD(0x0169BED0, void, FitRoomBound, (CameraOffsetZone * __this));
IL2CPP_REGISTER_METHOD(0x0169C1F0, float, get_ZoomOnEnableCurveLength, (CameraOffsetZone * __this));
IL2CPP_REGISTER_METHOD(0x0169C2F0, float, get_DampingTimeNormalized, (CameraOffsetZone * __this));
IL2CPP_REGISTER_METHOD(0x0169C3D0, float, GetOnEanbleDampingValue, (CameraOffsetZone * __this));
IL2CPP_REGISTER_METHOD(0x0169C440, void, ResetDampingTimer, (CameraOffsetZone * __this));
IL2CPP_REGISTER_METHOD(0x00F01340, void, StopZoomingOut, (CameraOffsetZone * __this));
IL2CPP_REGISTER_METHOD(0x0169C450, void, OnEnable, (CameraOffsetZone * __this));
IL2CPP_REGISTER_METHOD(0x0169C4F0, void, OnDisable, (CameraOffsetZone * __this));
IL2CPP_REGISTER_METHOD(0x0169C640, void, DisableAfterZoomOut, (CameraOffsetZone * __this));
IL2CPP_REGISTER_METHOD(0x0169C680, Bounds, GetOuterBounds, (CameraOffsetZone * __this));
IL2CPP_REGISTER_METHOD(0x015DD640, Bounds, GetInnerBounds, (CameraOffsetZone * __this));
IL2CPP_REGISTER_METHOD(0x00417920, SelectableCategory__Enum, get_Category, (CameraOffsetZone * __this));
IL2CPP_REGISTER_METHOD(0x0169C990, void, Update, (CameraOffsetZone * __this));
IL2CPP_REGISTER_METHOD(0x0169CA20, float, NormalizedMarginPenetration, (CameraOffsetZone * __this, Vector3 worldPosition));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (CameraOffsetZone * __this));
}
