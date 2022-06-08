#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::Datatype_boolean {
IL2CPP_REGISTER_METHOD(0x023594E0, XmlValueConverter *, CreateValueConverter, (Datatype_boolean * __this, XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x023594F0, FacetsChecker *, get_FacetsChecker, (Datatype_boolean * __this));
IL2CPP_REGISTER_METHOD(0x004AB2B0, XmlTypeCode__Enum, get_TypeCode, (Datatype_boolean * __this));
IL2CPP_REGISTER_METHOD(0x02359590, Type *, get_ValueType, (Datatype_boolean * __this));
IL2CPP_REGISTER_METHOD(0x02359630, Type *, get_ListValueType, (Datatype_boolean * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (Datatype_boolean * __this));
IL2CPP_REGISTER_METHOD(0x00C754B0, RestrictionFlags__Enum, get_ValidRestrictionFlags, (Datatype_boolean * __this));
IL2CPP_REGISTER_METHOD(0x023596D0, int32_t, Compare, (Datatype_boolean * __this, Object * value1, Object * value2));
IL2CPP_REGISTER_METHOD(0x02359790, Exception *, TryParseValue, (Datatype_boolean * __this, String * s, XmlNameTable * nameTable, IXmlNamespaceResolver * nsmgr, Object * * typedValue));
IL2CPP_REGISTER_METHOD(0x023598E0, void, __ctor, (Datatype_boolean * __this));
IL2CPP_REGISTER_METHOD(0x02359980, void, __cctor, ());
}
