using namespace app;

namespace app::methods::GhostIndicator {
IL2CPP_REGISTER_METHOD(0x002FD750, int32_t, get_Index, (GhostIndicator * __this));
IL2CPP_REGISTER_METHOD(0x002FD760, void, set_Index, (GhostIndicator * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00E20620, bool, get_AllowIndicator, (GhostIndicator * __this));
IL2CPP_REGISTER_METHOD(0x00E207C0, Vector3, get_TargetPositon, (GhostIndicator * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RotateIndicator, (GhostIndicator * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ScaleByDistance, (GhostIndicator * __this));
IL2CPP_REGISTER_METHOD(0x00E208B0, void, Start, (GhostIndicator * __this));
IL2CPP_REGISTER_METHOD(0x00E20C60, void, OnDestroy, (GhostIndicator * __this));
IL2CPP_REGISTER_METHOD(0x00E21060, void, GhostFinished, (GhostIndicator * __this));
IL2CPP_REGISTER_METHODINFO(0x0476C750, GhostIndicator_GhostFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00724720, void, FadeOutFinished, (GhostIndicator * __this));
IL2CPP_REGISTER_METHODINFO(0x047178E0, GhostIndicator_FadeOutFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00723FF0, void, __ctor, (GhostIndicator * __this));
}
