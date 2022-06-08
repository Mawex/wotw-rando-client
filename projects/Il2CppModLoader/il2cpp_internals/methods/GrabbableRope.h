#include <interception_macros.h>

namespace app::methods::GrabbableRope {
IL2CPP_REGISTER_METHOD(0x010790F0, Vector3, get_LastForceApplied, (GrabbableRope * __this));
IL2CPP_REGISTER_METHOD(0x01079110, bool, CanGrab, (GrabbableRope * __this, Vector2 position, Vector2 characterMovementDir));
IL2CPP_REGISTER_METHOD(0x010794B0, void, OnGrabbed, (GrabbableRope * __this));
IL2CPP_REGISTER_METHOD(0x010795E0, void, OnReleased, (GrabbableRope * __this));
IL2CPP_REGISTER_METHOD(0x01079710, float, GetPosition, (GrabbableRope * __this, Vector2 position));
IL2CPP_REGISTER_METHOD(0x01079A70, void, Awake, (GrabbableRope * __this));
IL2CPP_REGISTER_METHOD(0x01079BF0, void, OnDestroy, (GrabbableRope * __this));
IL2CPP_REGISTER_METHOD(0x01079CB0, Vector2, Position, (GrabbableRope * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01079DF0, void, ReversePointsIfNeeded, (GrabbableRope * __this));
IL2CPP_REGISTER_METHOD(0x0107A030, bool, TryGetPosition, (GrabbableRope * __this, int32_t index, Vector2 * pos));
IL2CPP_REGISTER_METHOD(0x0107A220, Vector2, GetClosestPointOnLineSegment, (Vector2 p1, Vector2 p2, Vector2 q));
IL2CPP_REGISTER_METHOD(0x0107A470, float, LineSegmentMinDistance, (Vector2 p1, Vector2 p2, Vector2 q));
IL2CPP_REGISTER_METHOD(0x0107A580, Vector2, GetPosition, (GrabbableRope * __this, float positionOnRope));
IL2CPP_REGISTER_METHOD(0x0107A7E0, Vector2, GetDirection, (GrabbableRope * __this, float positionOnRope));
IL2CPP_REGISTER_METHOD(0x0107A7F0, Vector2, GetRawDirection, (GrabbableRope * __this, float positionOnRope));
IL2CPP_REGISTER_METHOD(0x0107A990, float, GetHorizontalAngle, (GrabbableRope * __this, float positionOnRope));
IL2CPP_REGISTER_METHOD(0x0107AA60, float, GetVerticalAngle, (GrabbableRope * __this, float positionOnRope));
IL2CPP_REGISTER_METHOD(0x0107AB30, void, CheckRotation, (GrabbableRope * __this));
IL2CPP_REGISTER_METHOD(0x0107AD70, bool, IsVertical, (GrabbableRope * __this, float positionOnRope));
IL2CPP_REGISTER_METHOD(0x0107AF20, float, AdvancePosition, (GrabbableRope * __this, float positionOnRope, float distance));
IL2CPP_REGISTER_METHOD(0x0107B360, bool, AllowVertical, (GrabbableRope * __this));
IL2CPP_REGISTER_METHOD(0x0107B380, bool, AllowHorizontal, (GrabbableRope * __this));
IL2CPP_REGISTER_METHOD(0x0107B3A0, void, AddForce, (GrabbableRope * __this, Vector3 force, float positionOnRope));
IL2CPP_REGISTER_METHOD(0x0107B3D0, void, AddImpulse, (GrabbableRope * __this, Vector3 force, float positionOnRope));
IL2CPP_REGISTER_METHOD(0x0107B430, void, ApplyForce, (GrabbableRope * __this, Vector3 force, float positionOnRope, ForceMode__Enum forceMode));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, RopeMinPosition, (GrabbableRope * __this));
IL2CPP_REGISTER_METHOD(0x0107B600, float, RopeMaxPosition, (GrabbableRope * __this));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, IsRopeSlippery, (GrabbableRope * __this));
IL2CPP_REGISTER_METHOD(0x0085E270, bool, CanHandStand, (GrabbableRope * __this));
IL2CPP_REGISTER_METHOD(0x0107B690, void, __ctor, (GrabbableRope * __this));
IL2CPP_REGISTER_METHOD(0x0107B6B0, void, __cctor, ());
}
