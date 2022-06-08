using namespace app;

namespace app::methods::System::Xml::Serialization::XmlSerializationWriterInterpreter {
IL2CPP_REGISTER_METHOD(0x025BE360, void, __ctor, (XmlSerializationWriterInterpreter * __this, XmlMapping * typeMap));
IL2CPP_REGISTER_METHOD(0x025BE4D0, void, InitCallbacks, (XmlSerializationWriterInterpreter * __this));
IL2CPP_REGISTER_METHOD(0x025BEA50, void, WriteRoot, (XmlSerializationWriterInterpreter * __this, Object * ob));
IL2CPP_REGISTER_METHODINFO(0x047566B0, XmlSerializationWriterInterpreter_WriteRoot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025BED30, void, WriteObject, (XmlSerializationWriterInterpreter * __this, XmlTypeMapping * typeMap, Object * ob, String * element, String * namesp, bool isNullable, bool needType, bool writeWrappingElem));
IL2CPP_REGISTER_METHOD(0x025BF390, void, WriteMessage, (XmlSerializationWriterInterpreter * __this, XmlMembersMapping * membersMap, Object__Array * parameters));
IL2CPP_REGISTER_METHOD(0x025BF5D0, void, WriteObjectElement, (XmlSerializationWriterInterpreter * __this, XmlTypeMapping * typeMap, Object * ob, String * element, String * namesp));
IL2CPP_REGISTER_METHOD(0x025BF770, void, WriteObjectElementAttributes, (XmlSerializationWriterInterpreter * __this, XmlTypeMapping * typeMap, Object * ob));
IL2CPP_REGISTER_METHOD(0x025BF880, void, WriteObjectElementElements, (XmlSerializationWriterInterpreter * __this, XmlTypeMapping * typeMap, Object * ob));
IL2CPP_REGISTER_METHOD(0x025BF990, void, WriteMembers, (XmlSerializationWriterInterpreter * __this, ClassMap * map, Object * ob, bool isValueList));
IL2CPP_REGISTER_METHOD(0x025BF9F0, void, WriteAttributeMembers, (XmlSerializationWriterInterpreter * __this, ClassMap * map, Object * ob, bool isValueList));
IL2CPP_REGISTER_METHOD(0x025BFF50, void, WriteElementMembers, (XmlSerializationWriterInterpreter * __this, ClassMap * map, Object * ob, bool isValueList));
IL2CPP_REGISTER_METHODINFO(0x047914E8, XmlSerializationWriterInterpreter_WriteElementMembers__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025C03E0, Object *, GetMemberValue, (XmlSerializationWriterInterpreter * __this, XmlTypeMapMember * member, Object * ob, bool isValueList));
IL2CPP_REGISTER_METHOD(0x025C0510, bool, MemberHasValue, (XmlSerializationWriterInterpreter * __this, XmlTypeMapMember * member, Object * ob, bool isValueList));
IL2CPP_REGISTER_METHOD(0x025C07B0, void, WriteMemberElement, (XmlSerializationWriterInterpreter * __this, XmlTypeMapElementInfo * elem, Object * memberValue));
IL2CPP_REGISTER_METHODINFO(0x0473ECB0, XmlSerializationWriterInterpreter_WriteMemberElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025C0D80, Object *, ImplicitConvert, (Object * obj, Type * type));
IL2CPP_REGISTER_METHOD(0x025C1120, void, WritePrimitiveValueLiteral, (XmlSerializationWriterInterpreter * __this, Object * memberValue, String * name, String * ns, XmlTypeMapping * mappedType, TypeData * typeData, bool wrapped, bool isNullable));
IL2CPP_REGISTER_METHOD(0x025C1440, void, WritePrimitiveValueEncoded, (XmlSerializationWriterInterpreter * __this, Object * memberValue, String * name, String * ns, XmlQualifiedName * xsiType, XmlTypeMapping * mappedType, TypeData * typeData, bool wrapped, bool isNullable));
IL2CPP_REGISTER_METHOD(0x025C1780, void, WriteListElement, (XmlSerializationWriterInterpreter * __this, XmlTypeMapping * typeMap, Object * ob, String * element, String * namesp));
IL2CPP_REGISTER_METHOD(0x025C1AE0, void, WriteListContent, (XmlSerializationWriterInterpreter * __this, Object * container, TypeData * listType, ListMap * map, Object * ob, StringBuilder * targetString));
IL2CPP_REGISTER_METHODINFO(0x04712300, XmlSerializationWriterInterpreter_WriteListContent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025C2200, int32_t, GetListCount, (XmlSerializationWriterInterpreter * __this, TypeData * listType, Object * ob));
IL2CPP_REGISTER_METHOD(0x025C23E0, void, WriteAnyElementContent, (XmlSerializationWriterInterpreter * __this, XmlTypeMapMemberAnyElement * member, Object * memberValue));
IL2CPP_REGISTER_METHODINFO(0x047081D8, XmlSerializationWriterInterpreter_WriteAnyElementContent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025C28F0, void, WritePrimitiveElement, (XmlSerializationWriterInterpreter * __this, XmlTypeMapping * typeMap, Object * ob, String * element, String * namesp));
IL2CPP_REGISTER_METHOD(0x025C2950, void, WriteEnumElement, (XmlSerializationWriterInterpreter * __this, XmlTypeMapping * typeMap, Object * ob, String * element, String * namesp));
IL2CPP_REGISTER_METHOD(0x025C2990, String *, GetStringValue, (XmlSerializationWriterInterpreter * __this, XmlTypeMapping * typeMap, TypeData * type, Object * value));
IL2CPP_REGISTER_METHOD(0x025C2C50, String *, GetEnumXmlValue, (XmlSerializationWriterInterpreter * __this, XmlTypeMapping * typeMap, Object * ob));
}
