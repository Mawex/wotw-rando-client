using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetStartingApplication {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_GetStartingApplication * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D79D50, EVRApplicationError__Enum, Invoke, (IVRApplications_GetStartingApplication * __this, String * pchAppKeyBuffer, uint32_t unAppKeyBufferLen));
IL2CPP_REGISTER_METHOD(0x02F3EE40, IAsyncResult *, BeginInvoke, (IVRApplications_GetStartingApplication * __this, String * pchAppKeyBuffer, uint32_t unAppKeyBufferLen, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRApplicationError__Enum, EndInvoke, (IVRApplications_GetStartingApplication * __this, IAsyncResult * result));
}
