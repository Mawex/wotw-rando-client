#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetTransitionState {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_GetTransitionState * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0167F180, EVRApplicationTransitionState__Enum, Invoke, (IVRApplications_GetTransitionState * __this));
IL2CPP_REGISTER_METHOD(0x00611B10, IAsyncResult *, BeginInvoke, (IVRApplications_GetTransitionState * __this, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRApplicationTransitionState__Enum, EndInvoke, (IVRApplications_GetTransitionState * __this, IAsyncResult * result));
}
