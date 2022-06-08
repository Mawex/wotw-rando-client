#include <interception_macros.h>

namespace app::methods::RollingMovement {
IL2CPP_REGISTER_METHOD(0x00724040, float, get_SpeedY, (RollingMovement * __this));
IL2CPP_REGISTER_METHOD(0x00724050, void, set_SpeedY, (RollingMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_SpeedX, (RollingMovement * __this));
IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_SpeedX, (RollingMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x01365050, float, get_GroundAngle, (RollingMovement * __this));
IL2CPP_REGISTER_METHOD(0x01365120, Vector2, WorldToGround, (RollingMovement * __this, Vector2 world));
IL2CPP_REGISTER_METHOD(0x01365170, Vector2, GroundToWorld, (RollingMovement * __this, Vector2 local));
IL2CPP_REGISTER_METHOD(0x0098F4A0, bool, get_IsSuspended, (RollingMovement * __this));
IL2CPP_REGISTER_METHOD(0x0098F4B0, void, set_IsSuspended, (RollingMovement * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FD490, SuspendableMask__Enum, get_Mask, (RollingMovement * __this));
IL2CPP_REGISTER_METHOD(0x013651A0, void, set_Mask, (RollingMovement * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x01365250, void, Awake, (RollingMovement * __this));
IL2CPP_REGISTER_METHOD(0x01365360, void, OnDestroy, (RollingMovement * __this));
IL2CPP_REGISTER_METHOD(0x01365400, void, Serialize, (RollingMovement * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x01365430, void, OnCollisionEnter, (RollingMovement * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x01365430, void, OnCollisionStay, (RollingMovement * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x01365440, void, OnCollision, (RollingMovement * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x01365A60, void, add_OnCollisionGroundEvent, (RollingMovement * __this, Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x01365B50, void, remove_OnCollisionGroundEvent, (RollingMovement * __this, Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x01365C40, void, add_OnCollisionWallLeftEvent, (RollingMovement * __this, Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x01365D30, void, remove_OnCollisionWallLeftEvent, (RollingMovement * __this, Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x01365E20, void, add_OnCollisionWallRightEvent, (RollingMovement * __this, Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x01365F10, void, remove_OnCollisionWallRightEvent, (RollingMovement * __this, Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x01366000, Vector3, get_GroundBinormal, (RollingMovement * __this));
IL2CPP_REGISTER_METHOD(0x01366150, void, FixedUpdate, (RollingMovement * __this));
IL2CPP_REGISTER_METHOD(0x01366410, void, __ctor, (RollingMovement * __this));
}
