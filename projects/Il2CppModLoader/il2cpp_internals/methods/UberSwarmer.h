using namespace app;

namespace app::methods::UberSwarmer {
IL2CPP_REGISTER_METHOD(0x002FB930, UberSwarm *, get_Swarm, (UberSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x0128DBE0, void, AddToSwarm, (UberSwarmer * __this, UberSwarm * swarm));
IL2CPP_REGISTER_METHOD(0x0128DD60, void, RemoveFromSwarm, (UberSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x0128DE70, void, Flock, (UberSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x0128E2C0, Vector2, CalculateExtraVelocities, (UberSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x0128E350, void, CalculateVelocities, (UberSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x0128EAF0, Vector2, CheckObstacles, (UberSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x0128ED70, bool, CheckObstaclesForAngle, (UberSwarmer * __this, float angle, float distance, Vector2 * movement));
IL2CPP_REGISTER_METHOD(0x0128F0C0, Vector2, Steer, (UberSwarmer * __this, Vector2 target, bool inverse));
IL2CPP_REGISTER_METHOD(0x0128F2E0, Vector2, Limit, (UberSwarmer * __this, Vector2 v, float max));
IL2CPP_REGISTER_METHOD(0x0128F3F0, float, RayTest, (UberSwarmer * __this, Vector2 direction, float maxDistance));
IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsSuspended, (UberSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x00585320, void, set_IsSuspended, (UberSwarmer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF2B0, SuspendableMask__Enum, get_Mask, (UberSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x0128F5C0, void, set_Mask, (UberSwarmer * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0128F670, bool, ISwarmer_get_IsActive, (UberSwarmer * __this));
IL2CPP_REGISTER_METHODINFO(0x04799030, UberSwarmer_ISwarmer_get_IsActive__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0128F6C0, void, ISwarmer_set_IsActive, (UberSwarmer * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x047270D8, UberSwarmer_ISwarmer_set_IsActive__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0128F710, void, DrawGizmos, (UberSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x01290230, void, __ctor, (UberSwarmer * __this));
}
