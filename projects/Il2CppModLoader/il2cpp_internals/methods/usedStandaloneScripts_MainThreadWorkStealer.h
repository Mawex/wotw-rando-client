#include <interception_macros.h>

namespace app::methods::usedStandaloneScripts::MainThreadWorkStealer {
IL2CPP_REGISTER_METHOD(0x03125FF0, MainThreadWorkStealer_WorkStealingMode__Enum, get_StealingMode, ());
IL2CPP_REGISTER_METHOD(0x03126090, void, set_StealingMode, (MainThreadWorkStealer_WorkStealingMode__Enum value));
IL2CPP_REGISTER_METHOD(0x03126140, MainThreadWorkStealer_TimeBudgetMode__Enum, get_TimeMode, ());
IL2CPP_REGISTER_METHOD(0x031261E0, void, set_TimeMode, (MainThreadWorkStealer_TimeBudgetMode__Enum value));
IL2CPP_REGISTER_METHOD(0x03126290, bool, get_Enabled, ());
IL2CPP_REGISTER_METHOD(0x03126330, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x031263E0, void, TickFrame, ());
IL2CPP_REGISTER_METHODINFO(0x04754D78, MainThreadWorkStealer_TickFrame__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03126710, void, InjectToPlayerLoopEarly, (PlayerLoopSystem * playerLoop));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MainThreadWorkStealer * __this));
IL2CPP_REGISTER_METHOD(0x03126940, void, __cctor, ());
}
