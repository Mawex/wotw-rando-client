#include <interception_macros.h>

namespace app::methods::Mono::RuntimeClassHandle {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor_1, (app::RuntimeClassHandle__Boxed * this_ptr, app::RuntimeStructs_MonoClass * value));
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor_2, (app::RuntimeClassHandle__Boxed * this_ptr, app::void * ptr));
IL2CPP_REGISTER_METHOD(0x00107C00, RuntimeStructs_MonoClass *, get_Value, (app::RuntimeClassHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001EA310, bool, Equals, (app::RuntimeClassHandle__Boxed * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::RuntimeClassHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x023CE770, void *, GetTypeFromClass, (app::RuntimeStructs_MonoClass * klass));
IL2CPP_REGISTER_METHOD(0x001EA440, RuntimeTypeHandle, GetTypeHandle, (app::RuntimeClassHandle__Boxed * this_ptr));
}
