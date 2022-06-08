#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0167DDE0, bool, Invoke, (IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo * __this, HmdQuad_t__Array * pQuadsBuffer, uint32_t unQuadsCount));
IL2CPP_REGISTER_METHOD(0x02F40BD0, IAsyncResult *, BeginInvoke, (IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo * __this, HmdQuad_t__Array * pQuadsBuffer, uint32_t unQuadsCount, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo * __this, IAsyncResult * result));
}
