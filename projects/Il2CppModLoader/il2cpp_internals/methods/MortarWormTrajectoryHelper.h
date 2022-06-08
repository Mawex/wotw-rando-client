#include <interception_macros.h>

namespace app::methods::MortarWormTrajectoryHelper {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (MortarWormTrajectoryHelper * __this, MortarWormEnemy * enemy));
IL2CPP_REGISTER_METHOD(0x00863E90, float, get_RemainingWaitTime, (MortarWormTrajectoryHelper * __this));
IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_RemainingWaitTime, (MortarWormTrajectoryHelper * __this, float value));
IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_CanHitTarget, (MortarWormTrajectoryHelper * __this));
IL2CPP_REGISTER_METHOD(0x007EC6C0, void, set_CanHitTarget, (MortarWormTrajectoryHelper * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00863EB0, void, UpdateProjectileSpawner, (MortarWormTrajectoryHelper * __this));
IL2CPP_REGISTER_METHOD(0x00864610, void, UpdateMortarTrajectory, (MortarWormTrajectoryHelper * __this));
}
