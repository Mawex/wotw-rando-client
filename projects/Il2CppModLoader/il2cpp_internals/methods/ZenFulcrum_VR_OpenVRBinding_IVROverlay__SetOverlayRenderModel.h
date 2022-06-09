#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__SetOverlayRenderModel {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_SetOverlayRenderModel * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE61E0, EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayRenderModel * this_ptr, uint64_t ul_overlay_handle, app::String * pch_render_model, app::HmdColor_t * p_color));
IL2CPP_REGISTER_METHOD(0x02D80AA0, IAsyncResult *, BeginInvoke, (app::IVROverlay_SetOverlayRenderModel * this_ptr, uint64_t ul_overlay_handle, app::String * pch_render_model, app::HmdColor_t * p_color, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayRenderModel * this_ptr, app::HmdColor_t * p_color, app::IAsyncResult * result));
}
