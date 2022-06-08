using namespace app;

namespace app::methods::Trigger {
IL2CPP_REGISTER_METHOD(0x00B11420, bool, get_IsSuspended, (Trigger_1 * __this));
IL2CPP_REGISTER_METHOD(0x00B11430, void, set_IsSuspended, (Trigger_1 * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0070DEC0, SuspendableMask__Enum, get_Mask, (Trigger_1 * __this));
IL2CPP_REGISTER_METHOD(0x00B11440, void, set_Mask, (Trigger_1 * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x003FC380, int32_t, get_AmountOfTimesActivated, (Trigger_1 * __this));
IL2CPP_REGISTER_METHOD(0x00A26C10, void, set_AmountOfTimesActivated, (Trigger_1 * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00A20A00, bool, get_IsTriggered, (Trigger_1 * __this));
IL2CPP_REGISTER_METHOD(0x00B11500, void, set_IsTriggered, (Trigger_1 * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006142D0, bool, ShouldCreateCheckpoint, (Trigger_1 * __this));
IL2CPP_REGISTER_METHOD(0x00B11510, void, Reset, (Trigger_1 * __this));
IL2CPP_REGISTER_METHOD(0x00B11580, void, OnEnable, (Trigger_1 * __this));
IL2CPP_REGISTER_METHOD(0x00B11760, void, OnDisable, (Trigger_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTriggerEnable, (Trigger_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTriggerDisable, (Trigger_1 * __this));
IL2CPP_REGISTER_METHOD(0x00B11940, void, OnRestoreCheckpoint, (Trigger_1 * __this));
IL2CPP_REGISTER_METHOD(0x00B11950, void, Update, (Trigger_1 * __this));
IL2CPP_REGISTER_METHOD(0x00B119E0, void, DoTrigger, (Trigger_1 * __this, bool shouldCheckCondition));
IL2CPP_REGISTER_METHOD(0x00B11D00, void, StopTrigger, (Trigger_1 * __this, bool stopTimeline, bool resetTriggerState));
IL2CPP_REGISTER_METHOD(0x00B11E00, void, OnTriggerActivated, (Trigger_1 * __this));
IL2CPP_REGISTER_METHOD(0x00B11EB0, IEnumerator *, ProcessTrigger, (Trigger_1 * __this));
IL2CPP_REGISTER_METHOD(0x00A20A00, bool, Validate, (Trigger_1 * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B12000, void, __ctor, (Trigger_1 * __this));
}
