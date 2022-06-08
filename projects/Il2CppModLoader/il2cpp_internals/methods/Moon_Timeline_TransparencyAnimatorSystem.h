#include <interception_macros.h>

namespace app::methods::Moon::Timeline::TransparencyAnimatorSystem {
IL2CPP_REGISTER_METHOD(0x00D0D240, TransparencyAnimatorSystem *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x00D0D5E0, void, OnDestroy, (TransparencyAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x00D0D7C0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00597B10, UpdateType__Enum, get_UpdateType, (TransparencyAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, TransparencyAnimatorSystemStrategy *, get_Strategy, (TransparencyAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x00D0D920, void, Awake, (TransparencyAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x00D0DC80, void, SubmitAlphaInternal, (TransparencyAnimatorSystem * __this, Renderer * renderer, UberShaderProperty_Color__Enum property, float value, bool persist, bool autoEnableAndDisable, HandoverMode__Enum handoverMode, TransparencyMode__Enum transparencyMode));
IL2CPP_REGISTER_METHOD(0x00D0DCD0, void, SubmitDynamicAlpha, (TransparencyAnimatorSystem * __this, Renderer * renderer, UberShaderProperty_Color__Enum property, float value, bool autoEnableAndDisable, HandoverMode__Enum handoverMode, TransparencyMode__Enum transparencyMode));
IL2CPP_REGISTER_METHOD(0x00D0DD20, void, SubmitStaticAlpha, (TransparencyAnimatorSystem * __this, Renderer * renderer, UberShaderProperty_Color__Enum property, float value, bool autoEnableAndDisable, HandoverMode__Enum handoverMode, TransparencyMode__Enum transparencyMode));
IL2CPP_REGISTER_METHOD(0x00D0DD70, bool, GetHandoverAlpha, (TransparencyAnimatorSystem * __this, Renderer * renderer, UberShaderProperty_Color__Enum property, float * value));
IL2CPP_REGISTER_METHOD(0x00D0DDC0, void, SetSceneHidden, (TransparencyAnimatorSystem * __this, MoonGuid * sceneGuid, bool hidden));
IL2CPP_REGISTER_METHOD(0x00D0DF00, void, OnUpdate, (TransparencyAnimatorSystem * __this, float delta));
IL2CPP_REGISTER_METHOD(0x00D0E140, void, TimeslicedPath, (TransparencyAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x00D0E340, void, RegularPath, (TransparencyAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x00D0E370, void, ClearState, (TransparencyAnimatorSystem * __this, Renderer * renderer, UberShaderProperty_Color__Enum property, bool forceMoonHiddenToFalse));
IL2CPP_REGISTER_METHOD(0x00D0E3A0, void, ApplyTransparency, (Renderer * renderer, UberShaderProperty_Color__Enum property, float value, bool enableDisable, bool * gotHidden));
IL2CPP_REGISTER_METHOD(0x00D0E830, void, __ctor, (TransparencyAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x00D0E980, void, __cctor, ());
}
