#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::SchemaInfo {
IL2CPP_REGISTER_METHOD(0x01AB00D0, void, __ctor, (SchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, XmlQualifiedName *, get_DocTypeName, (SchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_DocTypeName, (SchemaInfo * __this, XmlQualifiedName * value));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_InternalDtdSubset, (SchemaInfo * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FA280, Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ *, get_ElementDecls, (SchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ *, get_UndeclaredElementDecls, (SchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x01AB0660, Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ *, get_GeneralEntities, (SchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x01AB07E0, Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ *, get_ParameterEntities, (SchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x003FF2B0, SchemaType__Enum, get_SchemaType, (SchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x003FF2C0, void, set_SchemaType, (SchemaInfo * __this, SchemaType__Enum value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Dictionary_2_System_String_System_Boolean_ *, get_TargetNamespaces, (SchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ *, get_ElementDeclsByType, (SchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ *, get_AttributeDecls, (SchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x01AB0960, Dictionary_2_System_String_System_Xml_Schema_SchemaNotation_ *, get_Notations, (SchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x004C6660, int32_t, get_ErrorCount, (SchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x0191E6A0, void, set_ErrorCount, (SchemaInfo * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01AB0AE0, SchemaElementDecl *, GetElementDecl, (SchemaInfo * __this, XmlQualifiedName * qname));
IL2CPP_REGISTER_METHOD(0x01AB0BE0, SchemaElementDecl *, GetTypeDecl, (SchemaInfo * __this, XmlQualifiedName * qname));
IL2CPP_REGISTER_METHOD(0x01AB0CE0, XmlSchemaElement *, GetElement, (SchemaInfo * __this, XmlQualifiedName * qname));
IL2CPP_REGISTER_METHOD(0x01AB0D10, bool, HasSchema, (SchemaInfo * __this, String * ns));
IL2CPP_REGISTER_METHOD(0x01AB0DD0, bool, Contains, (SchemaInfo * __this, String * ns));
IL2CPP_REGISTER_METHOD(0x01AB0E90, SchemaAttDef *, GetAttributeXdr, (SchemaInfo * __this, SchemaElementDecl * ed, XmlQualifiedName * qname));
IL2CPP_REGISTER_METHODINFO(0x047371D8, SchemaInfo_GetAttributeXdr__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AB10F0, SchemaAttDef *, GetAttributeXsd, (SchemaInfo * __this, SchemaElementDecl * ed, XmlQualifiedName * qname, XmlSchemaObject * partialValidationType, AttributeMatchState__Enum * attributeMatchState));
IL2CPP_REGISTER_METHOD(0x01AB1480, SchemaAttDef *, GetAttributeXsd, (SchemaInfo * __this, SchemaElementDecl * ed, XmlQualifiedName * qname, bool * skip));
IL2CPP_REGISTER_METHODINFO(0x0474B918, SchemaInfo_GetAttributeXsd_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AB1620, void, Add, (SchemaInfo * __this, SchemaInfo * sinfo, ValidationEventHandler * eventhandler));
IL2CPP_REGISTER_METHOD(0x01AB1FF0, void, Finish, (SchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x00444DC0, bool, IDtdInfo_get_HasDefaultAttributes, (SchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x00446590, bool, IDtdInfo_get_HasNonCDataAttributes, (SchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x01AB21D0, IDtdAttributeListInfo *, IDtdInfo_LookupAttributeList, (SchemaInfo * __this, String * prefix, String * localName));
IL2CPP_REGISTER_METHOD(0x01AB2400, IDtdEntityInfo *, IDtdInfo_LookupEntity, (SchemaInfo * __this, String * name));
IL2CPP_REGISTER_METHOD(0x002FB990, XmlQualifiedName *, IDtdInfo_get_Name, (SchemaInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, IDtdInfo_get_InternalDtdSubset, (SchemaInfo * __this));
}
