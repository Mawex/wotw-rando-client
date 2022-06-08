#include <interception_macros.h>

namespace app::methods::RootMotion::SolverManager {
IL2CPP_REGISTER_METHOD(0x02A2D7E0, void, Disable, (SolverManager * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, InitiateSolver, (SolverManager * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateSolver, (SolverManager * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FixTransforms, (SolverManager * __this));
IL2CPP_REGISTER_METHOD(0x02A2D930, void, OnDisable, (SolverManager * __this));
IL2CPP_REGISTER_METHOD(0x02A2D980, void, Start, (SolverManager * __this));
IL2CPP_REGISTER_METHOD(0x02A2D9D0, bool, get_animatePhysics, (SolverManager * __this));
IL2CPP_REGISTER_METHOD(0x02A2D980, void, Initiate, (SolverManager * __this));
IL2CPP_REGISTER_METHOD(0x02A2DB80, void, Update, (SolverManager * __this));
IL2CPP_REGISTER_METHOD(0x02A2DBD0, void, FindAnimatorRecursive, (SolverManager * __this, Transform * t, bool findInChildren));
IL2CPP_REGISTER_METHOD(0x02A2DDC0, bool, get_isAnimated, (SolverManager * __this));
IL2CPP_REGISTER_METHOD(0x02A2DEB0, void, FixedUpdate, (SolverManager * __this));
IL2CPP_REGISTER_METHOD(0x02A2DF00, void, LateUpdate, (SolverManager * __this));
IL2CPP_REGISTER_METHOD(0x02A2DF90, void, UpdateSolverExternal, (SolverManager * __this));
IL2CPP_REGISTER_METHOD(0x02A2E090, void, ManualSolverUpdate, (SolverManager * __this));
IL2CPP_REGISTER_METHOD(0x00AB5740, void, __ctor, (SolverManager * __this));
}
