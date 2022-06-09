#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__IsOverlayVisible {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_IsOverlayVisible * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02A521E0, bool, Invoke, (app::IVROverlay_IsOverlayVisible * this_ptr, uint64_t ul_overlay_handle));
IL2CPP_REGISTER_METHOD(0x02D7DCC0, IAsyncResult *, BeginInvoke, (app::IVROverlay_IsOverlayVisible * this_ptr, uint64_t ul_overlay_handle, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::IVROverlay_IsOverlayVisible * this_ptr, app::IAsyncResult * result));
}
