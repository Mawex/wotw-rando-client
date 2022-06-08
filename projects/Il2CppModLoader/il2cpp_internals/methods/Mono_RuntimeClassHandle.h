#include <interception_macros.h>

namespace app::methods::Mono::RuntimeClassHandle {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (RuntimeClassHandle__Boxed * __this, RuntimeStructs_MonoClass * value));
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (RuntimeClassHandle__Boxed * __this, void * ptr));
IL2CPP_REGISTER_METHOD(0x00107C00, RuntimeStructs_MonoClass *, get_Value, (RuntimeClassHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EA310, bool, Equals, (RuntimeClassHandle__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (RuntimeClassHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x023CE770, void *, GetTypeFromClass, (RuntimeStructs_MonoClass * klass));
IL2CPP_REGISTER_METHOD(0x001EA440, RuntimeTypeHandle, GetTypeHandle, (RuntimeClassHandle__Boxed * __this));
}
