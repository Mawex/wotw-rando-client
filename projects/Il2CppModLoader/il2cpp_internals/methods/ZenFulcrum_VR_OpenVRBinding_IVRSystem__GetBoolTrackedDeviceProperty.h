using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetBoolTrackedDeviceProperty {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetBoolTrackedDeviceProperty * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x026C8450, bool, Invoke, (IVRSystem_GetBoolTrackedDeviceProperty * __this, uint32_t unDeviceIndex, ETrackedDeviceProperty__Enum prop, ETrackedPropertyError__Enum * pError));
IL2CPP_REGISTER_METHOD(0x02CEAA90, IAsyncResult *, BeginInvoke, (IVRSystem_GetBoolTrackedDeviceProperty * __this, uint32_t unDeviceIndex, ETrackedDeviceProperty__Enum prop, ETrackedPropertyError__Enum * pError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (IVRSystem_GetBoolTrackedDeviceProperty * __this, ETrackedPropertyError__Enum * pError, IAsyncResult * result));
}
