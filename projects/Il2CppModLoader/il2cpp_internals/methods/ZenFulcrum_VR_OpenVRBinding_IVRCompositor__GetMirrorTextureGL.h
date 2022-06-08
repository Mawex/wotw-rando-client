using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetMirrorTextureGL {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRCompositor_GetMirrorTextureGL * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C7A6D0, EVRCompositorError__Enum, Invoke, (IVRCompositor_GetMirrorTextureGL * __this, EVREye__Enum eEye, uint32_t * pglTextureId, void * pglSharedTextureHandle));
IL2CPP_REGISTER_METHOD(0x02F42540, IAsyncResult *, BeginInvoke, (IVRCompositor_GetMirrorTextureGL * __this, EVREye__Enum eEye, uint32_t * pglTextureId, void * pglSharedTextureHandle, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRCompositorError__Enum, EndInvoke, (IVRCompositor_GetMirrorTextureGL * __this, uint32_t * pglTextureId, IAsyncResult * result));
}
