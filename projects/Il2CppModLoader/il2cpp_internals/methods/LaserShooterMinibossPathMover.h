#include <interception_macros.h>

namespace app::methods::LaserShooterMinibossPathMover {
IL2CPP_REGISTER_METHOD(0x00F1B330, LaserShooterMinibossPath *, get_Paths, (LaserShooterMinibossPathMover * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, LaserShooterMinibossEntity *, get_Entity, (LaserShooterMinibossPathMover * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_Entity, (LaserShooterMinibossPathMover * __this, LaserShooterMinibossEntity * value));
IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_IsAtCenter, (LaserShooterMinibossPathMover * __this));
IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_IsAtCenter, (LaserShooterMinibossPathMover * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F1B350, bool, get_IsMoving, (LaserShooterMinibossPathMover * __this));
IL2CPP_REGISTER_METHOD(0x00F1B360, bool, get_IsAtWaypoint, (LaserShooterMinibossPathMover * __this));
IL2CPP_REGISTER_METHOD(0x00F1B400, void, Initialize, (LaserShooterMinibossPathMover * __this, LaserShooterMinibossEntity * entity));
IL2CPP_REGISTER_METHOD(0x00F1B410, void, OnUpdate, (LaserShooterMinibossPathMover * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x00F1B5D0, void, MoveToCenter, (LaserShooterMinibossPathMover * __this));
IL2CPP_REGISTER_METHOD(0x00F1B6C0, void, MoveFromCenterToWaypoint, (LaserShooterMinibossPathMover * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00F1BA00, void, MoveToNextWaypoint, (LaserShooterMinibossPathMover * __this));
IL2CPP_REGISTER_METHOD(0x00F1BCD0, void, OnReturnToCenterUpdate, (LaserShooterMinibossPathMover * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x00F1C000, void, OnMoveBetweenWaypointsUpdate, (LaserShooterMinibossPathMover * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x00F1C170, void, OnMoveFromCenterToWaypointUpdate, (LaserShooterMinibossPathMover * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x00F1C550, float, GetSpeed, (LaserShooterMinibossPathMover * __this));
IL2CPP_REGISTER_METHOD(0x00F1C830, void, __ctor, (LaserShooterMinibossPathMover * __this));
}
