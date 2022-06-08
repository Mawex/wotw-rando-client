#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetDefaultApplicationForMimeType {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_GetDefaultApplicationForMimeType * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02F3E4B0, bool, Invoke, (IVRApplications_GetDefaultApplicationForMimeType * __this, String * pchMimeType, String * pchAppKeyBuffer, uint32_t unAppKeyBufferLen));
IL2CPP_REGISTER_METHOD(0x02F3ED60, IAsyncResult *, BeginInvoke, (IVRApplications_GetDefaultApplicationForMimeType * __this, String * pchMimeType, String * pchAppKeyBuffer, uint32_t unAppKeyBufferLen, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (IVRApplications_GetDefaultApplicationForMimeType * __this, IAsyncResult * result));
}
