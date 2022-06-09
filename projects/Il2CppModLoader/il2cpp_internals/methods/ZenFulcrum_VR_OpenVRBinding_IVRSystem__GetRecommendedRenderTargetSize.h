#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRSystem__GetRecommendedRenderTargetSize {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSystem_GetRecommendedRenderTargetSize * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x012E7480, void, Invoke, (app::IVRSystem_GetRecommendedRenderTargetSize * this_ptr, app::uint32_t * pn_width, app::uint32_t * pn_height));
IL2CPP_REGISTER_METHOD(0x02CEE4D0, IAsyncResult *, BeginInvoke, (app::IVRSystem_GetRecommendedRenderTargetSize * this_ptr, app::uint32_t * pn_width, app::uint32_t * pn_height, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x012E78E0, void, EndInvoke, (app::IVRSystem_GetRecommendedRenderTargetSize * this_ptr, app::uint32_t * pn_width, app::uint32_t * pn_height, app::IAsyncResult * result));
}
