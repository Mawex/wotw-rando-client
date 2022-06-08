using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__Submit {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRCompositor_Submit * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEA590, EVRCompositorError__Enum, Invoke, (IVRCompositor_Submit * __this, EVREye__Enum eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags__Enum nSubmitFlags));
IL2CPP_REGISTER_METHOD(0x02F43380, IAsyncResult *, BeginInvoke, (IVRCompositor_Submit * __this, EVREye__Enum eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags__Enum nSubmitFlags, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, EVRCompositorError__Enum, EndInvoke, (IVRCompositor_Submit * __this, Texture_t * pTexture, VRTextureBounds_t * pBounds, IAsyncResult * result));
}
