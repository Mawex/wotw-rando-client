#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__GetOverlayRenderingPid {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_GetOverlayRenderingPid * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F55110, uint32_t, Invoke, (app::IVROverlay_GetOverlayRenderingPid * this_ptr, uint64_t ul_overlay_handle));
IL2CPP_REGISTER_METHOD(0x02D7BBB0, IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlayRenderingPid * this_ptr, uint64_t ul_overlay_handle, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::IVROverlay_GetOverlayRenderingPid * this_ptr, app::IAsyncResult * result));
}
