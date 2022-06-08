#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__IsOverlayVisible {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_IsOverlayVisible * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02A521E0, bool, Invoke, (IVROverlay_IsOverlayVisible * __this, uint64_t ulOverlayHandle));
IL2CPP_REGISTER_METHOD(0x02D7DCC0, IAsyncResult *, BeginInvoke, (IVROverlay_IsOverlayVisible * __this, uint64_t ulOverlayHandle, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (IVROverlay_IsOverlayVisible * __this, IAsyncResult * result));
}
