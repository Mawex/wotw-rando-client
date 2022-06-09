#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRApplications__GetApplicationsErrorNameFromEnum {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRApplications_GetApplicationsErrorNameFromEnum * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F52080, void *, Invoke, (app::IVRApplications_GetApplicationsErrorNameFromEnum * this_ptr, app::EVRApplicationError__Enum error));
IL2CPP_REGISTER_METHOD(0x02F3EB00, IAsyncResult *, BeginInvoke, (app::IVRApplications_GetApplicationsErrorNameFromEnum * this_ptr, app::EVRApplicationError__Enum error, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F52480, void *, EndInvoke, (app::IVRApplications_GetApplicationsErrorNameFromEnum * this_ptr, app::IAsyncResult * result));
}
