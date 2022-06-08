#include <interception_macros.h>

namespace app::methods::ComboMoveStressTest {
IL2CPP_REGISTER_METHOD(0x002FA280, IComboMove *, get_ComboMove, (ComboMoveStressTest * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (ComboMoveStressTest * __this, IComboMove * move));
IL2CPP_REGISTER_METHOD(0x011DE600, void, StartStressTest, (ComboMoveStressTest * __this));
IL2CPP_REGISTER_METHOD(0x011DE6F0, void, StressTestUpdate, (ComboMoveStressTest * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, (ComboMoveStressTest * __this));
IL2CPP_REGISTER_METHOD(0x0052A010, StressTestStatus__Enum, get_StressTestStatus, (ComboMoveStressTest * __this));
IL2CPP_REGISTER_METHOD(0x0052A020, void, set_StressTestStatus, (ComboMoveStressTest * __this, StressTestStatus__Enum value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanExecuteStressTest, (ComboMoveStressTest * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, (ComboMoveStressTest * __this));
IL2CPP_REGISTER_METHOD(0x011DE7C0, String *, get_StressTestName, (ComboMoveStressTest * __this));
}
