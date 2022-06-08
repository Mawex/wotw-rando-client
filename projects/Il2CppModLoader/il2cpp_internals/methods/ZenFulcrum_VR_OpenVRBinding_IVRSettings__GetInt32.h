#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSettings__GetInt32 {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSettings_GetInt32 * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE72C0, int32_t, Invoke, (IVRSettings_GetInt32 * __this, String * pchSection, String * pchSettingsKey, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x02CE7840, IAsyncResult *, BeginInvoke, (IVRSettings_GetInt32 * __this, String * pchSection, String * pchSettingsKey, EVRSettingsError__Enum * peError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, int32_t, EndInvoke, (IVRSettings_GetInt32 * __this, EVRSettingsError__Enum * peError, IAsyncResult * result));
}
