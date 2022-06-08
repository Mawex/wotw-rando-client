#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetVideoStreamTextureD3D11 {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRTrackedCamera_GetVideoStreamTextureD3D11 * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F53E00, EVRTrackedCameraError__Enum, Invoke, (IVRTrackedCamera_GetVideoStreamTextureD3D11 * __this, uint64_t hTrackedCamera, EVRTrackedCameraFrameType__Enum eFrameType, void * pD3D11DeviceOrResource, void * * ppD3D11ShaderResourceView, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize));
IL2CPP_REGISTER_METHOD(0x00F54360, IAsyncResult *, BeginInvoke, (IVRTrackedCamera_GetVideoStreamTextureD3D11 * __this, uint64_t hTrackedCamera, EVRTrackedCameraFrameType__Enum eFrameType, void * pD3D11DeviceOrResource, void * * ppD3D11ShaderResourceView, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, EVRTrackedCameraError__Enum, EndInvoke, (IVRTrackedCamera_GetVideoStreamTextureD3D11 * __this, void * * ppD3D11ShaderResourceView, CameraVideoStreamFrameHeader_t * pFrameHeader, IAsyncResult * result));
}
