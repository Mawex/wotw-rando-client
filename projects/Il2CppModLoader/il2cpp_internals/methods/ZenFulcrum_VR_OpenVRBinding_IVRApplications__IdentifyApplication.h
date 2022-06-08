#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__IdentifyApplication {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_IdentifyApplication * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F51B50, EVRApplicationError__Enum, Invoke, (IVRApplications_IdentifyApplication * __this, uint32_t unProcessId, String * pchAppKey));
IL2CPP_REGISTER_METHOD(0x02F3EF10, IAsyncResult *, BeginInvoke, (IVRApplications_IdentifyApplication * __this, uint32_t unProcessId, String * pchAppKey, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRApplicationError__Enum, EndInvoke, (IVRApplications_IdentifyApplication * __this, IAsyncResult * result));
}
