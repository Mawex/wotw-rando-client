#include <interception_macros.h>

namespace app::methods::Mono::RuntimeGenericParamInfoHandle {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (RuntimeGenericParamInfoHandle__Boxed * __this, void * ptr));
IL2CPP_REGISTER_METHOD(0x001EA5B0, Type__Array *, get_Constraints, (RuntimeGenericParamInfoHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EA5C0, GenericParameterAttributes__Enum, get_Attributes, (RuntimeGenericParamInfoHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EA5B0, Type__Array *, GetConstraints, (RuntimeGenericParamInfoHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EA5E0, int32_t, GetConstraintsCount, (RuntimeGenericParamInfoHandle__Boxed * __this));
}
