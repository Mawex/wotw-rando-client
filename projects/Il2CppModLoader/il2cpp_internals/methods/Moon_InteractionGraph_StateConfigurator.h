using namespace app;

namespace app::methods::Moon::InteractionGraph::StateConfigurator {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (StateConfigurator * __this, StateMachine_1 * stateMachine, IState_1 * state));
IL2CPP_REGISTER_METHOD(0x01991FC0, StateConfigurator *, AddEvent, (StateConfigurator * __this, int32_t eventId, Action * action));
IL2CPP_REGISTER_METHOD(0x018EFB80, StateConfigurator *, AddTransition, (StateConfigurator * __this, IState_1 * to, ICondition * condition, IContext * context));
IL2CPP_REGISTER_METHOD(0x018EFCB0, StateConfigurator *, AddTransition, (StateConfigurator * __this, IState_1 * to, Func_1_Boolean_ * condition, IContext * context));
IL2CPP_REGISTER_METHOD(0x018EFB80, StateConfigurator *, AddTransition, (StateConfigurator * __this, IState_1 * to, ICondition * condition, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x0475F098, StateConfigurator_AddTransition_2__MethodInfo);
}
