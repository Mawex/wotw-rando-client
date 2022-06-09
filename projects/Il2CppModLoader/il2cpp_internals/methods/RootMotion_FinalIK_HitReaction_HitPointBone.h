#include <interception_macros.h>

namespace app::methods::RootMotion_FinalIK::HitReaction_HitPointBone {
    IL2CPP_REGISTER_METHOD(0x02076790, float, GetLength, (app::HitReaction_HitPointBone * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02076910, void, CrossFadeStart, (app::HitReaction_HitPointBone * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02076970, void, OnApply, (app::HitReaction_HitPointBone * this_ptr, app::IKSolverFullBodyBiped * solver, float weight));
    IL2CPP_REGISTER_METHOD(0x02076780, void, __ctor, (app::HitReaction_HitPointBone * this_ptr));
}
