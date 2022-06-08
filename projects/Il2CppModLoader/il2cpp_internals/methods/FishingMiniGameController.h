using namespace app;

namespace app::methods::FishingMiniGameController {
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsSuspended, (FishingMiniGameController * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsSuspended, (FishingMiniGameController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00998570, SuspendableMask__Enum, get_Mask, (FishingMiniGameController * __this));
IL2CPP_REGISTER_METHOD(0x0126D160, void, set_Mask, (FishingMiniGameController * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0126D210, SeinCharacter *, get_Sein, (FishingMiniGameController * __this));
IL2CPP_REGISTER_METHOD(0x0126D2A0, Input_InputButtonProcessor *, get_Button, (FishingMiniGameController * __this));
IL2CPP_REGISTER_METHOD(0x0126D340, bool, get_IsCancelButtonPressed, (FishingMiniGameController * __this));
IL2CPP_REGISTER_METHOD(0x0126D340, bool, get_IsStartButtonPressed, (FishingMiniGameController * __this));
IL2CPP_REGISTER_METHOD(0x0126D370, bool, get_IsInRadius, (FishingMiniGameController * __this));
IL2CPP_REGISTER_METHOD(0x0126D570, bool, get_ShouldStart, (FishingMiniGameController * __this));
IL2CPP_REGISTER_METHOD(0x0126D630, VerletStructure_VerletJoint *, get_BaitJoint, (FishingMiniGameController * __this));
IL2CPP_REGISTER_METHOD(0x0126D6A0, void, Awake, (FishingMiniGameController * __this));
IL2CPP_REGISTER_METHOD(0x0126DAE0, void, OnEnable, (FishingMiniGameController * __this));
IL2CPP_REGISTER_METHOD(0x0126DCB0, void, OnDisable, (FishingMiniGameController * __this));
IL2CPP_REGISTER_METHOD(0x0126DE70, void, OnRestoreCheckpoint, (FishingMiniGameController * __this));
IL2CPP_REGISTER_METHODINFO(0x0475A718, FishingMiniGameController_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0126DEB0, void, MakeSureFishAreSpawnedHack, (FishingMiniGameController * __this));
IL2CPP_REGISTER_METHOD(0x0126E050, void, FixedUpdate, (FishingMiniGameController * __this));
IL2CPP_REGISTER_METHOD(0x0126E0D0, void, __ctor, (FishingMiniGameController * __this));
}
