#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlSchemaObjectTable {
IL2CPP_REGISTER_METHOD(0x01CB7370, void, __ctor, (XmlSchemaObjectTable * __this));
IL2CPP_REGISTER_METHOD(0x01CB7660, void, Add, (XmlSchemaObjectTable * __this, XmlQualifiedName * name, XmlSchemaObject * value));
IL2CPP_REGISTER_METHOD(0x01CB77C0, void, Insert, (XmlSchemaObjectTable * __this, XmlQualifiedName * name, XmlSchemaObject * value));
IL2CPP_REGISTER_METHOD(0x01CB7990, void, Replace, (XmlSchemaObjectTable * __this, XmlQualifiedName * name, XmlSchemaObject * value));
IL2CPP_REGISTER_METHOD(0x01CB7B50, void, Clear, (XmlSchemaObjectTable * __this));
IL2CPP_REGISTER_METHOD(0x01CB7C20, void, Remove, (XmlSchemaObjectTable * __this, XmlQualifiedName * name));
IL2CPP_REGISTER_METHOD(0x01CB7DF0, int32_t, FindIndexByValue, (XmlSchemaObjectTable * __this, XmlSchemaObject * xso));
IL2CPP_REGISTER_METHOD(0x01CB7EE0, int32_t, get_Count, (XmlSchemaObjectTable * __this));
IL2CPP_REGISTER_METHOD(0x01CB7F70, bool, Contains, (XmlSchemaObjectTable * __this, XmlQualifiedName * name));
IL2CPP_REGISTER_METHOD(0x01CB8030, XmlSchemaObject *, get_Item, (XmlSchemaObjectTable * __this, XmlQualifiedName * name));
IL2CPP_REGISTER_METHOD(0x01CB8130, ICollection *, get_Values, (XmlSchemaObjectTable * __this));
IL2CPP_REGISTER_METHOD(0x01CB82A0, IDictionaryEnumerator *, GetEnumerator, (XmlSchemaObjectTable * __this));
}
