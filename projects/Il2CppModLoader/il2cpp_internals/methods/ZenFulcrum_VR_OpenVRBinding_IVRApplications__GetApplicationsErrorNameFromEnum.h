#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationsErrorNameFromEnum {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_GetApplicationsErrorNameFromEnum * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F52080, void *, Invoke, (IVRApplications_GetApplicationsErrorNameFromEnum * __this, EVRApplicationError__Enum error));
IL2CPP_REGISTER_METHOD(0x02F3EB00, IAsyncResult *, BeginInvoke, (IVRApplications_GetApplicationsErrorNameFromEnum * __this, EVRApplicationError__Enum error, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F52480, void *, EndInvoke, (IVRApplications_GetApplicationsErrorNameFromEnum * __this, IAsyncResult * result));
}
