using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__ReleaseVideoStreamTextureGL {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRTrackedCamera_ReleaseVideoStreamTextureGL * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F54C90, EVRTrackedCameraError__Enum, Invoke, (IVRTrackedCamera_ReleaseVideoStreamTextureGL * __this, uint64_t hTrackedCamera, uint32_t glTextureId));
IL2CPP_REGISTER_METHOD(0x00F55000, IAsyncResult *, BeginInvoke, (IVRTrackedCamera_ReleaseVideoStreamTextureGL * __this, uint64_t hTrackedCamera, uint32_t glTextureId, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRTrackedCameraError__Enum, EndInvoke, (IVRTrackedCamera_ReleaseVideoStreamTextureGL * __this, IAsyncResult * result));
}
