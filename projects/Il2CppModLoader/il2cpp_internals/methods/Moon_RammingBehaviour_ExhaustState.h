#include <interception_macros.h>

namespace app::methods::Moon::RammingBehaviour_ExhaustState {
IL2CPP_REGISTER_METHOD(0x00C52540, String *, get_StateName, (RammingBehaviour_ExhaustState * __this));
IL2CPP_REGISTER_METHOD(0x00C525C0, void, __ctor, (RammingBehaviour_ExhaustState * __this, RammingBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x00C52600, void, OnEnter, (RammingBehaviour_ExhaustState * __this));
IL2CPP_REGISTER_METHOD(0x00C52830, void, UpdateState, (RammingBehaviour_ExhaustState * __this));
IL2CPP_REGISTER_METHOD(0x00C52890, void, OnExit, (RammingBehaviour_ExhaustState * __this));
IL2CPP_REGISTER_METHOD(0x00C52A60, void, OnTransitionFinished, (RammingBehaviour_ExhaustState * __this));
IL2CPP_REGISTER_METHODINFO(0x047454C8, RammingBehaviour_ExhaustState_OnTransitionFinished__MethodInfo);
}
