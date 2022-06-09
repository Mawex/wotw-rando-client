#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRChaperoneSetup_SetWorkingCollisionBoundsInfo * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02187340, void, Invoke, (app::IVRChaperoneSetup_SetWorkingCollisionBoundsInfo * this_ptr, app::HmdQuad_t__Array * p_quads_buffer, uint32_t un_quads_count));
IL2CPP_REGISTER_METHOD(0x02F40A30, IAsyncResult *, BeginInvoke, (app::IVRChaperoneSetup_SetWorkingCollisionBoundsInfo * this_ptr, app::HmdQuad_t__Array * p_quads_buffer, uint32_t un_quads_count, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRChaperoneSetup_SetWorkingCollisionBoundsInfo * this_ptr, app::IAsyncResult * result));
}
