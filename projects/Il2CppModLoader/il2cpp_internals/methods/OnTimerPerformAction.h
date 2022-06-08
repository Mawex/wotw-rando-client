using namespace app;

namespace app::methods::OnTimerPerformAction {
IL2CPP_REGISTER_METHOD(0x006142D0, bool, get_IsSuspended, (OnTimerPerformAction * __this));
IL2CPP_REGISTER_METHOD(0x006142E0, void, set_IsSuspended, (OnTimerPerformAction * __this, bool value));
IL2CPP_REGISTER_METHOD(0x004C6660, SuspendableMask__Enum, get_Mask, (OnTimerPerformAction * __this));
IL2CPP_REGISTER_METHOD(0x006142F0, void, set_Mask, (OnTimerPerformAction * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x006143A0, void, Awake, (OnTimerPerformAction * __this));
IL2CPP_REGISTER_METHOD(0x00614440, void, Start, (OnTimerPerformAction * __this));
IL2CPP_REGISTER_METHOD(0x00614450, void, OnDestroy, (OnTimerPerformAction * __this));
IL2CPP_REGISTER_METHOD(0x006144F0, void, FixedUpdate, (OnTimerPerformAction * __this));
IL2CPP_REGISTER_METHOD(0x006146C0, void, Serialize, (OnTimerPerformAction * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x006146F0, void, __ctor, (OnTimerPerformAction * __this));
}
