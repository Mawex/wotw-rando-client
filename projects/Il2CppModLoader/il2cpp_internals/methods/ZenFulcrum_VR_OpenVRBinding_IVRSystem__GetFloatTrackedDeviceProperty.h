using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetFloatTrackedDeviceProperty {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetFloatTrackedDeviceProperty * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEBBB0, float, Invoke, (IVRSystem_GetFloatTrackedDeviceProperty * __this, uint32_t unDeviceIndex, ETrackedDeviceProperty__Enum prop, ETrackedPropertyError__Enum * pError));
IL2CPP_REGISTER_METHOD(0x02CEBF40, IAsyncResult *, BeginInvoke, (IVRSystem_GetFloatTrackedDeviceProperty * __this, uint32_t unDeviceIndex, ETrackedDeviceProperty__Enum prop, ETrackedPropertyError__Enum * pError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x02CE71E0, float, EndInvoke, (IVRSystem_GetFloatTrackedDeviceProperty * __this, ETrackedPropertyError__Enum * pError, IAsyncResult * result));
}
