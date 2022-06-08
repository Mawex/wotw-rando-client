using namespace app;

namespace app::methods::WaterSplashControl {
IL2CPP_REGISTER_METHOD(0x00623240, float, get_DeltaTime, (WaterSplashControl * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_TimelineSamplePriority, (WaterSplashControl * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (WaterSplashControl * __this));
IL2CPP_REGISTER_METHOD(0x008E0A20, void, OnDisable, (WaterSplashControl * __this));
IL2CPP_REGISTER_METHOD(0x008E0A90, void, Update, (WaterSplashControl * __this));
IL2CPP_REGISTER_METHOD(0x008E0BA0, void, SimulateAll, (WaterSplashControl * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x008E0D40, void, OnSplash, (WaterSplashControl * __this, Vector3 pos, Vector3 dir, Vector3 speed));
IL2CPP_REGISTER_METHOD(0x008E13A0, void, OnWaterPlaneSplash, (WaterSplashControl * __this, Vector3 pos, Vector3 norm, Vector3 speed, bool isBig));
IL2CPP_REGISTER_METHOD(0x008E18C0, void, OnDrip, (WaterSplashControl * __this, Vector3 pos, Vector3 dir, Vector3 speed));
IL2CPP_REGISTER_METHOD(0x008E1D00, void, OnWave, (WaterSplashControl * __this, Vector3 pos, Vector3 speed, float power, float radius));
IL2CPP_REGISTER_METHOD(0x008E1E50, void, UberWaterSplash, (WaterSplashControl * __this, Vector3 pos, float power, float radius, bool tessImpact));
IL2CPP_REGISTER_METHOD(0x008E2100, void, TimelineSample, (WaterSplashControl * __this, float time));
IL2CPP_REGISTER_METHOD(0x008E2130, void, EnterTimelinePreview, (WaterSplashControl * __this));
IL2CPP_REGISTER_METHOD(0x005EA190, void, ExitTimelinePreview, (WaterSplashControl * __this));
IL2CPP_REGISTER_METHOD(0x008E2150, void, __ctor, (WaterSplashControl * __this));
}
