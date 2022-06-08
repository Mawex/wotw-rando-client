using namespace app;

namespace app::methods::RunActionAndWait {
IL2CPP_REGISTER_METHOD(0x013727E0, void, Awake, (RunActionAndWait * __this));
IL2CPP_REGISTER_METHOD(0x01372880, void, OnDestroy, (RunActionAndWait * __this));
IL2CPP_REGISTER_METHOD(0x01372920, void, Perform, (RunActionAndWait * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01372960, void, FixedUpdate, (RunActionAndWait * __this));
IL2CPP_REGISTER_METHOD(0x0098F4A0, bool, get_IsSuspended, (RunActionAndWait * __this));
IL2CPP_REGISTER_METHOD(0x0098F4B0, void, set_IsSuspended, (RunActionAndWait * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FD490, SuspendableMask__Enum, get_Mask, (RunActionAndWait * __this));
IL2CPP_REGISTER_METHOD(0x013729F0, void, set_Mask, (RunActionAndWait * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x01372AA0, void, __ctor, (RunActionAndWait * __this));
}
