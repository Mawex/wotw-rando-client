#include <interception_macros.h>

namespace app::methods::MoonSwarmer {
IL2CPP_REGISTER_METHOD(0x01463F60, void, __ctor, (MoonSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x00BEB430, Vector2, get_Position, (MoonSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x01065610, void, set_Position, (MoonSwarmer * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x014641C0, Vector2, get_Velocity, (MoonSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x014641E0, void, set_Velocity, (MoonSwarmer * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01464200, bool, get_IsActive, (MoonSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x005150D0, void, set_IsActive, (MoonSwarmer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00BEC050, Vector2, get_Separation, (MoonSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x01464210, void, set_Separation, (MoonSwarmer * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01464230, Vector2, get_Alignment, (MoonSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x01464250, void, set_Alignment, (MoonSwarmer * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01464270, Vector2, get_Cohesion, (MoonSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x01464290, void, set_Cohesion, (MoonSwarmer * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x014642B0, Vector2, get_Wander, (MoonSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x014642D0, void, set_Wander, (MoonSwarmer * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x014642F0, Vector2, get_ObstacleAvoidance, (MoonSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x01464310, void, set_ObstacleAvoidance, (MoonSwarmer * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01464330, Vector2, get_GlobalPOI, (MoonSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x01464350, void, set_GlobalPOI, (MoonSwarmer * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x0064D960, float, get_WanderAngle, (MoonSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x0064D970, void, set_WanderAngle, (MoonSwarmer * __this, float value));
IL2CPP_REGISTER_METHOD(0x00B32900, float, get_NoiseTimer, (MoonSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x00CE09F0, void, set_NoiseTimer, (MoonSwarmer * __this, float value));
IL2CPP_REGISTER_METHOD(0x01464370, void, UpdateSwamer, (MoonSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x014644A0, void, Flock, (MoonSwarmer * __this, List_1_MoonSwarmer_ * swarm, UberSwarmerSettings * settings, float deltaTime, ISwarmLimitRect * limit));
IL2CPP_REGISTER_METHOD(0x01464AA0, Vector2, ComputeLimit, (MoonSwarmer * __this, ISwarmLimitRect * limit));
IL2CPP_REGISTER_METHOD(0x01464EC0, Vector3, ClampToLimit, (MoonSwarmer * __this, Vector3 val, ISwarmLimitRect * limit));
IL2CPP_REGISTER_METHOD(0x01465200, Vector2, CalculateExtraVelocities, (MoonSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x01465290, void, CalculateVelocities, (MoonSwarmer * __this, List_1_MoonSwarmer_ * swarm, UberSwarmerSettings * settings));
IL2CPP_REGISTER_METHOD(0x01465AF0, Vector2, CheckObstacles, (MoonSwarmer * __this, UberSwarmerSettings * settings));
IL2CPP_REGISTER_METHOD(0x01465D40, bool, CheckObstaclesForAngle, (MoonSwarmer * __this, float angle, float distance, Vector2 * movement, UberSwarmerSettings * settings));
IL2CPP_REGISTER_METHOD(0x01466070, Vector2, Steer, (MoonSwarmer * __this, Vector2 target, bool inverse, UberSwarmerSettings * settings));
IL2CPP_REGISTER_METHOD(0x01466290, Vector2, Limit, (MoonSwarmer * __this, Vector2 v, float max));
IL2CPP_REGISTER_METHOD(0x014663A0, float, RayTest, (MoonSwarmer * __this, Vector2 direction, float maxDistance, UberSwarmerSettings * settings));
IL2CPP_REGISTER_METHOD(0x0085D750, bool, get_IsSuspended, (MoonSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x003FFE00, void, set_IsSuspended, (MoonSwarmer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00C03C70, SuspendableMask__Enum, get_Mask, (MoonSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x01466570, void, set_Mask, (MoonSwarmer * __this, SuspendableMask__Enum value));
}
