using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetInt32TrackedDeviceProperty {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetInt32TrackedDeviceProperty * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEC540, int32_t, Invoke, (IVRSystem_GetInt32TrackedDeviceProperty * __this, uint32_t unDeviceIndex, ETrackedDeviceProperty__Enum prop, ETrackedPropertyError__Enum * pError));
IL2CPP_REGISTER_METHOD(0x02CEC8E0, IAsyncResult *, BeginInvoke, (IVRSystem_GetInt32TrackedDeviceProperty * __this, uint32_t unDeviceIndex, ETrackedDeviceProperty__Enum prop, ETrackedPropertyError__Enum * pError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, int32_t, EndInvoke, (IVRSystem_GetInt32TrackedDeviceProperty * __this, ETrackedPropertyError__Enum * pError, IAsyncResult * result));
}
