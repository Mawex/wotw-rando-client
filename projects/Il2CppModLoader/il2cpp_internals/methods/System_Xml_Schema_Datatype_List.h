using namespace app;

namespace app::methods::System::Xml::Schema::Datatype_List {
IL2CPP_REGISTER_METHOD(0x023557B0, XmlValueConverter *, CreateValueConverter, (Datatype_List * __this, XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x02355AF0, void, __ctor, (Datatype_List * __this, DatatypeImplementation * type, int32_t minListSize));
IL2CPP_REGISTER_METHOD(0x02355BB0, int32_t, Compare, (Datatype_List * __this, Object * value1, Object * value2));
IL2CPP_REGISTER_METHOD(0x02355F40, Type *, get_ValueType, (Datatype_List * __this));
IL2CPP_REGISTER_METHOD(0x02355F60, XmlTokenizedType__Enum, get_TokenizedType, (Datatype_List * __this));
IL2CPP_REGISTER_METHOD(0x02355F90, Type *, get_ListValueType, (Datatype_List * __this));
IL2CPP_REGISTER_METHOD(0x02355FC0, FacetsChecker *, get_FacetsChecker, (Datatype_List * __this));
IL2CPP_REGISTER_METHOD(0x02356060, XmlTypeCode__Enum, get_TypeCode, (Datatype_List * __this));
IL2CPP_REGISTER_METHOD(0x00E40570, RestrictionFlags__Enum, get_ValidRestrictionFlags, (Datatype_List * __this));
IL2CPP_REGISTER_METHOD(0x02356090, Exception *, TryParseValue, (Datatype_List * __this, Object * value, XmlNameTable * nameTable, IXmlNamespaceResolver * namespaceResolver, Object * * typedValue));
IL2CPP_REGISTER_METHODINFO(0x047221A8, Datatype_List_TryParseValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02356610, Exception *, TryParseValue, (Datatype_List * __this, String * s, XmlNameTable * nameTable, IXmlNamespaceResolver * nsmgr, Object * * typedValue));
}
