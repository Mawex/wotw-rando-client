using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__PerformFirmwareUpdate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_PerformFirmwareUpdate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02B33400, EVRFirmwareError__Enum, Invoke, (IVRSystem_PerformFirmwareUpdate * __this, uint32_t unDeviceIndex));
IL2CPP_REGISTER_METHOD(0x02CEF550, IAsyncResult *, BeginInvoke, (IVRSystem_PerformFirmwareUpdate * __this, uint32_t unDeviceIndex, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRFirmwareError__Enum, EndInvoke, (IVRSystem_PerformFirmwareUpdate * __this, IAsyncResult * result));
}
