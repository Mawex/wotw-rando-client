#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVRExtendedDisplay {
IL2CPP_REGISTER_METHOD(0x016786F0, void, __ctor, (CVRExtendedDisplay * __this, void * pInterface));
IL2CPP_REGISTER_METHOD(0x01678810, void, GetWindowBounds, (CVRExtendedDisplay * __this, int32_t * pnX, int32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight));
IL2CPP_REGISTER_METHOD(0x01678850, void, GetEyeOutputViewport, (CVRExtendedDisplay * __this, EVREye__Enum eEye, uint32_t * pnX, uint32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight));
IL2CPP_REGISTER_METHOD(0x01678890, void, GetDXGIOutputInfo, (CVRExtendedDisplay * __this, int32_t * pnAdapterIndex, int32_t * pnAdapterOutputIndex));
}
