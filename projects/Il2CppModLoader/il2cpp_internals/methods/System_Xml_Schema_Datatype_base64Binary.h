#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::Datatype_base64Binary {
IL2CPP_REGISTER_METHOD(0x02356E60, XmlValueConverter *, CreateValueConverter, (Datatype_base64Binary * __this, XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x02358EE0, FacetsChecker *, get_FacetsChecker, (Datatype_base64Binary * __this));
IL2CPP_REGISTER_METHOD(0x00ACB190, XmlTypeCode__Enum, get_TypeCode, (Datatype_base64Binary * __this));
IL2CPP_REGISTER_METHOD(0x02358F80, Type *, get_ValueType, (Datatype_base64Binary * __this));
IL2CPP_REGISTER_METHOD(0x02359020, Type *, get_ListValueType, (Datatype_base64Binary * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (Datatype_base64Binary * __this));
IL2CPP_REGISTER_METHOD(0x00E40570, RestrictionFlags__Enum, get_ValidRestrictionFlags, (Datatype_base64Binary * __this));
IL2CPP_REGISTER_METHOD(0x023590C0, int32_t, Compare, (Datatype_base64Binary * __this, Object * value1, Object * value2));
IL2CPP_REGISTER_METHOD(0x023591D0, Exception *, TryParseValue, (Datatype_base64Binary * __this, String * s, XmlNameTable * nameTable, IXmlNamespaceResolver * nsmgr, Object * * typedValue));
IL2CPP_REGISTER_METHOD(0x02359370, void, __ctor, (Datatype_base64Binary * __this));
IL2CPP_REGISTER_METHOD(0x02359410, void, __cctor, ());
}
