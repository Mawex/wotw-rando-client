using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetControllerRoleForTrackedDeviceIndex {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetControllerRoleForTrackedDeviceIndex * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02B33400, ETrackedControllerRole__Enum, Invoke, (IVRSystem_GetControllerRoleForTrackedDeviceIndex * __this, uint32_t unDeviceIndex));
IL2CPP_REGISTER_METHOD(0x02CEAD00, IAsyncResult *, BeginInvoke, (IVRSystem_GetControllerRoleForTrackedDeviceIndex * __this, uint32_t unDeviceIndex, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, ETrackedControllerRole__Enum, EndInvoke, (IVRSystem_GetControllerRoleForTrackedDeviceIndex * __this, IAsyncResult * result));
}
