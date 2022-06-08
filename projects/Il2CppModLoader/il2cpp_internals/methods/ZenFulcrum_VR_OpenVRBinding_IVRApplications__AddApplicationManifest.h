#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__AddApplicationManifest {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_AddApplicationManifest * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0167E660, EVRApplicationError__Enum, Invoke, (IVRApplications_AddApplicationManifest * __this, String * pchApplicationManifestFullPath, bool bTemporary));
IL2CPP_REGISTER_METHOD(0x0167EBB0, IAsyncResult *, BeginInvoke, (IVRApplications_AddApplicationManifest * __this, String * pchApplicationManifestFullPath, bool bTemporary, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRApplicationError__Enum, EndInvoke, (IVRApplications_AddApplicationManifest * __this, IAsyncResult * result));
}
