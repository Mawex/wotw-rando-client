using namespace app;

namespace app::methods::Moon::InteractionGraph::StateMachine {
IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_CurrentStateTime, (StateMachine_1 * __this));
IL2CPP_REGISTER_METHOD(0x004C87C0, void, set_CurrentStateTime, (StateMachine_1 * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FB930, IState_1 *, get_CurrentState, (StateMachine_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_CurrentState, (StateMachine_1 * __this, IState_1 * value));
IL2CPP_REGISTER_METHOD(0x002FB950, IState_1 *, get_PreviousState, (StateMachine_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_PreviousState, (StateMachine_1 * __this, IState_1 * value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, List_1_Moon_InteractionGraph_IState_ *, get_States, (StateMachine_1 * __this));
IL2CPP_REGISTER_METHOD(0x01992000, void, ChangeState, (StateMachine_1 * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x01992190, void, ChangeState, (StateMachine_1 * __this, IState_1 * state));
IL2CPP_REGISTER_METHODINFO(0x0473BAA0, StateMachine_1_ChangeState_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01992510, void, UpdateState, (StateMachine_1 * __this, float dt));
IL2CPP_REGISTER_METHOD(0x019925B0, StateConfigurator *, Configure, (StateMachine_1 * __this, IState_1 * state));
IL2CPP_REGISTER_METHOD(0x01992700, TransitionManager *, FindTransitionManager, (StateMachine_1 * __this, Type * trigger));
IL2CPP_REGISTER_METHOD(0x01992A40, void, Trigger, (StateMachine_1 * __this, ITrigger * trigger));
IL2CPP_REGISTER_METHOD(0x01992B60, void, AddEvent, (StateMachine_1 * __this, IState_1 * state, int32_t eventId, Action * action));
IL2CPP_REGISTER_METHOD(0x01992DC0, void, TriggerEvent, (StateMachine_1 * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x01992F60, void, RegisterStates, (StateMachine_1 * __this, IState_1__Array * states));
IL2CPP_REGISTER_METHOD(0x01993040, int32_t, StateToIndex, (StateMachine_1 * __this, IState_1 * state));
IL2CPP_REGISTER_METHOD(0x019932A0, IState_1 *, IndexToState, (StateMachine_1 * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01993350, void, __ctor, (StateMachine_1 * __this));
IL2CPP_REGISTER_METHOD(0x015F1C80, Object *, GetCurrentState, (StateMachine_1 * __this));
IL2CPP_REGISTER_METHOD(0x01550340, void, Trigger, (StateMachine_1 * __this));
IL2CPP_REGISTER_METHOD(0x018EFF10, TransitionManager *, GetTransistionManager, (StateMachine_1 * __this));
IL2CPP_REGISTER_METHOD(0x018EFF10, TransitionManager *, GetTransistionManager, (StateMachine_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x04770A20, StateMachine_1_GetTransistionManager_1__MethodInfo);
}
