#include <interception_macros.h>

namespace app::methods::UWPCompat::Extensions::TypeExtensions {
IL2CPP_REGISTER_METHOD(0x013DD200, Type *, BaseType, (Type * type));
IL2CPP_REGISTER_METHOD(0x013DD230, FieldInfo_1 *, GetField, (Type * type, String * name));
IL2CPP_REGISTER_METHOD(0x013DD260, FieldInfo_1__Array *, GetFields, (Type * type));
IL2CPP_REGISTER_METHOD(0x013DD290, FieldInfo_1__Array *, GetFields, (Type * type, BindingFlags__Enum_1 flags));
IL2CPP_REGISTER_METHOD(0x013DD2D0, Type__Array *, GetInterfaces, (Type * type));
IL2CPP_REGISTER_METHOD(0x013DD300, MethodInfo_1 *, GetMethod, (Type * type, String * name));
IL2CPP_REGISTER_METHOD(0x013DD320, MethodInfo_1 *, GetMethod, (Type * type, String * name, Type__Array * types));
IL2CPP_REGISTER_METHOD(0x013DD340, MethodInfo_1 *, GetMethod, (Type * type, String * name, Object__Array * parameters));
IL2CPP_REGISTER_METHOD(0x013DD550, MethodInfo_1 *, GetMethod, (Type * type, String * name, BindingFlags__Enum_1 flags));
IL2CPP_REGISTER_METHOD(0x013DD590, MethodInfo_1 *, GetMethod, (Type * type, String * name, BindingFlags__Enum_1 flags, Type__Array * types));
IL2CPP_REGISTER_METHOD(0x013DD5F0, PropertyInfo_1 *, GetProperty, (Type * type, String * name));
IL2CPP_REGISTER_METHOD(0x013DD610, PropertyInfo_1__Array *, GetProperties, (Type * type));
IL2CPP_REGISTER_METHOD(0x013DD640, Object *, InvokeMember, (Type * type, String * name, BindingFlags__Enum_1 flags, Object * target, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x013DD6D0, bool, IsAssignableFrom, (Type * type, Type * other));
IL2CPP_REGISTER_METHOD(0x013DD700, bool, IsDefined, (Type * type, Type * attributeType));
IL2CPP_REGISTER_METHOD(0x013DD710, bool, IsDefined, (Type * type, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x013DD740, bool, IsValueType, (Type * type));
}
