#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRApplications__GetApplicationAutoLaunch {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRApplications_GetApplicationAutoLaunch * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x0167EC80, bool, Invoke, (app::IVRApplications_GetApplicationAutoLaunch * this_ptr, app::String * pch_app_key));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::IVRApplications_GetApplicationAutoLaunch * this_ptr, app::String * pch_app_key, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::IVRApplications_GetApplicationAutoLaunch * this_ptr, app::IAsyncResult * result));
}
