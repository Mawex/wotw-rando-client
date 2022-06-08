using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetTrackedDeviceActivityLevel {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetTrackedDeviceActivityLevel * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02B33400, EDeviceActivityLevel__Enum, Invoke, (IVRSystem_GetTrackedDeviceActivityLevel * __this, uint32_t unDeviceId));
IL2CPP_REGISTER_METHOD(0x02CEECE0, IAsyncResult *, BeginInvoke, (IVRSystem_GetTrackedDeviceActivityLevel * __this, uint32_t unDeviceId, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EDeviceActivityLevel__Enum, EndInvoke, (IVRSystem_GetTrackedDeviceActivityLevel * __this, IAsyncResult * result));
}
