using namespace app;

namespace app::methods::UnityEngine::AnimationClip {
IL2CPP_REGISTER_METHOD(0x0307B220, void, __ctor, (AnimationClip * __this));
IL2CPP_REGISTER_METHOD(0x0307B2F0, void, Internal_CreateAnimationClip, (AnimationClip * self));
IL2CPP_REGISTER_METHOD(0x0307B340, void, SampleAnimation, (AnimationClip * __this, GameObject * go, float time));
IL2CPP_REGISTER_METHOD(0x0307B400, void, SampleAnimation, (GameObject * go, AnimationClip * clip, float inTime, WrapMode__Enum wrapMode));
IL2CPP_REGISTER_METHOD(0x0307B480, float, get_length, (AnimationClip * __this));
IL2CPP_REGISTER_METHOD(0x0307B4D0, float, get_startTime, (AnimationClip * __this));
IL2CPP_REGISTER_METHOD(0x0307B520, float, get_stopTime, (AnimationClip * __this));
IL2CPP_REGISTER_METHOD(0x0307B570, float, get_frameRate, (AnimationClip * __this));
IL2CPP_REGISTER_METHOD(0x0307B5C0, void, set_frameRate, (AnimationClip * __this, float value));
IL2CPP_REGISTER_METHOD(0x0307B620, void, SetCurve, (AnimationClip * __this, String * relativePath, Type * type, String * propertyName, AnimationCurve * curve));
IL2CPP_REGISTER_METHOD(0x0307B6B0, void, EnsureQuaternionContinuity, (AnimationClip * __this));
IL2CPP_REGISTER_METHOD(0x0307B700, void, ClearCurves, (AnimationClip * __this));
IL2CPP_REGISTER_METHOD(0x0307B750, WrapMode__Enum, get_wrapMode, (AnimationClip * __this));
IL2CPP_REGISTER_METHOD(0x0307B7A0, void, set_wrapMode, (AnimationClip * __this, WrapMode__Enum value));
IL2CPP_REGISTER_METHOD(0x0307B800, Bounds, get_localBounds, (AnimationClip * __this));
IL2CPP_REGISTER_METHOD(0x0307B890, void, set_localBounds, (AnimationClip * __this, Bounds value));
IL2CPP_REGISTER_METHOD(0x0307B8F0, bool, get_legacy, (AnimationClip * __this));
IL2CPP_REGISTER_METHOD(0x0307B940, void, set_legacy, (AnimationClip * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0307B9A0, bool, get_humanMotion, (AnimationClip * __this));
IL2CPP_REGISTER_METHOD(0x0307B9F0, bool, get_empty, (AnimationClip * __this));
IL2CPP_REGISTER_METHOD(0x0307BA40, bool, get_hasGenericRootTransform, (AnimationClip * __this));
IL2CPP_REGISTER_METHOD(0x0307BA90, bool, get_hasMotionFloatCurves, (AnimationClip * __this));
IL2CPP_REGISTER_METHOD(0x0307BAE0, bool, get_hasMotionCurves, (AnimationClip * __this));
IL2CPP_REGISTER_METHOD(0x0307BB30, bool, get_hasRootCurves, (AnimationClip * __this));
IL2CPP_REGISTER_METHOD(0x0307BB80, bool, get_hasRootMotion, (AnimationClip * __this));
IL2CPP_REGISTER_METHOD(0x0307BBD0, void, AddEvent, (AnimationClip * __this, AnimationEvent * evt));
IL2CPP_REGISTER_METHODINFO(0x04706850, AnimationClip_AddEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0307BCD0, void, AddEventInternal, (AnimationClip * __this, Object * evt));
IL2CPP_REGISTER_METHOD(0x0307BD30, AnimationEvent__Array *, get_events, (AnimationClip * __this));
IL2CPP_REGISTER_METHOD(0x0307BE20, void, set_events, (AnimationClip * __this, AnimationEvent__Array * value));
IL2CPP_REGISTER_METHOD(0x0307BE20, void, SetEventsInternal, (AnimationClip * __this, Array * value));
IL2CPP_REGISTER_METHOD(0x0307BE80, Array *, GetEventsInternal, (AnimationClip * __this));
IL2CPP_REGISTER_METHOD(0x0307BED0, void, get_localBounds_Injected, (AnimationClip * __this, Bounds * ret));
IL2CPP_REGISTER_METHOD(0x0307BF30, void, set_localBounds_Injected, (AnimationClip * __this, Bounds * value));
}
