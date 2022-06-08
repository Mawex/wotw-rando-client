#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetKeyboardTransformAbsolute {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetKeyboardTransformAbsolute * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (IVROverlay_SetKeyboardTransformAbsolute * __this, ETrackingUniverseOrigin__Enum eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform));
IL2CPP_REGISTER_METHOD(0x02D7E780, IAsyncResult *, BeginInvoke, (IVROverlay_SetKeyboardTransformAbsolute * __this, ETrackingUniverseOrigin__Enum eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (IVROverlay_SetKeyboardTransformAbsolute * __this, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform, IAsyncResult * result));
}
