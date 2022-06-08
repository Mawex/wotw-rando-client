#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTextureColorSpace {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayTextureColorSpace * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F54C90, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayTextureColorSpace * __this, uint64_t ulOverlayHandle, EColorSpace__Enum eTextureColorSpace));
IL2CPP_REGISTER_METHOD(0x02D80FD0, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayTextureColorSpace * __this, uint64_t ulOverlayHandle, EColorSpace__Enum eTextureColorSpace, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayTextureColorSpace * __this, IAsyncResult * result));
}
