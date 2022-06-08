#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetMirrorTextureD3D11 {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRCompositor_GetMirrorTextureD3D11 * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C7A6D0, EVRCompositorError__Enum, Invoke, (IVRCompositor_GetMirrorTextureD3D11 * __this, EVREye__Enum eEye, void * pD3D11DeviceOrResource, void * * ppD3D11ShaderResourceView));
IL2CPP_REGISTER_METHOD(0x02F42450, IAsyncResult *, BeginInvoke, (IVRCompositor_GetMirrorTextureD3D11 * __this, EVREye__Enum eEye, void * pD3D11DeviceOrResource, void * * ppD3D11ShaderResourceView, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRCompositorError__Enum, EndInvoke, (IVRCompositor_GetMirrorTextureD3D11 * __this, void * * ppD3D11ShaderResourceView, IAsyncResult * result));
}
