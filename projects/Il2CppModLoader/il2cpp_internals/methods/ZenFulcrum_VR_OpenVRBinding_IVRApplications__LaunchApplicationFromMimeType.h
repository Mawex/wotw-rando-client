#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__LaunchApplicationFromMimeType {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_LaunchApplicationFromMimeType * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02C7EDC0, EVRApplicationError__Enum, Invoke, (IVRApplications_LaunchApplicationFromMimeType * __this, String * pchMimeType, String * pchArgs));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (IVRApplications_LaunchApplicationFromMimeType * __this, String * pchMimeType, String * pchArgs, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRApplicationError__Enum, EndInvoke, (IVRApplications_LaunchApplicationFromMimeType * __this, IAsyncResult * result));
}
