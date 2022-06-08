#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVRTrackedCamera {
IL2CPP_REGISTER_METHOD(0x0167E230, void, __ctor, (CVRTrackedCamera * __this, void * pInterface));
IL2CPP_REGISTER_METHOD(0x0167E370, String *, GetCameraErrorNameFromEnum, (CVRTrackedCamera * __this, EVRTrackedCameraError__Enum eCameraError));
IL2CPP_REGISTER_METHOD(0x0167E450, EVRTrackedCameraError__Enum, HasCamera, (CVRTrackedCamera * __this, uint32_t nDeviceIndex, bool * pHasCamera));
IL2CPP_REGISTER_METHOD(0x0167E480, EVRTrackedCameraError__Enum, GetCameraFrameSize, (CVRTrackedCamera * __this, uint32_t nDeviceIndex, EVRTrackedCameraFrameType__Enum eFrameType, uint32_t * pnWidth, uint32_t * pnHeight, uint32_t * pnFrameBufferSize));
IL2CPP_REGISTER_METHOD(0x0167E4C0, EVRTrackedCameraError__Enum, GetCameraIntrinsics, (CVRTrackedCamera * __this, uint32_t nDeviceIndex, EVRTrackedCameraFrameType__Enum eFrameType, HmdVector2_t * pFocalLength, HmdVector2_t * pCenter));
IL2CPP_REGISTER_METHOD(0x0167E4F0, EVRTrackedCameraError__Enum, GetCameraProjection, (CVRTrackedCamera * __this, uint32_t nDeviceIndex, EVRTrackedCameraFrameType__Enum eFrameType, float flZNear, float flZFar, HmdMatrix44_t * pProjection));
IL2CPP_REGISTER_METHOD(0x0167E520, EVRTrackedCameraError__Enum, AcquireVideoStreamingService, (CVRTrackedCamera * __this, uint32_t nDeviceIndex, uint64_t * pHandle));
IL2CPP_REGISTER_METHOD(0x0167E550, EVRTrackedCameraError__Enum, ReleaseVideoStreamingService, (CVRTrackedCamera * __this, uint64_t hTrackedCamera));
IL2CPP_REGISTER_METHOD(0x0167E570, EVRTrackedCameraError__Enum, GetVideoStreamFrameBuffer, (CVRTrackedCamera * __this, uint64_t hTrackedCamera, EVRTrackedCameraFrameType__Enum eFrameType, void * pFrameBuffer, uint32_t nFrameBufferSize, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize));
IL2CPP_REGISTER_METHOD(0x0167E5A0, EVRTrackedCameraError__Enum, GetVideoStreamTextureSize, (CVRTrackedCamera * __this, uint32_t nDeviceIndex, EVRTrackedCameraFrameType__Enum eFrameType, VRTextureBounds_t * pTextureBounds, uint32_t * pnWidth, uint32_t * pnHeight));
IL2CPP_REGISTER_METHOD(0x0167E5E0, EVRTrackedCameraError__Enum, GetVideoStreamTextureD3D11, (CVRTrackedCamera * __this, uint64_t hTrackedCamera, EVRTrackedCameraFrameType__Enum eFrameType, void * pD3D11DeviceOrResource, void * * ppD3D11ShaderResourceView, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize));
IL2CPP_REGISTER_METHOD(0x0167E610, EVRTrackedCameraError__Enum, GetVideoStreamTextureGL, (CVRTrackedCamera * __this, uint64_t hTrackedCamera, EVRTrackedCameraFrameType__Enum eFrameType, uint32_t * pglTextureId, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize));
IL2CPP_REGISTER_METHOD(0x0167E640, EVRTrackedCameraError__Enum, ReleaseVideoStreamTextureGL, (CVRTrackedCamera * __this, uint64_t hTrackedCamera, uint32_t glTextureId));
}
