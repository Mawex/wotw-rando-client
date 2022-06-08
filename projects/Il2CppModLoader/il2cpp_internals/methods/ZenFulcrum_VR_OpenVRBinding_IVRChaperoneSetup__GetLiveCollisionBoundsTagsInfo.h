#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x019D6DD0, bool, Invoke, (IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo * __this, Byte__Array * pTagsBuffer, uint32_t * punTagCount));
IL2CPP_REGISTER_METHOD(0x02F401D0, IAsyncResult *, BeginInvoke, (IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo * __this, Byte__Array * pTagsBuffer, uint32_t * punTagCount, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo * __this, uint32_t * punTagCount, IAsyncResult * result));
}
