#include <interception_macros.h>

namespace app::methods::PlayerCollisionTrigger {
IL2CPP_REGISTER_METHOD(0x0043D9A0, SelectableCategory__Enum, get_Category, (PlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0140BD50, void, OnTriggerEnter, (PlayerCollisionTrigger * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x0140BF10, void, OnTriggerExit, (PlayerCollisionTrigger * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x0140BFA0, void, OnTriggerEnable, (PlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0140C030, void, OnTriggerDisable, (PlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0140C0C0, void, Awake, (PlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0140C290, void, FixedUpdate, (PlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0140C7F0, String *, get_StressTestName, (PlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0140C870, void, OnTriggerStartStressTest, (PlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHODINFO(0x047168D8, PlayerCollisionTrigger_OnTriggerStartStressTest__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0140CBB0, void, StartStressTest, (PlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0140CD60, void, StressTestUpdate, (PlayerCollisionTrigger * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0140CE30, void, EndStressTest, (PlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x008519C0, StressTestStatus__Enum, get_StressTestStatus, (PlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x008519D0, void, set_StressTestStatus, (PlayerCollisionTrigger * __this, StressTestStatus__Enum value));
IL2CPP_REGISTER_METHOD(0x0140CFC0, bool, get_CanExecuteStressTest, (PlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_StopMovingPlayerWhilePerforming, (PlayerCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0140D120, void, __ctor, (PlayerCollisionTrigger * __this));
}
