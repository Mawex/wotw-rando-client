#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationKeyByProcessId {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_GetApplicationKeyByProcessId * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE3D50, EVRApplicationError__Enum, Invoke, (IVRApplications_GetApplicationKeyByProcessId * __this, uint32_t unProcessId, String * pchAppKeyBuffer, uint32_t unAppKeyBufferLen));
IL2CPP_REGISTER_METHOD(0x02F3D3A0, IAsyncResult *, BeginInvoke, (IVRApplications_GetApplicationKeyByProcessId * __this, uint32_t unProcessId, String * pchAppKeyBuffer, uint32_t unAppKeyBufferLen, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRApplicationError__Enum, EndInvoke, (IVRApplications_GetApplicationKeyByProcessId * __this, IAsyncResult * result));
}
