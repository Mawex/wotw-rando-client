#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MinerDeathReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x01447940, void, OnInitializeTask, (app::MinerDeathReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01447AF0, void, StartDeathTimeline, (app::MinerDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01447CD0, void, EndReaction, (app::MinerDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478FAB8, MinerDeathReactionBehaviour_EndReaction__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01447D10, void, OnEnterTask, (app::MinerDeathReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01448030, app::BehaviourStatus__Enum, OnExecuteTask, (app::MinerDeathReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01448180, void, OnExitTask, (app::MinerDeathReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01448260, void, ChangeShieldRagdollState, (app::MinerDeathReactionBehaviour * this_ptr, bool turn_on, app::Vector3 force))
    IL2CPP_REGISTER_METHOD(0x01448630, void, ctor, (app::MinerDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01448730, void, _ChangeShieldRagdollState_b__21_0, (app::MinerDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047948D0, MinerDeathReactionBehaviour__ChangeShieldRagdollState_b__21_0__MethodInfo)
} // namespace app::classes::MinerDeathReactionBehaviour
