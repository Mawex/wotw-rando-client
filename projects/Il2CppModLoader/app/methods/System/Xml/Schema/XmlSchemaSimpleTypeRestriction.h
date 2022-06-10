#pragma once
#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlSchemaSimpleTypeRestriction {
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::XmlQualifiedName *, get_BaseTypeName, (app::XmlSchemaSimpleTypeRestriction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0191D8E0, void, set_BaseTypeName, (app::XmlSchemaSimpleTypeRestriction * this_ptr, app::XmlQualifiedName * value))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::XmlSchemaSimpleType *, get_BaseType, (app::XmlSchemaSimpleTypeRestriction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_BaseType, (app::XmlSchemaSimpleTypeRestriction * this_ptr, app::XmlSchemaSimpleType * value))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::XmlSchemaObjectCollection *, get_Facets, (app::XmlSchemaSimpleTypeRestriction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0191D9D0, app::XmlSchemaObject *, Clone, (app::XmlSchemaSimpleTypeRestriction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0191DB50, void, ctor, (app::XmlSchemaSimpleTypeRestriction * this_ptr))
}
