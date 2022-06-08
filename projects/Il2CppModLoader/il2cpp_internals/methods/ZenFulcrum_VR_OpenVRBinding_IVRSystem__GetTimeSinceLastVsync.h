#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetTimeSinceLastVsync {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetTimeSinceLastVsync * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x019D6DD0, bool, Invoke, (IVRSystem_GetTimeSinceLastVsync * __this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter));
IL2CPP_REGISTER_METHOD(0x02CEEBF0, IAsyncResult *, BeginInvoke, (IVRSystem_GetTimeSinceLastVsync * __this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167DD00, bool, EndInvoke, (IVRSystem_GetTimeSinceLastVsync * __this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter, IAsyncResult * result));
}
