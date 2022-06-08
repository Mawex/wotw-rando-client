#include <interception_macros.h>

namespace app::methods::MoonAnimationAssociation {
IL2CPP_REGISTER_METHOD(0x0212F010, void, Finalize, (MoonAnimationAssociation * __this));
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsInitialized, (MoonAnimationAssociation * __this));
IL2CPP_REGISTER_METHOD(0x005150D0, void, set_IsInitialized, (MoonAnimationAssociation * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0212F0A0, void, OnAnimationPlayedOnSource, (MoonAnimationAssociation * __this, IAnimation * animation, ActiveAnimationHandle activeAnimation, int32_t priority, Func_1_Boolean_ * continueCondition));
IL2CPP_REGISTER_METHODINFO(0x0471B138, MoonAnimationAssociation_OnAnimationPlayedOnSource__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0212F260, void, OnAnimationStoppedOnSource, (MoonAnimationAssociation * __this, IAnimation * animation, ActiveAnimationHandle activeAnimation));
IL2CPP_REGISTER_METHODINFO(0x0478D3B0, MoonAnimationAssociation_OnAnimationStoppedOnSource__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0212F3F0, void, OnVectorSet, (MoonAnimationAssociation * __this, VectorAnimationParameter * parameter, Vector3 value));
IL2CPP_REGISTER_METHODINFO(0x04725980, MoonAnimationAssociation_OnVectorSet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0212F5A0, void, OnFloatSet, (MoonAnimationAssociation * __this, FloatAnimationParameter * parameter, float value));
IL2CPP_REGISTER_METHODINFO(0x04705D98, MoonAnimationAssociation_OnFloatSet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0212F690, void, Init, (MoonAnimationAssociation * __this, MoonAnimator * sourceAnimator, Action_4_Moon_MoonAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean_ * associatedAnimationReturned, MoonAnimator * matchingAnimator, Action_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle_ * associatedAnimationStopped));
IL2CPP_REGISTER_METHOD(0x0212FCF0, void, Reset, (MoonAnimationAssociation * __this));
IL2CPP_REGISTER_METHOD(0x02130090, void, CreateDictionary, (MoonAnimationAssociation * __this));
IL2CPP_REGISTER_METHOD(0x021301E0, void, SyncAnimations, (ActiveAnimationHandle source, ActiveAnimationHandle slave));
IL2CPP_REGISTER_METHOD(0x02130270, void, __ctor, (MoonAnimationAssociation * __this));
}
