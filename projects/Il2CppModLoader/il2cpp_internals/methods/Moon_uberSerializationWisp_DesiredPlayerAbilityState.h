#include <interception_macros.h>

namespace app::methods::Moon_uberSerializationWisp::DesiredPlayerAbilityState {
IL2CPP_REGISTER_METHOD(0x00F318D0, bool, IsFulfilled, (app::DesiredPlayerAbilityState * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F319D0, void, WriteDesiredStates, (app::DesiredPlayerAbilityState * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047322D8, DesiredPlayerAbilityState_WriteDesiredStates__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F31B50, void, Revert, (app::DesiredPlayerAbilityState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, IUberState *, get_UberState, (app::DesiredPlayerAbilityState * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F31BF0, String *, get_NiceName, (app::DesiredPlayerAbilityState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::DesiredPlayerAbilityState * this_ptr));
}
