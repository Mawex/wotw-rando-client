#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::IKMapping_BoneMap {
IL2CPP_REGISTER_METHOD(0x02BDB2F0, void, Initiate, (IKMapping_BoneMap * __this, Transform * transform, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x02BDB330, Vector3, get_swingDirection, (IKMapping_BoneMap * __this));
IL2CPP_REGISTER_METHOD(0x02064DE0, void, StoreDefaultLocalState, (IKMapping_BoneMap * __this));
IL2CPP_REGISTER_METHOD(0x02BDB4A0, void, FixTransform, (IKMapping_BoneMap * __this, bool position));
IL2CPP_REGISTER_METHOD(0x00F43340, bool, get_isNodeBone, (IKMapping_BoneMap * __this));
IL2CPP_REGISTER_METHOD(0x02BDB590, void, SetLength, (IKMapping_BoneMap * __this, IKMapping_BoneMap * nextBone));
IL2CPP_REGISTER_METHOD(0x02BDB760, void, SetLocalSwingAxis, (IKMapping_BoneMap * __this, IKMapping_BoneMap * swingTarget));
IL2CPP_REGISTER_METHOD(0x02BDB770, void, SetLocalSwingAxis, (IKMapping_BoneMap * __this, IKMapping_BoneMap * bone1, IKMapping_BoneMap * bone2));
IL2CPP_REGISTER_METHOD(0x02BDBA20, void, SetLocalTwistAxis, (IKMapping_BoneMap * __this, Vector3 twistDirection, Vector3 normalDirection));
IL2CPP_REGISTER_METHOD(0x02BDBBC0, void, SetPlane, (IKMapping_BoneMap * __this, IKSolverFullBody * solver, Transform * planeBone1, Transform * planeBone2, Transform * planeBone3));
IL2CPP_REGISTER_METHOD(0x02BDBCA0, void, UpdatePlane, (IKMapping_BoneMap * __this, bool rotation, bool position));
IL2CPP_REGISTER_METHOD(0x02BDBF70, void, SetIKPosition, (IKMapping_BoneMap * __this));
IL2CPP_REGISTER_METHOD(0x02BDC000, void, MaintainRotation, (IKMapping_BoneMap * __this));
IL2CPP_REGISTER_METHOD(0x02BDC090, void, SetToIKPosition, (IKMapping_BoneMap * __this));
IL2CPP_REGISTER_METHOD(0x02BDC110, void, FixToNode, (IKMapping_BoneMap * __this, IKSolverFullBody * solver, float weight, IKSolver_Node * fixNode));
IL2CPP_REGISTER_METHOD(0x02BDC440, Vector3, GetPlanePosition, (IKMapping_BoneMap * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x02BDC600, void, PositionToPlane, (IKMapping_BoneMap * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x02BDC690, void, RotateToPlane, (IKMapping_BoneMap * __this, IKSolverFullBody * solver, float weight));
IL2CPP_REGISTER_METHOD(0x02BDCB00, void, Swing, (IKMapping_BoneMap * __this, Vector3 swingTarget, float weight));
IL2CPP_REGISTER_METHOD(0x02BDCBE0, void, Swing, (IKMapping_BoneMap * __this, Vector3 pos1, Vector3 pos2, float weight));
IL2CPP_REGISTER_METHOD(0x02BDD2D0, void, Twist, (IKMapping_BoneMap * __this, Vector3 twistDirection, Vector3 normalDirection, float weight));
IL2CPP_REGISTER_METHOD(0x02BDD970, void, RotateToMaintain, (IKMapping_BoneMap * __this, float weight));
IL2CPP_REGISTER_METHOD(0x02BDDC00, void, RotateToEffector, (IKMapping_BoneMap * __this, IKSolverFullBody * solver, float weight));
IL2CPP_REGISTER_METHOD(0x02BDDEB0, Quaternion, GetTargetRotation, (IKMapping_BoneMap * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x02BDE230, Quaternion, get_lastAnimatedTargetRotation, (IKMapping_BoneMap * __this));
IL2CPP_REGISTER_METHOD(0x02BDE760, void, __ctor, (IKMapping_BoneMap * __this));
}
