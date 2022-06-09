#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRCompositor__ReleaseSharedGLTexture {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRCompositor_ReleaseSharedGLTexture * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02F42CF0, bool, Invoke, (app::IVRCompositor_ReleaseSharedGLTexture * this_ptr, uint32_t gl_texture_id, app::void * gl_shared_texture_handle));
IL2CPP_REGISTER_METHOD(0x02F43060, IAsyncResult *, BeginInvoke, (app::IVRCompositor_ReleaseSharedGLTexture * this_ptr, uint32_t gl_texture_id, app::void * gl_shared_texture_handle, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::IVRCompositor_ReleaseSharedGLTexture * this_ptr, app::IAsyncResult * result));
}
