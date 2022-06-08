#include <interception_macros.h>

namespace app::methods::MoonDoorWithSlots {
IL2CPP_REGISTER_METHOD(0x00F4A720, int32_t, get_NumberOfOrbsUsed, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00F4A810, void, set_NumberOfOrbsUsed, (MoonDoorWithSlots * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00F4A910, int32_t, get_NumberOfOrbsPlacedAtSlots, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00A1B030, void, OnValidate, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00F4AA30, void, Awake, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00F4ABD0, void, Highlight, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00F4B1E0, void, Unhighlight, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00F4B540, void, RestoreOrbs, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00F4B780, void, OnEnable, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00F4B840, void, OnDisable, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00F4B9B0, void, Apply, (MoonDoorWithSlots * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00F4BB80, IUberState__Array *, get_AffectingUberStates, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00F4BC20, List_1_UnityEngine_GameObject_ *, get_AllTargets, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00F4BDE0, void, StopTransitions, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00F4BE00, float, get_DistanceToSein, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00F4BFB0, bool, get_OriHasTargets, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00F4C0D0, bool, get_SeinInRange, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00F4C340, void, FixedUpdate, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00F4D480, void, FinishThrow, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHODINFO(0x0474A608, MoonDoorWithSlots_FinishThrow__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F4D610, void, OpenDoor, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00F4DDA0, void, MakeSureItsAtEnd, (MoonDoorWithSlots * __this, Transform * c));
IL2CPP_REGISTER_METHOD(0x00F4DE90, void, StartStressTest, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StressTestUpdate, (MoonDoorWithSlots * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x0070BB00, StressTestStatus__Enum, get_StressTestStatus, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00A3F600, void, set_StressTestStatus, (MoonDoorWithSlots * __this, StressTestStatus__Enum value));
IL2CPP_REGISTER_METHOD(0x00F4DEC0, bool, get_CanExecuteStressTest, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00F4E060, String *, get_StressTestName, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00F4E0E0, IDesiredUberState *, GetRequirementsForTimeline, (MoonDoorWithSlots * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00F4E1C0, void, __ctor, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00F4E290, void, _OpenDoor_b__53_1, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHODINFO(0x04746DE0, MoonDoorWithSlots__OpenDoor_b__53_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007F3820, void, _OpenDoor_b__53_0, (MoonDoorWithSlots * __this));
IL2CPP_REGISTER_METHODINFO(0x04729268, MoonDoorWithSlots__OpenDoor_b__53_0__MethodInfo);
}
