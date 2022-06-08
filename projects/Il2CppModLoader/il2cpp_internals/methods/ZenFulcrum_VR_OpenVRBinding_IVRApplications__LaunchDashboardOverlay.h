using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__LaunchDashboardOverlay {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_LaunchDashboardOverlay * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x020105B0, EVRApplicationError__Enum, Invoke, (IVRApplications_LaunchDashboardOverlay * __this, String * pchAppKey));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (IVRApplications_LaunchDashboardOverlay * __this, String * pchAppKey, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRApplicationError__Enum, EndInvoke, (IVRApplications_LaunchDashboardOverlay * __this, IAsyncResult * result));
}
