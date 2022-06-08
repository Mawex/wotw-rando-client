using namespace app;

namespace app::methods::GlobalBrightnessController {
IL2CPP_REGISTER_METHOD(0x007F5EF0, float, get_GlobalBrightness, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x007F5F90, void, set_GlobalBrightness, (float value));
IL2CPP_REGISTER_METHOD(0x007F6040, float, get_GlobalBrightnessDebugOverride, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x007F60E0, void, set_GlobalBrightnessDebugOverride, (float value));
IL2CPP_REGISTER_METHOD(0x007F6190, float, get_EffectiveGlobalBrightness, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x007F6270, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x007F6370, void, RegisterContribution, (IBrigthnessContributionAgent * agent));
IL2CPP_REGISTER_METHOD(0x007F6620, void, UnregisterContribution, (IBrigthnessContributionAgent * agent));
IL2CPP_REGISTER_METHOD(0x007F6740, float, GetAdditiveInfluence, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x007F6A90, float, GetMultiplicativeInfluence, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x007F6F60, void, OnUpdate, (float deltaTime));
IL2CPP_REGISTER_METHOD(0x007F73A0, void, ApplyBrightnessValue, (float value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StartListeningToSceneEvents, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StopListeningToSceneEvents, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (GlobalBrightnessController * __this));
IL2CPP_REGISTER_METHOD(0x007F7500, void, __cctor, (MethodInfo * method));
}
