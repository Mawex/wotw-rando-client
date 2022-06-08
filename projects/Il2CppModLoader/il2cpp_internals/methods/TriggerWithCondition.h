using namespace app;

namespace app::methods::TriggerWithCondition {
IL2CPP_REGISTER_METHOD(0x00B143B0, void, Awake, (TriggerWithCondition * __this));
IL2CPP_REGISTER_METHOD(0x00B14450, void, OnDestroy, (TriggerWithCondition * __this));
IL2CPP_REGISTER_METHOD(0x00B144F0, void, FixedUpdate, (TriggerWithCondition * __this));
IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_IsSuspended, (TriggerWithCondition * __this));
IL2CPP_REGISTER_METHOD(0x004C15D0, void, set_IsSuspended, (TriggerWithCondition * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0057AAC0, SuspendableMask__Enum, get_Mask, (TriggerWithCondition * __this));
IL2CPP_REGISTER_METHOD(0x00B14570, void, set_Mask, (TriggerWithCondition * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0057AB80, void, __ctor, (TriggerWithCondition * __this));
}
