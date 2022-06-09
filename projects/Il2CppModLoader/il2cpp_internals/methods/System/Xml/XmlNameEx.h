#include <interception_macros.h>

namespace app::methods::System::Xml::XmlNameEx {
    IL2CPP_REGISTER_METHOD(0x01DC0AF0, void, __ctor, (app::XmlNameEx * this_ptr, app::String * prefix, app::String * local_name, app::String * ns, int32_t hash_code, app::XmlDocument * owner_doc, app::XmlName * next, app::IXmlSchemaInfo * schema_info));
    IL2CPP_REGISTER_METHOD(0x01DC0C70, app::XmlSchemaValidity__Enum, get_Validity, (app::XmlNameEx * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01DC0CA0, bool, get_IsDefault, (app::XmlNameEx * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01DC0CB0, bool, get_IsNil, (app::XmlNameEx * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::XmlSchemaSimpleType *, get_MemberType, (app::XmlNameEx * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::XmlSchemaType *, get_SchemaType, (app::XmlNameEx * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01DC0CC0, app::XmlSchemaElement *, get_SchemaElement, (app::XmlNameEx * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01DC0D80, app::XmlSchemaAttribute *, get_SchemaAttribute, (app::XmlNameEx * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01DC0E40, void, SetValidity, (app::XmlNameEx * this_ptr, app::XmlSchemaValidity__Enum value));
    IL2CPP_REGISTER_METHOD(0x01DC0E50, void, SetIsDefault, (app::XmlNameEx * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x01DC0E80, void, SetIsNil, (app::XmlNameEx * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x01DC0EB0, bool, Equals, (app::XmlNameEx * this_ptr, app::IXmlSchemaInfo * schema_info));
}
