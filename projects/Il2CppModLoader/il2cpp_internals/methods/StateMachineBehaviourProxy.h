#include <interception_macros.h>

namespace app::methods::StateMachineBehaviourProxy {
IL2CPP_REGISTER_METHOD(0x009B53C0, void, add_OnIntEventAction, (StateMachineBehaviourProxy * __this, Action_1_Int32_ * value));
IL2CPP_REGISTER_METHOD(0x009B54B0, void, remove_OnIntEventAction, (StateMachineBehaviourProxy * __this, Action_1_Int32_ * value));
IL2CPP_REGISTER_METHOD(0x009B55A0, void, add_OnStringEventAction, (StateMachineBehaviourProxy * __this, Action_1_String_ * value));
IL2CPP_REGISTER_METHOD(0x009B5690, void, remove_OnStringEventAction, (StateMachineBehaviourProxy * __this, Action_1_String_ * value));
IL2CPP_REGISTER_METHOD(0x009B5780, StateMachineBehaviourProxy_IReceiver *, get_Receiver, (StateMachineBehaviourProxy * __this));
IL2CPP_REGISTER_METHOD(0x009B5810, void, OnValidate, (StateMachineBehaviourProxy * __this));
IL2CPP_REGISTER_METHOD(0x009B5900, void, OnEvent, (StateMachineBehaviourProxy * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x009B59D0, void, OnStringEvent, (StateMachineBehaviourProxy * __this, String * eventId));
IL2CPP_REGISTER_METHOD(0x009B5AA0, void, __ctor, (StateMachineBehaviourProxy * __this));
}
