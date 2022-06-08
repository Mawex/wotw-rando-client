using namespace app;

namespace app::methods::System::Data::SimpleType {
IL2CPP_REGISTER_METHOD(0x01E4C230, void, __ctor, (SimpleType * __this, String * baseType));
IL2CPP_REGISTER_METHOD(0x01E4C370, void, __ctor, (SimpleType * __this, XmlSchemaSimpleType * node));
IL2CPP_REGISTER_METHOD(0x01E4C540, void, ISerializable_GetObjectData, (SimpleType * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0478BC78, SimpleType_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E4C590, void, LoadTypeValues, (SimpleType * __this, XmlSchemaSimpleType * node));
IL2CPP_REGISTER_METHODINFO(0x047290E8, SimpleType_LoadTypeValues__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E4CD10, bool, IsPlainString, (SimpleType * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_BaseType, (SimpleType * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, XmlQualifiedName *, get_XmlBaseType, (SimpleType * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Name, (SimpleType * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, String *, get_Namespace, (SimpleType * __this));
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_Length, (SimpleType * __this));
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_MaxLength, (SimpleType * __this));
IL2CPP_REGISTER_METHOD(0x00617D40, void, set_MaxLength, (SimpleType * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FB930, SimpleType *, get_BaseSimpleType, (SimpleType * __this));
IL2CPP_REGISTER_METHOD(0x01E4CEA0, String *, get_SimpleTypeQualifiedName, (SimpleType * __this));
IL2CPP_REGISTER_METHOD(0x01E4CF50, String *, QualifiedName, (SimpleType * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01E4D020, XmlNode *, ToNode, (SimpleType * __this, XmlDocument * dc, Hashtable * prefixes, bool inRemoting));
IL2CPP_REGISTER_METHOD(0x01E4D4F0, SimpleType *, CreateEnumeratedType, (String * values));
IL2CPP_REGISTER_METHOD(0x01E4D650, SimpleType *, CreateByteArrayType, (String * encoding));
IL2CPP_REGISTER_METHOD(0x01E4D7A0, SimpleType *, CreateLimitedStringType, (int32_t length));
IL2CPP_REGISTER_METHOD(0x01E4D900, SimpleType *, CreateSimpleType, (StorageType__Enum typeCode, Type * type));
IL2CPP_REGISTER_METHOD(0x01E4DAB0, String *, HasConflictingDefinition, (SimpleType * __this, SimpleType * otherSimpleType));
IL2CPP_REGISTER_METHOD(0x01E4DC50, bool, CanHaveMaxLength, (SimpleType * __this));
IL2CPP_REGISTER_METHOD(0x01E4DE40, void, ConvertToAnnonymousSimpleType, (SimpleType * __this));
}
