#include <interception_macros.h>

namespace app::methods::SeinAbilityRestrictZone {
IL2CPP_REGISTER_METHOD(0x00D7FEE0, SeinAbilityRestrictZoneMask__Enum, get_Mask, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x008F7CD0, void, set_Mask, (SeinAbilityRestrictZone * __this, SeinAbilityRestrictZoneMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00D7FFC0, bool, IsInside, (AbilityType__Enum ability, SeinAbilityRestrictZoneMask__Enum restrictMask));
IL2CPP_REGISTER_METHOD(0x00D800C0, bool, IsInside, (Input_Command__Enum button, SeinAbilityRestrictZoneMask__Enum restrictMask));
IL2CPP_REGISTER_METHOD(0x00D80190, SeinAbilityRestrictZoneMask__Enum, GetCurrentRestrictMask, ());
IL2CPP_REGISTER_METHOD(0x00D80520, bool, IsInside, (SeinAbilityRestrictZoneMask__Enum restrictMask));
IL2CPP_REGISTER_METHOD(0x00D80A60, CharacterGravity *, get_Gravity, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00D80B90, CharacterLeftRightMovement *, get_LeftRightMovement, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00D80CC0, PlatformMovement *, get_PlatformMovement, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00D80DF0, void, SetSubscriptionToSeinEvents, (SeinAbilityRestrictZone * __this, bool subscribe));
IL2CPP_REGISTER_METHOD(0x00D815F0, void, SetSubscriptionToKuEvents, (SeinAbilityRestrictZone * __this, bool subscribe));
IL2CPP_REGISTER_METHOD(0x00D81DE0, void, MakeSureIsRegisteredToEvents, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00D81E20, void, ModifyGravityPlatformMovementSettings, (SeinAbilityRestrictZone * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x04794A50, SeinAbilityRestrictZone_ModifyGravityPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D82070, AnimationSwapSet *, get_CurrentSet, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00D82140, bool, get_BlockTurning, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00D822C0, void, ModifyHorizontalPlatformMovementSettings, (SeinAbilityRestrictZone * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x0470EE78, SeinAbilityRestrictZone_ModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D82A30, HorizontalPlatformMovementSettings *, AdjustForNormalizedValues, (SeinAbilityRestrictZone * __this, HorizontalPlatformMovementSettings * setting));
IL2CPP_REGISTER_METHOD(0x00D82CC0, void, ApplyOverride, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00D82E60, void, Awake, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00D83030, void, OnEnable, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00D83130, void, OnDisable, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00CB5CD0, Rect, get_Bounds, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00D83230, Vector2, GetSize, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00D83390, bool, get_ShouldRestrict, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00D834C0, bool, get_IsInsideZone, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x0049AF20, bool, IsPositionInsideZone, (SeinAbilityRestrictZone * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00D835D0, float, get_NormalizedPositionInsideZoneX, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00D836A0, float, get_NormalizedPositionInsideZoneY, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, get_VirtualTimelineTarget, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00417920, VirtualTimelineRepresentationGroup__Enum, get_VirtualTimelineGroup, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00D83770, String *, get_NameDisplayedOnClip, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00D837F0, SeinAbilityRestrictZoneMask__Enum, ButtonToRestrictZoneMask, (Input_Command__Enum button));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00D83820, void, OnAfterDeserialize, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00D83870, void, PreventFromEntering, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00D83B70, void, OnFixedUpdate, (SeinAbilityRestrictZone * __this, float delta));
IL2CPP_REGISTER_METHOD(0x00D83F30, void, __ctor, (SeinAbilityRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00D83F60, void, __cctor, ());
}
