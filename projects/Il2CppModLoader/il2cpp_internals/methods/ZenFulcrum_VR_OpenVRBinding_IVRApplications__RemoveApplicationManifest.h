using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__RemoveApplicationManifest {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_RemoveApplicationManifest * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x020105B0, EVRApplicationError__Enum, Invoke, (IVRApplications_RemoveApplicationManifest * __this, String * pchApplicationManifestFullPath));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (IVRApplications_RemoveApplicationManifest * __this, String * pchApplicationManifestFullPath, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRApplicationError__Enum, EndInvoke, (IVRApplications_RemoveApplicationManifest * __this, IAsyncResult * result));
}
