#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetEyeToHeadTransform {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetEyeToHeadTransform * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEB670, HmdMatrix34_t, Invoke, (IVRSystem_GetEyeToHeadTransform * __this, EVREye__Enum eEye));
IL2CPP_REGISTER_METHOD(0x02CEBA90, IAsyncResult *, BeginInvoke, (IVRSystem_GetEyeToHeadTransform * __this, EVREye__Enum eEye, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x02CEBB50, HmdMatrix34_t, EndInvoke, (IVRSystem_GetEyeToHeadTransform * __this, IAsyncResult * result));
}
