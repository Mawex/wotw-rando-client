using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__IsTrackedDeviceConnected {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_IsTrackedDeviceConnected * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x010C4980, bool, Invoke, (IVRSystem_IsTrackedDeviceConnected * __this, uint32_t unDeviceIndex));
IL2CPP_REGISTER_METHOD(0x02CEF490, IAsyncResult *, BeginInvoke, (IVRSystem_IsTrackedDeviceConnected * __this, uint32_t unDeviceIndex, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (IVRSystem_IsTrackedDeviceConnected * __this, IAsyncResult * result));
}
