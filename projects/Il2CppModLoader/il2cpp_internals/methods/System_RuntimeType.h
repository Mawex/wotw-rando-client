using namespace app;

namespace app::methods::System::RuntimeType {
IL2CPP_REGISTER_METHOD(0x01EE29F0, void, ThrowIfTypeNeverValidGenericArgument, (RuntimeType * type));
IL2CPP_REGISTER_METHODINFO(0x04732950, RuntimeType_ThrowIfTypeNeverValidGenericArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE2B70, void, SanityCheckGenericArguments, (RuntimeType__Array * genericArguments, RuntimeType__Array * genericParamters));
IL2CPP_REGISTER_METHODINFO(0x0476ADA8, RuntimeType_SanityCheckGenericArguments__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE2DF0, void, SplitName, (String * fullname, String * * name, String * * ns));
IL2CPP_REGISTER_METHOD(0x01EE2F10, void, FilterHelper, (BindingFlags__Enum bindingFlags, String * * name, bool allowPrefixLookup, bool * prefixLookup, bool * ignoreCase, RuntimeType_MemberListType__Enum * listType));
IL2CPP_REGISTER_METHOD(0x01EE3160, void, FilterHelper, (BindingFlags__Enum bindingFlags, String * * name, bool * ignoreCase, RuntimeType_MemberListType__Enum * listType));
IL2CPP_REGISTER_METHOD(0x01EE32E0, bool, FilterApplyPrefixLookup, (MemberInfo_1 * memberInfo, String * name, bool ignoreCase));
IL2CPP_REGISTER_METHOD(0x01EE3530, bool, FilterApplyBase, (MemberInfo_1 * memberInfo, BindingFlags__Enum bindingFlags, bool isPublic, bool isNonProtectedInternal, bool isStatic, String * name, bool prefixLookup));
IL2CPP_REGISTER_METHOD(0x01EE3780, bool, FilterApplyType, (Type * type, BindingFlags__Enum bindingFlags, String * name, bool prefixLookup, String * ns));
IL2CPP_REGISTER_METHOD(0x01EE3920, bool, FilterApplyMethodInfo, (RuntimeMethodInfo * method_1, BindingFlags__Enum bindingFlags, CallingConventions__Enum callConv, Type__Array * argumentTypes));
IL2CPP_REGISTER_METHOD(0x01EE3A10, bool, FilterApplyConstructorInfo, (RuntimeConstructorInfo * constructor, BindingFlags__Enum bindingFlags, CallingConventions__Enum callConv, Type__Array * argumentTypes));
IL2CPP_REGISTER_METHOD(0x01EE3B00, bool, FilterApplyMethodBase, (MethodBase * methodBase, BindingFlags__Enum methodFlags, BindingFlags__Enum bindingFlags, CallingConventions__Enum callConv, Type__Array * argumentTypes));
IL2CPP_REGISTER_METHOD(0x01EE3E60, void, __ctor, (RuntimeType * __this));
IL2CPP_REGISTER_METHODINFO(0x04744D58, RuntimeType__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE3EC0, bool, IsSpecialSerializableType, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE3FE0, RuntimeType_ListBuilder_1_System_Reflection_MethodInfo_, GetMethodCandidates, (RuntimeType * __this, String * name, BindingFlags__Enum bindingAttr, CallingConventions__Enum callConv, Type__Array * types, bool allowPrefixLookup));
IL2CPP_REGISTER_METHOD(0x01EE4210, RuntimeType_ListBuilder_1_System_Reflection_ConstructorInfo_, GetConstructorCandidates, (RuntimeType * __this, String * name, BindingFlags__Enum bindingAttr, CallingConventions__Enum callConv, Type__Array * types, bool allowPrefixLookup));
IL2CPP_REGISTER_METHOD(0x01EE4500, RuntimeType_ListBuilder_1_System_Reflection_PropertyInfo_, GetPropertyCandidates, (RuntimeType * __this, String * name, BindingFlags__Enum bindingAttr, Type__Array * types, bool allowPrefixLookup));
IL2CPP_REGISTER_METHOD(0x01EE4730, RuntimeType_ListBuilder_1_System_Reflection_EventInfo_, GetEventCandidates, (RuntimeType * __this, String * name, BindingFlags__Enum bindingAttr, bool allowPrefixLookup));
IL2CPP_REGISTER_METHOD(0x01EE4920, RuntimeType_ListBuilder_1_System_Reflection_FieldInfo_, GetFieldCandidates, (RuntimeType * __this, String * name, BindingFlags__Enum bindingAttr, bool allowPrefixLookup));
IL2CPP_REGISTER_METHOD(0x01EE4B10, RuntimeType_ListBuilder_1_Type_, GetNestedTypeCandidates, (RuntimeType * __this, String * fullname, BindingFlags__Enum bindingAttr, bool allowPrefixLookup));
IL2CPP_REGISTER_METHOD(0x01EE4D20, MethodInfo_1__Array *, GetMethods, (RuntimeType * __this, BindingFlags__Enum bindingAttr));
IL2CPP_REGISTER_METHOD(0x01EE4E10, ConstructorInfo__Array *, GetConstructors, (RuntimeType * __this, BindingFlags__Enum bindingAttr));
IL2CPP_REGISTER_METHOD(0x01EE4F00, PropertyInfo_1__Array *, GetProperties, (RuntimeType * __this, BindingFlags__Enum bindingAttr));
IL2CPP_REGISTER_METHOD(0x01EE4FF0, EventInfo_1__Array *, GetEvents, (RuntimeType * __this, BindingFlags__Enum bindingAttr));
IL2CPP_REGISTER_METHOD(0x01EE50D0, FieldInfo_1__Array *, GetFields, (RuntimeType * __this, BindingFlags__Enum bindingAttr));
IL2CPP_REGISTER_METHOD(0x01EE51B0, MemberInfo_1__Array *, GetMembers, (RuntimeType * __this, BindingFlags__Enum bindingAttr));
IL2CPP_REGISTER_METHOD(0x01EE5440, MethodInfo_1 *, GetMethodImpl, (RuntimeType * __this, String * name, BindingFlags__Enum bindingAttr, Binder * binder, CallingConventions__Enum callConv, Type__Array * types, ParameterModifier__Array * modifiers));
IL2CPP_REGISTER_METHODINFO(0x04731518, RuntimeType_GetMethodImpl__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE5720, ConstructorInfo *, GetConstructorImpl, (RuntimeType * __this, BindingFlags__Enum bindingAttr, Binder * binder, CallingConventions__Enum callConvention, Type__Array * types, ParameterModifier__Array * modifiers));
IL2CPP_REGISTER_METHOD(0x01EE5990, PropertyInfo_1 *, GetPropertyImpl, (RuntimeType * __this, String * name, BindingFlags__Enum bindingAttr, Binder * binder, Type * returnType, Type__Array * types, ParameterModifier__Array * modifiers));
IL2CPP_REGISTER_METHODINFO(0x0476D3A8, RuntimeType_GetPropertyImpl__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE5C60, EventInfo_1 *, GetEvent, (RuntimeType * __this, String * name, BindingFlags__Enum bindingAttr));
IL2CPP_REGISTER_METHODINFO(0x0477F348, RuntimeType_GetEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE5E20, FieldInfo_1 *, GetField, (RuntimeType * __this, String * name, BindingFlags__Enum bindingAttr));
IL2CPP_REGISTER_METHODINFO(0x04710D48, RuntimeType_GetField__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE61B0, Type *, GetInterface, (RuntimeType * __this, String * fullname, bool ignoreCase));
IL2CPP_REGISTER_METHODINFO(0x0471EE58, RuntimeType_GetInterface__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE6670, Type *, GetNestedType, (RuntimeType * __this, String * fullname, BindingFlags__Enum bindingAttr));
IL2CPP_REGISTER_METHODINFO(0x04727548, RuntimeType_GetNestedType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE68D0, MemberInfo_1__Array *, GetMember, (RuntimeType * __this, String * name, MemberTypes__Enum type, BindingFlags__Enum bindingAttr));
IL2CPP_REGISTER_METHODINFO(0x0474CF38, RuntimeType_GetMember__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE6CB0, Module *, get_Module, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE6CB0, RuntimeModule *, GetRuntimeModule, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE6CD0, Assembly *, get_Assembly, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE6CD0, RuntimeAssembly *, GetRuntimeAssembly, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01600C80, RuntimeTypeHandle, get_TypeHandle, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE6CF0, bool, IsInstanceOfType, (RuntimeType * __this, Object * o));
IL2CPP_REGISTER_METHOD(0x01EE6D20, bool, IsSubclassOf, (RuntimeType * __this, Type * type));
IL2CPP_REGISTER_METHODINFO(0x04727D68, RuntimeType_IsSubclassOf__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE6F00, bool, IsAssignableFrom, (RuntimeType * __this, Type * c));
IL2CPP_REGISTER_METHOD(0x01EE7070, bool, IsEquivalentTo, (RuntimeType * __this, Type * other));
IL2CPP_REGISTER_METHOD(0x01EE7170, Type *, get_BaseType, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE7180, RuntimeType *, GetBaseType, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, Type *, get_UnderlyingSystemType, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE7420, TypeAttributes__Enum, GetAttributeFlagsImpl, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE7450, bool, IsContextfulImpl, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE7520, bool, IsByRefImpl, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE7530, bool, IsPrimitiveImpl, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE7560, bool, IsPointerImpl, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x00B1B670, bool, IsCOMObjectImpl, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE7570, bool, IsValueTypeImpl, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE76B0, bool, get_IsEnum, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE7770, bool, HasElementTypeImpl, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE77D0, GenericParameterAttributes__Enum, get_GenericParameterAttributes, (RuntimeType * __this));
IL2CPP_REGISTER_METHODINFO(0x0473A438, RuntimeType_get_GenericParameterAttributes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE78C0, bool, get_IsSzArray, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE7920, bool, IsArrayImpl, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE7950, int32_t, GetArrayRank, (RuntimeType * __this));
IL2CPP_REGISTER_METHODINFO(0x0476ACB8, RuntimeType_GetArrayRank__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE7A30, Type *, GetElementType, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE7AA0, String__Array *, GetEnumNames, (RuntimeType * __this));
IL2CPP_REGISTER_METHODINFO(0x04720DD0, RuntimeType_GetEnumNames__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE7BE0, Array *, GetEnumValues, (RuntimeType * __this));
IL2CPP_REGISTER_METHODINFO(0x0471DDA0, RuntimeType_GetEnumValues__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE7DE0, Type *, GetEnumUnderlyingType, (RuntimeType * __this));
IL2CPP_REGISTER_METHODINFO(0x0477CD80, RuntimeType_GetEnumUnderlyingType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE7F10, bool, IsEnumDefined, (RuntimeType * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x047675A0, RuntimeType_IsEnumDefined__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE85A0, String *, GetEnumName, (RuntimeType * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0471AB70, RuntimeType_GetEnumName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE8880, RuntimeType__Array *, GetGenericArgumentsInternal, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE8940, Type__Array *, GetGenericArguments, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE8A00, Type *, MakeGenericType, (RuntimeType * __this, Type__Array * instantiation));
IL2CPP_REGISTER_METHODINFO(0x04790258, RuntimeType_MakeGenericType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE8EA0, bool, get_IsGenericTypeDefinition, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE8ED0, bool, get_IsGenericParameter, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE8EF0, int32_t, get_GenericParameterPosition, (RuntimeType * __this));
IL2CPP_REGISTER_METHODINFO(0x04751D70, RuntimeType_get_GenericParameterPosition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE9020, Type *, GetGenericTypeDefinition, (RuntimeType * __this));
IL2CPP_REGISTER_METHODINFO(0x04767988, RuntimeType_GetGenericTypeDefinition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE9140, bool, get_IsGenericType, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE9180, bool, get_IsConstructedGenericType, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EE91D0, Object *, InvokeMember, (RuntimeType * __this, String * name, BindingFlags__Enum bindingFlags, Binder * binder, Object * target, Object__Array * providedArgs, ParameterModifier__Array * modifiers, CultureInfo * culture, String__Array * namedParams));
IL2CPP_REGISTER_METHODINFO(0x04700D30, RuntimeType_InvokeMember__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EEA6F0, bool, Equals, (RuntimeType * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator___, (RuntimeType * left, RuntimeType * right));
IL2CPP_REGISTER_METHOD(0x015F81A0, bool, operator___, (RuntimeType * left, RuntimeType * right));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, Clone, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEA700, void, GetObjectData, (RuntimeType * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04726710, RuntimeType_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EEA7D0, Object__Array *, GetCustomAttributes, (RuntimeType * __this, bool inherit));
IL2CPP_REGISTER_METHOD(0x01EEA8C0, Object__Array *, GetCustomAttributes, (RuntimeType * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x04737800, RuntimeType_GetCustomAttributes_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EEAA70, bool, IsDefined, (RuntimeType * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x04774E40, RuntimeType_IsDefined__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EEAC20, IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributesData, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEACC0, String *, FormatTypeName, (RuntimeType * __this, bool serialization));
IL2CPP_REGISTER_METHOD(0x01EEAEF0, MemberTypes__Enum, get_MemberType, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEAF40, Type *, get_ReflectedType, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEAF60, int32_t, get_MetadataToken, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEAF90, void, CreateInstanceCheckThis, (RuntimeType * __this));
IL2CPP_REGISTER_METHODINFO(0x04727D18, RuntimeType_CreateInstanceCheckThis__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EEB210, Object *, CreateInstanceImpl, (RuntimeType * __this, BindingFlags__Enum bindingAttr, Binder * binder, Object__Array * args, CultureInfo * culture, Object__Array * activationAttributes, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHODINFO(0x04731510, RuntimeType_CreateInstanceImpl__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EEBA00, Object *, CreateInstanceDefaultCtor, (RuntimeType * __this, bool publicOnly, bool skipCheckThis, bool fillCache, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHODINFO(0x047743A0, RuntimeType_CreateInstanceDefaultCtor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EEBB40, MonoCMethod *, GetDefaultConstructor, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEBD80, String *, GetDefaultMemberName, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEBEB0, RuntimeConstructorInfo *, GetSerializationCtor, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEC1D0, Object *, CreateInstanceSlow, (RuntimeType * __this, bool publicOnly, bool skipCheckThis, bool fillCache, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x01EEC210, Object *, CreateInstanceMono, (RuntimeType * __this, bool nonPublic));
IL2CPP_REGISTER_METHODINFO(0x0471CBC8, RuntimeType_CreateInstanceMono__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EEC560, Object *, CheckValue, (RuntimeType * __this, Object * value, Binder * binder, CultureInfo * culture, BindingFlags__Enum invokeAttr));
IL2CPP_REGISTER_METHODINFO(0x0471ED70, RuntimeType_CheckValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EEC7A0, Object *, TryConvertToType, (RuntimeType * __this, Object * value, bool * failed));
IL2CPP_REGISTER_METHOD(0x01EECA70, Object *, IsConvertibleToPrimitiveType, (Object * value, Type * targetType));
IL2CPP_REGISTER_METHOD(0x01EED600, String *, GetCachedName, (RuntimeType * __this, TypeNameKind__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x0474E0B8, RuntimeType_GetCachedName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EED6C0, Type *, make_array_type, (RuntimeType * __this, int32_t rank));
IL2CPP_REGISTER_METHOD(0x01EED720, Type *, MakeArrayType, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EED770, Type *, MakeArrayType, (RuntimeType * __this, int32_t rank));
IL2CPP_REGISTER_METHODINFO(0x0474FBD8, RuntimeType_MakeArrayType_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EED870, Type *, make_byref_type, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EED890, Type *, MakeByRefType, (RuntimeType * __this));
IL2CPP_REGISTER_METHODINFO(0x047130C8, RuntimeType_MakeByRefType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EED960, Type *, MakePointerType, (Type * type));
IL2CPP_REGISTER_METHOD(0x01EED990, Type *, MakePointerType, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEDA40, bool, get_ContainsGenericParameters, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEDB80, Type__Array *, GetGenericParameterConstraints, (RuntimeType * __this));
IL2CPP_REGISTER_METHODINFO(0x04784880, RuntimeType_GetGenericParameterConstraints__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EEDCA0, Object *, CreateInstanceForAnotherGenericParameter, (Type * genericType, RuntimeType * genericArgument));
IL2CPP_REGISTER_METHOD(0x01EEDE80, Type *, MakeGenericType, (Type * gt, Type__Array * types));
IL2CPP_REGISTER_METHOD(0x01EEDE90, void *, GetMethodsByName_native, (RuntimeType * __this, void * namePtr, BindingFlags__Enum bindingAttr, bool ignoreCase));
IL2CPP_REGISTER_METHOD(0x01EEDEA0, RuntimeMethodInfo__Array *, GetMethodsByName, (RuntimeType * __this, String * name, BindingFlags__Enum bindingAttr, bool ignoreCase, RuntimeType * reflectedType));
IL2CPP_REGISTER_METHOD(0x01EEE290, void *, GetPropertiesByName_native, (RuntimeType * __this, void * name, BindingFlags__Enum bindingAttr, bool icase));
IL2CPP_REGISTER_METHOD(0x01EEE2A0, void *, GetConstructors_native, (RuntimeType * __this, BindingFlags__Enum bindingAttr));
IL2CPP_REGISTER_METHOD(0x01EEE2B0, RuntimeConstructorInfo__Array *, GetConstructors_internal, (RuntimeType * __this, BindingFlags__Enum bindingAttr, RuntimeType * reflectedType));
IL2CPP_REGISTER_METHOD(0x01EEE590, RuntimePropertyInfo__Array *, GetPropertiesByName, (RuntimeType * __this, String * name, BindingFlags__Enum bindingAttr, bool icase, RuntimeType * reflectedType));
IL2CPP_REGISTER_METHOD(0x01EEEA90, TypeCode__Enum, GetTypeCodeImpl, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEEB30, TypeCode__Enum, GetTypeCodeImplInternal, (Type * type));
IL2CPP_REGISTER_METHOD(0x01EEEB40, String *, ToString, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsGenericCOMObjectImpl, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEEB50, Object *, CreateInstanceInternal, (Type * type));
IL2CPP_REGISTER_METHOD(0x0173D7D0, MethodBase *, get_DeclaringMethod, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEEBA0, String *, getFullName, (RuntimeType * __this, bool full_name, bool assembly_qualified));
IL2CPP_REGISTER_METHOD(0x01EEEBB0, Type__Array *, GetGenericArgumentsInternal, (RuntimeType * __this, bool runtimeArray));
IL2CPP_REGISTER_METHOD(0x01EEEBC0, GenericParameterAttributes__Enum, GetGenericParameterAttributes, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEEBE0, int32_t, GetGenericParameterPosition, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEEC30, void *, GetEvents_native, (RuntimeType * __this, void * name, BindingFlags__Enum bindingAttr));
IL2CPP_REGISTER_METHOD(0x01EEEC40, void *, GetFields_native, (RuntimeType * __this, void * name, BindingFlags__Enum bindingAttr));
IL2CPP_REGISTER_METHOD(0x01EEEC50, RuntimeFieldInfo__Array *, GetFields_internal, (RuntimeType * __this, String * name, BindingFlags__Enum bindingAttr, RuntimeType * reflectedType));
IL2CPP_REGISTER_METHOD(0x01EEF120, RuntimeEventInfo__Array *, GetEvents_internal, (RuntimeType * __this, String * name, BindingFlags__Enum bindingAttr, RuntimeType * reflectedType));
IL2CPP_REGISTER_METHOD(0x01EEF610, Type__Array *, GetInterfaces, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEF620, void *, GetNestedTypes_native, (RuntimeType * __this, void * name, BindingFlags__Enum bindingAttr));
IL2CPP_REGISTER_METHOD(0x01EEF630, RuntimeType__Array *, GetNestedTypes_internal, (RuntimeType * __this, String * displayName, BindingFlags__Enum bindingAttr));
IL2CPP_REGISTER_METHOD(0x01EEF9A0, String *, get_AssemblyQualifiedName, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEF9B0, Type *, get_DeclaringType, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEF9C0, String *, get_Name, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEFAA0, String *, get_Namespace, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEFB00, int32_t, GetHashCode, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEFC00, String *, get_FullName, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEFDD0, bool, get_IsSZArray, (RuntimeType * __this));
IL2CPP_REGISTER_METHOD(0x01EEFE40, void, __cctor, (MethodInfo * method));
}
