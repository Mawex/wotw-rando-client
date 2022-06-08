#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::FingerRig {
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_initiated, (FingerRig * __this));
IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_initiated, (FingerRig * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02062460, bool, IsValid, (FingerRig * __this, String * * errorMessage));
IL2CPP_REGISTER_METHOD(0x020624F0, void, AutoDetect, (FingerRig * __this));
IL2CPP_REGISTER_METHOD(0x02062980, void, AddFinger, (FingerRig * __this, Transform * bone1, Transform * bone2, Transform * bone3, Transform * tip, Transform * target));
IL2CPP_REGISTER_METHOD(0x02062C60, void, RemoveFinger, (FingerRig * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02062E80, void, AddChildrenRecursive, (FingerRig * __this, Transform * parent, Transform__Array * * array));
IL2CPP_REGISTER_METHOD(0x02063040, void, InitiateSolver, (FingerRig * __this));
IL2CPP_REGISTER_METHOD(0x02063190, void, UpdateFingerSolvers, (FingerRig * __this));
IL2CPP_REGISTER_METHOD(0x02063220, void, FixFingerTransforms, (FingerRig * __this));
IL2CPP_REGISTER_METHOD(0x02063190, void, UpdateSolver, (FingerRig * __this));
IL2CPP_REGISTER_METHOD(0x02063220, void, FixTransforms, (FingerRig * __this));
IL2CPP_REGISTER_METHOD(0x02063290, void, __ctor, (FingerRig * __this));
}
