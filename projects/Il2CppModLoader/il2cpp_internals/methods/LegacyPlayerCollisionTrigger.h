#include <interception_macros.h>

namespace app::methods::LegacyPlayerCollisionTrigger {
IL2CPP_REGISTER_METHOD(0x0043D9A0, SelectableCategory__Enum, get_Category, (LegacyPlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00A2F6B0, void, OnTriggerEnter, (LegacyPlayerCollisionTrigger * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00A2F840, void, OnTriggerEnable, (LegacyPlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00A2F8D0, void, OnTriggerDisable, (LegacyPlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00A17190, void, Awake, (LegacyPlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00A2F960, void, FixedUpdate, (LegacyPlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00A2FEA0, String *, get_StressTestName, (LegacyPlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00A2FF20, void, OnTriggerStartStressTest, (LegacyPlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHODINFO(0x04784438, LegacyPlayerCollisionTrigger_OnTriggerStartStressTest__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A30260, void, StartStressTest, (LegacyPlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00A30450, void, StressTestUpdate, (LegacyPlayerCollisionTrigger * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00A30540, void, EndStressTest, (LegacyPlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00855600, StressTestStatus__Enum, get_StressTestStatus, (LegacyPlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00A15650, void, set_StressTestStatus, (LegacyPlayerCollisionTrigger * __this, StressTestStatus__Enum value));
IL2CPP_REGISTER_METHOD(0x00A306D0, bool, get_CanExecuteStressTest, (LegacyPlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_StopMovingPlayerWhilePerforming, (LegacyPlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00611C70, void, __ctor, (LegacyPlayerCollisionTrigger * __this));
}
