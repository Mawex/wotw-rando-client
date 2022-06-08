#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__PerformApplicationPrelaunchCheck {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_PerformApplicationPrelaunchCheck * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x020105B0, EVRApplicationError__Enum, Invoke, (IVRApplications_PerformApplicationPrelaunchCheck * __this, String * pchAppKey));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (IVRApplications_PerformApplicationPrelaunchCheck * __this, String * pchAppKey, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRApplicationError__Enum, EndInvoke, (IVRApplications_PerformApplicationPrelaunchCheck * __this, IAsyncResult * result));
}
