#include <interception_macros.h>

namespace app::methods::UberBehaviourTree::BehaviourState {
IL2CPP_REGISTER_METHOD(0x013E0050, void, __ctor, (BehaviourState * __this, String * name, Action * onBegin, Action * onInterrupt, Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus_ * onUpdate));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Name, (BehaviourState * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Name, (BehaviourState * __this, String * value));
IL2CPP_REGISTER_METHOD(0x013E0070, void, OnBegin, (BehaviourState * __this));
IL2CPP_REGISTER_METHOD(0x013E0090, void, OnInterrupt, (BehaviourState * __this));
IL2CPP_REGISTER_METHOD(0x013E00B0, BehaviourTreeStatus__Enum, OnUpdate, (BehaviourState * __this, TickData tick));
}
