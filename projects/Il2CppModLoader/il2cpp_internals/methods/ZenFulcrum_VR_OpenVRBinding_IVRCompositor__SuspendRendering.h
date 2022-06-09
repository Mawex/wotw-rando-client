#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRCompositor__SuspendRendering {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRCompositor_SuspendRendering * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01DCB6A0, void, Invoke, (app::IVRCompositor_SuspendRendering * this_ptr, bool b_suspend));
IL2CPP_REGISTER_METHOD(0x02F43490, IAsyncResult *, BeginInvoke, (app::IVRCompositor_SuspendRendering * this_ptr, bool b_suspend, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRCompositor_SuspendRendering * this_ptr, app::IAsyncResult * result));
}
