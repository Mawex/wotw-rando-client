#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__FindOverlay {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_FindOverlay * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02AD6B00, EVROverlayError__Enum, Invoke, (IVROverlay_FindOverlay * __this, String * pchOverlayKey, uint64_t * pOverlayHandle));
IL2CPP_REGISTER_METHOD(0x02D79B90, IAsyncResult *, BeginInvoke, (IVROverlay_FindOverlay * __this, String * pchOverlayKey, uint64_t * pOverlayHandle, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_FindOverlay * __this, uint64_t * pOverlayHandle, IAsyncResult * result));
}
