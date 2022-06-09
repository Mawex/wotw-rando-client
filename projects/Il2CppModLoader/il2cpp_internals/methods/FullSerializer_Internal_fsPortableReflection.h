#include <interception_macros.h>

namespace app::methods::FullSerializer_Internal::fsPortableReflection {
IL2CPP_REGISTER_METHOD(0x01659200, bool, HasAttribute_1, (app::MemberInfo_1 * element, app::Type * attribute_type));
IL2CPP_REGISTER_METHOD(0x016592D0, bool, HasAttribute_2, (app::MemberInfo_1 * element, app::Type * attribute_type, bool should_cache));
IL2CPP_REGISTER_METHOD(0x01659300, Attribute *, GetAttribute_1, (app::MemberInfo_1 * element, app::Type * attribute_type, bool should_cache));
IL2CPP_REGISTER_METHOD(0x016595E0, PropertyInfo_1 *, GetDeclaredProperty, (app::Type * type, app::String * property_name));
IL2CPP_REGISTER_METHOD(0x01659740, MethodInfo_1 *, GetDeclaredMethod, (app::Type * type, app::String * method_name));
IL2CPP_REGISTER_METHOD(0x016598A0, ConstructorInfo *, GetDeclaredConstructor, (app::Type * type, app::Type__Array * parameters));
IL2CPP_REGISTER_METHOD(0x01659A90, ConstructorInfo__Array *, GetDeclaredConstructors, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x01659B60, MemberInfo_1__Array *, GetFlattenedMember, (app::Type * type, app::String * member_name));
IL2CPP_REGISTER_METHOD(0x01659E30, MethodInfo_1 *, GetFlattenedMethod, (app::Type * type, app::String * method_name));
IL2CPP_REGISTER_METHOD(0x0165A010, IEnumerable_1_System_Reflection_MethodInfo_ *, GetFlattenedMethods, (app::Type * type, app::String * method_name));
IL2CPP_REGISTER_METHOD(0x0165A1B0, PropertyInfo_1 *, GetFlattenedProperty, (app::Type * type, app::String * property_name));
IL2CPP_REGISTER_METHOD(0x0165A390, MemberInfo_1 *, GetDeclaredMember, (app::Type * type, app::String * member_name));
IL2CPP_REGISTER_METHOD(0x0165A4F0, MethodInfo_1__Array *, GetDeclaredMethods, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x0165A5C0, PropertyInfo_1__Array *, GetDeclaredProperties, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x0165A690, FieldInfo_1__Array *, GetDeclaredFields, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x0165A760, MemberInfo_1__Array *, GetDeclaredMembers, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x004C50A0, MemberInfo_1 *, AsMemberInfo, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x0165A830, bool, IsType, (app::MemberInfo_1 * member));
IL2CPP_REGISTER_METHOD(0x0165A8F0, Type *, AsType, (app::MemberInfo_1 * member));
IL2CPP_REGISTER_METHOD(0x004C50A0, Type *, Resolve, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x0165A9C0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x018F2A40, bool, HasAttribute_3, (app::MemberInfo_1 * element));
IL2CPP_REGISTER_METHOD(0x018F2B20, bool, HasAttribute_4, (app::MemberInfo_1 * element, bool should_cache));
IL2CPP_REGISTER_METHOD(0x0157F020, Object *, GetAttribute_2, (app::MemberInfo_1 * element, bool should_cache));
IL2CPP_REGISTER_METHOD(0x0157EF70, Object *, GetAttribute_3, (app::MemberInfo_1 * element));
IL2CPP_REGISTER_METHOD(0x0157EF70, FlagsAttribute *, GetAttribute_4, (app::MemberInfo_1 * element));
IL2CPP_REGISTER_METHODINFO(0x047069B8, fsPortableReflection_GetAttribute_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157EF70, fsPropertyAttribute *, GetAttribute_5, (app::MemberInfo_1 * element));
IL2CPP_REGISTER_METHODINFO(0x0473C3D0, fsPortableReflection_GetAttribute_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157EF70, fsObjectAttribute *, GetAttribute_6, (app::MemberInfo_1 * element));
IL2CPP_REGISTER_METHODINFO(0x04733018, fsPortableReflection_GetAttribute_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157EF70, fsForwardAttribute *, GetAttribute_7, (app::MemberInfo_1 * element));
IL2CPP_REGISTER_METHODINFO(0x0474F638, fsPortableReflection_GetAttribute_6__MethodInfo);
}
