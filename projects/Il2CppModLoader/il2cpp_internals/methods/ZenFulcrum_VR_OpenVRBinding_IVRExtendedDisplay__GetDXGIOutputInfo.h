using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRExtendedDisplay__GetDXGIOutputInfo {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRExtendedDisplay_GetDXGIOutputInfo * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x012E7480, void, Invoke, (IVRExtendedDisplay_GetDXGIOutputInfo * __this, int32_t * pnAdapterIndex, int32_t * pnAdapterOutputIndex));
IL2CPP_REGISTER_METHOD(0x02D78250, IAsyncResult *, BeginInvoke, (IVRExtendedDisplay_GetDXGIOutputInfo * __this, int32_t * pnAdapterIndex, int32_t * pnAdapterOutputIndex, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x012E78E0, void, EndInvoke, (IVRExtendedDisplay_GetDXGIOutputInfo * __this, int32_t * pnAdapterIndex, int32_t * pnAdapterOutputIndex, IAsyncResult * result));
}
