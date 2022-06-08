using namespace app;

namespace app::methods::System::Xml::Schema::XmlSchemaType {
IL2CPP_REGISTER_METHOD(0x0191E340, XmlSchemaSimpleType *, GetBuiltInSimpleType, (XmlQualifiedName * qualifiedName));
IL2CPP_REGISTER_METHODINFO(0x04775358, XmlSchemaType_GetBuiltInSimpleType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0191E430, XmlSchemaSimpleType *, GetBuiltInSimpleType, (XmlTypeCode__Enum typeCode));
IL2CPP_REGISTER_METHOD(0x0191E4D0, XmlSchemaComplexType *, GetBuiltInComplexType, (XmlQualifiedName * qualifiedName));
IL2CPP_REGISTER_METHODINFO(0x0471C880, XmlSchemaType_GetBuiltInComplexType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_Name, (XmlSchemaType * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Name, (XmlSchemaType * __this, String * value));
IL2CPP_REGISTER_METHOD(0x004C6660, XmlSchemaDerivationMethod__Enum, get_Final, (XmlSchemaType * __this));
IL2CPP_REGISTER_METHOD(0x0191E6A0, void, set_Final, (XmlSchemaType * __this, XmlSchemaDerivationMethod__Enum value));
IL2CPP_REGISTER_METHOD(0x0191E6B0, XmlQualifiedName *, get_QualifiedName, (XmlSchemaType * __this));
IL2CPP_REGISTER_METHOD(0x003FF7B0, XmlSchemaDerivationMethod__Enum, get_FinalResolved, (XmlSchemaType * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, XmlSchemaType *, get_BaseXmlSchemaType, (XmlSchemaType * __this));
IL2CPP_REGISTER_METHOD(0x003FF2B0, XmlSchemaDerivationMethod__Enum, get_DerivedBy, (XmlSchemaType * __this));
IL2CPP_REGISTER_METHOD(0x002FBBA0, XmlSchemaDatatype *, get_Datatype, (XmlSchemaType * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsMixed, (XmlSchemaType * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_IsMixed, (XmlSchemaType * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0191E6C0, XmlTypeCode__Enum, get_TypeCode, (XmlSchemaType * __this));
IL2CPP_REGISTER_METHOD(0x0191E790, XmlValueConverter *, get_ValueConverter, (XmlSchemaType * __this));
IL2CPP_REGISTER_METHOD(0x003FC380, XmlSchemaContentType__Enum, get_SchemaContentType, (XmlSchemaType * __this));
IL2CPP_REGISTER_METHOD(0x0191E860, void, SetQualifiedName, (XmlSchemaType * __this, XmlQualifiedName * value));
IL2CPP_REGISTER_METHOD(0x003FF7C0, void, SetFinalResolved, (XmlSchemaType * __this, XmlSchemaDerivationMethod__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBB90, void, SetBaseSchemaType, (XmlSchemaType * __this, XmlSchemaType * value));
IL2CPP_REGISTER_METHOD(0x003FF2C0, void, SetDerivedBy, (XmlSchemaType * __this, XmlSchemaDerivationMethod__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, SetDatatype, (XmlSchemaType * __this, XmlSchemaDatatype * value));
IL2CPP_REGISTER_METHOD(0x0191E870, SchemaElementDecl *, get_ElementDecl, (XmlSchemaType * __this));
IL2CPP_REGISTER_METHOD(0x0191E880, void, set_ElementDecl, (XmlSchemaType * __this, SchemaElementDecl * value));
IL2CPP_REGISTER_METHOD(0x002FBC20, XmlSchemaType *, get_Redefined, (XmlSchemaType * __this));
IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_Redefined, (XmlSchemaType * __this, XmlSchemaType * value));
IL2CPP_REGISTER_METHOD(0x00A26C10, void, SetContentType, (XmlSchemaType * __this, XmlSchemaContentType__Enum value));
IL2CPP_REGISTER_METHOD(0x0191E890, bool, IsDerivedFrom, (XmlSchemaType * derivedType, XmlSchemaType * baseType, XmlSchemaDerivationMethod__Enum except));
IL2CPP_REGISTER_METHOD(0x0191EA90, bool, IsDerivedFromDatatype, (XmlSchemaDatatype * derivedDataType, XmlSchemaDatatype * baseDataType, XmlSchemaDerivationMethod__Enum except));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_NameAttribute, (XmlSchemaType * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_NameAttribute, (XmlSchemaType * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0191EB80, void, __ctor, (XmlSchemaType * __this));
}
