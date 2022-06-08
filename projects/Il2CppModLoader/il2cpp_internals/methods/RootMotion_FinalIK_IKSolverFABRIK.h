using namespace app;

namespace app::methods::RootMotion::FinalIK::IKSolverFABRIK {
IL2CPP_REGISTER_METHOD(0x02BEB790, void, SolveForward, (IKSolverFABRIK * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x02BEB880, void, SolveBackward, (IKSolverFABRIK * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x02BEB9B0, Vector3, GetIKPosition, (IKSolverFABRIK * __this));
IL2CPP_REGISTER_METHOD(0x02BEBAF0, void, OnInitiate, (IKSolverFABRIK * __this));
IL2CPP_REGISTER_METHOD(0x02BEC050, void, OnUpdate, (IKSolverFABRIK * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_boneLengthCanBeZero, (IKSolverFABRIK * __this));
IL2CPP_REGISTER_METHOD(0x02BEC4E0, Vector3, SolveJoint, (IKSolverFABRIK * __this, Vector3 pos1, Vector3 pos2, float length));
IL2CPP_REGISTER_METHOD(0x02BEC710, void, OnPreSolve, (IKSolverFABRIK * __this));
IL2CPP_REGISTER_METHOD(0x02BED320, void, OnPostSolve, (IKSolverFABRIK * __this));
IL2CPP_REGISTER_METHOD(0x02BED370, void, Solve, (IKSolverFABRIK * __this, Vector3 targetPosition));
IL2CPP_REGISTER_METHOD(0x02BED490, void, ForwardReach, (IKSolverFABRIK * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x02BED870, void, SolverMove, (IKSolverFABRIK * __this, int32_t index, Vector3 offset));
IL2CPP_REGISTER_METHOD(0x02BEDA00, void, SolverRotate, (IKSolverFABRIK * __this, int32_t index, Quaternion rotation, bool recursive));
IL2CPP_REGISTER_METHOD(0x02BEDB90, void, SolverRotateChildren, (IKSolverFABRIK * __this, int32_t index, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x02BEDD00, void, SolverMoveChildrenAroundPoint, (IKSolverFABRIK * __this, int32_t index, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x02BEDFE0, Quaternion, GetParentSolverRotation, (IKSolverFABRIK * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02BEE2C0, Vector3, GetParentSolverPosition, (IKSolverFABRIK * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02BEE5C0, Quaternion, GetLimitedRotation, (IKSolverFABRIK * __this, int32_t index, Quaternion q, bool * changed));
IL2CPP_REGISTER_METHOD(0x02BEE9C0, void, LimitForward, (IKSolverFABRIK * __this, int32_t rotateBone, int32_t limitBone));
IL2CPP_REGISTER_METHOD(0x02BEF380, void, BackwardReach, (IKSolverFABRIK * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x02BEF3C0, void, BackwardReachUnlimited, (IKSolverFABRIK * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x02BEF560, void, BackwardReachLimited, (IKSolverFABRIK * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x02BEFE20, void, MapToSolverPositions, (IKSolverFABRIK * __this));
IL2CPP_REGISTER_METHOD(0x02BF00A0, void, MapToSolverPositionsLimited, (IKSolverFABRIK * __this));
IL2CPP_REGISTER_METHOD(0x02BF02A0, void, __ctor, (IKSolverFABRIK * __this));
}
