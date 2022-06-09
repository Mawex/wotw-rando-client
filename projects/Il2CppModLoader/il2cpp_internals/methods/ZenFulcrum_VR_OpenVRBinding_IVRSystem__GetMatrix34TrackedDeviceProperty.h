#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRSystem__GetMatrix34TrackedDeviceProperty {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSystem_GetMatrix34TrackedDeviceProperty * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEC9D0, HmdMatrix34_t, Invoke, (app::IVRSystem_GetMatrix34TrackedDeviceProperty * this_ptr, uint32_t un_device_index, app::ETrackedDeviceProperty__Enum prop, app::ETrackedPropertyError__Enum * p_error));
IL2CPP_REGISTER_METHOD(0x02CECE90, IAsyncResult *, BeginInvoke, (app::IVRSystem_GetMatrix34TrackedDeviceProperty * this_ptr, uint32_t un_device_index, app::ETrackedDeviceProperty__Enum prop, app::ETrackedPropertyError__Enum * p_error, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x02CECF80, HmdMatrix34_t, EndInvoke, (app::IVRSystem_GetMatrix34TrackedDeviceProperty * this_ptr, app::ETrackedPropertyError__Enum * p_error, app::IAsyncResult * result));
}
