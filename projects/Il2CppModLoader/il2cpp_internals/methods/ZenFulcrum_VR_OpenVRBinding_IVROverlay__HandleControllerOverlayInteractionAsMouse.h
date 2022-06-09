#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__HandleControllerOverlayInteractionAsMouse {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_HandleControllerOverlayInteractionAsMouse * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x0167DDE0, bool, Invoke, (app::IVROverlay_HandleControllerOverlayInteractionAsMouse * this_ptr, uint64_t ul_overlay_handle, uint32_t un_controller_device_index));
IL2CPP_REGISTER_METHOD(0x02D7D9B0, IAsyncResult *, BeginInvoke, (app::IVROverlay_HandleControllerOverlayInteractionAsMouse * this_ptr, uint64_t ul_overlay_handle, uint32_t un_controller_device_index, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::IVROverlay_HandleControllerOverlayInteractionAsMouse * this_ptr, app::IAsyncResult * result));
}
