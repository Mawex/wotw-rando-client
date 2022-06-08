using namespace app;

namespace app::methods::PlayFab::Json::ReflectionUtils {
IL2CPP_REGISTER_METHOD(0x004C50A0, Type *, GetTypeInfo, (Type * type));
IL2CPP_REGISTER_METHOD(0x01850220, Attribute *, GetAttribute, (MemberInfo_1 * info, Type * type));
IL2CPP_REGISTER_METHOD(0x01850360, Type *, GetGenericListElementType, (Type * type));
IL2CPP_REGISTER_METHOD(0x018506D0, Attribute *, GetAttribute, (Type * objectType, Type * attributeType));
IL2CPP_REGISTER_METHOD(0x018507D0, Type__Array *, GetGenericTypeArguments, (Type * type));
IL2CPP_REGISTER_METHOD(0x01850800, bool, IsTypeGeneric, (Type * type));
IL2CPP_REGISTER_METHOD(0x018508B0, bool, IsTypeGenericeCollectionInterface, (Type * type));
IL2CPP_REGISTER_METHOD(0x01850A40, bool, IsAssignableFrom, (Type * type1, Type * type2));
IL2CPP_REGISTER_METHOD(0x01850B00, bool, IsTypeDictionary, (Type * type));
IL2CPP_REGISTER_METHOD(0x01850CC0, bool, IsNullableType, (Type * type));
IL2CPP_REGISTER_METHOD(0x01850DE0, Object *, ToNullableType, (Object * obj, Type * nullableType));
IL2CPP_REGISTER_METHOD(0x01850EE0, bool, IsValueType, (Type * type));
IL2CPP_REGISTER_METHOD(0x01850F90, IEnumerable_1_System_Reflection_ConstructorInfo_ *, GetConstructors, (Type * type));
IL2CPP_REGISTER_METHOD(0x01850FC0, ConstructorInfo *, GetConstructorInfo, (Type * type, Type__Array * argsType));
IL2CPP_REGISTER_METHOD(0x018512D0, IEnumerable_1_System_Reflection_PropertyInfo_ *, GetProperties, (Type * type));
IL2CPP_REGISTER_METHOD(0x01851300, IEnumerable_1_System_Reflection_FieldInfo_ *, GetFields, (Type * type));
IL2CPP_REGISTER_METHOD(0x01851330, MethodInfo_1 *, GetGetterMethodInfo, (PropertyInfo_1 * propertyInfo));
IL2CPP_REGISTER_METHOD(0x01851360, MethodInfo_1 *, GetSetterMethodInfo, (PropertyInfo_1 * propertyInfo));
IL2CPP_REGISTER_METHOD(0x01851390, ReflectionUtils_ConstructorDelegate *, GetContructor, (ConstructorInfo * constructorInfo));
IL2CPP_REGISTER_METHOD(0x01851430, ReflectionUtils_ConstructorDelegate *, GetContructor, (Type * type, Type__Array * argsType));
IL2CPP_REGISTER_METHOD(0x018515C0, ReflectionUtils_ConstructorDelegate *, GetConstructorByReflection, (ConstructorInfo * constructorInfo));
IL2CPP_REGISTER_METHOD(0x018517E0, ReflectionUtils_ConstructorDelegate *, GetConstructorByReflection, (Type * type, Type__Array * argsType));
IL2CPP_REGISTER_METHOD(0x018518F0, ReflectionUtils_GetDelegate *, GetGetMethod, (PropertyInfo_1 * propertyInfo));
IL2CPP_REGISTER_METHOD(0x01851990, ReflectionUtils_GetDelegate *, GetGetMethod, (FieldInfo_1 * fieldInfo));
IL2CPP_REGISTER_METHOD(0x01851A30, ReflectionUtils_GetDelegate *, GetGetMethodByReflection, (PropertyInfo_1 * propertyInfo));
IL2CPP_REGISTER_METHOD(0x01851C90, ReflectionUtils_GetDelegate *, GetGetMethodByReflection, (FieldInfo_1 * fieldInfo));
IL2CPP_REGISTER_METHOD(0x01851EB0, ReflectionUtils_SetDelegate *, GetSetMethod, (PropertyInfo_1 * propertyInfo));
IL2CPP_REGISTER_METHOD(0x01851F50, ReflectionUtils_SetDelegate *, GetSetMethod, (FieldInfo_1 * fieldInfo));
IL2CPP_REGISTER_METHOD(0x01851FF0, ReflectionUtils_SetDelegate *, GetSetMethodByReflection, (PropertyInfo_1 * propertyInfo));
IL2CPP_REGISTER_METHOD(0x01852250, ReflectionUtils_SetDelegate *, GetSetMethodByReflection, (FieldInfo_1 * fieldInfo));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ReflectionUtils_1 * __this));
IL2CPP_REGISTER_METHOD(0x01852470, void, __cctor, (MethodInfo * method));
}
