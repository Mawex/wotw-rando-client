#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::CVRResources {
IL2CPP_REGISTER_METHOD(0x0167B320, void, __ctor, (app::CVRResources * this_ptr, app::void * p_interface));
IL2CPP_REGISTER_METHOD(0x0167B440, uint32_t, LoadSharedResource, (app::CVRResources * this_ptr, app::String * pch_resource_name, app::String * pch_buffer, uint32_t un_buffer_len));
IL2CPP_REGISTER_METHOD(0x0167B470, uint32_t, GetResourceFullPath, (app::CVRResources * this_ptr, app::String * pch_resource_name, app::String * pch_resource_type_directory, app::String * pch_path_buffer, uint32_t un_buffer_len));
}
