#include <interception_macros.h>

namespace app::methods::LegacyGetAbilityPedestal {
IL2CPP_REGISTER_METHOD(0x00A253A0, bool, get_SeinInRange, (LegacyGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00A255B0, void, ChangeState, (LegacyGetAbilityPedestal * __this, LegacyGetAbilityPedestal_States__Enum state));
IL2CPP_REGISTER_METHOD(0x00A25690, void, UpdateStates, (LegacyGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00A256E0, void, UpdateOutOfRange, (LegacyGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00A25710, void, ExitInRangeState, (LegacyGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00A257E0, void, UpdateInRangeState, (LegacyGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00A25BC0, void, FixedUpdate, (LegacyGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00A25CA0, void, ActivatePedestal, (LegacyGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00A26360, void, Serialize, (LegacyGetAbilityPedestal * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00A263E0, void, Awake, (LegacyGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00A26450, void, OnStopPlaying, (LegacyGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHODINFO(0x0475CF48, LegacyGetAbilityPedestal_OnStopPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A26550, void, OnEnable, (LegacyGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00A26630, void, OnDisable, (LegacyGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00A26710, void, StartStressTest, (LegacyGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StressTestUpdate, (LegacyGetAbilityPedestal * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00A26A70, void, EndStressTest, (LegacyGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x003FC380, StressTestStatus__Enum, get_StressTestStatus, (LegacyGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00A26C10, void, set_StressTestStatus, (LegacyGetAbilityPedestal * __this, StressTestStatus__Enum value));
IL2CPP_REGISTER_METHOD(0x00A26C20, bool, get_CanExecuteStressTest, (LegacyGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_StopMovingPlayerWhilePerforming, (LegacyGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00A26DE0, void, FinishGetAbilityStressTest, (LegacyGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHODINFO(0x04751480, LegacyGetAbilityPedestal_FinishGetAbilityStressTest__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A26DF0, String *, get_StressTestName, (LegacyGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00A26E70, void, __ctor, (LegacyGetAbilityPedestal * __this));
IL2CPP_REGISTER_METHOD(0x00A26E90, void, __cctor, ());
}
