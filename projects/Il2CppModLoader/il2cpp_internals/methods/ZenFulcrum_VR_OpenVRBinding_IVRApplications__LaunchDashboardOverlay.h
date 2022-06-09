#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRApplications__LaunchDashboardOverlay {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRApplications_LaunchDashboardOverlay * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x020105B0, EVRApplicationError__Enum, Invoke, (app::IVRApplications_LaunchDashboardOverlay * this_ptr, app::String * pch_app_key));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::IVRApplications_LaunchDashboardOverlay * this_ptr, app::String * pch_app_key, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRApplicationError__Enum, EndInvoke, (app::IVRApplications_LaunchDashboardOverlay * this_ptr, app::IAsyncResult * result));
}
