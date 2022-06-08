using namespace app;

namespace app::methods::System::Xml::Schema::XmlSchemaAny {
IL2CPP_REGISTER_METHOD(0x002FBBE0, String *, get_Namespace, (XmlSchemaAny * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_Namespace, (XmlSchemaAny * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00C03C80, void, set_ProcessContents, (XmlSchemaAny * __this, XmlSchemaContentProcessing__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBC20, NamespaceList *, get_NamespaceList, (XmlSchemaAny * __this));
IL2CPP_REGISTER_METHOD(0x01CA00A0, String *, get_ResolvedNamespace, (XmlSchemaAny * __this));
IL2CPP_REGISTER_METHOD(0x01CA0130, XmlSchemaContentProcessing__Enum, get_ProcessContentsCorrect, (XmlSchemaAny * __this));
IL2CPP_REGISTER_METHOD(0x01CA0150, String *, get_NameString, (XmlSchemaAny * __this));
IL2CPP_REGISTER_METHOD(0x01CA05D0, void, BuildNamespaceList, (XmlSchemaAny * __this, String * targetNamespace));
IL2CPP_REGISTER_METHOD(0x01CA07F0, void, BuildNamespaceListV1Compat, (XmlSchemaAny * __this, String * targetNamespace));
IL2CPP_REGISTER_METHOD(0x01CA0A20, bool, Allows, (XmlSchemaAny * __this, XmlQualifiedName * qname));
IL2CPP_REGISTER_METHOD(0x01CA0A60, void, __ctor, (XmlSchemaAny * __this));
}
