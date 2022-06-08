#include <interception_macros.h>

namespace app::methods::TentaclePhysicsController {
IL2CPP_REGISTER_METHOD(0x010CE240, bool, get_Enabled, (TentaclePhysicsController * __this));
IL2CPP_REGISTER_METHOD(0x010CE300, bool, get_IsHeadStuck, (TentaclePhysicsController * __this));
IL2CPP_REGISTER_METHOD(0x010CE310, bool, get_IsAlive, (TentaclePhysicsController * __this));
IL2CPP_REGISTER_METHOD(0x010CE330, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x010CE3D0, void, OnAwake, (TentaclePhysicsController * __this));
IL2CPP_REGISTER_METHOD(0x010CEEA0, void, IgnoreInterCollisions, (TentaclePhysicsController * __this));
IL2CPP_REGISTER_METHOD(0x010CF010, void, IgnoreInterCollisions, (TentaclePhysicsController * __this, Collider * collider, bool ignore));
IL2CPP_REGISTER_METHOD(0x010CF140, void, ResetAnimatedSettings, (TentaclePhysicsController * __this));
IL2CPP_REGISTER_METHOD(0x010CF170, void, StickHead, (TentaclePhysicsController * __this, Transform * stickTransform, Vector3 stickAnchor));
IL2CPP_REGISTER_METHOD(0x010CFBC0, void, UnStickHead, (TentaclePhysicsController * __this));
IL2CPP_REGISTER_METHOD(0x010CFC00, void, BreakStickJoint, (TentaclePhysicsController * __this));
IL2CPP_REGISTER_METHOD(0x010D0190, void, IgnoreStickCollisions, (TentaclePhysicsController * __this, bool ignore));
IL2CPP_REGISTER_METHOD(0x010D0330, void, FixBodyTransform, (TentaclePhysicsController * __this, Rigidbody * rigidbody));
IL2CPP_REGISTER_METHOD(0x010D05B0, void, FixBodyTransform, (TentaclePhysicsController * __this, Rigidbody * rigidbody, Vector3 * pos, Quaternion rot, float eulerZ));
IL2CPP_REGISTER_METHOD(0x010D07A0, void, OnFixedUpdate, (TentaclePhysicsController * __this));
IL2CPP_REGISTER_METHOD(0x010D4460, Vector3, Reproject, (TentaclePhysicsController * __this, Vector3 point, float k));
IL2CPP_REGISTER_METHOD(0x010D47A0, void, LerpHeadRotataionAlignmentToTarget, (TentaclePhysicsController * __this, float force, float k));
IL2CPP_REGISTER_METHOD(0x010D4880, void, AlignAllToAnimation, (TentaclePhysicsController * __this));
IL2CPP_REGISTER_METHOD(0x010D4DF0, void, Kickback, (TentaclePhysicsController * __this, Vector3 vector, int32_t joint));
IL2CPP_REGISTER_METHOD(0x010D4FA0, void, UpdateKickback, (TentaclePhysicsController * __this, float dt));
IL2CPP_REGISTER_METHOD(0x010D50A0, Vector3, GetCurrentKickbackVector, (TentaclePhysicsController * __this));
IL2CPP_REGISTER_METHOD(0x010D5210, void, ApplyKickback, (TentaclePhysicsController * __this, Vector3__Array * sourceJointPos, Vector3__Array * resultJointPos, int32_t jointCount));
IL2CPP_REGISTER_METHOD(0x010D53D0, void, ApplyKickbackToJoint, (TentaclePhysicsController * __this, Vector3__Array * sourceJointPos, Vector3 kickbackShift, Vector3__Array * resultJointPos, int32_t jointIndex));
IL2CPP_REGISTER_METHOD(0x010D55A0, void, Suspend, (TentaclePhysicsController * __this));
IL2CPP_REGISTER_METHOD(0x010D55B0, void, Resume, (TentaclePhysicsController * __this));
IL2CPP_REGISTER_METHOD(0x010D55C0, bool, get_IsKinematic, (TentaclePhysicsController * __this));
IL2CPP_REGISTER_METHOD(0x010D55D0, void, SetKinematic, (TentaclePhysicsController * __this, bool kinematic));
IL2CPP_REGISTER_METHOD(0x010D58A0, void, TurnOffSprings, (TentaclePhysicsController * __this));
IL2CPP_REGISTER_METHOD(0x010D59C0, void, ResetJoints, (TentaclePhysicsController * __this));
IL2CPP_REGISTER_METHOD(0x010D61A0, void, ResetActivated, (TentaclePhysicsController * __this));
IL2CPP_REGISTER_METHOD(0x010D61B0, void, Die, (TentaclePhysicsController * __this));
IL2CPP_REGISTER_METHOD(0x010D6200, void, __ctor, (TentaclePhysicsController * __this));
IL2CPP_REGISTER_METHOD(0x010D67C0, void, __cctor, ());
}
