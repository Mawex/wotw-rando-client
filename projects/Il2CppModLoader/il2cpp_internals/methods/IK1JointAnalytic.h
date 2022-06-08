#include <interception_macros.h>

namespace app::methods::IK1JointAnalytic {
IL2CPP_REGISTER_METHOD(0x00B70340, void, Solve, (IK1JointAnalytic * __this, Transform__Array * bones, Vector3 target));
IL2CPP_REGISTER_METHOD(0x00B712C0, Vector3, findKnee, (IK1JointAnalytic * __this, Vector3 pHip, Vector3 pAnkle, float fThigh, float fShin, Vector3 vKneeDir));
IL2CPP_REGISTER_METHOD(0x00624490, void, __ctor, (IK1JointAnalytic * __this));
}
