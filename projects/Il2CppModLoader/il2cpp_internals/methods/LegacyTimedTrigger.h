#include <interception_macros.h>

namespace app::methods::LegacyTimedTrigger {
IL2CPP_REGISTER_METHOD(0x00A3C560, void, Awake, (LegacyTimedTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00A3C600, void, OnDestroy, (LegacyTimedTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00A3C6A0, void, Start, (LegacyTimedTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00A3C6B0, void, FixedUpdate, (LegacyTimedTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00A3C8D0, void, TriggerNow, (LegacyTimedTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00A3C8E0, void, Reset, (LegacyTimedTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00A3C8F0, void, Serialize, (LegacyTimedTrigger * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0049C020, bool, get_IsSuspended, (LegacyTimedTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0049C030, void, set_IsSuspended, (LegacyTimedTrigger * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF610, SuspendableMask__Enum, get_Mask, (LegacyTimedTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00A3C920, void, set_Mask, (LegacyTimedTrigger * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00A3C9D0, void, __ctor, (LegacyTimedTrigger * __this));
}
