using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRExtendedDisplay__GetEyeOutputViewport {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRExtendedDisplay_GetEyeOutputViewport * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEDA90, void, Invoke, (IVRExtendedDisplay_GetEyeOutputViewport * __this, EVREye__Enum eEye, uint32_t * pnX, uint32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight));
IL2CPP_REGISTER_METHOD(0x02D78340, IAsyncResult *, BeginInvoke, (IVRExtendedDisplay_GetEyeOutputViewport * __this, EVREye__Enum eEye, uint32_t * pnX, uint32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x012DE400, void, EndInvoke, (IVRExtendedDisplay_GetEyeOutputViewport * __this, uint32_t * pnX, uint32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight, IAsyncResult * result));
}
