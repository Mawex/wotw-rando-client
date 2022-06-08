using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationPropertyUint64 {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_GetApplicationPropertyUint64 * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02F3DE40, uint64_t, Invoke, (IVRApplications_GetApplicationPropertyUint64 * __this, String * pchAppKey, EVRApplicationProperty__Enum eProperty, EVRApplicationError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x02F3E3C0, IAsyncResult *, BeginInvoke, (IVRApplications_GetApplicationPropertyUint64 * __this, String * pchAppKey, EVRApplicationProperty__Enum eProperty, EVRApplicationError__Enum * peError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x02CEF3B0, uint64_t, EndInvoke, (IVRApplications_GetApplicationPropertyUint64 * __this, EVRApplicationError__Enum * peError, IAsyncResult * result));
}
