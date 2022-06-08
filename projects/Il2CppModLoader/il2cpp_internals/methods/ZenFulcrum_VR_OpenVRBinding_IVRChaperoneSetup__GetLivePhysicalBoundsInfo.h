using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetLivePhysicalBoundsInfo {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRChaperoneSetup_GetLivePhysicalBoundsInfo * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x019D6DD0, bool, Invoke, (IVRChaperoneSetup_GetLivePhysicalBoundsInfo * __this, HmdQuad_t__Array * pQuadsBuffer, uint32_t * punQuadsCount));
IL2CPP_REGISTER_METHOD(0x02F402B0, IAsyncResult *, BeginInvoke, (IVRChaperoneSetup_GetLivePhysicalBoundsInfo * __this, HmdQuad_t__Array * pQuadsBuffer, uint32_t * punQuadsCount, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (IVRChaperoneSetup_GetLivePhysicalBoundsInfo * __this, uint32_t * punQuadsCount, IAsyncResult * result));
}
