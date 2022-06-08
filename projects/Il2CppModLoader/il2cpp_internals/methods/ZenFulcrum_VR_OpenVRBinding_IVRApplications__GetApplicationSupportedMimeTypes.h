#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationSupportedMimeTypes {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_GetApplicationSupportedMimeTypes * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02F3E4B0, bool, Invoke, (IVRApplications_GetApplicationSupportedMimeTypes * __this, String * pchAppKey, String * pchMimeTypesBuffer, uint32_t unMimeTypesBuffer));
IL2CPP_REGISTER_METHOD(0x02F3EA20, IAsyncResult *, BeginInvoke, (IVRApplications_GetApplicationSupportedMimeTypes * __this, String * pchAppKey, String * pchMimeTypesBuffer, uint32_t unMimeTypesBuffer, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (IVRApplications_GetApplicationSupportedMimeTypes * __this, IAsyncResult * result));
}
