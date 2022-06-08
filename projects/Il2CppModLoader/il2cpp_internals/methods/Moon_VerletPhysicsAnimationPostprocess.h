#include <interception_macros.h>

namespace app::methods::Moon::VerletPhysicsAnimationPostprocess {
IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (VerletPhysicsAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x007DE870, bool, get_RequiresOnUpdate, (VerletPhysicsAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x02129410, void, OnUpdate, (VerletPhysicsAnimationPostprocess * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x021295B0, void, OnAddedToAnimator, (VerletPhysicsAnimationPostprocess * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x0212ADD0, void, OnRemovedFromAnimator, (VerletPhysicsAnimationPostprocess * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x0212B160, void, OnActivated, (VerletPhysicsAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x0212B2D0, void, Process, (VerletPhysicsAnimationPostprocess * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0212BEF0, void, CompleteNonJobbed, (VerletPhysicsAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x0212C500, void, CompleteJobAndCacheRotations, (VerletPhysicsAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x0212CD30, void, ApplyCalculatedRotations, (VerletPhysicsAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x0212CF30, void, UpdateChainParallel, (VerletPhysicsAnimationPostprocess * __this, float deltaTime, int32_t chainIndex, Vector3 additionalForce, float weight, bool transformDeterminantChanged));
IL2CPP_REGISTER_METHOD(0x0212E450, Vector3, DetectChainBoneDirectionAxis, (VerletPhysicsAnimationPostprocess * __this, JointChains_Chain * chain));
IL2CPP_REGISTER_METHOD(0x0212E7F0, void, __ctor, (VerletPhysicsAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x0212EB90, void, __cctor, ());
}
