#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::IKSolverHeuristic {
    IL2CPP_REGISTER_METHOD(0x02BFA210, bool, SetChain, (app::IKSolverHeuristic * this_ptr, app::Transform__Array * hierarchy, app::Transform * root));
    IL2CPP_REGISTER_METHOD(0x02BFA4B0, void, AddBone, (app::IKSolverHeuristic * this_ptr, app::Transform * bone));
    IL2CPP_REGISTER_METHOD(0x02BFA6B0, void, StoreDefaultLocalState, (app::IKSolverHeuristic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BFA740, void, FixTransforms, (app::IKSolverHeuristic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BFA7D0, bool, IsValid, (app::IKSolverHeuristic * this_ptr, app::String * * message));
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::IKSolver_Point__Array *, GetPoints, (app::IKSolverHeuristic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BFACF0, app::IKSolver_Point *, GetPoint, (app::IKSolverHeuristic * this_ptr, app::Transform * transform));
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_minBones, (app::IKSolverHeuristic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_boneLengthCanBeZero, (app::IKSolverHeuristic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_allowCommonParent, (app::IKSolverHeuristic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitiate, (app::IKSolverHeuristic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdate, (app::IKSolverHeuristic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BFAE60, void, InitiateBones, (app::IKSolverHeuristic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BFB6B0, app::Vector3, get_localDirection, (app::IKSolverHeuristic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BFB9B0, float, get_positionOffset, (app::IKSolverHeuristic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BFBAC0, app::Vector3, GetSingularityOffset, (app::IKSolverHeuristic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BFC020, bool, SingularityDetected, (app::IKSolverHeuristic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BFC4B0, void, __ctor, (app::IKSolverHeuristic * this_ptr));
}
