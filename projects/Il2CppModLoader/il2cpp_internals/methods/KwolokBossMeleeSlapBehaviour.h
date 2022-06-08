#include <interception_macros.h>

namespace app::methods::KwolokBossMeleeSlapBehaviour {
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionStayAtRangeAllowed, (KwolokBossMeleeSlapBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FixedUpdate, (KwolokBossMeleeSlapBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E0B60, void, InitializeCancellableController, (KwolokBossMeleeSlapBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E7D40, void, OnEnter, (KwolokBossMeleeSlapBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012E0C90, BehaviourStatus__Enum, OnExecute, (KwolokBossMeleeSlapBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012E8090, void, OnExit, (KwolokBossMeleeSlapBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012E8240, float, ComputeUtility, (KwolokBossMeleeSlapBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00965980, void, InitializeHitReactionController, (KwolokBossMeleeSlapBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E83C0, void, ModifyLookAngle, (KwolokBossMeleeSlapBehaviour * __this, float * angle));
IL2CPP_REGISTER_METHODINFO(0x04709F58, KwolokBossMeleeSlapBehaviour_ModifyLookAngle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012E83F0, void, UpdateDetectionRectangle, (KwolokBossMeleeSlapBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E8600, Enum__Array *, GetEntries, (KwolokBossMeleeSlapBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E86A0, Enum, Evaluate, (KwolokBossMeleeSlapBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (KwolokBossMeleeSlapBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E28D0, void, __ctor, (KwolokBossMeleeSlapBehaviour * __this));
}
