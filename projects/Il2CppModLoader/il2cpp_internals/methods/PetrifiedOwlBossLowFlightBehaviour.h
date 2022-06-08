#include <interception_macros.h>

namespace app::methods::PetrifiedOwlBossLowFlightBehaviour {
IL2CPP_REGISTER_METHOD(0x00660430, StateMachine_2 *, get_StateMachine, (PetrifiedOwlBossLowFlightBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B0220, PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet *, get_States, (PetrifiedOwlBossLowFlightBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x017744F0, void, InitializeCancellableController, (PetrifiedOwlBossLowFlightBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x017792E0, void, OnEntityInitialized, (PetrifiedOwlBossLowFlightBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01779730, void, OnEnter, (PetrifiedOwlBossLowFlightBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01766290, BehaviourStatus__Enum, OnExecute, (PetrifiedOwlBossLowFlightBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01766390, void, OnExit, (PetrifiedOwlBossLowFlightBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x017798D0, void, __ctor, (PetrifiedOwlBossLowFlightBehaviour * __this));
}
