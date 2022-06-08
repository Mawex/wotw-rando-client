using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSettings__SetBool {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSettings_SetBool * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE8390, void, Invoke, (IVRSettings_SetBool * __this, String * pchSection, String * pchSettingsKey, bool bValue, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x02CE89C0, IAsyncResult *, BeginInvoke, (IVRSettings_SetBool * __this, String * pchSection, String * pchSettingsKey, bool bValue, EVRSettingsError__Enum * peError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (IVRSettings_SetBool * __this, EVRSettingsError__Enum * peError, IAsyncResult * result));
}
