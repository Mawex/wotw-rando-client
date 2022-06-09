#include <interception_macros.h>

namespace app::methods::System_Reflection::MonoPropertyInfo {
IL2CPP_REGISTER_METHOD(0x02694530, void, get_property_info, (app::MonoProperty * prop, app::MonoPropertyInfo * info, app::PInfo__Enum req_info));
IL2CPP_REGISTER_METHOD(0x02694620, Type__Array *, GetTypeModifiers, (app::MonoProperty * prop, bool optional));
IL2CPP_REGISTER_METHOD(0x0173D7D0, Object *, get_default_value, (app::MonoProperty * prop));
}
