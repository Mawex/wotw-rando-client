using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetStringTrackedDeviceProperty {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetStringTrackedDeviceProperty * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE5480, uint32_t, Invoke, (IVRSystem_GetStringTrackedDeviceProperty * __this, uint32_t unDeviceIndex, ETrackedDeviceProperty__Enum prop, StringBuilder * pchValue, uint32_t unBufferSize, ETrackedPropertyError__Enum * pError));
IL2CPP_REGISTER_METHOD(0x02CEEAD0, IAsyncResult *, BeginInvoke, (IVRSystem_GetStringTrackedDeviceProperty * __this, uint32_t unDeviceIndex, ETrackedDeviceProperty__Enum prop, StringBuilder * pchValue, uint32_t unBufferSize, ETrackedPropertyError__Enum * pError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, uint32_t, EndInvoke, (IVRSystem_GetStringTrackedDeviceProperty * __this, ETrackedPropertyError__Enum * pError, IAsyncResult * result));
}
