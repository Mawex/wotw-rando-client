using namespace app;

namespace app::methods::System::Reflection::Module {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Module * __this));
IL2CPP_REGISTER_METHOD(0x0268DF80, void, GetObjectData, (Module * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x047859A0, Module_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, ToString, (Module * __this));
IL2CPP_REGISTER_METHOD(0x0268DFD0, Guid, GetModuleVersionId, (Module * __this));
IL2CPP_REGISTER_METHOD(0x0268E010, bool, filter_by_type_name, (Type * m, Object * filterCriteria));
IL2CPP_REGISTER_METHODINFO(0x047560B0, Module_filter_by_type_name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268E1C0, bool, filter_by_type_name_ignore_case, (Type * m, Object * filterCriteria));
IL2CPP_REGISTER_METHODINFO(0x04778C60, Module_filter_by_type_name_ignore_case__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268E4E0, String *, GetGuidInternal, (Module * __this));
IL2CPP_REGISTER_METHOD(0x01EEA6F0, bool, Equals, (Module * __this, Object * o));
IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (Module * __this));
IL2CPP_REGISTER_METHOD(0x02283820, bool, operator___, (Module * left, Module * right));
IL2CPP_REGISTER_METHOD(0x02283870, bool, operator___, (Module * left, Module * right));
IL2CPP_REGISTER_METHOD(0x0268E500, Assembly *, get_Assembly, (Module * __this));
IL2CPP_REGISTER_METHODINFO(0x0471F9B8, Module_get_Assembly__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268E5A0, String *, get_ScopeName, (Module * __this));
IL2CPP_REGISTER_METHODINFO(0x04717170, Module_get_ScopeName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268E640, Guid, get_ModuleVersionId, (Module * __this));
IL2CPP_REGISTER_METHODINFO(0x04778968, Module_get_ModuleVersionId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268E6E0, String *, get_FullyQualifiedName, (Module * __this));
IL2CPP_REGISTER_METHODINFO(0x0477E910, Module_get_FullyQualifiedName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268E780, Exception *, CreateNIE, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0268E8D0, bool, IsResource, (Module * __this));
IL2CPP_REGISTER_METHODINFO(0x04762A80, Module_IsResource__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268E970, Object__Array *, GetCustomAttributes, (Module * __this, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x04768508, Module_GetCustomAttributes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268EA10, Object__Array *, GetCustomAttributes, (Module * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x047440C8, Module_GetCustomAttributes_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268EAB0, bool, IsDefined, (Module * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x04798700, Module_IsDefined__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268EB50, void, __cctor, (MethodInfo * method));
}
