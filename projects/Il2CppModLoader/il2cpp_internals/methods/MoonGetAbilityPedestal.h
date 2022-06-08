#include <interception_macros.h>

namespace app::methods::MoonGetAbilityPedestal {
IL2CPP_REGISTER_METHOD(0x00F4E2B0, bool, get_SeinInRange, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00F4E4C0, void, ChangeState, (MoonGetAbilityPedestal * __this, MoonGetAbilityPedestal_States__Enum state));
IL2CPP_REGISTER_METHOD(0x00F4E5B0, void, UpdateStates, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00F4E600, void, UpdateOutOfRange, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00F4E630, void, ExitInRangeState, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00F4E700, void, UpdateInRangeState, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00F4EAF0, void, FixedUpdate, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00F4EBD0, void, ActivatePedestal, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00F4F240, void, Awake, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00F4F5E0, void, SequenceCompleted, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHODINFO(0x0472A8D8, MoonGetAbilityPedestal_SequenceCompleted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F4F6A0, void, OnStopPlaying, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHODINFO(0x0470A358, MoonGetAbilityPedestal_OnStopPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F4F7A0, void, OnEnable, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00F4F8B0, void, OnDisable, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00F4F9C0, void, StartStressTest, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StressTestUpdate, (MoonGetAbilityPedestal * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00F4FD20, void, EndStressTest, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x0065B580, StressTestStatus__Enum, get_StressTestStatus, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00BFB9C0, void, set_StressTestStatus, (MoonGetAbilityPedestal * __this, StressTestStatus__Enum value));
IL2CPP_REGISTER_METHOD(0x00F4FEC0, bool, get_CanExecuteStressTest, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_StopMovingPlayerWhilePerforming, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00F50080, void, FinishGetAbilityStressTest, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHODINFO(0x04708B18, MoonGetAbilityPedestal_FinishGetAbilityStressTest__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F50090, String *, get_StressTestName, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00F50110, IDesiredUberState *, GetRequirementsForTimeline, (MoonGetAbilityPedestal * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00F501E0, void, Apply, (MoonGetAbilityPedestal * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00F50250, IUberState__Array *, get_AffectingUberStates, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00F502F0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00F504B0, void, __ctor, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00F50560, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x00F506B0, void, _Awake_b__27_0, (MoonGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHODINFO(0x0470E890, MoonGetAbilityPedestal__Awake_b__27_0__MethodInfo);
}
