using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetMatrix34TrackedDeviceProperty {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetMatrix34TrackedDeviceProperty * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEC9D0, HmdMatrix34_t, Invoke, (IVRSystem_GetMatrix34TrackedDeviceProperty * __this, uint32_t unDeviceIndex, ETrackedDeviceProperty__Enum prop, ETrackedPropertyError__Enum * pError));
IL2CPP_REGISTER_METHOD(0x02CECE90, IAsyncResult *, BeginInvoke, (IVRSystem_GetMatrix34TrackedDeviceProperty * __this, uint32_t unDeviceIndex, ETrackedDeviceProperty__Enum prop, ETrackedPropertyError__Enum * pError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x02CECF80, HmdMatrix34_t, EndInvoke, (IVRSystem_GetMatrix34TrackedDeviceProperty * __this, ETrackedPropertyError__Enum * pError, IAsyncResult * result));
}
