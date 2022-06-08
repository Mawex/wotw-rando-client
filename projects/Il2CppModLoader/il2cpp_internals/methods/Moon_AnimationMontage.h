#include <interception_macros.h>

namespace app::methods::Moon::AnimationMontage {
IL2CPP_REGISTER_METHOD(0x01338060, bool, get_IsMontagePlaying, (AnimationMontage * __this));
IL2CPP_REGISTER_METHOD(0x01338110, float, get_NormalizedTime, (AnimationMontage * __this));
IL2CPP_REGISTER_METHOD(0x002FBCE0, List_1_Moon_AnimationMontage_Entry_ *, get_Entries, (AnimationMontage * __this));
IL2CPP_REGISTER_METHOD(0x01338140, IAnimationMontageEventHandler *, get_EventHandler, (AnimationMontage * __this));
IL2CPP_REGISTER_METHOD(0x01338220, void, PlayMontage, (AnimationMontage * __this, MoonAnimator * target, Action * stopPlayingAction, Dictionary_2_System_String_Moon_MoonAnimator_ * subMontagesByName));
IL2CPP_REGISTER_METHOD(0x01338C80, void, StopMontage, (AnimationMontage * __this, bool invokeStopPlayingAction));
IL2CPP_REGISTER_METHOD(0x01338FA0, void, SetAnimatorParent, (AnimationMontage * __this, MoonAnimator * parentAnimator, MoonAnimator * currentAnimator, String * path));
IL2CPP_REGISTER_METHOD(0x013393C0, void, SetSpeedInRuntime, (AnimationMontage * __this, float newSpeed));
IL2CPP_REGISTER_METHOD(0x01339580, void, UnparentAnimator, (AnimationMontage * __this, MoonAnimator * currentAnimator));
IL2CPP_REGISTER_METHOD(0x01339760, void, EnterPreview, (AnimationMontage * __this, MoonAnimator * target));
IL2CPP_REGISTER_METHOD(0x01339970, void, SubscribeToEvent, (AnimationMontage * __this, String * valueName, Action * enterEvent, Action * stayEvent, Action * exitEvent));
IL2CPP_REGISTER_METHOD(0x01339B60, void, UnsubscribeFromEvent, (AnimationMontage * __this, String * valueName, Action * enterEvent, Action * stayEvent, Action * exitEvent));
IL2CPP_REGISTER_METHOD(0x01339DC0, IMontageEventProvider *, GetEventProvider, (AnimationMontage * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01339DD0, float, GetFloatCurveValue, (AnimationMontage * __this, String * curveName, float defaultValue));
IL2CPP_REGISTER_METHOD(0x0133A030, bool, GetBool, (AnimationMontage * __this, String * curveName, bool defaultValue));
IL2CPP_REGISTER_METHOD(0x0133A080, void, OnFixedUpdate, (AnimationMontage * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0133A300, IMontageEventProvider *, ResolveEventProvider, (AnimationMontage * __this, String * valueName));
IL2CPP_REGISTER_METHOD(0x0133A550, void, OnAnimationStartedPlaying, (AnimationMontage * __this));
IL2CPP_REGISTER_METHODINFO(0x0478A1B8, AnimationMontage_OnAnimationStartedPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0133A560, void, OnAnimationStoppedPlaying, (AnimationMontage * __this));
IL2CPP_REGISTER_METHODINFO(0x04792688, AnimationMontage_OnAnimationStoppedPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0133A570, bool, ShouldAnimationContinuePlaying, (AnimationMontage * __this));
IL2CPP_REGISTER_METHODINFO(0x0472A968, AnimationMontage_ShouldAnimationContinuePlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0133A580, void, SampleEntries, (AnimationMontage * __this));
IL2CPP_REGISTER_METHOD(0x0133ADD0, MoonAnimator *, GetSubMontageAnimator, (AnimationMontage * __this, String * name));
IL2CPP_REGISTER_METHOD(0x0133AEC0, void, RemoveNullEntries, (AnimationMontage * __this));
IL2CPP_REGISTER_METHOD(0x0133B020, void, TryAddEntry, (AnimationMontage * __this, BaseAnimator * animator));
IL2CPP_REGISTER_METHOD(0x0133B280, void, OnEventStart, (AnimationMontage * __this, String * eventId));
IL2CPP_REGISTER_METHOD(0x0133B3D0, void, OnEventStay, (AnimationMontage * __this, String * eventId));
IL2CPP_REGISTER_METHOD(0x0133B520, void, OnEventEnd, (AnimationMontage * __this, String * eventId));
IL2CPP_REGISTER_METHOD(0x0133B670, void, UpdateEntries, (AnimationMontage * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (AnimationMontage * __this));
IL2CPP_REGISTER_METHOD(0x0133B890, float, get_Duration, (AnimationMontage * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (AnimationMontage * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (AnimationMontage * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (AnimationMontage * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x0133BA10, void, __ctor, (AnimationMontage * __this));
IL2CPP_REGISTER_METHOD(0x0154A4B0, void, SubscribeToValue, (AnimationMontage * __this, String * valueName, Action_1_Object_ * callback, Object * defaultValue));
IL2CPP_REGISTER_METHOD(0x0154A9A0, void, UnscubscribeFromValue, (AnimationMontage * __this, String * valueName, Action_1_Object_ * callback));
}
