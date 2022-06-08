using namespace app;

namespace app::methods::CameraWideScreenZone {
IL2CPP_REGISTER_METHOD(0x00B21450, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00B21530, void, OnEnable, (CameraWideScreenZone * __this));
IL2CPP_REGISTER_METHOD(0x00B21600, void, OnDestroy, (CameraWideScreenZone * __this));
IL2CPP_REGISTER_METHOD(0x00B216C0, float, NormalizedMarginPenetration, (CameraWideScreenZone * __this, Vector3 worldPosition));
IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_Strength, (CameraWideScreenZone * __this));
IL2CPP_REGISTER_METHOD(0x00B21B50, void, UpdateOffset, (CameraWideScreenZone * __this, float dt, Vector3 worldPosition));
IL2CPP_REGISTER_METHOD(0x00417920, SelectableCategory__Enum, get_Category, (CameraWideScreenZone * __this));
IL2CPP_REGISTER_METHOD(0x00B21D30, void, __ctor, (CameraWideScreenZone * __this));
IL2CPP_REGISTER_METHOD(0x00B21D40, void, __cctor, (MethodInfo * method));
}
