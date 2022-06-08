#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__ApplyTransform {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_ApplyTransform * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0143DA20, void, Invoke, (IVRSystem_ApplyTransform * __this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform));
IL2CPP_REGISTER_METHOD(0x02CE9E60, IAsyncResult *, BeginInvoke, (IVRSystem_ApplyTransform * __this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x02CE9F60, void, EndInvoke, (IVRSystem_ApplyTransform * __this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform, IAsyncResult * result));
}
