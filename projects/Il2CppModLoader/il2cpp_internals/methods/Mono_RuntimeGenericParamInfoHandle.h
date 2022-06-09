#include <interception_macros.h>

namespace app::methods::Mono::RuntimeGenericParamInfoHandle {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (app::RuntimeGenericParamInfoHandle__Boxed * this_ptr, app::void * ptr));
IL2CPP_REGISTER_METHOD(0x001EA5B0, Type__Array *, get_Constraints, (app::RuntimeGenericParamInfoHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001EA5C0, GenericParameterAttributes__Enum, get_Attributes, (app::RuntimeGenericParamInfoHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001EA5B0, Type__Array *, GetConstraints, (app::RuntimeGenericParamInfoHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001EA5E0, int32_t, GetConstraintsCount, (app::RuntimeGenericParamInfoHandle__Boxed * this_ptr));
}
