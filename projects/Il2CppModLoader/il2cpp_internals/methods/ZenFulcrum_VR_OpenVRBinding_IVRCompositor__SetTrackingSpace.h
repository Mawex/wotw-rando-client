#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__SetTrackingSpace {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRCompositor_SetTrackingSpace * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (IVRCompositor_SetTrackingSpace * __this, ETrackingUniverseOrigin__Enum eOrigin));
IL2CPP_REGISTER_METHOD(0x02F432C0, IAsyncResult *, BeginInvoke, (IVRCompositor_SetTrackingSpace * __this, ETrackingUniverseOrigin__Enum eOrigin, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (IVRCompositor_SetTrackingSpace * __this, IAsyncResult * result));
}
