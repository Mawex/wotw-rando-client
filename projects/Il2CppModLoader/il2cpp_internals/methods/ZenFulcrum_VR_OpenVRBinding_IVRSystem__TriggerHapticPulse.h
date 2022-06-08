#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__TriggerHapticPulse {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_TriggerHapticPulse * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEFCE0, void, Invoke, (IVRSystem_TriggerHapticPulse * __this, uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec));
IL2CPP_REGISTER_METHOD(0x02CF0060, IAsyncResult *, BeginInvoke, (IVRSystem_TriggerHapticPulse * __this, uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (IVRSystem_TriggerHapticPulse * __this, IAsyncResult * result));
}
