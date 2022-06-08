#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVRSystem__PollNextEventPacked {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (CVRSystem_PollNextEventPacked * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0167DDE0, bool, Invoke, (CVRSystem_PollNextEventPacked * __this, VREvent_t_Packed * pEvent, uint32_t uncbVREvent));
IL2CPP_REGISTER_METHOD(0x0167E150, IAsyncResult *, BeginInvoke, (CVRSystem_PollNextEventPacked * __this, VREvent_t_Packed * pEvent, uint32_t uncbVREvent, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (CVRSystem_PollNextEventPacked * __this, VREvent_t_Packed * pEvent, IAsyncResult * result));
}
