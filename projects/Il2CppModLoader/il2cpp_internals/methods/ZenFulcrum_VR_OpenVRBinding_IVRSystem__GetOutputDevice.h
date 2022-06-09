#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRSystem__GetOutputDevice {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSystem_GetOutputDevice * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02CED080, void, Invoke, (app::IVRSystem_GetOutputDevice * this_ptr, app::uint64_t * pn_device, app::ETextureType__Enum texture_type, app::void * p_instance));
IL2CPP_REGISTER_METHOD(0x02CED400, IAsyncResult *, BeginInvoke, (app::IVRSystem_GetOutputDevice * this_ptr, app::uint64_t * pn_device, app::ETextureType__Enum texture_type, app::void * p_instance, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (app::IVRSystem_GetOutputDevice * this_ptr, app::uint64_t * pn_device, app::IAsyncResult * result));
}
