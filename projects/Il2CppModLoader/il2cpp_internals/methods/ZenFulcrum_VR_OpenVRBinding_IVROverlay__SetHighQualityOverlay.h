#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetHighQualityOverlay {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetHighQualityOverlay * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F55110, EVROverlayError__Enum, Invoke, (IVROverlay_SetHighQualityOverlay * __this, uint64_t ulOverlayHandle));
IL2CPP_REGISTER_METHOD(0x02D7E1A0, IAsyncResult *, BeginInvoke, (IVROverlay_SetHighQualityOverlay * __this, uint64_t ulOverlayHandle, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetHighQualityOverlay * __this, IAsyncResult * result));
}
