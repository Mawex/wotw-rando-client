using namespace app;

namespace app::methods::System::Dynamic::ExpandoObject_MetaExpando {
IL2CPP_REGISTER_METHOD(0x01F90A70, void, __ctor, (ExpandoObject_MetaExpando * __this, Expression * expression, ExpandoObject * value));
IL2CPP_REGISTER_METHOD(0x01F90B70, DynamicMetaObject *, BindGetOrInvokeMember, (ExpandoObject_MetaExpando * __this, DynamicMetaObjectBinder * binder, String * name, bool ignoreCase, DynamicMetaObject * fallback, Func_2_System_Dynamic_DynamicMetaObject_System_Dynamic_DynamicMetaObject_ * fallbackInvoke));
IL2CPP_REGISTER_METHOD(0x01F91540, DynamicMetaObject *, BindGetMember, (ExpandoObject_MetaExpando * __this, GetMemberBinder * binder));
IL2CPP_REGISTER_METHOD(0x01F91640, DynamicMetaObject *, BindSetMember, (ExpandoObject_MetaExpando * __this, SetMemberBinder * binder, DynamicMetaObject * value));
IL2CPP_REGISTER_METHOD(0x01F91C10, IEnumerable_1_System_String_ *, GetDynamicMemberNames, (ExpandoObject_MetaExpando * __this));
IL2CPP_REGISTER_METHOD(0x01F91DA0, DynamicMetaObject *, AddDynamicTestAndDefer, (ExpandoObject_MetaExpando * __this, DynamicMetaObjectBinder * binder, ExpandoClass * klass, ExpandoClass * originalClass, DynamicMetaObject * succeeds));
IL2CPP_REGISTER_METHOD(0x01F92290, ExpandoClass *, GetClassEnsureIndex, (ExpandoObject_MetaExpando * __this, String * name, bool caseInsensitive, ExpandoObject * obj, ExpandoClass * * klass, int32_t * index));
IL2CPP_REGISTER_METHOD(0x01F92370, Expression *, GetLimitedSelf, (ExpandoObject_MetaExpando * __this));
IL2CPP_REGISTER_METHOD(0x01F92480, BindingRestrictions *, GetRestrictions, (ExpandoObject_MetaExpando * __this));
IL2CPP_REGISTER_METHOD(0x01F92610, ExpandoObject *, get_Value, (ExpandoObject_MetaExpando * __this));
}
