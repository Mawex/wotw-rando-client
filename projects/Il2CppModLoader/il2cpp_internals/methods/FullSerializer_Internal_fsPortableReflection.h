using namespace app;

namespace app::methods::FullSerializer::Internal::fsPortableReflection {
IL2CPP_REGISTER_METHOD(0x01659200, bool, HasAttribute, (MemberInfo_1 * element, Type * attributeType));
IL2CPP_REGISTER_METHOD(0x016592D0, bool, HasAttribute, (MemberInfo_1 * element, Type * attributeType, bool shouldCache));
IL2CPP_REGISTER_METHOD(0x01659300, Attribute *, GetAttribute, (MemberInfo_1 * element, Type * attributeType, bool shouldCache));
IL2CPP_REGISTER_METHOD(0x016595E0, PropertyInfo_1 *, GetDeclaredProperty, (Type * type, String * propertyName));
IL2CPP_REGISTER_METHOD(0x01659740, MethodInfo_1 *, GetDeclaredMethod, (Type * type, String * methodName));
IL2CPP_REGISTER_METHOD(0x016598A0, ConstructorInfo *, GetDeclaredConstructor, (Type * type, Type__Array * parameters));
IL2CPP_REGISTER_METHOD(0x01659A90, ConstructorInfo__Array *, GetDeclaredConstructors, (Type * type));
IL2CPP_REGISTER_METHOD(0x01659B60, MemberInfo_1__Array *, GetFlattenedMember, (Type * type, String * memberName));
IL2CPP_REGISTER_METHOD(0x01659E30, MethodInfo_1 *, GetFlattenedMethod, (Type * type, String * methodName));
IL2CPP_REGISTER_METHOD(0x0165A010, IEnumerable_1_System_Reflection_MethodInfo_ *, GetFlattenedMethods, (Type * type, String * methodName));
IL2CPP_REGISTER_METHOD(0x0165A1B0, PropertyInfo_1 *, GetFlattenedProperty, (Type * type, String * propertyName));
IL2CPP_REGISTER_METHOD(0x0165A390, MemberInfo_1 *, GetDeclaredMember, (Type * type, String * memberName));
IL2CPP_REGISTER_METHOD(0x0165A4F0, MethodInfo_1__Array *, GetDeclaredMethods, (Type * type));
IL2CPP_REGISTER_METHOD(0x0165A5C0, PropertyInfo_1__Array *, GetDeclaredProperties, (Type * type));
IL2CPP_REGISTER_METHOD(0x0165A690, FieldInfo_1__Array *, GetDeclaredFields, (Type * type));
IL2CPP_REGISTER_METHOD(0x0165A760, MemberInfo_1__Array *, GetDeclaredMembers, (Type * type));
IL2CPP_REGISTER_METHOD(0x004C50A0, MemberInfo_1 *, AsMemberInfo, (Type * type));
IL2CPP_REGISTER_METHOD(0x0165A830, bool, IsType, (MemberInfo_1 * member));
IL2CPP_REGISTER_METHOD(0x0165A8F0, Type *, AsType, (MemberInfo_1 * member));
IL2CPP_REGISTER_METHOD(0x004C50A0, Type *, Resolve, (Type * type));
IL2CPP_REGISTER_METHOD(0x0165A9C0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x018F2A40, bool, HasAttribute, (MemberInfo_1 * element));
IL2CPP_REGISTER_METHOD(0x018F2B20, bool, HasAttribute, (MemberInfo_1 * element, bool shouldCache));
IL2CPP_REGISTER_METHOD(0x0157F020, Object *, GetAttribute, (MemberInfo_1 * element, bool shouldCache));
IL2CPP_REGISTER_METHOD(0x0157EF70, Object *, GetAttribute, (MemberInfo_1 * element));
IL2CPP_REGISTER_METHOD(0x0157EF70, FlagsAttribute *, GetAttribute, (MemberInfo_1 * element));
IL2CPP_REGISTER_METHODINFO(0x047069B8, fsPortableReflection_GetAttribute_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157EF70, fsPropertyAttribute *, GetAttribute, (MemberInfo_1 * element));
IL2CPP_REGISTER_METHODINFO(0x0473C3D0, fsPortableReflection_GetAttribute_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157EF70, fsObjectAttribute *, GetAttribute, (MemberInfo_1 * element));
IL2CPP_REGISTER_METHODINFO(0x04733018, fsPortableReflection_GetAttribute_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157EF70, fsForwardAttribute *, GetAttribute, (MemberInfo_1 * element));
IL2CPP_REGISTER_METHODINFO(0x0474F638, fsPortableReflection_GetAttribute_6__MethodInfo);
}
