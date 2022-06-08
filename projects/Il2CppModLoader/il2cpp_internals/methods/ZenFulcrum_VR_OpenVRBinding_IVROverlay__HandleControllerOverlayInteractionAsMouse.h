#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__HandleControllerOverlayInteractionAsMouse {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_HandleControllerOverlayInteractionAsMouse * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0167DDE0, bool, Invoke, (IVROverlay_HandleControllerOverlayInteractionAsMouse * __this, uint64_t ulOverlayHandle, uint32_t unControllerDeviceIndex));
IL2CPP_REGISTER_METHOD(0x02D7D9B0, IAsyncResult *, BeginInvoke, (IVROverlay_HandleControllerOverlayInteractionAsMouse * __this, uint64_t ulOverlayHandle, uint32_t unControllerDeviceIndex, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (IVROverlay_HandleControllerOverlayInteractionAsMouse * __this, IAsyncResult * result));
}
