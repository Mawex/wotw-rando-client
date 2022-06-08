using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSettings__SetString {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSettings_SetString * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02AC84C0, void, Invoke, (IVRSettings_SetString * __this, String * pchSection, String * pchSettingsKey, String * pchValue, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x02CE9910, IAsyncResult *, BeginInvoke, (IVRSettings_SetString * __this, String * pchSection, String * pchSettingsKey, String * pchValue, EVRSettingsError__Enum * peError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (IVRSettings_SetString * __this, EVRSettingsError__Enum * peError, IAsyncResult * result));
}
