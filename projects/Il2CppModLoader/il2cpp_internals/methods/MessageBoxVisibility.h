using namespace app;

namespace app::methods::MessageBoxVisibility {
IL2CPP_REGISTER_METHOD(0x015935D0, bool, get_Visible, (MessageBoxVisibility * __this));
IL2CPP_REGISTER_METHOD(0x015935E0, void, Awake, (MessageBoxVisibility * __this));
IL2CPP_REGISTER_METHOD(0x01593950, void, OnDestroy, (MessageBoxVisibility * __this));
IL2CPP_REGISTER_METHOD(0x01593BF0, void, OnDisable, (MessageBoxVisibility * __this));
IL2CPP_REGISTER_METHOD(0x01593C10, void, Recache, (MessageBoxVisibility * __this));
IL2CPP_REGISTER_METHODINFO(0x04791FC8, MessageBoxVisibility_Recache__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01593C50, void, Cache, (MessageBoxVisibility * __this));
IL2CPP_REGISTER_METHOD(0x01593E80, void, Start, (MessageBoxVisibility * __this));
IL2CPP_REGISTER_METHOD(0x01593ED0, Vector3, Flatten, (MessageBoxVisibility * __this, Vector3 v));
IL2CPP_REGISTER_METHOD(0x01593F00, void, Advance, (MessageBoxVisibility * __this));
IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_IsSuspended, (MessageBoxVisibility * __this));
IL2CPP_REGISTER_METHOD(0x00800850, void, set_IsSuspended, (MessageBoxVisibility * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0057A5A0, SuspendableMask__Enum, get_Mask, (MessageBoxVisibility * __this));
IL2CPP_REGISTER_METHOD(0x01594350, void, set_Mask, (MessageBoxVisibility * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x01594410, void, FixedUpdate, (MessageBoxVisibility * __this));
IL2CPP_REGISTER_METHOD(0x01594430, void, ShowMessageScreen, (MessageBoxVisibility * __this));
IL2CPP_REGISTER_METHOD(0x01594450, void, HideMessageScreen, (MessageBoxVisibility * __this));
IL2CPP_REGISTER_METHOD(0x01594470, void, HideMessageScreenImmediately, (MessageBoxVisibility * __this));
IL2CPP_REGISTER_METHOD(0x01594430, void, ResetWaitDuration, (MessageBoxVisibility * __this));
IL2CPP_REGISTER_METHOD(0x01594580, void, ResetWaitDuration, (MessageBoxVisibility * __this, float waitDuration));
IL2CPP_REGISTER_METHOD(0x015945C0, void, HideImmediately, (MessageBoxVisibility * __this));
IL2CPP_REGISTER_METHOD(0x015945F0, void, SetOpacity, (MessageBoxVisibility * __this, float opacity));
IL2CPP_REGISTER_METHOD(0x015948D0, void, __ctor, (MessageBoxVisibility * __this));
}
