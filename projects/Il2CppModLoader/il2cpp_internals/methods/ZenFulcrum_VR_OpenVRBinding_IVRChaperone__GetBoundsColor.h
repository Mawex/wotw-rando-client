#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__GetBoundsColor {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRChaperone_GetBoundsColor * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02F3F7C0, void, Invoke, (IVRChaperone_GetBoundsColor * __this, HmdColor_t * pOutputColorArray, int32_t nNumOutputColors, float flCollisionBoundsFadeDistance, HmdColor_t * pOutputCameraColor));
IL2CPP_REGISTER_METHOD(0x02F3FBB0, IAsyncResult *, BeginInvoke, (IVRChaperone_GetBoundsColor * __this, HmdColor_t * pOutputColorArray, int32_t nNumOutputColors, float flCollisionBoundsFadeDistance, HmdColor_t * pOutputCameraColor, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x012E78E0, void, EndInvoke, (IVRChaperone_GetBoundsColor * __this, HmdColor_t * pOutputColorArray, HmdColor_t * pOutputCameraColor, IAsyncResult * result));
}
