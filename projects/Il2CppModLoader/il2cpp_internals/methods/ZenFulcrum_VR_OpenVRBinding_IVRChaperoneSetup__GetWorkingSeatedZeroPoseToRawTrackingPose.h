#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02A521E0, bool, Invoke, (IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose * __this, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose));
IL2CPP_REGISTER_METHOD(0x02F40700, IAsyncResult *, BeginInvoke, (IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose * __this, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose * __this, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose, IAsyncResult * result));
}
