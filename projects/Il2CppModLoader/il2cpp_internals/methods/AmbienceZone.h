#include <interception_macros.h>

namespace app::methods::AmbienceZone {
IL2CPP_REGISTER_METHOD(0x004F7280, Rect, get_EditorBounds, (AmbienceZone * __this));
IL2CPP_REGISTER_METHOD(0x004F75C0, void, set_EditorBounds, (AmbienceZone * __this, Rect value));
IL2CPP_REGISTER_METHOD(0x004F78A0, float, get_Radius, (AmbienceZone * __this));
IL2CPP_REGISTER_METHOD(0x004F78D0, void, set_Radius, (AmbienceZone * __this, float value));
IL2CPP_REGISTER_METHOD(0x004F7AA0, float, get_InnerRadius, (AmbienceZone * __this));
IL2CPP_REGISTER_METHOD(0x004F7AC0, void, set_InnerRadius, (AmbienceZone * __this, float value));
IL2CPP_REGISTER_METHOD(0x004F7AD0, void, Awake, (AmbienceZone * __this));
IL2CPP_REGISTER_METHOD(0x004F7AE0, void, OnDestroy, (AmbienceZone * __this));
IL2CPP_REGISTER_METHOD(0x004F7B20, void, Reset, (AmbienceZone * __this));
IL2CPP_REGISTER_METHODINFO(0x04728708, AmbienceZone_Reset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004F7B30, void, OnEnable, (AmbienceZone * __this));
IL2CPP_REGISTER_METHOD(0x004F7E00, void, OnDisable, (AmbienceZone * __this));
IL2CPP_REGISTER_METHOD(0x004F7FC0, void, OnListenerEnteredZone, (AmbienceZone * __this, ISoundListener * listener));
IL2CPP_REGISTER_METHOD(0x004F8070, void, OnListenerExitsZone, (AmbienceZone * __this, ISoundListener * listener, bool forceReset));
IL2CPP_REGISTER_METHOD(0x004F8120, void, OnListenerUpdateZone, (AmbienceZone * __this, ISoundListener * listener, Vector2 distances, bool hasPositionChanged));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetAdditionalTracking, (AmbienceZone * __this));
IL2CPP_REGISTER_METHOD(0x004F8440, float, CalculateRtpcValue, (AmbienceZone * __this));
IL2CPP_REGISTER_METHODINFO(0x0478DD20, AmbienceZone_CalculateRtpcValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004F85E0, void, ActivateAmbienceZone, (AmbienceZone * __this));
IL2CPP_REGISTER_METHOD(0x004F7AE0, void, DeactivateAmbienceZone, (AmbienceZone * __this));
IL2CPP_REGISTER_METHOD(0x004F8CA0, void, ExitZone, (AmbienceZone * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, SelectableCategory__Enum, get_Category, (AmbienceZone * __this));
IL2CPP_REGISTER_METHOD(0x004F8FA0, void, __ctor, (AmbienceZone * __this));
}
