using namespace app;

namespace app::methods::UberBehaviourTree::BehaviourStates {
IL2CPP_REGISTER_METHOD(0x013E0160, String *, get_CurrentStateName, (BehaviourStates * __this));
IL2CPP_REGISTER_METHOD(0x00863E90, float, get_CurrentStateTime, (BehaviourStates * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, IBehaviourState *, get_CurrentState, (BehaviourStates * __this));
IL2CPP_REGISTER_METHOD(0x013E0200, BehaviourTreeStatus__Enum, Update, (BehaviourStates * __this, IBehaviourState * state, TickData tick));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (BehaviourStates * __this));
}
