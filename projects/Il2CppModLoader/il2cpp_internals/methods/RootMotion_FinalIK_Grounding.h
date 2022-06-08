#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::Grounding {
IL2CPP_REGISTER_METHOD(0x002FBB40, Grounding_Leg__Array *, get_legs, (Grounding * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_legs, (Grounding * __this, Grounding_Leg__Array * value));
IL2CPP_REGISTER_METHOD(0x002FBB60, Grounding_Pelvis *, get_pelvis, (Grounding * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_pelvis, (Grounding * __this, Grounding_Pelvis * value));
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_isGrounded, (Grounding * __this));
IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_isGrounded, (Grounding * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FBBA0, Transform *, get_root, (Grounding * __this));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_root, (Grounding * __this, Transform * value));
IL2CPP_REGISTER_METHOD(0x02070160, RaycastHit, get_rootHit, (Grounding * __this));
IL2CPP_REGISTER_METHOD(0x02070190, void, set_rootHit, (Grounding * __this, RaycastHit value));
IL2CPP_REGISTER_METHOD(0x020701C0, bool, get_rootGrounded, (Grounding * __this));
IL2CPP_REGISTER_METHOD(0x020701E0, RaycastHit, GetRootHit, (Grounding * __this, float maxDistanceMlp));
IL2CPP_REGISTER_METHOD(0x02070850, bool, IsValid, (Grounding * __this, String * * errorMessage));
IL2CPP_REGISTER_METHOD(0x02070960, void, Initiate, (Grounding * __this, Transform * root, Transform__Array * feet));
IL2CPP_REGISTER_METHOD(0x02071020, void, Update, (Grounding * __this));
IL2CPP_REGISTER_METHOD(0x020712E0, Vector3, GetLegsPlaneNormal, (Grounding * __this));
IL2CPP_REGISTER_METHOD(0x02071630, void, Reset, (Grounding * __this));
IL2CPP_REGISTER_METHOD(0x020716C0, void, LogWarning, (Grounding * __this, String * message));
IL2CPP_REGISTER_METHOD(0x020716E0, Vector3, get_up, (Grounding * __this));
IL2CPP_REGISTER_METHOD(0x020717D0, float, GetVerticalOffset, (Grounding * __this, Vector3 p1, Vector3 p2));
IL2CPP_REGISTER_METHOD(0x020719D0, Vector3, Flatten, (Grounding * __this, Vector3 v));
IL2CPP_REGISTER_METHOD(0x02071B60, bool, get_useRootRotation, (Grounding * __this));
IL2CPP_REGISTER_METHOD(0x02071C80, void, __ctor, (Grounding * __this));
}
