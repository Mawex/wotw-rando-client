#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTexture {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayTexture * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D7BE30, EVROverlayError__Enum, Invoke, (IVROverlay_GetOverlayTexture * __this, uint64_t ulOverlayHandle, void * * pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, ETextureType__Enum * pAPIType, EColorSpace__Enum * pColorSpace, VRTextureBounds_t * pTextureBounds));
IL2CPP_REGISTER_METHOD(0x02D7C520, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayTexture * __this, uint64_t ulOverlayHandle, void * * pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, ETextureType__Enum * pAPIType, EColorSpace__Enum * pColorSpace, VRTextureBounds_t * pTextureBounds, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x02D7C6C0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetOverlayTexture * __this, void * * pNativeTextureHandle, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, ETextureType__Enum * pAPIType, EColorSpace__Enum * pColorSpace, VRTextureBounds_t * pTextureBounds, IAsyncResult * result));
}
