#include <interception_macros.h>

namespace app::methods::SavePedestalController {
IL2CPP_REGISTER_METHOD(0x00917F50, MoonAnimation *, get_EffectiveTeleportingStart, (SavePedestalController * __this));
IL2CPP_REGISTER_METHOD(0x00917F70, MoonAnimation *, get_EffectiveTeleportingLoop, (SavePedestalController * __this));
IL2CPP_REGISTER_METHOD(0x00917F90, void, Nullify, (SavePedestalController * __this));
IL2CPP_REGISTER_METHODINFO(0x04791478, SavePedestalController_Nullify__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00917FA0, bool, CanOpenTeleportMenu, (SavePedestalController * __this));
IL2CPP_REGISTER_METHOD(0x00917FC0, bool, IsAnyOtherTeleporterActive, (String * ignoreIdentifier));
IL2CPP_REGISTER_METHOD(0x00918190, void, Awake, (SavePedestalController * __this));
IL2CPP_REGISTER_METHOD(0x00918480, void, OnDestroy, (SavePedestalController * __this));
IL2CPP_REGISTER_METHOD(0x00918770, void, OnGameReset, (SavePedestalController * __this));
IL2CPP_REGISTER_METHODINFO(0x04756498, SavePedestalController_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00918970, void, OnPostRestoreCheckpoint, (SavePedestalController * __this));
IL2CPP_REGISTER_METHODINFO(0x04744D10, SavePedestalController_OnPostRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00918B90, void, Show, (String * identifier));
IL2CPP_REGISTER_METHOD(0x00918FE0, void, OnClose, ());
IL2CPP_REGISTER_METHOD(0x00919160, bool, ActivateAll, ());
IL2CPP_REGISTER_METHODINFO(0x0471ECE0, SavePedestalController_ActivateAll__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00919350, bool, FastTravelEnabled, ());
IL2CPP_REGISTER_METHOD(0x00919490, bool, IsTeleporterActiveAtMapPosition, (Vector2 position));
IL2CPP_REGISTER_METHOD(0x00919780, void, Activate, (String * identifier));
IL2CPP_REGISTER_METHOD(0x009199B0, void, OnTeleporterActivationStateChanged, ());
IL2CPP_REGISTER_METHOD(0x00919B20, bool, get_IsRidingKu, ());
IL2CPP_REGISTER_METHOD(0x00919C70, bool, get_IsOnGround, ());
IL2CPP_REGISTER_METHOD(0x00917FA0, bool, CanTeleport, ());
IL2CPP_REGISTER_METHOD(0x00919DC0, SavePedestalController_CanTeleportResult__Enum, CanTeleportWithResult, ());
IL2CPP_REGISTER_METHOD(0x0091A1F0, bool, IsTeleportingFromPedestal, ());
IL2CPP_REGISTER_METHOD(0x0091A2B0, void, BeginTeleportation, (Vector2 teleportTargetWorldPosition));
IL2CPP_REGISTER_METHOD(0x0091B350, void, OnFinishedTeleportingStartAnimation, ());
IL2CPP_REGISTER_METHODINFO(0x04751F70, SavePedestalController_OnFinishedTeleportingStartAnimation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0091B660, bool, get_IsTeleporting, (SavePedestalController * __this));
IL2CPP_REGISTER_METHOD(0x0091B680, void, FixedUpdate, (SavePedestalController * __this));
IL2CPP_REGISTER_METHOD(0x0091BF70, void, CheckShouldMoveCamera, (SavePedestalController * __this));
IL2CPP_REGISTER_METHOD(0x0091C040, void, OnFadedToBlack, (SavePedestalController * __this));
IL2CPP_REGISTER_METHOD(0x0091CBE0, void, OnFinishedTeleporting, (SavePedestalController * __this));
IL2CPP_REGISTER_METHODINFO(0x04758C98, SavePedestalController_OnFinishedTeleporting__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0091D380, void, OnFinishedTeleportingFinishAnimation, (SavePedestalController * __this));
IL2CPP_REGISTER_METHODINFO(0x04706E20, SavePedestalController_OnFinishedTeleportingFinishAnimation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00689DA0, bool, get_IsSuspended, (SavePedestalController * __this));
IL2CPP_REGISTER_METHOD(0x00689DB0, void, set_IsSuspended, (SavePedestalController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0091D5A0, SuspendableMask__Enum, get_Mask, (SavePedestalController * __this));
IL2CPP_REGISTER_METHOD(0x0091D5B0, void, set_Mask, (SavePedestalController * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0091D670, void, __ctor, (SavePedestalController * __this));
}
