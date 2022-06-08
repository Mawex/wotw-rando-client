using namespace app;

namespace app::methods::Moon::Timeline::TransparencyAnimatorSystemStrategy {
IL2CPP_REGISTER_METHOD(0x00D0EA50, void, Prewarm, (TransparencyAnimatorSystemStrategy * __this));
IL2CPP_REGISTER_METHOD(0x00D0EC30, void, SubmitAlphaInternal, (TransparencyAnimatorSystemStrategy * __this, Renderer * renderer, UberShaderProperty_Color__Enum property, float value, bool persist, bool autoEnableAndDisable, HandoverMode__Enum handoverMode, TransparencyMode__Enum transparencyMode));
IL2CPP_REGISTER_METHOD(0x00D0F0F0, void, ClearAllStates, (TransparencyAnimatorSystemStrategy * __this));
IL2CPP_REGISTER_METHOD(0x00D0F200, TransparencyAnimatorSystemStrategy_RendererState *, GetRenderState, (TransparencyAnimatorSystemStrategy * __this, Renderer * renderer, UberShaderProperty_Color__Enum property));
IL2CPP_REGISTER_METHOD(0x00D0F360, bool, GetHandoverAlpha, (TransparencyAnimatorSystemStrategy * __this, Renderer * renderer, UberShaderProperty_Color__Enum property, float * value));
IL2CPP_REGISTER_METHOD(0x00D0F390, void, SetSceneHidden, (TransparencyAnimatorSystemStrategy * __this, MoonGuid * sceneGuid, bool hidden));
IL2CPP_REGISTER_METHOD(0x00D0F4C0, void, UpdateSceneHiding, (TransparencyAnimatorSystemStrategy * __this));
IL2CPP_REGISTER_METHOD(0x00D0F620, int32_t, GetStateCount, (TransparencyAnimatorSystemStrategy * __this));
IL2CPP_REGISTER_METHOD(0x00D0F6B0, void, ClearRequestsAtIndex, (TransparencyAnimatorSystemStrategy * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x00D0F790, void, UpdateEvery, (TransparencyAnimatorSystemStrategy * __this, int32_t quantizationAnchor));
IL2CPP_REGISTER_METHOD(0x00D0FCF0, void, ClearState, (TransparencyAnimatorSystemStrategy * __this, Renderer * renderer, UberShaderProperty_Color__Enum property, bool forceMoonHiddenToFalse));
IL2CPP_REGISTER_METHOD(0x00D0FF30, void, InitializePropertyMap, (TransparencyAnimatorSystemStrategy * __this));
IL2CPP_REGISTER_METHOD(0x00D10460, TransparencyAnimatorSystemStrategy_RendererState *, GetStateFromPool, (TransparencyAnimatorSystemStrategy * __this));
IL2CPP_REGISTER_METHOD(0x00D105E0, void, ReturnStateToPool, (TransparencyAnimatorSystemStrategy * __this, TransparencyAnimatorSystemStrategy_RendererState * state));
IL2CPP_REGISTER_METHOD(0x00D10710, void, __ctor, (TransparencyAnimatorSystemStrategy * __this));
}
