using namespace app;

namespace app::methods::LoadingBoostController {
IL2CPP_REGISTER_METHOD(0x00FB5980, LoadingBoostController_BoostModeLevel__Enum, get_CurrentLevel, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00FB5A20, void, set_CurrentLevel, (LoadingBoostController_BoostModeLevel__Enum value));
IL2CPP_REGISTER_METHOD(0x00FB5B00, LoadingBoostController_BoostModeSettings *, get_CurrentSettings, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00FB5BD0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00FB6670, void, OnFramerateTargetChanged, (double scaleFactor));
IL2CPP_REGISTER_METHOD(0x00FB6730, void, ApplyBoostModeSettings, (LoadingBoostController_BoostModeLevel__Enum boostLevel));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (LoadingBoostController * __this));
}
