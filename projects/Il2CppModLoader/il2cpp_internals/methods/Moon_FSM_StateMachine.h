using namespace app;

namespace app::methods::Moon::FSM::StateMachine {
IL2CPP_REGISTER_METHOD(0x002FA280, IState *, get_CurrentState, (StateMachine * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_CurrentState, (StateMachine * __this, IState * value));
IL2CPP_REGISTER_METHOD(0x002FB930, Stack_1_Moon_FSM_IInterruptState_ *, get_InterruptStates, (StateMachine * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_InterruptStates, (StateMachine * __this, Stack_1_Moon_FSM_IInterruptState_ * value));
IL2CPP_REGISTER_METHOD(0x02558770, void, __ctor, (StateMachine * __this, IState * initialState));
IL2CPP_REGISTER_METHOD(0x02558900, void, Update, (StateMachine * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x02558B10, void, ProcessState, (StateMachine * __this, IState * state));
IL2CPP_REGISTER_METHOD(0x02558C10, void, ProcessInterrupt, (StateMachine * __this, IInterruptState * interruptState));
IL2CPP_REGISTER_METHOD(0x02558E10, void, ProcessInterruptableState, (StateMachine * __this, IInterruptable * interruptableState));
IL2CPP_REGISTER_METHOD(0x02558F70, void, SwitchState, (StateMachine * __this, IState * nextState));
}
