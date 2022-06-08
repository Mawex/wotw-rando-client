#include <interception_macros.h>

namespace app::methods::PetrifiedOwlBossLandBehaviour {
IL2CPP_REGISTER_METHOD(0x002FBD60, StateMachine_2 *, get_StateMachine, (PetrifiedOwlBossLandBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00660430, PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet *, get_States, (PetrifiedOwlBossLandBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x017757E0, void, CopyData, (PetrifiedOwlBossLandBehaviour * __this, PetrifiedOwlBossBaseBehaviour * other));
IL2CPP_REGISTER_METHOD(0x017758D0, void, OnEntityInitialized, (PetrifiedOwlBossLandBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01775BE0, void, OnEnter, (PetrifiedOwlBossLandBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01775C50, BehaviourStatus__Enum, OnExecute, (PetrifiedOwlBossLandBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01775D50, void, OnExit, (PetrifiedOwlBossLandBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01775D90, void, __ctor, (PetrifiedOwlBossLandBehaviour * __this));
}
