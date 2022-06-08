using namespace app;

namespace app::methods::Moon::InteractionGraph::TransitionManager {
IL2CPP_REGISTER_METHOD(0x01994540, TransitionManager *, AddTransition, (TransitionManager * __this, IState_1 * from, IState_1 * to, ICondition * condition, IContext * context));
IL2CPP_REGISTER_METHOD(0x01994860, TransitionManager *, AddTransition, (TransitionManager * __this, IState_1 * from, IState_1 * to, Func_1_Boolean_ * condition, IContext * context));
IL2CPP_REGISTER_METHOD(0x019949E0, bool, Process, (TransitionManager * __this, StateMachine_1 * stateMachine));
IL2CPP_REGISTER_METHOD(0x01994BE0, bool, ProcessTransitionList, (TransitionManager * __this, StateMachine_1 * stateMachine, List_1_Moon_InteractionGraph_Transition_ * conditionAndStatePairList));
IL2CPP_REGISTER_METHOD(0x01994D00, void, __ctor, (TransitionManager * __this));
}
