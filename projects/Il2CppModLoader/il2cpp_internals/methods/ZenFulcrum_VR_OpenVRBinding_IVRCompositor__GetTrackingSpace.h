#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetTrackingSpace {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRCompositor_GetTrackingSpace * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0167F180, ETrackingUniverseOrigin__Enum, Invoke, (IVRCompositor_GetTrackingSpace * __this));
IL2CPP_REGISTER_METHOD(0x00611B10, IAsyncResult *, BeginInvoke, (IVRCompositor_GetTrackingSpace * __this, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, ETrackingUniverseOrigin__Enum, EndInvoke, (IVRCompositor_GetTrackingSpace * __this, IAsyncResult * result));
}
