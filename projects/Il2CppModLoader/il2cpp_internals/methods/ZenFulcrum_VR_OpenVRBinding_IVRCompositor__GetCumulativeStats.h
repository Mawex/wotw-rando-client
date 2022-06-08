#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetCumulativeStats {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRCompositor_GetCumulativeStats * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02187340, void, Invoke, (IVRCompositor_GetCumulativeStats * __this, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes));
IL2CPP_REGISTER_METHOD(0x02F41B00, IAsyncResult *, BeginInvoke, (IVRCompositor_GetCumulativeStats * __this, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (IVRCompositor_GetCumulativeStats * __this, Compositor_CumulativeStats * pStats, IAsyncResult * result));
}
