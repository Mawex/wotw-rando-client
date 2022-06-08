#include <interception_macros.h>

namespace app::methods::SeinDrill {
IL2CPP_REGISTER_METHOD(0x00417920, ComboMoveType__Enum, get_ComboMoveType, (SeinDrill * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinDrill * __this));
IL2CPP_REGISTER_METHOD(0x006E4240, CharacterGravity *, get_Gravity, (SeinDrill * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, CharacterPlatformMovement *, get_PlatformMovement, (SeinDrill * __this));
IL2CPP_REGISTER_METHOD(0x00805AA0, int32_t, get_GroundMask, ());
IL2CPP_REGISTER_METHOD(0x00AC9A70, SeinDrillPuppet *, get_Puppet, (SeinDrill * __this));
IL2CPP_REGISTER_METHOD(0x003F8E90, void, Update, (SeinDrill * __this));
IL2CPP_REGISTER_METHOD(0x00AC9B30, void, Start, (SeinDrill * __this));
IL2CPP_REGISTER_METHOD(0x00AC9CD0, void, OnDestroy, (SeinDrill * __this));
IL2CPP_REGISTER_METHOD(0x00AC9FA0, void, OnSetReferenceToSein, (SeinDrill * __this));
IL2CPP_REGISTER_METHOD(0x00ACA270, bool, IsDrilling, (SeinDrill * __this));
IL2CPP_REGISTER_METHODINFO(0x0476C850, SeinDrill_IsDrilling__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ACA280, void, ModifyGravityPlatformMovementSettings, (SeinDrill * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x0473F0F8, SeinDrill_ModifyGravityPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ACA2B0, float, AdaptSpeed, (SeinDrill * __this, float speed));
IL2CPP_REGISTER_METHOD(0x00ACA480, bool, IsInsideDashTimeWindow, (SeinDrill * __this));
IL2CPP_REGISTER_METHOD(0x00ACA610, DrillZone *, RayCastTest, (SeinDrill * __this));
IL2CPP_REGISTER_METHOD(0x00ACA940, bool, IsCorrectDrillAngle, (SeinDrill * __this, Vector2 velocity, Vector2 normal));
IL2CPP_REGISTER_METHOD(0x00ACAA40, bool, TryDrillEntity, (SeinDrill * __this, Vector2 velocity, Vector2 normal, GameObject * entity));
IL2CPP_REGISTER_METHOD(0x00ACAB90, void, StartDrill, (SeinDrill * __this, DrillZone * drillZone));
IL2CPP_REGISTER_METHOD(0x00ACAE50, void, StopDrill, (SeinDrill * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnProcessRootMotion, (SeinDrill * __this, Vector3 rootVelocity));
IL2CPP_REGISTER_METHODINFO(0x0471D5F8, SeinDrill_OnProcessRootMotion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTakeDamage, (SeinDrill * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x047479C8, SeinDrill_OnTakeDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ACAF00, void, OnDrillZoneReleaseEvent, (SeinDrill * __this));
IL2CPP_REGISTER_METHODINFO(0x04757840, SeinDrill_OnDrillZoneReleaseEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ACB100, void, __ctor, (SeinDrill * __this));
}
