#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRApplications__GetApplicationKeyByProcessId {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRApplications_GetApplicationKeyByProcessId * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE3D50, EVRApplicationError__Enum, Invoke, (app::IVRApplications_GetApplicationKeyByProcessId * this_ptr, uint32_t un_process_id, app::String * pch_app_key_buffer, uint32_t un_app_key_buffer_len));
IL2CPP_REGISTER_METHOD(0x02F3D3A0, IAsyncResult *, BeginInvoke, (app::IVRApplications_GetApplicationKeyByProcessId * this_ptr, uint32_t un_process_id, app::String * pch_app_key_buffer, uint32_t un_app_key_buffer_len, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRApplicationError__Enum, EndInvoke, (app::IVRApplications_GetApplicationKeyByProcessId * this_ptr, app::IAsyncResult * result));
}
