using namespace app;

namespace app::methods::Moon::Timeline::ColorAnimatorSystem {
IL2CPP_REGISTER_METHOD(0x00760690, ColorAnimatorSystem *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsRunning, (ColorAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsRunning, (ColorAnimatorSystem * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ExecutionOrder, (ColorAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x007609B0, void, Awake, (ColorAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x00760E80, void, InitializePropertyMap, (ColorAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x007612B0, void, OnDestroy, (ColorAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x00761350, void, SubmitColorInternal, (ColorAnimatorSystem * __this, Renderer * renderer, UberShaderProperty_Color__Enum property, Color value, bool persist));
IL2CPP_REGISTER_METHOD(0x007615F0, void, SubmitDynamicColor, (ColorAnimatorSystem * __this, Renderer * renderer, UberShaderProperty_Color__Enum property, Color value));
IL2CPP_REGISTER_METHOD(0x00761620, void, SubmitStaticColor, (ColorAnimatorSystem * __this, Renderer * renderer, UberShaderProperty_Color__Enum property, Color value));
IL2CPP_REGISTER_METHOD(0x00420EE0, UpdateType__Enum, get_UpdateType, (ColorAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x00761650, void, OnUpdate, (ColorAnimatorSystem * __this, float delta));
IL2CPP_REGISTER_METHOD(0x007618D0, ColorAnimatorSystem_RendererState *, GetStateFromPool, (ColorAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x00761A50, void, ReturnStateToPool, (ColorAnimatorSystem * __this, ColorAnimatorSystem_RendererState * state));
IL2CPP_REGISTER_METHOD(0x00761B40, void, ApplyColor, (Renderer * renderer, UberShaderProperty_Color__Enum property, Color value));
IL2CPP_REGISTER_METHOD(0x00761CF0, void, __ctor, (ColorAnimatorSystem * __this));
}
