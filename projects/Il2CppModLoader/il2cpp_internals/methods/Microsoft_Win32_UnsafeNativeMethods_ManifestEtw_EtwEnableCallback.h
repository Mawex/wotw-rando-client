#include <interception_macros.h>

namespace app::methods::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UnsafeNativeMethods_ManifestEtw_EtwEnableCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x023B76B0, void, Invoke, (UnsafeNativeMethods_ManifestEtw_EtwEnableCallback * __this, Guid * sourceId, int32_t isEnabled, uint8_t level, int64_t matchAnyKeywords, int64_t matchAllKeywords, UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR * filterData, Void * callbackContext));
IL2CPP_REGISTER_METHOD(0x023B7C70, IAsyncResult *, BeginInvoke, (UnsafeNativeMethods_ManifestEtw_EtwEnableCallback * __this, Guid * sourceId, int32_t isEnabled, uint8_t level, int64_t matchAnyKeywords, int64_t matchAllKeywords, UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR * filterData, Void * callbackContext, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (UnsafeNativeMethods_ManifestEtw_EtwEnableCallback * __this, Guid * sourceId, IAsyncResult * result));
}
