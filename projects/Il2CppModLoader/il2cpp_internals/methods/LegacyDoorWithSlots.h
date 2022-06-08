using namespace app;

namespace app::methods::LegacyDoorWithSlots {
IL2CPP_REGISTER_METHOD(0x00A1AEA0, int32_t, get_NumberOfOrbsUsed, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00A1AF60, void, set_NumberOfOrbsUsed, (LegacyDoorWithSlots * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00A1B030, void, OnValidate, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00A1B0A0, void, Awake, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00A1B240, void, Highlight, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00A1B820, void, Unhighlight, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00A1BB70, void, RestoreOrbs, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00A1BD40, void, OnEnable, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00A1BE00, void, OnDisable, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00A1BEF0, void, Serialize, (LegacyDoorWithSlots * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00A1C130, float, get_DistanceToSein, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00A1C2E0, bool, get_OriHasTargets, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00A1C400, bool, get_SeinInRange, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00A1C670, void, FixedUpdate, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00A1D550, void, OpenDoor, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00A1D8D0, void, MakeSureItsAtEnd, (LegacyDoorWithSlots * __this, Transform * c));
IL2CPP_REGISTER_METHOD(0x00A1D9C0, void, StartStressTest, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StressTestUpdate, (LegacyDoorWithSlots * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00660200, StressTestStatus__Enum, get_StressTestStatus, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00A1D9E0, void, set_StressTestStatus, (LegacyDoorWithSlots * __this, StressTestStatus__Enum value));
IL2CPP_REGISTER_METHOD(0x00A1D9F0, bool, get_CanExecuteStressTest, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00A1DB90, String *, get_StressTestName, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00A1DC10, void, __ctor, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHOD(0x00A1DC30, void, _OpenDoor_b__43_0, (LegacyDoorWithSlots * __this));
IL2CPP_REGISTER_METHODINFO(0x047152D8, LegacyDoorWithSlots__OpenDoor_b__43_0__MethodInfo);
}
