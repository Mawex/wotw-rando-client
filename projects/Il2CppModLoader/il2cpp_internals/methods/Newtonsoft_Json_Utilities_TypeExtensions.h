#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::TypeExtensions {
IL2CPP_REGISTER_METHOD(0x019E35B0, MemberTypes__Enum, MemberType, (MemberInfo_1 * memberInfo));
IL2CPP_REGISTER_METHOD(0x03028500, bool, ContainsGenericParameters, (Type * type));
IL2CPP_REGISTER_METHOD(0x03028530, bool, IsInterface, (Type * type));
IL2CPP_REGISTER_METHOD(0x03028550, bool, IsGenericType, (Type * type));
IL2CPP_REGISTER_METHOD(0x03028580, bool, IsGenericTypeDefinition, (Type * type));
IL2CPP_REGISTER_METHOD(0x013DD200, Type *, BaseType, (Type * type));
IL2CPP_REGISTER_METHOD(0x023AE510, Assembly *, Assembly, (Type * type));
IL2CPP_REGISTER_METHOD(0x01A084B0, bool, IsEnum, (Type * type));
IL2CPP_REGISTER_METHOD(0x030285B0, bool, IsClass, (Type * type));
IL2CPP_REGISTER_METHOD(0x023AE4E0, bool, IsSealed, (Type * type));
IL2CPP_REGISTER_METHOD(0x023AE4B0, bool, IsAbstract, (Type * type));
IL2CPP_REGISTER_METHOD(0x03028600, bool, IsVisible, (Type * type));
IL2CPP_REGISTER_METHOD(0x013DD740, bool, IsValueType, (Type * type));
IL2CPP_REGISTER_METHOD(0x02418EF0, bool, IsPrimitive, (Type * type));
IL2CPP_REGISTER_METHOD(0x03028620, bool, AssignableToTypeName, (Type * type, String * fullTypeName, bool searchInterfaces, Type * * match));
IL2CPP_REGISTER_METHOD(0x030288F0, bool, AssignableToTypeName, (Type * type, String * fullTypeName, bool searchInterfaces));
IL2CPP_REGISTER_METHOD(0x03028910, bool, ImplementInterface, (Type * type, Type * interfaceType));
}
