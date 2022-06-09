#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__GetTransformForOverlayCoordinates {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_GetTransformForOverlayCoordinates * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02D7D490, EVROverlayError__Enum, Invoke, (app::IVROverlay_GetTransformForOverlayCoordinates * this_ptr, uint64_t ul_overlay_handle, app::ETrackingUniverseOrigin__Enum e_tracking_origin, app::HmdVector2_t coordinates_in_overlay, app::HmdMatrix34_t * pmat_transform));
IL2CPP_REGISTER_METHOD(0x02D7D8A0, IAsyncResult *, BeginInvoke, (app::IVROverlay_GetTransformForOverlayCoordinates * this_ptr, uint64_t ul_overlay_handle, app::ETrackingUniverseOrigin__Enum e_tracking_origin, app::HmdVector2_t coordinates_in_overlay, app::HmdMatrix34_t * pmat_transform, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetTransformForOverlayCoordinates * this_ptr, app::HmdMatrix34_t * pmat_transform, app::IAsyncResult * result));
}
