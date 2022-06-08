#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetTrackedDeviceClass {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetTrackedDeviceClass * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02B33400, ETrackedDeviceClass__Enum, Invoke, (IVRSystem_GetTrackedDeviceClass * __this, uint32_t unDeviceIndex));
IL2CPP_REGISTER_METHOD(0x02CEEDA0, IAsyncResult *, BeginInvoke, (IVRSystem_GetTrackedDeviceClass * __this, uint32_t unDeviceIndex, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, ETrackedDeviceClass__Enum, EndInvoke, (IVRSystem_GetTrackedDeviceClass * __this, IAsyncResult * result));
}
