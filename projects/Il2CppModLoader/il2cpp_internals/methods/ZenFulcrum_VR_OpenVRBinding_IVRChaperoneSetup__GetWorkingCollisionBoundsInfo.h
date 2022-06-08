using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRChaperoneSetup_GetWorkingCollisionBoundsInfo * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x019D6DD0, bool, Invoke, (IVRChaperoneSetup_GetWorkingCollisionBoundsInfo * __this, HmdQuad_t__Array * pQuadsBuffer, uint32_t * punQuadsCount));
IL2CPP_REGISTER_METHOD(0x02F40460, IAsyncResult *, BeginInvoke, (IVRChaperoneSetup_GetWorkingCollisionBoundsInfo * __this, HmdQuad_t__Array * pQuadsBuffer, uint32_t * punQuadsCount, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (IVRChaperoneSetup_GetWorkingCollisionBoundsInfo * __this, uint32_t * punQuadsCount, IAsyncResult * result));
}
