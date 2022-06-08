#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSettings__SetFloat {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSettings_SetFloat * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE8AB0, void, Invoke, (IVRSettings_SetFloat * __this, String * pchSection, String * pchSettingsKey, float flValue, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x02CE9100, IAsyncResult *, BeginInvoke, (IVRSettings_SetFloat * __this, String * pchSection, String * pchSettingsKey, float flValue, EVRSettingsError__Enum * peError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (IVRSettings_SetFloat * __this, EVRSettingsError__Enum * peError, IAsyncResult * result));
}
