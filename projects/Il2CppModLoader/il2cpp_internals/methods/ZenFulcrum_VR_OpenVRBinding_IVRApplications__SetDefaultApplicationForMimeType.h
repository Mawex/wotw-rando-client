using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__SetDefaultApplicationForMimeType {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_SetDefaultApplicationForMimeType * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02C7EDC0, EVRApplicationError__Enum, Invoke, (IVRApplications_SetDefaultApplicationForMimeType * __this, String * pchAppKey, String * pchMimeType));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (IVRApplications_SetDefaultApplicationForMimeType * __this, String * pchAppKey, String * pchMimeType, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRApplicationError__Enum, EndInvoke, (IVRApplications_SetDefaultApplicationForMimeType * __this, IAsyncResult * result));
}
