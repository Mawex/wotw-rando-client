#include <interception_macros.h>

namespace app::methods::UberBehaviourTree::BehaviourTreeBuilder {
IL2CPP_REGISTER_METHOD(0x013E07F0, BehaviourTreeBuilder *, DoState, (BehaviourTreeBuilder * __this, String * name, IBehaviourState * state));
IL2CPP_REGISTER_METHODINFO(0x04719A68, BehaviourTreeBuilder_DoState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013E0A20, BehaviourTreeBuilder *, Do, (BehaviourTreeBuilder * __this, String * name, Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus_ * fn));
IL2CPP_REGISTER_METHODINFO(0x04789D18, BehaviourTreeBuilder_Do__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013E0C50, BehaviourTreeBuilder *, Condition, (BehaviourTreeBuilder * __this, String * name, Func_2_UberBehaviourTree_TickData_Boolean_ * fn));
IL2CPP_REGISTER_METHOD(0x013E0E90, BehaviourTreeBuilder *, Inverter, (BehaviourTreeBuilder * __this, String * name));
IL2CPP_REGISTER_METHOD(0x013E1060, BehaviourTreeBuilder *, Sequence, (BehaviourTreeBuilder * __this, String * name));
IL2CPP_REGISTER_METHOD(0x013E1360, BehaviourTreeBuilder *, MemSequence, (BehaviourTreeBuilder * __this, String * name));
IL2CPP_REGISTER_METHOD(0x013E1670, BehaviourTreeBuilder *, Parallel, (BehaviourTreeBuilder * __this, String * name, int32_t numRequiredToFail, int32_t numRequiredToSucceed));
IL2CPP_REGISTER_METHOD(0x013E1990, BehaviourTreeBuilder *, Selector, (BehaviourTreeBuilder * __this, String * name));
IL2CPP_REGISTER_METHOD(0x013E1C90, BehaviourTreeBuilder *, Splice, (BehaviourTreeBuilder * __this, IBehaviourTreeNode * subTree));
IL2CPP_REGISTER_METHODINFO(0x0471C620, BehaviourTreeBuilder_Splice__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013E1E00, IBehaviourTreeNode *, Build, (BehaviourTreeBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x04731260, BehaviourTreeBuilder_Build__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013E1EB0, BehaviourTreeBuilder *, End, (BehaviourTreeBuilder * __this));
IL2CPP_REGISTER_METHOD(0x013E1F50, void, __ctor, (BehaviourTreeBuilder * __this));
}
