#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::Datatype_anySimpleType {
IL2CPP_REGISTER_METHOD(0x023582F0, XmlValueConverter *, CreateValueConverter, (Datatype_anySimpleType * __this, XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x02358390, FacetsChecker *, get_FacetsChecker, (Datatype_anySimpleType * __this));
IL2CPP_REGISTER_METHOD(0x02358430, Type *, get_ValueType, (Datatype_anySimpleType * __this));
IL2CPP_REGISTER_METHOD(0x008556D0, XmlTypeCode__Enum, get_TypeCode, (Datatype_anySimpleType * __this));
IL2CPP_REGISTER_METHOD(0x023584D0, Type *, get_ListValueType, (Datatype_anySimpleType * __this));
IL2CPP_REGISTER_METHOD(0x00ADC4A0, XmlTokenizedType__Enum, get_TokenizedType, (Datatype_anySimpleType * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, RestrictionFlags__Enum, get_ValidRestrictionFlags, (Datatype_anySimpleType * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (Datatype_anySimpleType * __this));
IL2CPP_REGISTER_METHOD(0x02358570, int32_t, Compare, (Datatype_anySimpleType * __this, Object * value1, Object * value2));
IL2CPP_REGISTER_METHOD(0x023586A0, Exception *, TryParseValue, (Datatype_anySimpleType * __this, String * s, XmlNameTable * nameTable, IXmlNamespaceResolver * nsmgr, Object * * typedValue));
IL2CPP_REGISTER_METHOD(0x023586C0, void, __ctor, (Datatype_anySimpleType * __this));
IL2CPP_REGISTER_METHOD(0x02358750, void, __cctor, ());
}
