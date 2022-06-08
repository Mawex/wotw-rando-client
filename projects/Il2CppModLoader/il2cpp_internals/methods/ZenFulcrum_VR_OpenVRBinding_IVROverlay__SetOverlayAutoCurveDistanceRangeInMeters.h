using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D7ECC0, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters * __this, uint64_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters));
IL2CPP_REGISTER_METHOD(0x02D7F0A0, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters * __this, uint64_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters * __this, IAsyncResult * result));
}
