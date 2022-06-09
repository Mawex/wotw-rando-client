#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRCompositor__SetExplicitTimingMode {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRCompositor_SetExplicitTimingMode * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01DCB6A0, void, Invoke, (app::IVRCompositor_SetExplicitTimingMode * this_ptr, bool b_explicit_timing_mode));
IL2CPP_REGISTER_METHOD(0x02F43130, IAsyncResult *, BeginInvoke, (app::IVRCompositor_SetExplicitTimingMode * this_ptr, bool b_explicit_timing_mode, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRCompositor_SetExplicitTimingMode * this_ptr, app::IAsyncResult * result));
}
