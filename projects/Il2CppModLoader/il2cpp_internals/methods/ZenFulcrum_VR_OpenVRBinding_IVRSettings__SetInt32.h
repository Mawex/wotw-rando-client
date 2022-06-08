#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSettings__SetInt32 {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSettings_SetInt32 * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE9200, void, Invoke, (IVRSettings_SetInt32 * __this, String * pchSection, String * pchSettingsKey, int32_t nValue, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x02CE9820, IAsyncResult *, BeginInvoke, (IVRSettings_SetInt32 * __this, String * pchSection, String * pchSettingsKey, int32_t nValue, EVRSettingsError__Enum * peError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (IVRSettings_SetInt32 * __this, EVRSettingsError__Enum * peError, IAsyncResult * result));
}
