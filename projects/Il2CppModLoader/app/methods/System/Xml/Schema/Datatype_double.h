#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::Datatype_double {
    IL2CPP_REGISTER_METHOD(0x0235BED0, app::XmlValueConverter *, CreateValueConverter, (app::Datatype_double * this_ptr, app::XmlSchemaType * schema_type))
    IL2CPP_REGISTER_METHOD(0x0235BEE0, app::FacetsChecker *, get_FacetsChecker, (app::Datatype_double * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E3F10, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_double * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235BF80, app::Type *, get_ValueType, (app::Datatype_double * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235C020, app::Type *, get_ListValueType, (app::Datatype_double * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (app::Datatype_double * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235AAB0, app::RestrictionFlags__Enum, get_ValidRestrictionFlags, (app::Datatype_double * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235C0C0, int32_t, Compare, (app::Datatype_double * this_ptr, app::Object * value1, app::Object * value2))
    IL2CPP_REGISTER_METHOD(0x0235C180, app::Exception *, TryParseValue, (app::Datatype_double * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, app::Object * * typed_value))
    IL2CPP_REGISTER_METHOD(0x0235C340, void, ctor, (app::Datatype_double * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235C3E0, void, cctor, ())
}
