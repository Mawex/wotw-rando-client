using namespace app;

namespace app::methods::RootMotion::FinalIK::IKSolverLookAt {
IL2CPP_REGISTER_METHOD(0x02BFEBF0, void, SetLookAtWeight, (IKSolverLookAt * __this, float weight));
IL2CPP_REGISTER_METHOD(0x02BFECC0, void, SetLookAtWeight, (IKSolverLookAt * __this, float weight, float bodyWeight));
IL2CPP_REGISTER_METHOD(0x02BFEDD0, void, SetLookAtWeight, (IKSolverLookAt * __this, float weight, float bodyWeight, float headWeight));
IL2CPP_REGISTER_METHOD(0x02BFEEF0, void, SetLookAtWeight, (IKSolverLookAt * __this, float weight, float bodyWeight, float headWeight, float eyesWeight));
IL2CPP_REGISTER_METHOD(0x02BFF030, void, SetLookAtWeight, (IKSolverLookAt * __this, float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight));
IL2CPP_REGISTER_METHOD(0x02BFF1A0, void, SetLookAtWeight, (IKSolverLookAt * __this, float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight, float clampWeightHead, float clampWeightEyes));
IL2CPP_REGISTER_METHOD(0x02BFF350, void, StoreDefaultLocalState, (IKSolverLookAt * __this));
IL2CPP_REGISTER_METHOD(0x02BFF520, void, FixTransforms, (IKSolverLookAt * __this));
IL2CPP_REGISTER_METHOD(0x02BFF6F0, bool, IsValid, (IKSolverLookAt * __this, String * * message));
IL2CPP_REGISTER_METHOD(0x02BFFB00, IKSolver_Point__Array *, GetPoints, (IKSolverLookAt * __this));
IL2CPP_REGISTER_METHOD(0x02BFFE30, IKSolver_Point *, GetPoint, (IKSolverLookAt * __this, Transform * transform));
IL2CPP_REGISTER_METHOD(0x02C00040, bool, SetChain, (IKSolverLookAt * __this, Transform__Array * spine, Transform * head, Transform__Array * eyes, Transform * root));
IL2CPP_REGISTER_METHOD(0x02C001E0, void, OnInitiate, (IKSolverLookAt * __this));
IL2CPP_REGISTER_METHOD(0x02C007B0, void, OnUpdate, (IKSolverLookAt * __this));
IL2CPP_REGISTER_METHOD(0x02C00960, bool, get_spineIsValid, (IKSolverLookAt * __this));
IL2CPP_REGISTER_METHOD(0x02C00A90, bool, get_spineIsEmpty, (IKSolverLookAt * __this));
IL2CPP_REGISTER_METHOD(0x02C00AB0, void, SolveSpine, (IKSolverLookAt * __this));
IL2CPP_REGISTER_METHOD(0x02C00E10, bool, get_headIsValid, (IKSolverLookAt * __this));
IL2CPP_REGISTER_METHOD(0x02C00E20, bool, get_headIsEmpty, (IKSolverLookAt * __this));
IL2CPP_REGISTER_METHOD(0x02C00ED0, void, SolveHead, (IKSolverLookAt * __this));
IL2CPP_REGISTER_METHOD(0x02C01350, bool, get_eyesIsValid, (IKSolverLookAt * __this));
IL2CPP_REGISTER_METHOD(0x02C01480, bool, get_eyesIsEmpty, (IKSolverLookAt * __this));
IL2CPP_REGISTER_METHOD(0x02C014A0, void, SolveEyes, (IKSolverLookAt * __this));
IL2CPP_REGISTER_METHOD(0x02C01840, Vector3__Array *, GetForwards, (IKSolverLookAt * __this, Vector3__Array * * forwards, Vector3 baseForward, Vector3 targetForward, int32_t bones, float clamp));
IL2CPP_REGISTER_METHOD(0x02C01D20, void, SetBones, (IKSolverLookAt * __this, Transform__Array * array, IKSolverLookAt_LookAtBone__Array * * bones));
IL2CPP_REGISTER_METHOD(0x02C01F80, void, __ctor, (IKSolverLookAt * __this));
}
