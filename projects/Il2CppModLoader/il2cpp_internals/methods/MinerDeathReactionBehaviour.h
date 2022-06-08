using namespace app;

namespace app::methods::MinerDeathReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x01447940, void, OnInitializeTask, (MinerDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01447AF0, void, StartDeathTimeline, (MinerDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01447CD0, void, EndReaction, (MinerDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0478FAB8, MinerDeathReactionBehaviour_EndReaction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01447D10, void, OnEnterTask, (MinerDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01448030, BehaviourStatus__Enum, OnExecuteTask, (MinerDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01448180, void, OnExitTask, (MinerDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01448260, void, ChangeShieldRagdollState, (MinerDeathReactionBehaviour * __this, bool turnOn, Vector3 force));
IL2CPP_REGISTER_METHOD(0x01448630, void, __ctor, (MinerDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01448730, void, _ChangeShieldRagdollState_b__21_0, (MinerDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047948D0, MinerDeathReactionBehaviour__ChangeShieldRagdollState_b__21_0__MethodInfo);
}
