#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__SetSceneColor {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRChaperone_SetSceneColor * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x029FE890, void, Invoke, (IVRChaperone_SetSceneColor * __this, HmdColor_t color));
IL2CPP_REGISTER_METHOD(0x02F3FE80, IAsyncResult *, BeginInvoke, (IVRChaperone_SetSceneColor * __this, HmdColor_t color, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (IVRChaperone_SetSceneColor * __this, IAsyncResult * result));
}
