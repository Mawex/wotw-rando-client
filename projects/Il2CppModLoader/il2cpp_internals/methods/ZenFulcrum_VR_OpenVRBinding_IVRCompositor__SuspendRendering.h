using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__SuspendRendering {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRCompositor_SuspendRendering * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01DCB6A0, void, Invoke, (IVRCompositor_SuspendRendering * __this, bool bSuspend));
IL2CPP_REGISTER_METHOD(0x02F43490, IAsyncResult *, BeginInvoke, (IVRCompositor_SuspendRendering * __this, bool bSuspend, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (IVRCompositor_SuspendRendering * __this, IAsyncResult * result));
}
