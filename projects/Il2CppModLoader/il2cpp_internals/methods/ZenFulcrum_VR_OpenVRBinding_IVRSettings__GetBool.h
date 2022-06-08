#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSettings__GetBool {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSettings_GetBool * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0254B810, bool, Invoke, (IVRSettings_GetBool * __this, String * pchSection, String * pchSettingsKey, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x02CE6AB0, IAsyncResult *, BeginInvoke, (IVRSettings_GetBool * __this, String * pchSection, String * pchSettingsKey, EVRSettingsError__Enum * peError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (IVRSettings_GetBool * __this, EVRSettingsError__Enum * peError, IAsyncResult * result));
}
