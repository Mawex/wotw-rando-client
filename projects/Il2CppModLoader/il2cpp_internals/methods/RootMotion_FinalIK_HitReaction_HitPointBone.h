#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::HitReaction_HitPointBone {
IL2CPP_REGISTER_METHOD(0x02076790, float, GetLength, (HitReaction_HitPointBone * __this));
IL2CPP_REGISTER_METHOD(0x02076910, void, CrossFadeStart, (HitReaction_HitPointBone * __this));
IL2CPP_REGISTER_METHOD(0x02076970, void, OnApply, (HitReaction_HitPointBone * __this, IKSolverFullBodyBiped * solver, float weight));
IL2CPP_REGISTER_METHOD(0x02076780, void, __ctor, (HitReaction_HitPointBone * __this));
}
