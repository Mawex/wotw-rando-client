using namespace app;

namespace app::methods::PetrifiedOwlBossEscape1Behaviour {
IL2CPP_REGISTER_METHOD(0x005FDE00, PetrifiedOwlBossEscape1Behaviour_EscapePart *, get_CurrentEscapePart, (PetrifiedOwlBossEscape1Behaviour * __this));
IL2CPP_REGISTER_METHOD(0x017613D0, void, set_CurrentEscapePart, (PetrifiedOwlBossEscape1Behaviour * __this, PetrifiedOwlBossEscape1Behaviour_EscapePart * value));
IL2CPP_REGISTER_METHOD(0x011354B0, StateMachine_2 *, get_StateMachine, (PetrifiedOwlBossEscape1Behaviour * __this));
IL2CPP_REGISTER_METHOD(0x0071EAB0, PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet *, get_States, (PetrifiedOwlBossEscape1Behaviour * __this));
IL2CPP_REGISTER_METHOD(0x017614D0, void, OnEntityInitialized, (PetrifiedOwlBossEscape1Behaviour * __this));
IL2CPP_REGISTER_METHOD(0x01761B70, void, OnEnter, (PetrifiedOwlBossEscape1Behaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01761ED0, BehaviourStatus__Enum, OnExecute, (PetrifiedOwlBossEscape1Behaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01761FD0, void, OnExit, (PetrifiedOwlBossEscape1Behaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x017621F0, void, ResetEscapeParts, (PetrifiedOwlBossEscape1Behaviour * __this));
IL2CPP_REGISTER_METHOD(0x017622F0, void, CheckShouldStartNewPart, (PetrifiedOwlBossEscape1Behaviour * __this));
IL2CPP_REGISTER_METHOD(0x01762420, void, OnBreakArena1Event, (PetrifiedOwlBossEscape1Behaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04736918, PetrifiedOwlBossEscape1Behaviour_OnBreakArena1Event__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017624F0, void, __ctor, (PetrifiedOwlBossEscape1Behaviour * __this));
}
