using namespace app;

namespace app::methods::fsm::TransitionManager {
IL2CPP_REGISTER_METHOD(0x00F70AD0, TransitionManager_1 *, AddTransition, (TransitionManager_1 * __this, IState_2 * from, IState_2 * to, ICondition * condition, IAction * action, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F70E00, TransitionManager_1 *, AddTransition, (TransitionManager_1 * __this, IState_2 * from, IState_2 * to, Func_1_Boolean_ * condition, Action * action, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F71050, bool, Process, (TransitionManager_1 * __this, StateMachine_2 * stateMachine));
IL2CPP_REGISTER_METHOD(0x00F71270, bool, ProcessTransitionList, (TransitionManager_1 * __this, StateMachine_2 * stateMachine, List_1_fsm_Transition_ * conditionAndStatePairList));
IL2CPP_REGISTER_METHOD(0x00F713C0, void, __ctor, (TransitionManager_1 * __this));
}
