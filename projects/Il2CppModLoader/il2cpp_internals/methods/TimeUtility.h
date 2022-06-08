using namespace app;

namespace app::methods::TimeUtility {
IL2CPP_REGISTER_METHOD(0x010F2550, float, get_maximumDeltaTime, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x010F25A0, void, set_maximumDeltaTime, (float value));
IL2CPP_REGISTER_METHOD(0x010F2600, float, get_fixedDeltaTime, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x010F2650, void, set_fixedDeltaTime, (float value));
IL2CPP_REGISTER_METHOD(0x010F26B0, float, get_deltaTime, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00482A00, int32_t, get_targetFrameRate, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x010F2700, void, set_targetFrameRate, (int32_t value));
IL2CPP_REGISTER_METHOD(0x010F28D0, bool, get_TargetFrameRateNonDefault, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TimeUtility * __this));
}
