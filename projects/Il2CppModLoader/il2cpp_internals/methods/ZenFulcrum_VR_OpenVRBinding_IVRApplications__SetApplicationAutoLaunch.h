#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRApplications__SetApplicationAutoLaunch {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRApplications_SetApplicationAutoLaunch * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x0167E660, EVRApplicationError__Enum, Invoke, (app::IVRApplications_SetApplicationAutoLaunch * this_ptr, app::String * pch_app_key, bool b_auto_launch));
IL2CPP_REGISTER_METHOD(0x02F3F630, IAsyncResult *, BeginInvoke, (app::IVRApplications_SetApplicationAutoLaunch * this_ptr, app::String * pch_app_key, bool b_auto_launch, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRApplicationError__Enum, EndInvoke, (app::IVRApplications_SetApplicationAutoLaunch * this_ptr, app::IAsyncResult * result));
}
