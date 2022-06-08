#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::EnumUtils {
IL2CPP_REGISTER_METHOD(0x01C0F590, EnumInfo *, InitializeValuesAndNames, (StructMultiKey_2_System_Type_Newtonsoft_Json_Serialization_NamingStrategy_ key));
IL2CPP_REGISTER_METHODINFO(0x047370B0, EnumUtils_InitializeValuesAndNames__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C0FBF0, bool, TryToString, (Type * enumType, Object * value, NamingStrategy * namingStrategy, String * * name));
IL2CPP_REGISTER_METHOD(0x01C0FE80, String *, InternalFlagsFormat, (EnumInfo * entry, uint64_t result));
IL2CPP_REGISTER_METHOD(0x01C101B0, EnumInfo *, GetEnumValuesAndNames, (Type * enumType));
IL2CPP_REGISTER_METHOD(0x01C102B0, uint64_t, ToUInt64, (Object * value));
IL2CPP_REGISTER_METHODINFO(0x047384D0, EnumUtils_ToUInt64__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C10630, Object *, ParseEnum, (Type * enumType, NamingStrategy * namingStrategy, String * value, bool disallowNumber));
IL2CPP_REGISTER_METHODINFO(0x04701598, EnumUtils_ParseEnum__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C11010, Nullable_1_Int32_, MatchName, (String * value, String__Array * enumNames, String__Array * resolvedNames, int32_t valueIndex, int32_t valueSubstringLength, StringComparison__Enum comparison));
IL2CPP_REGISTER_METHOD(0x01C11140, Nullable_1_Int32_, FindIndexByName, (String__Array * enumNames, String * value, int32_t valueIndex, int32_t valueSubstringLength, StringComparison__Enum comparison));
IL2CPP_REGISTER_METHOD(0x01C11280, void, __cctor, ());
}
