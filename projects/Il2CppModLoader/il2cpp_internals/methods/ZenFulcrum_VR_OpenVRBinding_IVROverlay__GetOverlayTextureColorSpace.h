#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTextureColorSpace {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayTextureColorSpace * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (IVROverlay_GetOverlayTextureColorSpace * __this, uint64_t ulOverlayHandle, EColorSpace__Enum * peTextureColorSpace));
IL2CPP_REGISTER_METHOD(0x02D7C8E0, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayTextureColorSpace * __this, uint64_t ulOverlayHandle, EColorSpace__Enum * peTextureColorSpace, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetOverlayTextureColorSpace * __this, EColorSpace__Enum * peTextureColorSpace, IAsyncResult * result));
}
