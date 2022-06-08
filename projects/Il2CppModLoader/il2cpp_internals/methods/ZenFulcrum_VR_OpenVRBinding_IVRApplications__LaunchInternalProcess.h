using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__LaunchInternalProcess {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_LaunchInternalProcess * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02F3EFE0, EVRApplicationError__Enum, Invoke, (IVRApplications_LaunchInternalProcess * __this, String * pchBinaryPath, String * pchArguments, String * pchWorkingDirectory));
IL2CPP_REGISTER_METHOD(0x00DC7DB0, IAsyncResult *, BeginInvoke, (IVRApplications_LaunchInternalProcess * __this, String * pchBinaryPath, String * pchArguments, String * pchWorkingDirectory, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRApplicationError__Enum, EndInvoke, (IVRApplications_LaunchInternalProcess * __this, IAsyncResult * result));
}
