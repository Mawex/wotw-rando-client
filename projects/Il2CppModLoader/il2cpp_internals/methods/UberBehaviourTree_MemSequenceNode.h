#include <interception_macros.h>

namespace app::methods::UberBehaviourTree::MemSequenceNode {
IL2CPP_REGISTER_METHOD(0x013E26E0, void, __ctor, (MemSequenceNode * __this, String * name));
IL2CPP_REGISTER_METHOD(0x013E2840, BehaviourTreeStatus__Enum, Tick, (MemSequenceNode * __this, TickData tick));
IL2CPP_REGISTER_METHOD(0x0073DA30, void, Reset, (MemSequenceNode * __this, TickData tick));
IL2CPP_REGISTER_METHOD(0x013E29F0, void, AddChild, (MemSequenceNode * __this, IBehaviourTreeNode * child));
}
