using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__PollNextEvent {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_PollNextEvent * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0167DDE0, bool, Invoke, (IVRSystem_PollNextEvent * __this, VREvent_t * pEvent, uint32_t uncbVREvent));
IL2CPP_REGISTER_METHOD(0x02CEF610, IAsyncResult *, BeginInvoke, (IVRSystem_PollNextEvent * __this, VREvent_t * pEvent, uint32_t uncbVREvent, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (IVRSystem_PollNextEvent * __this, VREvent_t * pEvent, IAsyncResult * result));
}
