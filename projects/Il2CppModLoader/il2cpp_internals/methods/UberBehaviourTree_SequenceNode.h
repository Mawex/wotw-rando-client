#include <interception_macros.h>

namespace app::methods::UberBehaviourTree::SequenceNode {
IL2CPP_REGISTER_METHOD(0x013E3310, void, __ctor, (SequenceNode_2 * __this, String * name));
IL2CPP_REGISTER_METHOD(0x013E3470, BehaviourTreeStatus__Enum, Tick, (SequenceNode_2 * __this, TickData tick));
IL2CPP_REGISTER_METHOD(0x013E3690, void, AddChild, (SequenceNode_2 * __this, IBehaviourTreeNode * child));
}
