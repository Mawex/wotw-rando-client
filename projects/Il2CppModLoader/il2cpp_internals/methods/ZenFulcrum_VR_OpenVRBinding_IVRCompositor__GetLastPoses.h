using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetLastPoses {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRCompositor_GetLastPoses * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D77C70, EVRCompositorError__Enum, Invoke, (IVRCompositor_GetLastPoses * __this, TrackedDevicePose_t__Array * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t__Array * pGamePoseArray, uint32_t unGamePoseArrayCount));
IL2CPP_REGISTER_METHOD(0x02F42360, IAsyncResult *, BeginInvoke, (IVRCompositor_GetLastPoses * __this, TrackedDevicePose_t__Array * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t__Array * pGamePoseArray, uint32_t unGamePoseArrayCount, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRCompositorError__Enum, EndInvoke, (IVRCompositor_GetLastPoses * __this, IAsyncResult * result));
}
