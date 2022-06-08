#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::Datatype_union {
IL2CPP_REGISTER_METHOD(0x02360980, XmlValueConverter *, CreateValueConverter, (Datatype_union * __this, XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x02360AD0, void, __ctor, (Datatype_union * __this, XmlSchemaSimpleType__Array * types));
IL2CPP_REGISTER_METHOD(0x02360B80, int32_t, Compare, (Datatype_union * __this, Object * value1, Object * value2));
IL2CPP_REGISTER_METHOD(0x02360CE0, Type *, get_ValueType, (Datatype_union * __this));
IL2CPP_REGISTER_METHOD(0x008556D0, XmlTypeCode__Enum, get_TypeCode, (Datatype_union * __this));
IL2CPP_REGISTER_METHOD(0x02360D80, FacetsChecker *, get_FacetsChecker, (Datatype_union * __this));
IL2CPP_REGISTER_METHOD(0x02360E20, Type *, get_ListValueType, (Datatype_union * __this));
IL2CPP_REGISTER_METHOD(0x00E3E570, RestrictionFlags__Enum, get_ValidRestrictionFlags, (Datatype_union * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, XmlSchemaSimpleType__Array *, get_BaseMemberTypes, (Datatype_union * __this));
IL2CPP_REGISTER_METHOD(0x02360EC0, bool, HasAtomicMembers, (Datatype_union * __this));
IL2CPP_REGISTER_METHOD(0x02360F80, bool, IsUnionBaseOf, (Datatype_union * __this, DatatypeImplementation * derivedType));
IL2CPP_REGISTER_METHOD(0x02361050, Exception *, TryParseValue, (Datatype_union * __this, String * s, XmlNameTable * nameTable, IXmlNamespaceResolver * nsmgr, Object * * typedValue));
IL2CPP_REGISTER_METHOD(0x02361470, Exception *, TryParseValue, (Datatype_union * __this, Object * value, XmlNameTable * nameTable, IXmlNamespaceResolver * nsmgr, Object * * typedValue));
IL2CPP_REGISTER_METHODINFO(0x0471C920, Datatype_union_TryParseValue_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02361A30, void, __cctor, ());
}
