#include <interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::WaitNode {
IL2CPP_REGISTER_METHOD(0x00CBB5C0, float, get_TimeRemaining, (WaitNode * __this));
IL2CPP_REGISTER_METHOD(0x00CBB630, float, get_TimeRemainingNormalized, (WaitNode * __this));
IL2CPP_REGISTER_METHOD(0x00CBB680, void, Awake, (WaitNode * __this));
IL2CPP_REGISTER_METHOD(0x03014060, void, OnEnter, (WaitNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CBB7D0, BehaviourStatus__Enum, OnExecute, (WaitNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x030142A0, void, __ctor, (WaitNode * __this));
}
