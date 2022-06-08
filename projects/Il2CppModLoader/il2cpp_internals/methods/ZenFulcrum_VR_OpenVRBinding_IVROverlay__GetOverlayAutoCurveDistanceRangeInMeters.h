using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE61E0, EVROverlayError__Enum, Invoke, (IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters * __this, uint64_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters));
IL2CPP_REGISTER_METHOD(0x02D7A430, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters * __this, uint64_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters * __this, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters, IAsyncResult * result));
}
