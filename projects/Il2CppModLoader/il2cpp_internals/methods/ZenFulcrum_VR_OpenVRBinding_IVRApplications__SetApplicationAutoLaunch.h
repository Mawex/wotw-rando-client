#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__SetApplicationAutoLaunch {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_SetApplicationAutoLaunch * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0167E660, EVRApplicationError__Enum, Invoke, (IVRApplications_SetApplicationAutoLaunch * __this, String * pchAppKey, bool bAutoLaunch));
IL2CPP_REGISTER_METHOD(0x02F3F630, IAsyncResult *, BeginInvoke, (IVRApplications_SetApplicationAutoLaunch * __this, String * pchAppKey, bool bAutoLaunch, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRApplicationError__Enum, EndInvoke, (IVRApplications_SetApplicationAutoLaunch * __this, IAsyncResult * result));
}
