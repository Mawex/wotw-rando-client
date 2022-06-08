#include <interception_macros.h>

namespace app::methods::Moon::IKLimb {
IL2CPP_REGISTER_METHOD(0x002FBC60, IKSolverHeuristic *, get_Solver, (IKLimb * __this));
IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (IKLimb * __this));
IL2CPP_REGISTER_METHOD(0x010FB630, void, OnAddedToAnimator, (IKLimb * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x010FBFB0, void, OnRemovedFromAnimator, (IKLimb * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x010FC060, void, OnDrawGizmosSelected, (IKLimb * __this));
IL2CPP_REGISTER_METHOD(0x010FCB90, float, ComputeGroundWeight, (IKLimb * __this, Vector3 localPosition));
IL2CPP_REGISTER_METHOD(0x010FCD10, bool, Cast, (IKLimb * __this));
IL2CPP_REGISTER_METHOD(0x010FD320, void, Process, (IKLimb * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x010FE490, void, __ctor, (IKLimb * __this));
}
