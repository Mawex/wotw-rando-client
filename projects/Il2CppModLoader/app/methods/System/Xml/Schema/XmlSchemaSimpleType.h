#pragma once
#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlSchemaSimpleType {
    IL2CPP_REGISTER_METHOD(0x0191D3D0, void, ctor, (app::XmlSchemaSimpleType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::XmlSchemaSimpleTypeContent *, get_Content, (app::XmlSchemaSimpleType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_Content, (app::XmlSchemaSimpleType * this_ptr, app::XmlSchemaSimpleTypeContent * value))
    IL2CPP_REGISTER_METHOD(0x0191D3E0, app::XmlSchemaObject *, Clone, (app::XmlSchemaSimpleType * this_ptr))
}
