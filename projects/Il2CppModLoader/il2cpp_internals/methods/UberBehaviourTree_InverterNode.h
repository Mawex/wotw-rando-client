using namespace app;

namespace app::methods::UberBehaviourTree::InverterNode {
IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor, (InverterNode * __this, String * name));
IL2CPP_REGISTER_METHOD(0x013E24C0, BehaviourTreeStatus__Enum, Tick, (InverterNode * __this, TickData tick));
IL2CPP_REGISTER_METHODINFO(0x04736468, InverterNode_Tick__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013E2620, void, AddChild, (InverterNode * __this, IBehaviourTreeNode * child));
IL2CPP_REGISTER_METHODINFO(0x04785ED0, InverterNode_AddChild__MethodInfo);
}
