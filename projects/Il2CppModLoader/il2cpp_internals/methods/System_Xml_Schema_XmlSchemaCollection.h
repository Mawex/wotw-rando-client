#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlSchemaCollection {
IL2CPP_REGISTER_METHOD(0x01CA1F70, void, __ctor, (XmlSchemaCollection * __this, XmlNameTable * nametable));
IL2CPP_REGISTER_METHODINFO(0x047959E0, XmlSchemaCollection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016FBBA0, int32_t, get_Count, (XmlSchemaCollection * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, XmlNameTable *, get_NameTable, (XmlSchemaCollection * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_XmlResolver, (XmlSchemaCollection * __this, XmlResolver * value));
IL2CPP_REGISTER_METHOD(0x01CA21F0, XmlSchema *, get_Item, (XmlSchemaCollection * __this, String * ns));
IL2CPP_REGISTER_METHOD(0x01CA22E0, IEnumerator *, IEnumerable_GetEnumerator, (XmlSchemaCollection * __this));
IL2CPP_REGISTER_METHOD(0x01CA2450, XmlSchemaCollectionEnumerator *, GetEnumerator, (XmlSchemaCollection * __this));
IL2CPP_REGISTER_METHOD(0x01CA25C0, void, ICollection_CopyTo, (XmlSchemaCollection * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0471F288, XmlSchemaCollection_System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ICollection_get_IsSynchronized, (XmlSchemaCollection * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, ICollection_get_SyncRoot, (XmlSchemaCollection * __this));
IL2CPP_REGISTER_METHOD(0x016FBBA0, int32_t, ICollection_get_Count, (XmlSchemaCollection * __this));
IL2CPP_REGISTER_METHOD(0x01CA2750, SchemaInfo *, GetSchemaInfo, (XmlSchemaCollection * __this, String * ns));
IL2CPP_REGISTER_METHOD(0x01CA2840, SchemaNames *, GetSchemaNames, (XmlSchemaCollection * __this, XmlNameTable * nt));
IL2CPP_REGISTER_METHOD(0x01CA2A80, XmlSchema *, Add, (XmlSchemaCollection * __this, String * ns, SchemaInfo * schemaInfo, XmlSchema * schema, bool compile));
IL2CPP_REGISTER_METHOD(0x01CA2AB0, XmlSchema *, Add, (XmlSchemaCollection * __this, String * ns, SchemaInfo * schemaInfo, XmlSchema * schema, bool compile, XmlResolver * resolver));
IL2CPP_REGISTER_METHOD(0x01CA2D00, void, Add, (XmlSchemaCollection * __this, String * ns, XmlSchemaCollectionNode * node));
IL2CPP_REGISTER_METHOD(0x002FB9B0, ValidationEventHandler *, get_EventHandler, (XmlSchemaCollection * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_EventHandler, (XmlSchemaCollection * __this, ValidationEventHandler * value));
}
