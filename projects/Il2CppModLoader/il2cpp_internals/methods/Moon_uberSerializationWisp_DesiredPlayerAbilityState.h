using namespace app;

namespace app::methods::Moon::uberSerializationWisp::DesiredPlayerAbilityState {
IL2CPP_REGISTER_METHOD(0x00F318D0, bool, IsFulfilled, (DesiredPlayerAbilityState * __this));
IL2CPP_REGISTER_METHOD(0x00F319D0, void, WriteDesiredStates, (DesiredPlayerAbilityState * __this));
IL2CPP_REGISTER_METHODINFO(0x047322D8, DesiredPlayerAbilityState_WriteDesiredStates__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F31B50, void, Revert, (DesiredPlayerAbilityState * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, IUberState *, get_UberState, (DesiredPlayerAbilityState * __this));
IL2CPP_REGISTER_METHOD(0x00F31BF0, String *, get_NiceName, (DesiredPlayerAbilityState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DesiredPlayerAbilityState * __this));
}
