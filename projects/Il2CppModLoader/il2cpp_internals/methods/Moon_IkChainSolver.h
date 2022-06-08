using namespace app;

namespace app::methods::Moon::IkChainSolver {
IL2CPP_REGISTER_METHOD(0x01B0E560, Vector3, get_LocalDirection, (IkChainSolver * __this));
IL2CPP_REGISTER_METHOD(0x01B0E830, int32_t, AddJoint, (IkChainSolver * __this, IkChainSolver_JointData jointData));
IL2CPP_REGISTER_METHOD(0x01B0EA90, void, Clear, (IkChainSolver * __this));
IL2CPP_REGISTER_METHOD(0x01B0EB20, void, Initialize, (IkChainSolver * __this));
IL2CPP_REGISTER_METHOD(0x01B0EC60, void, UpdateSegmentsLength, (IkChainSolver * __this));
IL2CPP_REGISTER_METHOD(0x01B0EF20, void, Solve, (IkChainSolver * __this));
IL2CPP_REGISTER_METHOD(0x01B0FF60, Vector3, ComputeSingularityOffset, (IkChainSolver * __this));
IL2CPP_REGISTER_METHOD(0x01B103D0, bool, CheckForSingularity, (IkChainSolver * __this));
IL2CPP_REGISTER_METHOD(0x01B10790, Quaternion, LimitSwing, (Vector3 axis, Quaternion rotation, float limit));
IL2CPP_REGISTER_METHOD(0x01B10D90, Quaternion, LimitTwist, (Quaternion rotation, Vector3 axis, Vector3 orthoAxis, float twistLimit));
IL2CPP_REGISTER_METHOD(0x01B11230, void, __ctor, (IkChainSolver * __this));
}
