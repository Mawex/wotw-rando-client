using namespace app;

namespace app::methods::DelayedActionManager {
IL2CPP_REGISTER_METHOD(0x00654950, SuspendableMask__Enum, get_Mask, (DelayedActionManager * __this));
IL2CPP_REGISTER_METHOD(0x00654960, void, set_Mask, (DelayedActionManager * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00446970, bool, get_IsSuspended, (DelayedActionManager * __this));
IL2CPP_REGISTER_METHOD(0x00446980, void, set_IsSuspended, (DelayedActionManager * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00B80700, void, Awake, (DelayedActionManager * __this));
IL2CPP_REGISTER_METHOD(0x00B807A0, void, OnDestroy, (DelayedActionManager * __this));
IL2CPP_REGISTER_METHOD(0x00B80840, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00B808C0, DelayedActionManager *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00B80B10, void, FixedUpdate, (DelayedActionManager * __this));
IL2CPP_REGISTER_METHOD(0x00444DD0, void, __ctor, (DelayedActionManager * __this));
}
