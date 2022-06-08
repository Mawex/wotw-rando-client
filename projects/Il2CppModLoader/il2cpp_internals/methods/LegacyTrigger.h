#include <interception_macros.h>

namespace app::methods::LegacyTrigger {
IL2CPP_REGISTER_METHOD(0x00CA4070, bool, get_IsSuspended, (LegacyTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0112BC00, void, set_IsSuspended, (LegacyTrigger * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FD750, SuspendableMask__Enum, get_Mask, (LegacyTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0112BC10, void, set_Mask, (LegacyTrigger * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00653FB0, int32_t, get_AmountOfTimesActivated, (LegacyTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00881060, void, set_AmountOfTimesActivated, (LegacyTrigger * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0112BCC0, void, Awake, (LegacyTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0112BEA0, void, OnDestroy, (LegacyTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0112C080, void, OnEnable, (LegacyTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0112C0A0, void, OnDisable, (LegacyTrigger * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTriggerEnable, (LegacyTrigger * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTriggerDisable, (LegacyTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0112C0C0, void, OnRestoreCheckpoint, (LegacyTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0112C1A0, void, Update, (LegacyTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0112C230, void, DoTrigger, (LegacyTrigger * __this, bool shouldCheckCondition));
IL2CPP_REGISTER_METHOD(0x0112C620, void, OnTriggerActivated, (LegacyTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0112C6C0, IEnumerator *, ProcessTrigger, (LegacyTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00612390, void, Serialize, (LegacyTrigger * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0112C810, void, __ctor, (LegacyTrigger * __this));
}
