#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02A521E0, bool, Invoke, (IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose * __this, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose));
IL2CPP_REGISTER_METHOD(0x02F40390, IAsyncResult *, BeginInvoke, (IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose * __this, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose * __this, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose, IAsyncResult * result));
}
