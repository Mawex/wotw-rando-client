#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSettings__Sync {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSettings_Sync * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE9A00, bool, Invoke, (IVRSettings_Sync * __this, bool bForce, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x02CE9D80, IAsyncResult *, BeginInvoke, (IVRSettings_Sync * __this, bool bForce, EVRSettingsError__Enum * peError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (IVRSettings_Sync * __this, EVRSettingsError__Enum * peError, IAsyncResult * result));
}
