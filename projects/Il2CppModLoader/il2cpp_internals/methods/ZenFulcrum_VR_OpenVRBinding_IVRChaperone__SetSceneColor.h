#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRChaperone__SetSceneColor {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRChaperone_SetSceneColor * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x029FE890, void, Invoke, (app::IVRChaperone_SetSceneColor * this_ptr, app::HmdColor_t color));
IL2CPP_REGISTER_METHOD(0x02F3FE80, IAsyncResult *, BeginInvoke, (app::IVRChaperone_SetSceneColor * this_ptr, app::HmdColor_t color, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRChaperone_SetSceneColor * this_ptr, app::IAsyncResult * result));
}
