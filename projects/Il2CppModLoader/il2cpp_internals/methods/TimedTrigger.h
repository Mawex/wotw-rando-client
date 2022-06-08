using namespace app;

namespace app::methods::TimedTrigger {
IL2CPP_REGISTER_METHOD(0x010F3F90, bool, get_IsTriggered, (TimedTrigger * __this));
IL2CPP_REGISTER_METHOD(0x010F3FA0, void, OnEnable, (TimedTrigger * __this));
IL2CPP_REGISTER_METHOD(0x010F4150, void, OnDisable, (TimedTrigger * __this));
IL2CPP_REGISTER_METHOD(0x010F4300, void, Start, (TimedTrigger * __this));
IL2CPP_REGISTER_METHOD(0x010F4310, void, FixedUpdate, (TimedTrigger * __this));
IL2CPP_REGISTER_METHOD(0x010F4300, void, OnRestoreCheckpoint, (TimedTrigger * __this));
IL2CPP_REGISTER_METHODINFO(0x0476E958, TimedTrigger_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010F44F0, void, TriggerNow, (TimedTrigger * __this));
IL2CPP_REGISTER_METHOD(0x010F45D0, void, ResetTrigger, (TimedTrigger * __this, bool stopTimeline, bool resetTime));
IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_IsSuspended, (TimedTrigger * __this));
IL2CPP_REGISTER_METHOD(0x004FBAD0, void, set_IsSuspended, (TimedTrigger * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006410F0, SuspendableMask__Enum, get_Mask, (TimedTrigger * __this));
IL2CPP_REGISTER_METHOD(0x010F46B0, void, set_Mask, (TimedTrigger * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x010F3F90, bool, Validate, (TimedTrigger * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010F4760, void, OnDrawGizmos, (TimedTrigger * __this));
IL2CPP_REGISTER_METHOD(0x010F48E0, void, __ctor, (TimedTrigger * __this));
}
