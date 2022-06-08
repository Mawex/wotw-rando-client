using namespace app;

namespace app::methods::System::Xml::Schema::Datatype_NOTATION {
IL2CPP_REGISTER_METHOD(0x02356E60, XmlValueConverter *, CreateValueConverter, (Datatype_NOTATION * __this, XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x02356E70, FacetsChecker *, get_FacetsChecker, (Datatype_NOTATION * __this));
IL2CPP_REGISTER_METHOD(0x00E3EBF0, XmlTypeCode__Enum, get_TypeCode, (Datatype_NOTATION * __this));
IL2CPP_REGISTER_METHOD(0x0043D9A0, XmlTokenizedType__Enum, get_TokenizedType, (Datatype_NOTATION * __this));
IL2CPP_REGISTER_METHOD(0x00E40570, RestrictionFlags__Enum, get_ValidRestrictionFlags, (Datatype_NOTATION * __this));
IL2CPP_REGISTER_METHOD(0x02356F10, Type *, get_ValueType, (Datatype_NOTATION * __this));
IL2CPP_REGISTER_METHOD(0x02356FB0, Type *, get_ListValueType, (Datatype_NOTATION * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (Datatype_NOTATION * __this));
IL2CPP_REGISTER_METHOD(0x02357050, Exception *, TryParseValue, (Datatype_NOTATION * __this, String * s, XmlNameTable * nameTable, IXmlNamespaceResolver * nsmgr, Object * * typedValue));
IL2CPP_REGISTER_METHOD(0x02357320, void, VerifySchemaValid, (Datatype_NOTATION * __this, XmlSchemaObjectTable * notations, XmlSchemaObject * caller));
IL2CPP_REGISTER_METHODINFO(0x0473C240, Datatype_NOTATION_VerifySchemaValid__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02357570, void, __ctor, (Datatype_NOTATION * __this));
IL2CPP_REGISTER_METHOD(0x02357610, void, __cctor, (MethodInfo * method));
}
