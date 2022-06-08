#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__MoveGamepadFocusToNeighbor {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_MoveGamepadFocusToNeighbor * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F51B50, EVROverlayError__Enum, Invoke, (IVROverlay_MoveGamepadFocusToNeighbor * __this, EOverlayDirection__Enum eDirection, uint64_t ulFrom));
IL2CPP_REGISTER_METHOD(0x02D7DD80, IAsyncResult *, BeginInvoke, (IVROverlay_MoveGamepadFocusToNeighbor * __this, EOverlayDirection__Enum eDirection, uint64_t ulFrom, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_MoveGamepadFocusToNeighbor * __this, IAsyncResult * result));
}
