using namespace app;

namespace app::methods::ActionWithDuration {
IL2CPP_REGISTER_METHOD(0x004C6DA0, void, Awake, (ActionWithDuration * __this));
IL2CPP_REGISTER_METHOD(0x004C6E40, void, OnDestroy, (ActionWithDuration * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (ActionWithDuration * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (ActionWithDuration * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, (ActionWithDuration * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FC830, SuspendableMask__Enum, get_Mask, (ActionWithDuration * __this));
IL2CPP_REGISTER_METHOD(0x004C6EE0, void, set_Mask, (ActionWithDuration * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0043BB90, void, __ctor, (ActionWithDuration * __this));
}
