using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__PollNextEventWithPose {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_PollNextEventWithPose * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEF6F0, bool, Invoke, (IVRSystem_PollNextEventWithPose * __this, ETrackingUniverseOrigin__Enum eOrigin, VREvent_t * pEvent, uint32_t uncbVREvent, TrackedDevicePose_t * pTrackedDevicePose));
IL2CPP_REGISTER_METHOD(0x02CEFB10, IAsyncResult *, BeginInvoke, (IVRSystem_PollNextEventWithPose * __this, ETrackingUniverseOrigin__Enum eOrigin, VREvent_t * pEvent, uint32_t uncbVREvent, TrackedDevicePose_t * pTrackedDevicePose, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167DD00, bool, EndInvoke, (IVRSystem_PollNextEventWithPose * __this, VREvent_t * pEvent, TrackedDevicePose_t * pTrackedDevicePose, IAsyncResult * result));
}
