#include <interception_macros.h>

namespace app::methods::System::Configuration::SettingsSavingEventHandler {
IL2CPP_REGISTER_METHOD(0x01FFE1A0, void, __ctor, (SettingsSavingEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHODINFO(0x047585C0, SettingsSavingEventHandler__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFE1D0, void, Invoke, (SettingsSavingEventHandler * __this, Object * sender, CancelEventArgs * e));
IL2CPP_REGISTER_METHODINFO(0x04749A98, SettingsSavingEventHandler_Invoke__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFE200, IAsyncResult *, BeginInvoke, (SettingsSavingEventHandler * __this, Object * sender, CancelEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHODINFO(0x04752BC8, SettingsSavingEventHandler_BeginInvoke__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFE230, void, EndInvoke, (SettingsSavingEventHandler * __this, IAsyncResult * result));
IL2CPP_REGISTER_METHODINFO(0x04760998, SettingsSavingEventHandler_EndInvoke__MethodInfo);
}
