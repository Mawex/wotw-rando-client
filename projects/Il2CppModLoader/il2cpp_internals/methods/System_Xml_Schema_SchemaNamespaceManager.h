#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::SchemaNamespaceManager {
IL2CPP_REGISTER_METHOD(0x002FBB50, void, __ctor, (app::SchemaNamespaceManager * this_ptr, app::XmlSchemaObject * node));
IL2CPP_REGISTER_METHOD(0x01AB8C30, String *, LookupNamespace, (app::SchemaNamespaceManager * this_ptr, app::String * prefix));
IL2CPP_REGISTER_METHOD(0x01AB8DB0, String *, LookupPrefix, (app::SchemaNamespaceManager * this_ptr, app::String * ns));
}
