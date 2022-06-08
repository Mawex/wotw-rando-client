using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ComputeOverlayIntersection {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_ComputeOverlayIntersection * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D78E20, bool, Invoke, (IVROverlay_ComputeOverlayIntersection * __this, uint64_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults));
IL2CPP_REGISTER_METHOD(0x02D791C0, IAsyncResult *, BeginInvoke, (IVROverlay_ComputeOverlayIntersection * __this, uint64_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167DD00, bool, EndInvoke, (IVROverlay_ComputeOverlayIntersection * __this, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults, IAsyncResult * result));
}
