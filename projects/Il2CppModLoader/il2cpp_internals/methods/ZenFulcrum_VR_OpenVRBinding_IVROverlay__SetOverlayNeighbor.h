#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayNeighbor {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayNeighbor * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C7A6D0, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayNeighbor * __this, EOverlayDirection__Enum eDirection, uint64_t ulFrom, uint64_t ulTo));
IL2CPP_REGISTER_METHOD(0x02D80410, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayNeighbor * __this, EOverlayDirection__Enum eDirection, uint64_t ulFrom, uint64_t ulTo, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayNeighbor * __this, IAsyncResult * result));
}
