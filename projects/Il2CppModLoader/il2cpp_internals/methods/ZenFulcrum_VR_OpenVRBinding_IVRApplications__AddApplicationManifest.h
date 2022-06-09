#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRApplications__AddApplicationManifest {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRApplications_AddApplicationManifest * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x0167E660, EVRApplicationError__Enum, Invoke, (app::IVRApplications_AddApplicationManifest * this_ptr, app::String * pch_application_manifest_full_path, bool b_temporary));
IL2CPP_REGISTER_METHOD(0x0167EBB0, IAsyncResult *, BeginInvoke, (app::IVRApplications_AddApplicationManifest * this_ptr, app::String * pch_application_manifest_full_path, bool b_temporary, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRApplicationError__Enum, EndInvoke, (app::IVRApplications_AddApplicationManifest * this_ptr, app::IAsyncResult * result));
}
