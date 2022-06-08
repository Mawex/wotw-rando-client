#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::FBBIKHeadEffector {
IL2CPP_REGISTER_METHOD(0x02055F30, void, Awake, (FBBIKHeadEffector * __this));
IL2CPP_REGISTER_METHOD(0x02056880, void, OnStoreDefaultLocalState, (FBBIKHeadEffector * __this));
IL2CPP_REGISTER_METHODINFO(0x047839C8, FBBIKHeadEffector_OnStoreDefaultLocalState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020570C0, void, OnFixTransforms, (FBBIKHeadEffector * __this));
IL2CPP_REGISTER_METHODINFO(0x0472F518, FBBIKHeadEffector_OnFixTransforms__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02057940, void, OnPreRead, (FBBIKHeadEffector * __this));
IL2CPP_REGISTER_METHODINFO(0x0473E008, FBBIKHeadEffector_OnPreRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02058550, void, SpineBend, (FBBIKHeadEffector * __this));
IL2CPP_REGISTER_METHOD(0x02058CC0, void, CCDPass, (FBBIKHeadEffector * __this));
IL2CPP_REGISTER_METHOD(0x020592B0, void, Iterate, (FBBIKHeadEffector * __this, int32_t iteration));
IL2CPP_REGISTER_METHODINFO(0x0475A928, FBBIKHeadEffector_Iterate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0205A1D0, void, OnPostUpdate, (FBBIKHeadEffector * __this));
IL2CPP_REGISTER_METHODINFO(0x0470E190, FBBIKHeadEffector_OnPostUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0205A690, void, ChestDirection, (FBBIKHeadEffector * __this));
IL2CPP_REGISTER_METHOD(0x0205AC40, void, PostStretching, (FBBIKHeadEffector * __this));
IL2CPP_REGISTER_METHOD(0x0205B2D0, void, LerpSolverPosition, (FBBIKHeadEffector * __this, IKEffector * effector, Vector3 position, float weight, Vector3 offset));
IL2CPP_REGISTER_METHOD(0x0205B560, void, Solve, (FBBIKHeadEffector * __this, Vector3 * pos1, Vector3 * pos2, float nominalDistance));
IL2CPP_REGISTER_METHOD(0x0205B790, void, OnDestroy, (FBBIKHeadEffector * __this));
IL2CPP_REGISTER_METHOD(0x0205BE80, void, __ctor, (FBBIKHeadEffector * __this));
}
