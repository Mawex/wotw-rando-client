#include <interception_macros.h>

namespace app::methods::KeystoneDoorLogic {
IL2CPP_REGISTER_METHOD(0x002FB9D0, IMoonSetupAnimator *, get_MoonSetupAnimator, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6C6C0, void, set_MoonSetupAnimator, (KeystoneDoorLogic * __this, IMoonSetupAnimator * value));
IL2CPP_REGISTER_METHOD(0x00E6C790, MoonReference_1_IGenericUberState_ *, get_SharedState, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6C900, void, set_SharedState, (KeystoneDoorLogic * __this, MoonReference_1_IGenericUberState_ * value));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object_1 *, get_ObjectReference, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6CA00, void, Awake, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6CE10, MoonTimeline *, get_OpenDoorTimeline, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6CE30, MoonTimeline *, get_OnFailTimeline, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6CE50, int32_t, get_NumberOfOrbsRequired, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6CE70, int32_t, get_NumberOfOrbsUsed, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6CF30, void, set_NumberOfOrbsUsed, (KeystoneDoorLogic * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00E6D000, int32_t, get_NumberOfOrbsPlacedAtSlots, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00B11510, void, OnValidate, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6D120, void, Highlight, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6D700, void, Unhighlight, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6DA50, void, RestoreOrbs, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6DC10, void, OnEnable, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6DCD0, void, OnDisable, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6DDE0, void, Apply, (KeystoneDoorLogic * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00E6DF80, IUberState__Array *, get_AffectingUberStates, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6E020, List_1_UnityEngine_GameObject_ *, get_AllTargets, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6E1E0, void, StopTransitions, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6E210, float, get_DistanceToSein, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6E3C0, bool, get_OriHasTargets, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6E4E0, bool, get_SeinInRange, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6E750, void, FixedUpdate, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6F6B0, bool, AreOpened, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6F6C0, void, OpenDoor, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6FD00, void, MakeSureItsAtEnd, (KeystoneDoorLogic * __this, Transform * c));
IL2CPP_REGISTER_METHOD(0x00E6FDF0, void, StartStressTest, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StressTestUpdate, (KeystoneDoorLogic * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x003FFBD0, StressTestStatus__Enum, get_StressTestStatus, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6FE10, void, set_StressTestStatus, (KeystoneDoorLogic * __this, StressTestStatus__Enum value));
IL2CPP_REGISTER_METHOD(0x00E6FE20, bool, get_CanExecuteStressTest, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E6FFC0, String *, get_StressTestName, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E70040, IDesiredUberState *, GetRequirementsForTimeline, (KeystoneDoorLogic * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00E70120, void, __ctor, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E701F0, void, _OpenDoor_b__65_0, (KeystoneDoorLogic * __this));
IL2CPP_REGISTER_METHODINFO(0x04735148, KeystoneDoorLogic__OpenDoor_b__65_0__MethodInfo);
}
