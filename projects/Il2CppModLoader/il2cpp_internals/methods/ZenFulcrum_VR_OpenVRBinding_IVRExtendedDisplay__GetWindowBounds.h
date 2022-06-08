#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRExtendedDisplay__GetWindowBounds {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRExtendedDisplay_GetWindowBounds * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x012DDED0, void, Invoke, (IVRExtendedDisplay_GetWindowBounds * __this, int32_t * pnX, int32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight));
IL2CPP_REGISTER_METHOD(0x02D78470, IAsyncResult *, BeginInvoke, (IVRExtendedDisplay_GetWindowBounds * __this, int32_t * pnX, int32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x012DE400, void, EndInvoke, (IVRExtendedDisplay_GetWindowBounds * __this, int32_t * pnX, int32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight, IAsyncResult * result));
}
