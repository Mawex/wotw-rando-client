using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationLaunchArguments {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_GetApplicationLaunchArguments * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE3D50, uint32_t, Invoke, (IVRApplications_GetApplicationLaunchArguments * __this, uint32_t unHandle, String * pchArgs, uint32_t unArgs));
IL2CPP_REGISTER_METHOD(0x02F3D480, IAsyncResult *, BeginInvoke, (IVRApplications_GetApplicationLaunchArguments * __this, uint32_t unHandle, String * pchArgs, uint32_t unArgs, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (IVRApplications_GetApplicationLaunchArguments * __this, IAsyncResult * result));
}
