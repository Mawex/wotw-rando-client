#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationProcessId {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_GetApplicationProcessId * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x020105B0, uint32_t, Invoke, (IVRApplications_GetApplicationProcessId * __this, String * pchAppKey));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (IVRApplications_GetApplicationProcessId * __this, String * pchAppKey, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (IVRApplications_GetApplicationProcessId * __this, IAsyncResult * result));
}
