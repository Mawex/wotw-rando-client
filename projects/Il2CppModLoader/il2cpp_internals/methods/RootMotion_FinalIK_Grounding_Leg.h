#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::Grounding_Leg {
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_isGrounded, (Grounding_Leg * __this));
IL2CPP_REGISTER_METHOD(0x0052C650, void, set_isGrounded, (Grounding_Leg * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02071CD0, Vector3, get_IKPosition, (Grounding_Leg * __this));
IL2CPP_REGISTER_METHOD(0x02071CF0, void, set_IKPosition, (Grounding_Leg * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x01746A40, Quaternion, get_rotationOffset, (Grounding_Leg * __this));
IL2CPP_REGISTER_METHOD(0x02071D00, void, set_rotationOffset, (Grounding_Leg * __this, Quaternion value));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_initiated, (Grounding_Leg * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_initiated, (Grounding_Leg * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00447340, float, get_heightFromGround, (Grounding_Leg * __this));
IL2CPP_REGISTER_METHOD(0x00447350, void, set_heightFromGround, (Grounding_Leg * __this, float value));
IL2CPP_REGISTER_METHOD(0x0168C6F0, Vector3, get_velocity, (Grounding_Leg * __this));
IL2CPP_REGISTER_METHOD(0x02071D10, void, set_velocity, (Grounding_Leg * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Transform *, get_transform, (Grounding_Leg * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_transform, (Grounding_Leg * __this, Transform * value));
IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_IKOffset, (Grounding_Leg * __this));
IL2CPP_REGISTER_METHOD(0x008A34D0, void, set_IKOffset, (Grounding_Leg * __this, float value));
IL2CPP_REGISTER_METHOD(0x02071D20, void, Initiate, (Grounding_Leg * __this, Grounding * grounding, Transform * transform));
IL2CPP_REGISTER_METHOD(0x02071F30, void, OnEnable, (Grounding_Leg * __this));
IL2CPP_REGISTER_METHOD(0x02072010, void, Reset, (Grounding_Leg * __this));
IL2CPP_REGISTER_METHOD(0x02072200, void, Process, (Grounding_Leg * __this));
IL2CPP_REGISTER_METHOD(0x02073120, float, get_stepHeightFromGround, (Grounding_Leg * __this));
IL2CPP_REGISTER_METHOD(0x02073210, RaycastHit, GetCapsuleHit, (Grounding_Leg * __this, Vector3 offsetFromHeel));
IL2CPP_REGISTER_METHOD(0x02073610, RaycastHit, GetRaycastHit, (Grounding_Leg * __this, Vector3 offsetFromHeel));
IL2CPP_REGISTER_METHOD(0x02073A20, Vector3, RotateNormal, (Grounding_Leg * __this, Vector3 normal));
IL2CPP_REGISTER_METHOD(0x02073C80, void, SetFootToPoint, (Grounding_Leg * __this, Vector3 normal, Vector3 point));
IL2CPP_REGISTER_METHOD(0x02073EA0, void, SetFootToPlane, (Grounding_Leg * __this, Vector3 planeNormal, Vector3 planePoint, Vector3 heelHitPoint));
IL2CPP_REGISTER_METHOD(0x020742C0, float, GetHeightFromGround, (Grounding_Leg * __this, Vector3 hitPoint));
IL2CPP_REGISTER_METHOD(0x020743D0, void, RotateFoot, (Grounding_Leg * __this));
IL2CPP_REGISTER_METHOD(0x020746E0, Quaternion, GetRotationOffsetTarget, (Grounding_Leg * __this));
IL2CPP_REGISTER_METHOD(0x02074860, float, get_rootYOffset, (Grounding_Leg * __this));
IL2CPP_REGISTER_METHOD(0x02074AC0, void, __ctor, (Grounding_Leg * __this));
}
