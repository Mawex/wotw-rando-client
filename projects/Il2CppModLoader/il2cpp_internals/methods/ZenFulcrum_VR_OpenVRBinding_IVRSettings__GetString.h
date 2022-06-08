#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSettings__GetString {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSettings_GetString * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE79E0, void, Invoke, (IVRSettings_GetString * __this, String * pchSection, String * pchSettingsKey, StringBuilder * pchValue, uint32_t unValueLen, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x02CE80C0, IAsyncResult *, BeginInvoke, (IVRSettings_GetString * __this, String * pchSection, String * pchSettingsKey, StringBuilder * pchValue, uint32_t unValueLen, EVRSettingsError__Enum * peError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (IVRSettings_GetString * __this, EVRSettingsError__Enum * peError, IAsyncResult * result));
}
