#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::DatatypeImplementation {
IL2CPP_REGISTER_METHOD(0x0234DC40, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x02351840, XmlSchemaSimpleType *, get_AnySimpleType, ());
IL2CPP_REGISTER_METHOD(0x023518E0, XmlSchemaSimpleType *, get_UntypedAtomicType, ());
IL2CPP_REGISTER_METHOD(0x02351980, DatatypeImplementation *, FromXmlTokenizedType, (app::XmlTokenizedType__Enum token));
IL2CPP_REGISTER_METHOD(0x02351A50, DatatypeImplementation *, FromXmlTokenizedTypeXsd, (app::XmlTokenizedType__Enum token));
IL2CPP_REGISTER_METHOD(0x02351B20, DatatypeImplementation *, FromXdrName, (app::String * name));
IL2CPP_REGISTER_METHOD(0x02351C50, DatatypeImplementation *, FromTypeName, (app::String * name));
IL2CPP_REGISTER_METHOD(0x02351D80, XmlSchemaSimpleType *, StartBuiltinType, (app::XmlQualifiedName * qname, app::XmlSchemaDatatype * data_type));
IL2CPP_REGISTER_METHOD(0x02351FD0, void, FinishBuiltinType, (app::XmlSchemaSimpleType * derived_type, app::XmlSchemaSimpleType * base_type));
IL2CPP_REGISTER_METHOD(0x02352430, void, CreateBuiltinTypes, ());
IL2CPP_REGISTER_METHOD(0x02353570, XmlSchemaSimpleType *, GetSimpleTypeFromTypeCode, (app::XmlTypeCode__Enum type_code));
IL2CPP_REGISTER_METHOD(0x02353640, XmlSchemaSimpleType *, GetSimpleTypeFromXsdType, (app::XmlQualifiedName * qname));
IL2CPP_REGISTER_METHOD(0x02353760, XmlSchemaSimpleType *, GetNormalizedStringTypeV1Compat, ());
IL2CPP_REGISTER_METHOD(0x02353A20, XmlSchemaSimpleType *, GetTokenTypeV1Compat, ());
IL2CPP_REGISTER_METHOD(0x02353CE0, XmlSchemaSimpleType__Array *, GetBuiltInTypes, ());
IL2CPP_REGISTER_METHOD(0x02353D80, XmlTypeCode__Enum, GetPrimitiveTypeCode, (app::XmlTypeCode__Enum type_code));
IL2CPP_REGISTER_METHOD(0x02353F00, XmlSchemaDatatype *, DeriveByRestriction, (app::DatatypeImplementation * this_ptr, app::XmlSchemaObjectCollection * facets, app::XmlNameTable * name_table, app::XmlSchemaType * schema_type));
IL2CPP_REGISTER_METHOD(0x023540D0, XmlSchemaDatatype *, DeriveByList_1, (app::DatatypeImplementation * this_ptr, app::XmlSchemaType * schema_type));
IL2CPP_REGISTER_METHOD(0x023540E0, XmlSchemaDatatype *, DeriveByList_2, (app::DatatypeImplementation * this_ptr, int32_t min_size, app::XmlSchemaType * schema_type));
IL2CPP_REGISTER_METHODINFO(0x04789A30, DatatypeImplementation_DeriveByList_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02354490, DatatypeImplementation *, DeriveByUnion, (app::XmlSchemaSimpleType__Array * types, app::XmlSchemaType * schema_type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, VerifySchemaValid, (app::DatatypeImplementation * this_ptr, app::XmlSchemaObjectTable * notations, app::XmlSchemaObject * caller));
IL2CPP_REGISTER_METHOD(0x023546B0, bool, IsDerivedFrom, (app::DatatypeImplementation * this_ptr, app::XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x023549C0, bool, IsEqual, (app::DatatypeImplementation * this_ptr, app::Object * o1, app::Object * o2));
IL2CPP_REGISTER_METHOD(0x023549E0, bool, IsComparable, (app::DatatypeImplementation * this_ptr, app::XmlSchemaDatatype * dtype));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlValueConverter *, CreateValueConverter, (app::DatatypeImplementation * this_ptr, app::XmlSchemaType * schema_type));
IL2CPP_REGISTER_METHOD(0x02354B20, FacetsChecker *, get_FacetsChecker, (app::DatatypeImplementation * this_ptr));
IL2CPP_REGISTER_METHOD(0x02354BC0, XmlValueConverter *, get_ValueConverter, (app::DatatypeImplementation * this_ptr));
IL2CPP_REGISTER_METHOD(0x00ADC4A0, XmlTokenizedType__Enum, get_TokenizedType, (app::DatatypeImplementation * this_ptr));
IL2CPP_REGISTER_METHOD(0x02354BF0, Type *, get_ValueType, (app::DatatypeImplementation * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FC6D0, XmlSchemaDatatypeVariety__Enum, get_Variety, (app::DatatypeImplementation * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlTypeCode__Enum, get_TypeCode, (app::DatatypeImplementation * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, RestrictionFacets *, get_Restriction, (app::DatatypeImplementation * this_ptr));
IL2CPP_REGISTER_METHOD(0x02354C90, bool, get_HasLexicalFacets, (app::DatatypeImplementation * this_ptr));
IL2CPP_REGISTER_METHOD(0x02354CB0, bool, get_HasValueFacets, (app::DatatypeImplementation * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, DatatypeImplementation *, get_Base, (app::DatatypeImplementation * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (app::DatatypeImplementation * this_ptr));
IL2CPP_REGISTER_METHOD(0x02354CD0, Object *, ParseValue_1, (app::DatatypeImplementation * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr));
IL2CPP_REGISTER_METHODINFO(0x0478D860, DatatypeImplementation_ParseValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02354F40, Object *, ParseValue_2, (app::DatatypeImplementation * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, bool create_atomic_value));
IL2CPP_REGISTER_METHODINFO(0x0474AF48, DatatypeImplementation_ParseValue_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02355130, Exception *, TryParseValue, (app::DatatypeImplementation * this_ptr, app::Object * value, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * namespace_resolver, app::Object * * typed_value));
IL2CPP_REGISTER_METHOD(0x02355530, String *, GetTypeName, (app::DatatypeImplementation * this_ptr));
IL2CPP_REGISTER_METHOD(0x023555C0, int32_t, Compare, (app::DatatypeImplementation * this_ptr, app::Byte__Array * value1, app::Byte__Array * value2));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::DatatypeImplementation * this_ptr));
}
