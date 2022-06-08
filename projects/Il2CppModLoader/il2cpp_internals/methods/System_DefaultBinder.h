using namespace app;

namespace app::methods::System::DefaultBinder {
IL2CPP_REGISTER_METHOD(0x01737180, MethodBase *, BindToMethod, (DefaultBinder * __this, BindingFlags__Enum bindingAttr, MethodBase__Array * match, Object__Array * * args, ParameterModifier__Array * modifiers, CultureInfo * cultureInfo, String__Array * names, Object * * state));
IL2CPP_REGISTER_METHODINFO(0x0472C568, DefaultBinder_BindToMethod__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017398D0, FieldInfo_1 *, BindToField, (DefaultBinder * __this, BindingFlags__Enum bindingAttr, FieldInfo_1__Array * match, Object * value, CultureInfo * cultureInfo));
IL2CPP_REGISTER_METHODINFO(0x04714DE0, DefaultBinder_BindToField__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0173A060, MethodBase *, SelectMethod, (DefaultBinder * __this, BindingFlags__Enum bindingAttr, MethodBase__Array * match, Type__Array * types, ParameterModifier__Array * modifiers));
IL2CPP_REGISTER_METHODINFO(0x04768908, DefaultBinder_SelectMethod__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0173A890, PropertyInfo_1 *, SelectProperty, (DefaultBinder * __this, BindingFlags__Enum bindingAttr, PropertyInfo_1__Array * match, Type * returnType, Type__Array * indexes, ParameterModifier__Array * modifiers));
IL2CPP_REGISTER_METHODINFO(0x0476FBF0, DefaultBinder_SelectProperty__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0173B440, Object *, ChangeType, (DefaultBinder * __this, Object * value, Type * type, CultureInfo * cultureInfo));
IL2CPP_REGISTER_METHODINFO(0x04708480, DefaultBinder_ChangeType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0173B4B0, void, ReorderArgumentArray, (DefaultBinder * __this, Object__Array * * args, Object * state));
IL2CPP_REGISTER_METHOD(0x0173B880, MethodBase *, ExactBinding, (MethodBase__Array * match, Type__Array * types, ParameterModifier__Array * modifiers));
IL2CPP_REGISTER_METHODINFO(0x04784108, DefaultBinder_ExactBinding__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0173BB60, PropertyInfo_1 *, ExactPropertyBinding, (PropertyInfo_1__Array * match, Type * returnType, Type__Array * types, ParameterModifier__Array * modifiers));
IL2CPP_REGISTER_METHODINFO(0x04729310, DefaultBinder_ExactPropertyBinding__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0173BEB0, int32_t, FindMostSpecific, (ParameterInfo_1__Array * p1, Int32__Array * paramOrder1, Type * paramArrayType1, ParameterInfo_1__Array * p2, Int32__Array * paramOrder2, Type * paramArrayType2, Type__Array * types, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x0173C3B0, int32_t, FindMostSpecificType, (Type * c1, Type * c2, Type * t));
IL2CPP_REGISTER_METHOD(0x0173C750, int32_t, FindMostSpecificMethod, (MethodBase * m1, Int32__Array * paramOrder1, Type * paramArrayType1, MethodBase * m2, Int32__Array * paramOrder2, Type * paramArrayType2, Type__Array * types, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x0173C880, int32_t, FindMostSpecificField, (FieldInfo_1 * cur1, FieldInfo_1 * cur2));
IL2CPP_REGISTER_METHOD(0x0173C880, int32_t, FindMostSpecificProperty, (PropertyInfo_1 * cur1, PropertyInfo_1 * cur2));
IL2CPP_REGISTER_METHOD(0x0173C980, bool, CompareMethodSigAndName, (MethodBase * m1, MethodBase * m2));
IL2CPP_REGISTER_METHOD(0x0173CB40, int32_t, GetHierarchyDepth, (Type * t));
IL2CPP_REGISTER_METHOD(0x0173CC10, MethodBase *, FindMostDerivedNewSlotMeth, (MethodBase__Array * match, int32_t cMatches));
IL2CPP_REGISTER_METHODINFO(0x0470BAB0, DefaultBinder_FindMostDerivedNewSlotMeth__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0173CD70, void, ReorderParams, (Int32__Array * paramOrder, Object__Array * vars));
IL2CPP_REGISTER_METHOD(0x0173CF70, bool, CreateParamOrder, (Int32__Array * paramOrder, ParameterInfo_1__Array * pars, String__Array * names));
IL2CPP_REGISTER_METHOD(0x0173D260, bool, CanConvertPrimitive, (RuntimeType * source, RuntimeType * target));
IL2CPP_REGISTER_METHOD(0x0173D4E0, bool, CanConvertPrimitiveObjectToType, (Object * source, RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DefaultBinder * __this));
}
