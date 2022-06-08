#include <interception_macros.h>

namespace app::methods::MinerInteractionBehaviour {
IL2CPP_REGISTER_METHOD(0x0144C570, void, OnEntityInitialized, (MinerInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0144C810, void, OnEnter, (MinerInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0144CBC0, BehaviourStatus__Enum, OnExecute, (MinerInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0144CBF0, void, OnExit, (MinerInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0144D2C0, void, TransitionInFinished, (MinerInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0144D2D0, void, ChangeState, (MinerInteractionBehaviour * __this, MinerInteractionBehaviour_InteractionStates__Enum state));
IL2CPP_REGISTER_METHODINFO(0x04765948, MinerInteractionBehaviour_ChangeState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0144D5D0, void, Idle, (MinerInteractionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047430F0, MinerInteractionBehaviour_Idle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0144D7D0, void, Talking, (MinerInteractionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047711E0, MinerInteractionBehaviour_Talking__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0144DA30, void, Farewell, (MinerInteractionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04774318, MinerInteractionBehaviour_Farewell__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0144DC90, void, PlayTimeline, (MinerInteractionBehaviour * __this, MoonTimeline * timeline, Action * onFinished));
IL2CPP_REGISTER_METHOD(0x0144DE00, void, OnFarewellDialogStarts, (MinerInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x04702A90, MinerInteractionBehaviour_OnFarewellDialogStarts__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0144DEC0, void, OnTalkDialogStarts, (MinerInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x0475DCA0, MinerInteractionBehaviour_OnTalkDialogStarts__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0144DF80, void, OnAgreedToMoveDialogStarts, (MinerInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x047859E8, MinerInteractionBehaviour_OnAgreedToMoveDialogStarts__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (MinerInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0144E060, void, __ctor, (MinerInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0144D2C0, void, _ChangeState_b__25_0, (MinerInteractionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047015B0, MinerInteractionBehaviour__ChangeState_b__25_0__MethodInfo);
}
