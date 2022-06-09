#include <interception_macros.h>

namespace app::methods::System_Dynamic_Utils::TypeExtensions {
IL2CPP_REGISTER_METHOD(0x01F95E10, MethodInfo_1 *, GetAnyStaticMethodValidated, (app::Type * type, app::String * name, app::Type__Array * types));
IL2CPP_REGISTER_METHOD(0x01F95F10, bool, MatchesArgumentTypes, (app::MethodInfo_1 * mi, app::Type__Array * arg_types));
IL2CPP_REGISTER_METHOD(0x01F960D0, Type *, GetReturnType, (app::MethodBase * mi));
IL2CPP_REGISTER_METHOD(0x01F96220, TypeCode__Enum, GetTypeCode, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x01F962C0, ParameterInfo_1__Array *, GetParametersCached, (app::MethodBase * method_1));
IL2CPP_REGISTER_METHOD(0x01F96450, void, __cctor, ());
}
