#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRSystem__GetTimeSinceLastVsync {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSystem_GetTimeSinceLastVsync * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x019D6DD0, bool, Invoke, (app::IVRSystem_GetTimeSinceLastVsync * this_ptr, app::float * pf_seconds_since_last_vsync, app::uint64_t * pul_frame_counter));
IL2CPP_REGISTER_METHOD(0x02CEEBF0, IAsyncResult *, BeginInvoke, (app::IVRSystem_GetTimeSinceLastVsync * this_ptr, app::float * pf_seconds_since_last_vsync, app::uint64_t * pul_frame_counter, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x0167DD00, bool, EndInvoke, (app::IVRSystem_GetTimeSinceLastVsync * this_ptr, app::float * pf_seconds_since_last_vsync, app::uint64_t * pul_frame_counter, app::IAsyncResult * result));
}
