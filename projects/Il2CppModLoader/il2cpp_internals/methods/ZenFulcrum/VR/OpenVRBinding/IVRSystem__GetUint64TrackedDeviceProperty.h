#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetUint64TrackedDeviceProperty {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSystem_GetUint64TrackedDeviceProperty * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02CEEF20, uint64_t, Invoke, (app::IVRSystem_GetUint64TrackedDeviceProperty * this_ptr, uint32_t un_device_index, app::ETrackedDeviceProperty__Enum prop, app::ETrackedPropertyError__Enum * p_error));
    IL2CPP_REGISTER_METHOD(0x02CEF2C0, app::IAsyncResult *, BeginInvoke, (app::IVRSystem_GetUint64TrackedDeviceProperty * this_ptr, uint32_t un_device_index, app::ETrackedDeviceProperty__Enum prop, app::ETrackedPropertyError__Enum * p_error, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x02CEF3B0, uint64_t, EndInvoke, (app::IVRSystem_GetUint64TrackedDeviceProperty * this_ptr, app::ETrackedPropertyError__Enum * p_error, app::IAsyncResult * result));
}
