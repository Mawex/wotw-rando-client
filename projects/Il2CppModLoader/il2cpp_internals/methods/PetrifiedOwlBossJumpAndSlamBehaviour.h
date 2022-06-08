#include <interception_macros.h>

namespace app::methods::PetrifiedOwlBossJumpAndSlamBehaviour {
IL2CPP_REGISTER_METHOD(0x00660430, StateMachine_2 *, get_StateMachine, (PetrifiedOwlBossJumpAndSlamBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B0220, PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet *, get_States, (PetrifiedOwlBossJumpAndSlamBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x017744F0, void, InitializeCancellableController, (PetrifiedOwlBossJumpAndSlamBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01765C10, void, InitializeHitReactionController, (PetrifiedOwlBossJumpAndSlamBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01774580, void, OnEntityInitialized, (PetrifiedOwlBossJumpAndSlamBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x017749D0, void, OnEnter, (PetrifiedOwlBossJumpAndSlamBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01766290, BehaviourStatus__Enum, OnExecute, (PetrifiedOwlBossJumpAndSlamBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01766390, void, OnExit, (PetrifiedOwlBossJumpAndSlamBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01774A20, void, __ctor, (PetrifiedOwlBossJumpAndSlamBehaviour * __this));
}
