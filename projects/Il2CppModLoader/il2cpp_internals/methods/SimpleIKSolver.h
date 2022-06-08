#include <interception_macros.h>

namespace app::methods::SimpleIKSolver {
IL2CPP_REGISTER_METHOD(0x00748750, void, Start, (SimpleIKSolver * __this));
IL2CPP_REGISTER_METHOD(0x00748840, void, Solve, (SimpleIKSolver * __this));
IL2CPP_REGISTER_METHOD(0x00749100, void, CheckAngleRestrictions, (SimpleIKSolver * __this, SimpleIKSolver_JointEntity * jointEntity));
IL2CPP_REGISTER_METHOD(0x00749430, void, ResetJoints, (SimpleIKSolver * __this));
IL2CPP_REGISTER_METHOD(0x00749500, void, __ctor, (SimpleIKSolver * __this));
}
