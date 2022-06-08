using namespace app;

namespace app::methods::FloatZone {
IL2CPP_REGISTER_METHOD(0x01271F20, void, Awake, (FloatZone * __this));
IL2CPP_REGISTER_METHOD(0x012721C0, void, OnDestroy, (FloatZone * __this));
IL2CPP_REGISTER_METHOD(0x01272260, void, OnEnable, (FloatZone * __this));
IL2CPP_REGISTER_METHOD(0x01272320, void, OnDisable, (FloatZone * __this));
IL2CPP_REGISTER_METHOD(0x012723E0, void, FixedUpdate, (FloatZone * __this));
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_IsSuspended, (FloatZone * __this));
IL2CPP_REGISTER_METHOD(0x006DC040, void, set_IsSuspended, (FloatZone * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006DC050, SuspendableMask__Enum, get_Mask, (FloatZone * __this));
IL2CPP_REGISTER_METHOD(0x01272700, void, set_Mask, (FloatZone * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x012727B0, void, UpdateBoundingRectangle, (FloatZone * __this));
IL2CPP_REGISTER_METHOD(0x0043D9A0, SelectableCategory__Enum, get_Category, (FloatZone * __this));
IL2CPP_REGISTER_METHOD(0x01272AD0, void, __ctor, (FloatZone * __this));
IL2CPP_REGISTER_METHOD(0x01272B00, void, __cctor, (MethodInfo * method));
}
