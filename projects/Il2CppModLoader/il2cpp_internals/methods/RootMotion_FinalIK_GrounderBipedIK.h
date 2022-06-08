#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::GrounderBipedIK {
IL2CPP_REGISTER_METHOD(0x02065EA0, void, OpenUserManual, (GrounderBipedIK * __this));
IL2CPP_REGISTER_METHOD(0x02065F60, void, OpenScriptReference, (GrounderBipedIK * __this));
IL2CPP_REGISTER_METHOD(0x02066020, void, ResetPosition, (GrounderBipedIK * __this));
IL2CPP_REGISTER_METHOD(0x020660F0, bool, IsReadyToInitiate, (GrounderBipedIK * __this));
IL2CPP_REGISTER_METHOD(0x02066210, void, Update, (GrounderBipedIK * __this));
IL2CPP_REGISTER_METHOD(0x020663E0, void, Initiate, (GrounderBipedIK * __this));
IL2CPP_REGISTER_METHOD(0x020669D0, void, OnDisable, (GrounderBipedIK * __this));
IL2CPP_REGISTER_METHOD(0x02066A50, void, OnSolverUpdate, (GrounderBipedIK * __this));
IL2CPP_REGISTER_METHODINFO(0x0470FDD8, GrounderBipedIK_OnSolverUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020677E0, void, SetLegIK, (GrounderBipedIK * __this, IKSolverLimb * limb, int32_t index));
IL2CPP_REGISTER_METHOD(0x02067970, void, OnPostSolverUpdate, (GrounderBipedIK * __this));
IL2CPP_REGISTER_METHODINFO(0x0471DD98, GrounderBipedIK_OnPostSolverUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02067CF0, void, OnDestroy, (GrounderBipedIK * __this));
IL2CPP_REGISTER_METHOD(0x02068050, void, __ctor, (GrounderBipedIK * __this));
}
