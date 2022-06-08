#include <interception_macros.h>

namespace app::methods::Mono::SafeGPtrArrayHandle {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (SafeGPtrArrayHandle__Boxed * __this, void * ptr));
IL2CPP_REGISTER_METHOD(0x001EA750, void, Dispose, (SafeGPtrArrayHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EA580, int32_t, get_Length, (SafeGPtrArrayHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EA5A0, void *, get_Item, (SafeGPtrArrayHandle__Boxed * __this, int32_t i));
}
