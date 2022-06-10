#pragma once
#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::Datatype_byte {
    IL2CPP_REGISTER_METHOD(0x02359A50, app::FacetsChecker *, get_FacetsChecker, (app::Datatype_byte * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E16AE0, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_byte * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02359AF0, int32_t, Compare, (app::Datatype_byte * this_ptr, app::Object * value1, app::Object * value2))
    IL2CPP_REGISTER_METHOD(0x02359BB0, app::Type *, get_ValueType, (app::Datatype_byte * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02359C50, app::Type *, get_ListValueType, (app::Datatype_byte * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02359CF0, app::Exception *, TryParseValue, (app::Datatype_byte * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, app::Object * * typed_value))
    IL2CPP_REGISTER_METHOD(0x02359EA0, void, ctor, (app::Datatype_byte * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02359F40, void, cctor, ())
}
