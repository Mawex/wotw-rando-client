#include <interception_macros.h>

namespace app::methods::GrabbableSurfaceMovingWheel {
IL2CPP_REGISTER_METHOD(0x01081AA0, bool, get_IsMoving, (GrabbableSurfaceMovingWheel * __this));
IL2CPP_REGISTER_METHOD(0x01081C20, float, get_AngularSpeed, (GrabbableSurfaceMovingWheel * __this));
IL2CPP_REGISTER_METHOD(0x01081F30, void, Awake, (GrabbableSurfaceMovingWheel * __this));
IL2CPP_REGISTER_METHOD(0x01082050, Vector2, GetVelocityAtPoint, (GrabbableSurfaceMovingWheel * __this, Vector2 point));
IL2CPP_REGISTER_METHOD(0x01082070, Vector2, GetVelocityAtPoint, (GrabbableSurfaceMovingWheel * __this, Vector2 point, Vector2 * pointOnCircle));
IL2CPP_REGISTER_METHOD(0x01082850, void, __ctor, (GrabbableSurfaceMovingWheel * __this));
}
