#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRCompositor__GetMirrorTextureGL {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRCompositor_GetMirrorTextureGL * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01C7A6D0, EVRCompositorError__Enum, Invoke, (app::IVRCompositor_GetMirrorTextureGL * this_ptr, app::EVREye__Enum e_eye, app::uint32_t * pgl_texture_id, app::void * pgl_shared_texture_handle));
IL2CPP_REGISTER_METHOD(0x02F42540, IAsyncResult *, BeginInvoke, (app::IVRCompositor_GetMirrorTextureGL * this_ptr, app::EVREye__Enum e_eye, app::uint32_t * pgl_texture_id, app::void * pgl_shared_texture_handle, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRCompositorError__Enum, EndInvoke, (app::IVRCompositor_GetMirrorTextureGL * this_ptr, app::uint32_t * pgl_texture_id, app::IAsyncResult * result));
}
