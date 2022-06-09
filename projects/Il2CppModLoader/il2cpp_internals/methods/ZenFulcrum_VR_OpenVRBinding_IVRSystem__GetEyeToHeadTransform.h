#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRSystem__GetEyeToHeadTransform {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSystem_GetEyeToHeadTransform * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEB670, HmdMatrix34_t, Invoke, (app::IVRSystem_GetEyeToHeadTransform * this_ptr, app::EVREye__Enum e_eye));
IL2CPP_REGISTER_METHOD(0x02CEBA90, IAsyncResult *, BeginInvoke, (app::IVRSystem_GetEyeToHeadTransform * this_ptr, app::EVREye__Enum e_eye, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x02CEBB50, HmdMatrix34_t, EndInvoke, (app::IVRSystem_GetEyeToHeadTransform * this_ptr, app::IAsyncResult * result));
}
