#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetOutputDevice {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetOutputDevice * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CED080, void, Invoke, (IVRSystem_GetOutputDevice * __this, uint64_t * pnDevice, ETextureType__Enum textureType, void * pInstance));
IL2CPP_REGISTER_METHOD(0x02CED400, IAsyncResult *, BeginInvoke, (IVRSystem_GetOutputDevice * __this, uint64_t * pnDevice, ETextureType__Enum textureType, void * pInstance, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (IVRSystem_GetOutputDevice * __this, uint64_t * pnDevice, IAsyncResult * result));
}
