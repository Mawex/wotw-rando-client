#include <interception_macros.h>

namespace app::methods::PlayFab_Json::ReflectionUtils {
IL2CPP_REGISTER_METHOD(0x004C50A0, Type *, GetTypeInfo, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x01850220, Attribute *, GetAttribute_1, (app::MemberInfo_1 * info, app::Type * type));
IL2CPP_REGISTER_METHOD(0x01850360, Type *, GetGenericListElementType, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x018506D0, Attribute *, GetAttribute_2, (app::Type * object_type, app::Type * attribute_type));
IL2CPP_REGISTER_METHOD(0x018507D0, Type__Array *, GetGenericTypeArguments, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x01850800, bool, IsTypeGeneric, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x018508B0, bool, IsTypeGenericeCollectionInterface, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x01850A40, bool, IsAssignableFrom, (app::Type * type1, app::Type * type2));
IL2CPP_REGISTER_METHOD(0x01850B00, bool, IsTypeDictionary, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x01850CC0, bool, IsNullableType, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x01850DE0, Object *, ToNullableType, (app::Object * obj, app::Type * nullable_type));
IL2CPP_REGISTER_METHOD(0x01850EE0, bool, IsValueType, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x01850F90, IEnumerable_1_System_Reflection_ConstructorInfo_ *, GetConstructors, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x01850FC0, ConstructorInfo *, GetConstructorInfo, (app::Type * type, app::Type__Array * args_type));
IL2CPP_REGISTER_METHOD(0x018512D0, IEnumerable_1_System_Reflection_PropertyInfo_ *, GetProperties, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x01851300, IEnumerable_1_System_Reflection_FieldInfo_ *, GetFields, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x01851330, MethodInfo_1 *, GetGetterMethodInfo, (app::PropertyInfo_1 * property_info));
IL2CPP_REGISTER_METHOD(0x01851360, MethodInfo_1 *, GetSetterMethodInfo, (app::PropertyInfo_1 * property_info));
IL2CPP_REGISTER_METHOD(0x01851390, ReflectionUtils_ConstructorDelegate *, GetContructor_1, (app::ConstructorInfo * constructor_info));
IL2CPP_REGISTER_METHOD(0x01851430, ReflectionUtils_ConstructorDelegate *, GetContructor_2, (app::Type * type, app::Type__Array * args_type));
IL2CPP_REGISTER_METHOD(0x018515C0, ReflectionUtils_ConstructorDelegate *, GetConstructorByReflection_1, (app::ConstructorInfo * constructor_info));
IL2CPP_REGISTER_METHOD(0x018517E0, ReflectionUtils_ConstructorDelegate *, GetConstructorByReflection_2, (app::Type * type, app::Type__Array * args_type));
IL2CPP_REGISTER_METHOD(0x018518F0, ReflectionUtils_GetDelegate *, GetGetMethod_1, (app::PropertyInfo_1 * property_info));
IL2CPP_REGISTER_METHOD(0x01851990, ReflectionUtils_GetDelegate *, GetGetMethod_2, (app::FieldInfo_1 * field_info));
IL2CPP_REGISTER_METHOD(0x01851A30, ReflectionUtils_GetDelegate *, GetGetMethodByReflection_1, (app::PropertyInfo_1 * property_info));
IL2CPP_REGISTER_METHOD(0x01851C90, ReflectionUtils_GetDelegate *, GetGetMethodByReflection_2, (app::FieldInfo_1 * field_info));
IL2CPP_REGISTER_METHOD(0x01851EB0, ReflectionUtils_SetDelegate *, GetSetMethod_1, (app::PropertyInfo_1 * property_info));
IL2CPP_REGISTER_METHOD(0x01851F50, ReflectionUtils_SetDelegate *, GetSetMethod_2, (app::FieldInfo_1 * field_info));
IL2CPP_REGISTER_METHOD(0x01851FF0, ReflectionUtils_SetDelegate *, GetSetMethodByReflection_1, (app::PropertyInfo_1 * property_info));
IL2CPP_REGISTER_METHOD(0x01852250, ReflectionUtils_SetDelegate *, GetSetMethodByReflection_2, (app::FieldInfo_1 * field_info));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::ReflectionUtils_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x01852470, void, __cctor, ());
}
