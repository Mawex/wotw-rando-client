#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetProjectionMatrix {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetProjectionMatrix * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CED4F0, HmdMatrix44_t, Invoke, (IVRSystem_GetProjectionMatrix * __this, EVREye__Enum eEye, float fNearZ, float fFarZ));
IL2CPP_REGISTER_METHOD(0x02CED9A0, IAsyncResult *, BeginInvoke, (IVRSystem_GetProjectionMatrix * __this, EVREye__Enum eEye, float fNearZ, float fFarZ, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x02881D00, HmdMatrix44_t, EndInvoke, (IVRSystem_GetProjectionMatrix * __this, IAsyncResult * result));
}
