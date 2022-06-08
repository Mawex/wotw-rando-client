using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationAutoLaunch {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_GetApplicationAutoLaunch * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0167EC80, bool, Invoke, (IVRApplications_GetApplicationAutoLaunch * __this, String * pchAppKey));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (IVRApplications_GetApplicationAutoLaunch * __this, String * pchAppKey, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (IVRApplications_GetApplicationAutoLaunch * __this, IAsyncResult * result));
}
