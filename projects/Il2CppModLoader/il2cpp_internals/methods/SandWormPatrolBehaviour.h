#include <interception_macros.h>

namespace app::methods::SandWormPatrolBehaviour {
IL2CPP_REGISTER_METHOD(0x00413160, bool, get_IsWaterWorm, (SandWormPatrolBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00413170, void, set_IsWaterWorm, (SandWormPatrolBehaviour * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00C1FE20, void, OnEntityInitialized, (SandWormPatrolBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C1FEF0, void, OnEnter, (SandWormPatrolBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C20380, BehaviourStatus__Enum, OnExecute, (SandWormPatrolBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C20770, bool, PointIsInChaseZone, (SandWormPatrolBehaviour * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00C20910, void, __ctor, (SandWormPatrolBehaviour * __this));
}
