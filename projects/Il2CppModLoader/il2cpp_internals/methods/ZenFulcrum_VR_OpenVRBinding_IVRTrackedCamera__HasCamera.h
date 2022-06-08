using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__HasCamera {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRTrackedCamera_HasCamera * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F51B50, EVRTrackedCameraError__Enum, Invoke, (IVRTrackedCamera_HasCamera * __this, uint32_t nDeviceIndex, bool * pHasCamera));
IL2CPP_REGISTER_METHOD(0x00F54BB0, IAsyncResult *, BeginInvoke, (IVRTrackedCamera_HasCamera * __this, uint32_t nDeviceIndex, bool * pHasCamera, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRTrackedCameraError__Enum, EndInvoke, (IVRTrackedCamera_HasCamera * __this, bool * pHasCamera, IAsyncResult * result));
}
