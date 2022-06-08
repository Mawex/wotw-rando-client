#include <interception_macros.h>

namespace app::methods::System::Dynamic::Utils::TypeExtensions {
IL2CPP_REGISTER_METHOD(0x01F95E10, MethodInfo_1 *, GetAnyStaticMethodValidated, (Type * type, String * name, Type__Array * types));
IL2CPP_REGISTER_METHOD(0x01F95F10, bool, MatchesArgumentTypes, (MethodInfo_1 * mi, Type__Array * argTypes));
IL2CPP_REGISTER_METHOD(0x01F960D0, Type *, GetReturnType, (MethodBase * mi));
IL2CPP_REGISTER_METHOD(0x01F96220, TypeCode__Enum, GetTypeCode, (Type * type));
IL2CPP_REGISTER_METHOD(0x01F962C0, ParameterInfo_1__Array *, GetParametersCached, (MethodBase * method_1));
IL2CPP_REGISTER_METHOD(0x01F96450, void, __cctor, ());
}
