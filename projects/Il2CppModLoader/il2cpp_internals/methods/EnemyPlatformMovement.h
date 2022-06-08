#include <interception_macros.h>

namespace app::methods::EnemyPlatformMovement {
IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_OnGroundSpeedTreshold, (EnemyPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x00C82460, Vector2, get_WorldSpeed, (EnemyPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x00C82570, void, set_WorldSpeed, (EnemyPlatformMovement * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x00C826A0, Vector2, get_LocalSpeed, (EnemyPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x00C826E0, void, set_LocalSpeed, (EnemyPlatformMovement * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x00C82720, float, get_LocalSpeedX, (EnemyPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x00C82750, void, set_LocalSpeedX, (EnemyPlatformMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x00C827B0, float, get_LocalSpeedY, (EnemyPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x00C827E0, void, set_LocalSpeedY, (EnemyPlatformMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x00C82840, void, OnPrewarm, (EnemyPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x00C829B0, bool, OnUpdate, (EnemyPlatformMovement * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ScheduleJobs, (EnemyPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CompleteUpdate, (EnemyPlatformMovement * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00C82E30, void, OnLateFrameUpdate, (EnemyPlatformMovement * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00C83050, void, OnAwake, (EnemyPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x00C833A0, void, OnDestroy, (EnemyPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x00C836C0, void, OnGroundUpdate, (EnemyPlatformMovement * __this, Vector3 localNormal, Collider * collider));
IL2CPP_REGISTER_METHODINFO(0x047566D8, EnemyPlatformMovement_OnGroundUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C838B0, void, OnCollisionWallLeftUpdate, (EnemyPlatformMovement * __this, Vector3 localNormal, Collider * collider));
IL2CPP_REGISTER_METHODINFO(0x0471DDB8, EnemyPlatformMovement_OnCollisionWallLeftUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C838D0, void, OnCollisionWallRightUpdate, (EnemyPlatformMovement * __this, Vector3 localNormal, Collider * collider));
IL2CPP_REGISTER_METHODINFO(0x047833A8, EnemyPlatformMovement_OnCollisionWallRightUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0095E530, void, __ctor, (EnemyPlatformMovement * __this));
}
