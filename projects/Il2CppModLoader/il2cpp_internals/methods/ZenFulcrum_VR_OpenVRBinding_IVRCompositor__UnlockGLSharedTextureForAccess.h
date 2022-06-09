#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRCompositor__UnlockGLSharedTextureForAccess {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRCompositor_UnlockGLSharedTextureForAccess * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (app::IVRCompositor_UnlockGLSharedTextureForAccess * this_ptr, app::void * gl_shared_texture_handle));
IL2CPP_REGISTER_METHOD(0x02D77BB0, IAsyncResult *, BeginInvoke, (app::IVRCompositor_UnlockGLSharedTextureForAccess * this_ptr, app::void * gl_shared_texture_handle, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRCompositor_UnlockGLSharedTextureForAccess * this_ptr, app::IAsyncResult * result));
}
