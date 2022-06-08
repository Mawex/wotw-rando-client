#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlSchemaCollectionEnumerator {
IL2CPP_REGISTER_METHOD(0x01CA2E60, void, __ctor, (XmlSchemaCollectionEnumerator * __this, Hashtable * collection));
IL2CPP_REGISTER_METHOD(0x01CA2EA0, void, IEnumerator_Reset, (XmlSchemaCollectionEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x01CA2F30, bool, IEnumerator_MoveNext, (XmlSchemaCollectionEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x01CA2FC0, bool, MoveNext, (XmlSchemaCollectionEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x01CA3050, Object *, IEnumerator_get_Current, (XmlSchemaCollectionEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x01CA3060, XmlSchema *, get_Current, (XmlSchemaCollectionEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x01CA3130, XmlSchemaCollectionNode *, get_CurrentNode, (XmlSchemaCollectionEnumerator * __this));
}
