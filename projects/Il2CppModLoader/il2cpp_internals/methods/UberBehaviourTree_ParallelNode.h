using namespace app;

namespace app::methods::UberBehaviourTree::ParallelNode {
IL2CPP_REGISTER_METHOD(0x013E2A90, void, __ctor, (ParallelNode_1 * __this, String * name, int32_t numRequiredToFail, int32_t numRequiredToSucceed));
IL2CPP_REGISTER_METHOD(0x013E2C00, BehaviourTreeStatus__Enum, Tick, (ParallelNode_1 * __this, TickData tick));
IL2CPP_REGISTER_METHOD(0x013E2E50, void, AddChild, (ParallelNode_1 * __this, IBehaviourTreeNode * child));
}
