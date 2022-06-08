#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVRResources {
IL2CPP_REGISTER_METHOD(0x0167B320, void, __ctor, (CVRResources * __this, void * pInterface));
IL2CPP_REGISTER_METHOD(0x0167B440, uint32_t, LoadSharedResource, (CVRResources * __this, String * pchResourceName, String * pchBuffer, uint32_t unBufferLen));
IL2CPP_REGISTER_METHOD(0x0167B470, uint32_t, GetResourceFullPath, (CVRResources * __this, String * pchResourceName, String * pchResourceTypeDirectory, String * pchPathBuffer, uint32_t unBufferLen));
}
