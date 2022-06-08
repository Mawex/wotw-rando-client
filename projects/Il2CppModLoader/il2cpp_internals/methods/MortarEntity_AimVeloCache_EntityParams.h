using namespace app;

namespace app::methods::MortarEntity_AimVeloCache_EntityParams {
IL2CPP_REGISTER_METHOD(0x014797A0, void, __ctor, (MortarEntity_AimVeloCache_EntityParams * __this, MortarEntity * entity));
IL2CPP_REGISTER_METHOD(0x01479CA0, MortarPlaceholder *, get_Placeholder, (MortarEntity_AimVeloCache_EntityParams * __this));
IL2CPP_REGISTER_METHOD(0x0064EB90, Vector3, get_EntityPos, (MortarEntity_AimVeloCache_EntityParams * __this));
IL2CPP_REGISTER_METHOD(0x00446940, Vector3, get_EntityUp, (MortarEntity_AimVeloCache_EntityParams * __this));
IL2CPP_REGISTER_METHOD(0x01479D70, Vector2, get_AvatarLookDirection, (MortarEntity_AimVeloCache_EntityParams * __this));
IL2CPP_REGISTER_METHOD(0x01479DB0, float, get_PlaceholderFacing, (MortarEntity_AimVeloCache_EntityParams * __this));
IL2CPP_REGISTER_METHOD(0x01479EA0, MortarSpitAttackSettings *, get_SpitAttackSettings, (MortarEntity_AimVeloCache_EntityParams * __this));
IL2CPP_REGISTER_METHOD(0x01479EC0, float, get_MinSpitRange, (MortarEntity_AimVeloCache_EntityParams * __this));
IL2CPP_REGISTER_METHOD(0x01479EF0, float, get_MaxSpitRange, (MortarEntity_AimVeloCache_EntityParams * __this));
IL2CPP_REGISTER_METHOD(0x01479F40, bool, get_CanTurn, (MortarEntity_AimVeloCache_EntityParams * __this));
IL2CPP_REGISTER_METHOD(0x01479F70, float, AirTimeFromTargetDistance, (MortarEntity_AimVeloCache_EntityParams * __this, float targetDistance));
IL2CPP_REGISTER_METHOD(0x01479FD0, int32_t, CalculateSpitOriginIndexForTarget, (MortarEntity_AimVeloCache_EntityParams * __this, Vector3 target));
IL2CPP_REGISTER_METHOD(0x0147A160, Vector3, GetSpitOriginFromIndex, (MortarEntity_AimVeloCache_EntityParams * __this, int32_t spitOriginIndex));
IL2CPP_REGISTER_METHOD(0x0147A4D0, Vector3, CalculateSpitOriginForTarget, (MortarEntity_AimVeloCache_EntityParams * __this, Vector3 target));
}
