using namespace app;

namespace app::methods::Moon::Timeline::ExperimentalTransparencyAnimatorSystemStrategy {
IL2CPP_REGISTER_METHOD(0x00767620, void, __ctor, (ExperimentalTransparencyAnimatorSystemStrategy * __this));
IL2CPP_REGISTER_METHOD(0x00767AF0, void, SubmitAlphaInternal, (ExperimentalTransparencyAnimatorSystemStrategy * __this, Renderer * renderer, UberShaderProperty_Color__Enum property, float value, bool persist, bool autoEnableAndDisable, HandoverMode__Enum handoverMode, TransparencyMode__Enum transparencyMode));
IL2CPP_REGISTER_METHOD(0x00768030, void, Prewarm, (ExperimentalTransparencyAnimatorSystemStrategy * __this));
IL2CPP_REGISTER_METHOD(0x00768210, void, ClearAllStates, (ExperimentalTransparencyAnimatorSystemStrategy * __this));
IL2CPP_REGISTER_METHOD(0x00768340, bool, GetHandoverAlpha, (ExperimentalTransparencyAnimatorSystemStrategy * __this, Renderer * renderer, UberShaderProperty_Color__Enum property, float * value));
IL2CPP_REGISTER_METHOD(0x007684F0, void, SetSceneHidden, (ExperimentalTransparencyAnimatorSystemStrategy * __this, MoonGuid * sceneGuid, bool hidden));
IL2CPP_REGISTER_METHOD(0x00768620, void, UpdateSceneHiding, (ExperimentalTransparencyAnimatorSystemStrategy * __this));
IL2CPP_REGISTER_METHOD(0x00768780, int32_t, GetStateCount, (ExperimentalTransparencyAnimatorSystemStrategy * __this));
IL2CPP_REGISTER_METHOD(0x00768810, void, ClearRequestsAtIndex, (ExperimentalTransparencyAnimatorSystemStrategy * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x007688F0, void, UpdateEvery, (ExperimentalTransparencyAnimatorSystemStrategy * __this, int32_t quantizationAnchor));
IL2CPP_REGISTER_METHOD(0x007692F0, void, DisbandState, (ExperimentalTransparencyAnimatorSystemStrategy * __this, ExperimentalTransparencyAnimatorSystemStrategy_RendererState * state, bool forceMoonHiddenToFalse));
IL2CPP_REGISTER_METHOD(0x00769440, void, DisbandProperty, (ExperimentalTransparencyAnimatorSystemStrategy * __this, ExperimentalTransparencyAnimatorSystemStrategy_RendererState * state, UberShaderProperty_Color__Enum property));
IL2CPP_REGISTER_METHOD(0x00769670, void, DisbandStateWithProperties, (ExperimentalTransparencyAnimatorSystemStrategy * __this, ExperimentalTransparencyAnimatorSystemStrategy_RendererState * state, bool forceMoonHiddenToFalse));
IL2CPP_REGISTER_METHOD(0x007696D0, void, ClearState, (ExperimentalTransparencyAnimatorSystemStrategy * __this, Renderer * renderer, UberShaderProperty_Color__Enum property, bool forceMoonHiddenToFalse));
IL2CPP_REGISTER_METHOD(0x00769880, void, InitializePropertyMap, (ExperimentalTransparencyAnimatorSystemStrategy * __this));
IL2CPP_REGISTER_METHOD(0x00769A30, ExperimentalTransparencyAnimatorSystemStrategy_RendererState *, GetStateFromPool, (ExperimentalTransparencyAnimatorSystemStrategy * __this));
IL2CPP_REGISTER_METHOD(0x00769BB0, void, ReturnStateToPool, (ExperimentalTransparencyAnimatorSystemStrategy * __this, ExperimentalTransparencyAnimatorSystemStrategy_RendererState * state));
}
