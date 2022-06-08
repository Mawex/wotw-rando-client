#include <interception_macros.h>

namespace app::methods::NewEntityPlatformMovement {
IL2CPP_REGISTER_METHOD(0x005FA060, bool, get_IsAnticipatingLanding, (NewEntityPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005FA070, bool, get_HeadAndFeetAgainstWall, (NewEntityPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005FA090, bool, get_HeadOrFeetAgainstWall, (NewEntityPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (NewEntityPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005FA0B0, void, OnCollisionEnter, (NewEntityPlatformMovement * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x005FA0B0, void, OnCollisionStay, (NewEntityPlatformMovement * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x005FA0E0, void, MovingGroundCollision, (NewEntityPlatformMovement * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x005FA290, void, FixedUpdate, (NewEntityPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005FABE0, void, AddKickback, (NewEntityPlatformMovement * __this, Kickback * kickback, bool addLastValueToLocalSpeed, float airSustainDuration, bool instant));
IL2CPP_REGISTER_METHOD(0x005FAC40, void, AddKickback, (NewEntityPlatformMovement * __this, AnimationCurve * curve, Vector2 direction, float kickbackMultiplier, bool addLastValueToLocalSpeed, float airSustainDuration, bool instant, Transform * heightMatchTransform, bool heightMatch));
IL2CPP_REGISTER_METHOD(0x005FAF40, void, AddAirSuspension, (NewEntityPlatformMovement * __this, float duration));
IL2CPP_REGISTER_METHOD(0x005FB0B0, void, RemoveKickbacks, (NewEntityPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005FB0C0, void, RemoveAirSuspension, (NewEntityPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005FB0D0, Vector2, GetKickback, (NewEntityPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005FB640, void, CheckForAirSustain, (NewEntityPlatformMovement * __this, NewEntityPlatformMovement_KickbackEntry * * kickBack));
IL2CPP_REGISTER_METHOD(0x005FB7F0, Vector2, GetAirSuspension, (NewEntityPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005FB9A0, void, UpdateHeadAndFeetAgainstTheWall, (NewEntityPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005FBD40, void, __ctor, (NewEntityPlatformMovement * __this));
}
