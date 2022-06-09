#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE61E0, EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters * this_ptr, uint64_t ul_overlay_handle, app::float * pf_min_distance_in_meters, app::float * pf_max_distance_in_meters));
IL2CPP_REGISTER_METHOD(0x02D7A430, IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters * this_ptr, uint64_t ul_overlay_handle, app::float * pf_min_distance_in_meters, app::float * pf_max_distance_in_meters, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters * this_ptr, app::float * pf_min_distance_in_meters, app::float * pf_max_distance_in_meters, app::IAsyncResult * result));
}
