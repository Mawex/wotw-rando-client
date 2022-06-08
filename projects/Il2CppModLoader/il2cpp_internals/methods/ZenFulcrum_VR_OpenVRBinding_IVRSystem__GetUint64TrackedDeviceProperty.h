#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetUint64TrackedDeviceProperty {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetUint64TrackedDeviceProperty * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEEF20, uint64_t, Invoke, (IVRSystem_GetUint64TrackedDeviceProperty * __this, uint32_t unDeviceIndex, ETrackedDeviceProperty__Enum prop, ETrackedPropertyError__Enum * pError));
IL2CPP_REGISTER_METHOD(0x02CEF2C0, IAsyncResult *, BeginInvoke, (IVRSystem_GetUint64TrackedDeviceProperty * __this, uint32_t unDeviceIndex, ETrackedDeviceProperty__Enum prop, ETrackedPropertyError__Enum * pError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x02CEF3B0, uint64_t, EndInvoke, (IVRSystem_GetUint64TrackedDeviceProperty * __this, ETrackedPropertyError__Enum * pError, IAsyncResult * result));
}
