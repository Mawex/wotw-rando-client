using namespace app;

namespace app::methods::RootMotion::FinalIK::IKSolverHeuristic {
IL2CPP_REGISTER_METHOD(0x02BFA210, bool, SetChain, (IKSolverHeuristic * __this, Transform__Array * hierarchy, Transform * root));
IL2CPP_REGISTER_METHOD(0x02BFA4B0, void, AddBone, (IKSolverHeuristic * __this, Transform * bone));
IL2CPP_REGISTER_METHOD(0x02BFA6B0, void, StoreDefaultLocalState, (IKSolverHeuristic * __this));
IL2CPP_REGISTER_METHOD(0x02BFA740, void, FixTransforms, (IKSolverHeuristic * __this));
IL2CPP_REGISTER_METHOD(0x02BFA7D0, bool, IsValid, (IKSolverHeuristic * __this, String * * message));
IL2CPP_REGISTER_METHOD(0x002FBBC0, IKSolver_Point__Array *, GetPoints, (IKSolverHeuristic * __this));
IL2CPP_REGISTER_METHOD(0x02BFACF0, IKSolver_Point *, GetPoint, (IKSolverHeuristic * __this, Transform * transform));
IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_minBones, (IKSolverHeuristic * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_boneLengthCanBeZero, (IKSolverHeuristic * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_allowCommonParent, (IKSolverHeuristic * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitiate, (IKSolverHeuristic * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdate, (IKSolverHeuristic * __this));
IL2CPP_REGISTER_METHOD(0x02BFAE60, void, InitiateBones, (IKSolverHeuristic * __this));
IL2CPP_REGISTER_METHOD(0x02BFB6B0, Vector3, get_localDirection, (IKSolverHeuristic * __this));
IL2CPP_REGISTER_METHOD(0x02BFB9B0, float, get_positionOffset, (IKSolverHeuristic * __this));
IL2CPP_REGISTER_METHOD(0x02BFBAC0, Vector3, GetSingularityOffset, (IKSolverHeuristic * __this));
IL2CPP_REGISTER_METHOD(0x02BFC020, bool, SingularityDetected, (IKSolverHeuristic * __this));
IL2CPP_REGISTER_METHOD(0x02BFC4B0, void, __ctor, (IKSolverHeuristic * __this));
}
