#include <interception_macros.h>

namespace app::methods::Mono::RuntimeEventHandle {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (RuntimeEventHandle__Boxed * __this, void * v));
IL2CPP_REGISTER_METHOD(0x00107C00, void *, get_Value, (RuntimeEventHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EA450, bool, Equals, (RuntimeEventHandle__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (RuntimeEventHandle__Boxed * __this));
}
