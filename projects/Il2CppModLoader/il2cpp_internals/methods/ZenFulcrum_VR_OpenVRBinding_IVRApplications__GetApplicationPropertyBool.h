#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationPropertyBool {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_GetApplicationPropertyBool * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0254DDD0, bool, Invoke, (IVRApplications_GetApplicationPropertyBool * __this, String * pchAppKey, EVRApplicationProperty__Enum eProperty, EVRApplicationError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x02F3D560, IAsyncResult *, BeginInvoke, (IVRApplications_GetApplicationPropertyBool * __this, String * pchAppKey, EVRApplicationProperty__Enum eProperty, EVRApplicationError__Enum * peError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (IVRApplications_GetApplicationPropertyBool * __this, EVRApplicationError__Enum * peError, IAsyncResult * result));
}
