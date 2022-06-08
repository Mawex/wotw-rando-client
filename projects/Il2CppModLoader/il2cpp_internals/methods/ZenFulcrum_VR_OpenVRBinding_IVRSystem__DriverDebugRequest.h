#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__DriverDebugRequest {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_DriverDebugRequest * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEA590, uint32_t, Invoke, (IVRSystem_DriverDebugRequest * __this, uint32_t unDeviceIndex, String * pchRequest, String * pchResponseBuffer, uint32_t unResponseBufferSize));
IL2CPP_REGISTER_METHOD(0x02CEA9A0, IAsyncResult *, BeginInvoke, (IVRSystem_DriverDebugRequest * __this, uint32_t unDeviceIndex, String * pchRequest, String * pchResponseBuffer, uint32_t unResponseBufferSize, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (IVRSystem_DriverDebugRequest * __this, IAsyncResult * result));
}
