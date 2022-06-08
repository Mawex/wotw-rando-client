using namespace app;

namespace app::methods::System::Xml::Schema::SchemaCollectionPreprocessor {
IL2CPP_REGISTER_METHOD(0x01AA5130, void, __ctor, (SchemaCollectionPreprocessor * __this, XmlNameTable * nameTable, SchemaNames * schemaNames, ValidationEventHandler * eventHandler));
IL2CPP_REGISTER_METHOD(0x01AA5140, bool, Execute, (SchemaCollectionPreprocessor * __this, XmlSchema * schema, String * targetNamespace, bool loadExternals, XmlSchemaCollection * xsc));
IL2CPP_REGISTER_METHOD(0x01AA54B0, void, Cleanup, (SchemaCollectionPreprocessor * __this, XmlSchema * schema));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_XmlResolver, (SchemaCollectionPreprocessor * __this, XmlResolver * value));
IL2CPP_REGISTER_METHOD(0x01AA57D0, void, LoadExternals, (SchemaCollectionPreprocessor * __this, XmlSchema * schema, XmlSchemaCollection * xsc));
IL2CPP_REGISTER_METHOD(0x01AA6470, void, BuildRefNamespaces, (SchemaCollectionPreprocessor * __this, XmlSchema * schema));
IL2CPP_REGISTER_METHOD(0x01AA67B0, void, Preprocess, (SchemaCollectionPreprocessor * __this, XmlSchema * schema, String * targetNamespace, SchemaCollectionPreprocessor_Compositor__Enum compositor));
IL2CPP_REGISTER_METHOD(0x01AA8270, void, PreprocessRedefine, (SchemaCollectionPreprocessor * __this, XmlSchemaRedefine * redefine));
IL2CPP_REGISTER_METHOD(0x01AA9230, int32_t, CountGroupSelfReference, (SchemaCollectionPreprocessor * __this, XmlSchemaObjectCollection * items, XmlQualifiedName * name));
IL2CPP_REGISTER_METHOD(0x01AA9530, void, CheckRefinedGroup, (SchemaCollectionPreprocessor * __this, XmlSchemaGroup * group));
IL2CPP_REGISTER_METHOD(0x01AA9600, void, CheckRefinedAttributeGroup, (SchemaCollectionPreprocessor * __this, XmlSchemaAttributeGroup * attributeGroup));
IL2CPP_REGISTER_METHOD(0x01AA97D0, void, CheckRefinedSimpleType, (SchemaCollectionPreprocessor * __this, XmlSchemaSimpleType * stype));
IL2CPP_REGISTER_METHOD(0x01AA9930, void, CheckRefinedComplexType, (SchemaCollectionPreprocessor * __this, XmlSchemaComplexType * ctype));
IL2CPP_REGISTER_METHOD(0x01AA9C80, void, PreprocessAttribute, (SchemaCollectionPreprocessor * __this, XmlSchemaAttribute * attribute));
IL2CPP_REGISTER_METHOD(0x01AA9EA0, void, PreprocessLocalAttribute, (SchemaCollectionPreprocessor * __this, XmlSchemaAttribute * attribute));
IL2CPP_REGISTER_METHOD(0x01AAA160, void, PreprocessAttributeContent, (SchemaCollectionPreprocessor * __this, XmlSchemaAttribute * attribute));
IL2CPP_REGISTER_METHOD(0x01AAA420, void, PreprocessAttributeGroup, (SchemaCollectionPreprocessor * __this, XmlSchemaAttributeGroup * attributeGroup));
IL2CPP_REGISTER_METHOD(0x01AAA610, void, PreprocessElement, (SchemaCollectionPreprocessor * __this, XmlSchemaElement * element));
IL2CPP_REGISTER_METHOD(0x01AAA920, void, PreprocessLocalElement, (SchemaCollectionPreprocessor * __this, XmlSchemaElement * element));
IL2CPP_REGISTER_METHOD(0x01AAADD0, void, PreprocessElementContent, (SchemaCollectionPreprocessor * __this, XmlSchemaElement * element));
IL2CPP_REGISTER_METHOD(0x01AAB210, void, PreprocessIdentityConstraint, (SchemaCollectionPreprocessor * __this, XmlSchemaIdentityConstraint * constraint));
IL2CPP_REGISTER_METHOD(0x01AAB6E0, void, PreprocessSimpleType, (SchemaCollectionPreprocessor * __this, XmlSchemaSimpleType * simpleType, bool local));
IL2CPP_REGISTER_METHOD(0x01AABE60, void, PreprocessComplexType, (SchemaCollectionPreprocessor * __this, XmlSchemaComplexType * complexType, bool local));
IL2CPP_REGISTER_METHOD(0x01AAC790, void, PreprocessGroup, (SchemaCollectionPreprocessor * __this, XmlSchemaGroup * group));
IL2CPP_REGISTER_METHOD(0x01AACA00, void, PreprocessNotation, (SchemaCollectionPreprocessor * __this, XmlSchemaNotation * notation));
IL2CPP_REGISTER_METHOD(0x01AACCC0, void, PreprocessParticle, (SchemaCollectionPreprocessor * __this, XmlSchemaParticle * particle));
IL2CPP_REGISTER_METHOD(0x01AAD600, void, PreprocessAttributes, (SchemaCollectionPreprocessor * __this, XmlSchemaObjectCollection * attributes, XmlSchemaAnyAttribute * anyAttribute, XmlSchemaObject * parent));
IL2CPP_REGISTER_METHOD(0x01AAD8B0, void, ValidateIdAttribute, (SchemaCollectionPreprocessor * __this, XmlSchemaObject * xso));
IL2CPP_REGISTER_METHOD(0x01AADAF0, void, ValidateNameAttribute, (SchemaCollectionPreprocessor * __this, XmlSchemaObject * xso));
IL2CPP_REGISTER_METHOD(0x01AADE60, void, ValidateQNameAttribute, (SchemaCollectionPreprocessor * __this, XmlSchemaObject * xso, String * attributeName, XmlQualifiedName * value));
IL2CPP_REGISTER_METHOD(0x016E51A0, void, SetParent, (SchemaCollectionPreprocessor * __this, XmlSchemaObject * child, XmlSchemaObject * parent));
IL2CPP_REGISTER_METHOD(0x01AAE010, void, PreprocessAnnotation, (SchemaCollectionPreprocessor * __this, XmlSchemaObject * schemaObject));
IL2CPP_REGISTER_METHOD(0x01AAE180, Uri *, ResolveSchemaLocationUri, (SchemaCollectionPreprocessor * __this, XmlSchema * enclosingSchema, String * location));
IL2CPP_REGISTER_METHOD(0x01AAE260, Stream *, GetSchemaEntity, (SchemaCollectionPreprocessor * __this, Uri * ruri));
}
