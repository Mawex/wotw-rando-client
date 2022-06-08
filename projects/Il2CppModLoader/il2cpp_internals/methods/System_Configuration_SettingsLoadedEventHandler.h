using namespace app;

namespace app::methods::System::Configuration::SettingsLoadedEventHandler {
IL2CPP_REGISTER_METHOD(0x02962C80, void, __ctor, (SettingsLoadedEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHODINFO(0x047230A8, SettingsLoadedEventHandler__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962CB0, void, Invoke, (SettingsLoadedEventHandler * __this, Object * sender, SettingsLoadedEventArgs * e));
IL2CPP_REGISTER_METHODINFO(0x04721990, SettingsLoadedEventHandler_Invoke__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962CE0, IAsyncResult *, BeginInvoke, (SettingsLoadedEventHandler * __this, Object * sender, SettingsLoadedEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHODINFO(0x0475A380, SettingsLoadedEventHandler_BeginInvoke__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962D10, void, EndInvoke, (SettingsLoadedEventHandler * __this, IAsyncResult * result));
IL2CPP_REGISTER_METHODINFO(0x047670D0, SettingsLoadedEventHandler_EndInvoke__MethodInfo);
}
