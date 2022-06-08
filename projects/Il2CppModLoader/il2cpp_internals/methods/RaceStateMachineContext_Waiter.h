#include <interception_macros.h>

namespace app::methods::RaceStateMachineContext_Waiter {
IL2CPP_REGISTER_METHOD(0x0071BBD0, void, __ctor, (RaceStateMachineContext_Waiter * __this, float timeleft, RaceStateMachineContext * context));
IL2CPP_REGISTER_METHOD(0x0071BBE0, bool, get_Finished, (RaceStateMachineContext_Waiter * __this));
IL2CPP_REGISTER_METHOD(0x0071BBF0, bool, UpdateAndCheckIfFinished, (RaceStateMachineContext_Waiter * __this));
}
