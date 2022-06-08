#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::GrounderFBBIK {
IL2CPP_REGISTER_METHOD(0x02068110, void, OpenTutorial, (GrounderFBBIK * __this));
IL2CPP_REGISTER_METHOD(0x020681D0, void, OpenUserManual, (GrounderFBBIK * __this));
IL2CPP_REGISTER_METHOD(0x02068290, void, OpenScriptReference, (GrounderFBBIK * __this));
IL2CPP_REGISTER_METHOD(0x02068350, void, ResetPosition, (GrounderFBBIK * __this));
IL2CPP_REGISTER_METHOD(0x02068420, bool, IsReadyToInitiate, (GrounderFBBIK * __this));
IL2CPP_REGISTER_METHOD(0x02068500, void, Update, (GrounderFBBIK * __this));
IL2CPP_REGISTER_METHOD(0x015DDDC0, void, FixedUpdate, (GrounderFBBIK * __this));
IL2CPP_REGISTER_METHOD(0x015DDDC0, void, LateUpdate, (GrounderFBBIK * __this));
IL2CPP_REGISTER_METHOD(0x020686A0, void, Initiate, (GrounderFBBIK * __this));
IL2CPP_REGISTER_METHOD(0x02068B40, void, OnSolverUpdate, (GrounderFBBIK * __this));
IL2CPP_REGISTER_METHODINFO(0x0472A568, GrounderFBBIK_OnSolverUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02069390, void, SetLegIK, (GrounderFBBIK * __this, IKEffector * effector, Grounding_Leg * leg));
IL2CPP_REGISTER_METHOD(0x02069880, void, OnDrawGizmosSelected, (GrounderFBBIK * __this));
IL2CPP_REGISTER_METHOD(0x020699D0, void, OnDestroy, (GrounderFBBIK * __this));
IL2CPP_REGISTER_METHOD(0x02069BD0, void, __ctor, (GrounderFBBIK * __this));
}
