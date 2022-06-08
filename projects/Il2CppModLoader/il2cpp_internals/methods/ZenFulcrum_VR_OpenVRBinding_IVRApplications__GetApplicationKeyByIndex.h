using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationKeyByIndex {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_GetApplicationKeyByIndex * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE3D50, EVRApplicationError__Enum, Invoke, (IVRApplications_GetApplicationKeyByIndex * __this, uint32_t unApplicationIndex, StringBuilder * pchAppKeyBuffer, uint32_t unAppKeyBufferLen));
IL2CPP_REGISTER_METHOD(0x02F3D2C0, IAsyncResult *, BeginInvoke, (IVRApplications_GetApplicationKeyByIndex * __this, uint32_t unApplicationIndex, StringBuilder * pchAppKeyBuffer, uint32_t unAppKeyBufferLen, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRApplicationError__Enum, EndInvoke, (IVRApplications_GetApplicationKeyByIndex * __this, IAsyncResult * result));
}
