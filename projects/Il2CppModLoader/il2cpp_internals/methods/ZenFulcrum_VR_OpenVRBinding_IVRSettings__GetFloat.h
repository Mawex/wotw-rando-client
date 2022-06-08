#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSettings__GetFloat {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSettings_GetFloat * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE6B90, float, Invoke, (IVRSettings_GetFloat * __this, String * pchSection, String * pchSettingsKey, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x02CE7100, IAsyncResult *, BeginInvoke, (IVRSettings_GetFloat * __this, String * pchSection, String * pchSettingsKey, EVRSettingsError__Enum * peError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x02CE71E0, float, EndInvoke, (IVRSettings_GetFloat * __this, EVRSettingsError__Enum * peError, IAsyncResult * result));
}
