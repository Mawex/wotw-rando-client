using namespace app;

namespace app::methods::CameraPuppetController {
IL2CPP_REGISTER_METHOD(0x016A1240, float, get_DebugOverrideFOV, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x016A12E0, void, set_DebugOverrideFOV, (float value));
IL2CPP_REGISTER_METHOD(0x016A1390, void, Awake, (CameraPuppetController * __this));
IL2CPP_REGISTER_METHOD(0x016A1590, void, OnDestroy, (CameraPuppetController * __this));
IL2CPP_REGISTER_METHOD(0x016A1720, void, OnGameReset, (CameraPuppetController * __this));
IL2CPP_REGISTER_METHODINFO(0x047363C0, CameraPuppetController_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016A1740, void, Reset, (CameraPuppetController * __this));
IL2CPP_REGISTER_METHOD(0x0098F5E0, void, SetTween, (CameraPuppetController * __this, float amount));
IL2CPP_REGISTER_METHOD(0x01045ED0, void, SetWideScreenHorizontalPanStrength, (CameraPuppetController * __this, float amount));
IL2CPP_REGISTER_METHOD(0x008A34D0, void, SetWideScreenVerticalPanStrength, (CameraPuppetController * __this, float amount));
IL2CPP_REGISTER_METHOD(0x00C1ABF0, void, SetWideScreenZoomStrength, (CameraPuppetController * __this, float amount));
IL2CPP_REGISTER_METHOD(0x016A1750, void, ClearWideScreenAdjustments, (CameraPuppetController * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, SetCinematicPuppet, (CameraPuppetController * __this, Transform * cinematicPuppet));
IL2CPP_REGISTER_METHOD(0x016A1760, void, UpdatePuppet, (CameraPuppetController * __this));
IL2CPP_REGISTER_METHOD(0x016A2230, float, GetCurrentSceneFov, (CameraPuppetController * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (CameraPuppetController * __this));
IL2CPP_REGISTER_METHOD(0x016A2400, void, __cctor, (MethodInfo * method));
}
