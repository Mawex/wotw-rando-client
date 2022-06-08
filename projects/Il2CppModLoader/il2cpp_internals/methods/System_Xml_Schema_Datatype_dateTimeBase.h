#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::Datatype_dateTimeBase {
IL2CPP_REGISTER_METHOD(0x0235A810, XmlValueConverter *, CreateValueConverter, (Datatype_dateTimeBase * __this, XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x0235A820, FacetsChecker *, get_FacetsChecker, (Datatype_dateTimeBase * __this));
IL2CPP_REGISTER_METHOD(0x00E3D980, XmlTypeCode__Enum, get_TypeCode, (Datatype_dateTimeBase * __this));
IL2CPP_REGISTER_METHOD(0x0235A8C0, void, __ctor, (Datatype_dateTimeBase * __this, XsdDateTimeFlags__Enum dateTimeFlags));
IL2CPP_REGISTER_METHOD(0x0235A970, Type *, get_ValueType, (Datatype_dateTimeBase * __this));
IL2CPP_REGISTER_METHOD(0x0235AA10, Type *, get_ListValueType, (Datatype_dateTimeBase * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (Datatype_dateTimeBase * __this));
IL2CPP_REGISTER_METHOD(0x0235AAB0, RestrictionFlags__Enum, get_ValidRestrictionFlags, (Datatype_dateTimeBase * __this));
IL2CPP_REGISTER_METHOD(0x0235AAC0, int32_t, Compare, (Datatype_dateTimeBase * __this, Object * value1, Object * value2));
IL2CPP_REGISTER_METHOD(0x0235AC30, Exception *, TryParseValue, (Datatype_dateTimeBase * __this, String * s, XmlNameTable * nameTable, IXmlNamespaceResolver * nsmgr, Object * * typedValue));
IL2CPP_REGISTER_METHOD(0x0235B0D0, void, __cctor, ());
}
