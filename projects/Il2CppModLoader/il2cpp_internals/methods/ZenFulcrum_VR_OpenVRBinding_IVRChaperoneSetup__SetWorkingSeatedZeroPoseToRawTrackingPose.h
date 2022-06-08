#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose * __this, HmdMatrix34_t * pMatSeatedZeroPoseToRawTrackingPose));
IL2CPP_REGISTER_METHOD(0x02F40D80, IAsyncResult *, BeginInvoke, (IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose * __this, HmdMatrix34_t * pMatSeatedZeroPoseToRawTrackingPose, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose * __this, HmdMatrix34_t * pMatSeatedZeroPoseToRawTrackingPose, IAsyncResult * result));
}
