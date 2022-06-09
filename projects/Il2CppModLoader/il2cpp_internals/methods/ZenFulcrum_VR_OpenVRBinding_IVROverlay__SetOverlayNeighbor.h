#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__SetOverlayNeighbor {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_SetOverlayNeighbor * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01C7A6D0, EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayNeighbor * this_ptr, app::EOverlayDirection__Enum e_direction, uint64_t ul_from, uint64_t ul_to));
IL2CPP_REGISTER_METHOD(0x02D80410, IAsyncResult *, BeginInvoke, (app::IVROverlay_SetOverlayNeighbor * this_ptr, app::EOverlayDirection__Enum e_direction, uint64_t ul_from, uint64_t ul_to, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayNeighbor * this_ptr, app::IAsyncResult * result));
}
