#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__ShowMessageOverlay {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_ShowMessageOverlay * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02D82400, VRMessageOverlayResponse__Enum, Invoke, (app::IVROverlay_ShowMessageOverlay * this_ptr, app::String * pch_text, app::String * pch_caption, app::String * pch_button0_text, app::String * pch_button1_text, app::String * pch_button2_text, app::String * pch_button3_text));
IL2CPP_REGISTER_METHOD(0x0297E1A0, IAsyncResult *, BeginInvoke, (app::IVROverlay_ShowMessageOverlay * this_ptr, app::String * pch_text, app::String * pch_caption, app::String * pch_button0_text, app::String * pch_button1_text, app::String * pch_button2_text, app::String * pch_button3_text, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, VRMessageOverlayResponse__Enum, EndInvoke, (app::IVROverlay_ShowMessageOverlay * this_ptr, app::IAsyncResult * result));
}
