#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__DestroyOverlay {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_DestroyOverlay * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F55110, EVROverlayError__Enum, Invoke, (app::IVROverlay_DestroyOverlay * this_ptr, uint64_t ul_overlay_handle));
IL2CPP_REGISTER_METHOD(0x02D79AD0, IAsyncResult *, BeginInvoke, (app::IVROverlay_DestroyOverlay * this_ptr, uint64_t ul_overlay_handle, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_DestroyOverlay * this_ptr, app::IAsyncResult * result));
}
