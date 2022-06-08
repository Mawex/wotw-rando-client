using namespace app;

namespace app::methods::System::Xml::Schema::XmlSchemaAnyAttribute {
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Namespace, (XmlSchemaAnyAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x004C6660, XmlSchemaContentProcessing__Enum, get_ProcessContents, (XmlSchemaAnyAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0191E6A0, void, set_ProcessContents, (XmlSchemaAnyAttribute * __this, XmlSchemaContentProcessing__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBB80, NamespaceList *, get_NamespaceList, (XmlSchemaAnyAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01CA0B00, XmlSchemaContentProcessing__Enum, get_ProcessContentsCorrect, (XmlSchemaAnyAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01CA0B10, void, BuildNamespaceList, (XmlSchemaAnyAttribute * __this, String * targetNamespace));
IL2CPP_REGISTER_METHOD(0x01CA0D30, void, BuildNamespaceListV1Compat, (XmlSchemaAnyAttribute * __this, String * targetNamespace));
IL2CPP_REGISTER_METHOD(0x01CA0F60, bool, Allows, (XmlSchemaAnyAttribute * __this, XmlQualifiedName * qname));
IL2CPP_REGISTER_METHOD(0x01CA0FA0, bool, IsSubset, (XmlSchemaAnyAttribute * sub, XmlSchemaAnyAttribute * super));
IL2CPP_REGISTER_METHOD(0x01CA0FD0, XmlSchemaAnyAttribute *, Intersection, (XmlSchemaAnyAttribute * o1, XmlSchemaAnyAttribute * o2, bool v1Compat));
IL2CPP_REGISTER_METHOD(0x01CA1180, XmlSchemaAnyAttribute *, Union, (XmlSchemaAnyAttribute * o1, XmlSchemaAnyAttribute * o2, bool v1Compat));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XmlSchemaAnyAttribute * __this));
}
