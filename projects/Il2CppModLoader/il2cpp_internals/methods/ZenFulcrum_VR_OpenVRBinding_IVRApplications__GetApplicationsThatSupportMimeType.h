#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationsThatSupportMimeType {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_GetApplicationsThatSupportMimeType * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE4E30, uint32_t, Invoke, (IVRApplications_GetApplicationsThatSupportMimeType * __this, String * pchMimeType, String * pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer));
IL2CPP_REGISTER_METHOD(0x02F3EBC0, IAsyncResult *, BeginInvoke, (IVRApplications_GetApplicationsThatSupportMimeType * __this, String * pchMimeType, String * pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (IVRApplications_GetApplicationsThatSupportMimeType * __this, IAsyncResult * result));
}
