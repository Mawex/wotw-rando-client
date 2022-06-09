#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRResources__GetResourceFullPath {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRResources_GetResourceFullPath * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE3470, uint32_t, Invoke, (app::IVRResources_GetResourceFullPath * this_ptr, app::String * pch_resource_name, app::String * pch_resource_type_directory, app::String * pch_path_buffer, uint32_t un_buffer_len));
IL2CPP_REGISTER_METHOD(0x02CE4D40, IAsyncResult *, BeginInvoke, (app::IVRResources_GetResourceFullPath * this_ptr, app::String * pch_resource_name, app::String * pch_resource_type_directory, app::String * pch_path_buffer, uint32_t un_buffer_len, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::IVRResources_GetResourceFullPath * this_ptr, app::IAsyncResult * result));
}
