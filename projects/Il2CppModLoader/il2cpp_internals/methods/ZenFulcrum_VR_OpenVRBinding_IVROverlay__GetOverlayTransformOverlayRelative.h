#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTransformOverlayRelative {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayTransformOverlayRelative * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE61E0, EVROverlayError__Enum, Invoke, (IVROverlay_GetOverlayTransformOverlayRelative * __this, uint64_t ulOverlayHandle, uint64_t * ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform));
IL2CPP_REGISTER_METHOD(0x02D7CBC0, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayTransformOverlayRelative * __this, uint64_t ulOverlayHandle, uint64_t * ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetOverlayTransformOverlayRelative * __this, uint64_t * ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform, IAsyncResult * result));
}
