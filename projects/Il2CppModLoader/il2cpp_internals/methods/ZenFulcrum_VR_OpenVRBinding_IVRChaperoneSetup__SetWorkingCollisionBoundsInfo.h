using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRChaperoneSetup_SetWorkingCollisionBoundsInfo * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02187340, void, Invoke, (IVRChaperoneSetup_SetWorkingCollisionBoundsInfo * __this, HmdQuad_t__Array * pQuadsBuffer, uint32_t unQuadsCount));
IL2CPP_REGISTER_METHOD(0x02F40A30, IAsyncResult *, BeginInvoke, (IVRChaperoneSetup_SetWorkingCollisionBoundsInfo * __this, HmdQuad_t__Array * pQuadsBuffer, uint32_t unQuadsCount, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (IVRChaperoneSetup_SetWorkingCollisionBoundsInfo * __this, IAsyncResult * result));
}
