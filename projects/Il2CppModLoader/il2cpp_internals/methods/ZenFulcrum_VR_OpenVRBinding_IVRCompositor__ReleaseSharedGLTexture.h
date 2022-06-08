#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__ReleaseSharedGLTexture {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRCompositor_ReleaseSharedGLTexture * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02F42CF0, bool, Invoke, (IVRCompositor_ReleaseSharedGLTexture * __this, uint32_t glTextureId, void * glSharedTextureHandle));
IL2CPP_REGISTER_METHOD(0x02F43060, IAsyncResult *, BeginInvoke, (IVRCompositor_ReleaseSharedGLTexture * __this, uint32_t glTextureId, void * glSharedTextureHandle, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (IVRCompositor_ReleaseSharedGLTexture * __this, IAsyncResult * result));
}
