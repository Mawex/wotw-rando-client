using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetTrackedDeviceIndexForControllerRole {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetTrackedDeviceIndexForControllerRole * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02B33400, uint32_t, Invoke, (IVRSystem_GetTrackedDeviceIndexForControllerRole * __this, ETrackedControllerRole__Enum unDeviceType));
IL2CPP_REGISTER_METHOD(0x02CEEE60, IAsyncResult *, BeginInvoke, (IVRSystem_GetTrackedDeviceIndexForControllerRole * __this, ETrackedControllerRole__Enum unDeviceType, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (IVRSystem_GetTrackedDeviceIndexForControllerRole * __this, IAsyncResult * result));
}
