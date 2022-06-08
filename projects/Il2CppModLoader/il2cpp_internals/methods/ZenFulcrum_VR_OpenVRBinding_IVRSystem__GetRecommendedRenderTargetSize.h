using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetRecommendedRenderTargetSize {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetRecommendedRenderTargetSize * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x012E7480, void, Invoke, (IVRSystem_GetRecommendedRenderTargetSize * __this, uint32_t * pnWidth, uint32_t * pnHeight));
IL2CPP_REGISTER_METHOD(0x02CEE4D0, IAsyncResult *, BeginInvoke, (IVRSystem_GetRecommendedRenderTargetSize * __this, uint32_t * pnWidth, uint32_t * pnHeight, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x012E78E0, void, EndInvoke, (IVRSystem_GetRecommendedRenderTargetSize * __this, uint32_t * pnWidth, uint32_t * pnHeight, IAsyncResult * result));
}
