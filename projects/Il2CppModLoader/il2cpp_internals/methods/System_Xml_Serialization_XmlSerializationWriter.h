using namespace app;

namespace app::methods::System::Xml::Serialization::XmlSerializationWriter {
IL2CPP_REGISTER_METHOD(0x025B9F60, void, __ctor, (XmlSerializationWriter * __this));
IL2CPP_REGISTER_METHOD(0x025BA0C0, void, Initialize, (XmlSerializationWriter * __this, XmlWriter * writer, XmlSerializerNamespaces * nss));
IL2CPP_REGISTER_METHOD(0x002FBB00, XmlWriter *, get_Writer, (XmlSerializationWriter * __this));
IL2CPP_REGISTER_METHOD(0x025BA340, void, AddWriteCallback, (XmlSerializationWriter * __this, Type * type, String * typeName, String * typeNs, XmlSerializationWriteCallback * callback));
IL2CPP_REGISTER_METHOD(0x025BA5D0, Exception *, CreateUnknownAnyElementException, (XmlSerializationWriter * __this, String * name, String * ns));
IL2CPP_REGISTER_METHOD(0x025BA790, Exception *, CreateUnknownTypeException, (XmlSerializationWriter * __this, Object * o));
IL2CPP_REGISTER_METHOD(0x025BA7D0, Exception *, CreateUnknownTypeException, (XmlSerializationWriter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x025BA980, String *, FromXmlQualifiedName, (XmlSerializationWriter * __this, XmlQualifiedName * xmlQualifiedName));
IL2CPP_REGISTER_METHOD(0x025BAA90, String *, GetId, (XmlSerializationWriter * __this, Object * o, bool addToReferencesList));
IL2CPP_REGISTER_METHOD(0x025BACC0, bool, AlreadyQueued, (XmlSerializationWriter * __this, Object * ob));
IL2CPP_REGISTER_METHOD(0x025BAD00, String *, GetNamespacePrefix, (XmlSerializationWriter * __this, String * ns));
IL2CPP_REGISTER_METHOD(0x025BAE90, String *, GetQualifiedName, (XmlSerializationWriter * __this, String * name, String * ns));
IL2CPP_REGISTER_METHOD(0x025BB130, void, TopLevelElement, (XmlSerializationWriter * __this));
IL2CPP_REGISTER_METHOD(0x025BB140, void, WriteAttribute, (XmlSerializationWriter * __this, String * localName, String * ns, String * value));
IL2CPP_REGISTER_METHOD(0x025BB1C0, void, WriteAttribute, (XmlSerializationWriter * __this, String * prefix, String * localName, String * ns, String * value));
IL2CPP_REGISTER_METHOD(0x025BB240, void, WriteXmlNode, (XmlSerializationWriter * __this, XmlNode * node));
IL2CPP_REGISTER_METHOD(0x025BB3B0, void, WriteElementEncoded, (XmlSerializationWriter * __this, XmlNode * node, String * name, String * ns, bool isNullable, bool any));
IL2CPP_REGISTER_METHOD(0x025BB520, void, WriteElementLiteral, (XmlSerializationWriter * __this, XmlNode * node, String * name, String * ns, bool isNullable, bool any));
IL2CPP_REGISTER_METHOD(0x025BB690, void, WriteElementQualifiedName, (XmlSerializationWriter * __this, String * localName, String * ns, XmlQualifiedName * value));
IL2CPP_REGISTER_METHOD(0x025BB6B0, void, WriteElementQualifiedName, (XmlSerializationWriter * __this, String * localName, String * ns, XmlQualifiedName * value, XmlQualifiedName * xsiType));
IL2CPP_REGISTER_METHOD(0x025BB850, void, WriteElementString, (XmlSerializationWriter * __this, String * localName, String * ns, String * value));
IL2CPP_REGISTER_METHOD(0x025BB870, void, WriteElementString, (XmlSerializationWriter * __this, String * localName, String * ns, String * value, XmlQualifiedName * xsiType));
IL2CPP_REGISTER_METHOD(0x01706DA0, void, WriteEndElement, (XmlSerializationWriter * __this));
IL2CPP_REGISTER_METHOD(0x025BBA60, void, WriteEndElement, (XmlSerializationWriter * __this, Object * o));
IL2CPP_REGISTER_METHOD(0x025BBAC0, void, WriteNamespaceDeclarations, (XmlSerializationWriter * __this, XmlSerializerNamespaces * xmlns));
IL2CPP_REGISTER_METHOD(0x025BBE50, void, WriteNullableQualifiedNameEncoded, (XmlSerializationWriter * __this, String * name, String * ns, XmlQualifiedName * value, XmlQualifiedName * xsiType));
IL2CPP_REGISTER_METHOD(0x025BBF50, void, WriteNullableQualifiedNameLiteral, (XmlSerializationWriter * __this, String * name, String * ns, XmlQualifiedName * value));
IL2CPP_REGISTER_METHOD(0x025BC050, void, WriteNullableStringEncoded, (XmlSerializationWriter * __this, String * name, String * ns, String * value, XmlQualifiedName * xsiType));
IL2CPP_REGISTER_METHOD(0x025BC070, void, WriteNullableStringLiteral, (XmlSerializationWriter * __this, String * name, String * ns, String * value));
IL2CPP_REGISTER_METHOD(0x025BC0A0, void, WriteNullTagEncoded, (XmlSerializationWriter * __this, String * name, String * ns));
IL2CPP_REGISTER_METHOD(0x025BC1F0, void, WriteNullTagLiteral, (XmlSerializationWriter * __this, String * name, String * ns));
IL2CPP_REGISTER_METHOD(0x025BC340, void, WritePotentiallyReferencingElement, (XmlSerializationWriter * __this, String * n, String * ns, Object * o, Type * ambientType, bool suppressReference, bool isNullable));
IL2CPP_REGISTER_METHODINFO(0x047187E8, XmlSerializationWriter_WritePotentiallyReferencingElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025BC860, void, WriteReferencedElements, (XmlSerializationWriter * __this));
IL2CPP_REGISTER_METHOD(0x025BCAE0, bool, IsPrimitiveArray, (XmlSerializationWriter * __this, TypeData * td));
IL2CPP_REGISTER_METHOD(0x025BCC10, void, WriteArray, (XmlSerializationWriter * __this, Object * o, TypeData * td));
IL2CPP_REGISTER_METHOD(0x025BCF70, void, WriteReferencingElement, (XmlSerializationWriter * __this, String * n, String * ns, Object * o, bool isNullable));
IL2CPP_REGISTER_METHOD(0x025BD170, void, CheckReferenceQueue, (XmlSerializationWriter * __this));
IL2CPP_REGISTER_METHOD(0x025BD2F0, void, WriteSerializable, (XmlSerializationWriter * __this, IXmlSerializable * serializable, String * name, String * ns, bool isNullable));
IL2CPP_REGISTER_METHOD(0x025BD320, void, WriteSerializable, (XmlSerializationWriter * __this, IXmlSerializable * serializable, String * name, String * ns, bool isNullable, bool wrapped));
IL2CPP_REGISTER_METHOD(0x025BD450, void, WriteStartDocument, (XmlSerializationWriter * __this));
IL2CPP_REGISTER_METHOD(0x025BD4B0, void, WriteStartElement, (XmlSerializationWriter * __this, String * name, String * ns));
IL2CPP_REGISTER_METHOD(0x025BD4E0, void, WriteStartElement, (XmlSerializationWriter * __this, String * name, String * ns, bool writePrefixed));
IL2CPP_REGISTER_METHOD(0x025BD510, void, WriteStartElement, (XmlSerializationWriter * __this, String * name, String * ns, Object * o));
IL2CPP_REGISTER_METHOD(0x025BD540, void, WriteStartElement, (XmlSerializationWriter * __this, String * name, String * ns, Object * o, bool writePrefixed));
IL2CPP_REGISTER_METHOD(0x025BD570, void, WriteStartElement, (XmlSerializationWriter * __this, String * name, String * ns, Object * o, bool writePrefixed, ICollection * namespaces));
IL2CPP_REGISTER_METHODINFO(0x04789720, XmlSerializationWriter_WriteStartElement_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025BDBA0, void, WriteTypedPrimitive, (XmlSerializationWriter * __this, String * name, String * ns, Object * o, bool xsiType));
IL2CPP_REGISTER_METHODINFO(0x04790E80, XmlSerializationWriter_WriteTypedPrimitive__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025BDF20, void, WriteValue, (XmlSerializationWriter * __this, String * value));
IL2CPP_REGISTER_METHOD(0x025BDF60, void, WriteXmlAttribute, (XmlSerializationWriter * __this, XmlNode * node, Object * container));
IL2CPP_REGISTER_METHODINFO(0x0474EDF8, XmlSerializationWriter_WriteXmlAttribute__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025BE260, void, WriteXsiType, (XmlSerializationWriter * __this, String * name, String * ns));
}
