using namespace app;

namespace app::methods::System::Configuration::SettingChangingEventHandler {
IL2CPP_REGISTER_METHOD(0x029622F0, void, __ctor, (SettingChangingEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHODINFO(0x04749B98, SettingChangingEventHandler__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962320, void, Invoke, (SettingChangingEventHandler * __this, Object * sender, SettingChangingEventArgs * e));
IL2CPP_REGISTER_METHODINFO(0x04716BF0, SettingChangingEventHandler_Invoke__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962350, IAsyncResult *, BeginInvoke, (SettingChangingEventHandler * __this, Object * sender, SettingChangingEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHODINFO(0x04734AB0, SettingChangingEventHandler_BeginInvoke__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962380, void, EndInvoke, (SettingChangingEventHandler * __this, IAsyncResult * result));
IL2CPP_REGISTER_METHODINFO(0x04736D18, SettingChangingEventHandler_EndInvoke__MethodInfo);
}
