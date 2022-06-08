#include <interception_macros.h>

namespace app::methods::System::Xml::Linq::XElement {
IL2CPP_REGISTER_METHOD(0x03036610, IEnumerable_1_System_Xml_Linq_XElement_ *, get_EmptySequence, ());
IL2CPP_REGISTER_METHOD(0x030366C0, void, __ctor, (XElement * __this, XName * name));
IL2CPP_REGISTER_METHODINFO(0x04743690, XElement__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03036780, void, __ctor, (XElement * __this, XElement * other));
IL2CPP_REGISTER_METHOD(0x03036970, void, __ctor, (XElement * __this, XStreamingElement * other));
IL2CPP_REGISTER_METHODINFO(0x0470E110, XElement__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00938880, bool, get_HasAttributes, (XElement * __this));
IL2CPP_REGISTER_METHOD(0x02E99DD0, bool, get_IsEmpty, (XElement * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, XName *, get_Name, (XElement * __this));
IL2CPP_REGISTER_METHOD(0x00417920, XmlNodeType__Enum, get_NodeType, (XElement * __this));
IL2CPP_REGISTER_METHOD(0x03036A40, String *, get_Value, (XElement * __this));
IL2CPP_REGISTER_METHOD(0x03036C10, void, set_Value, (XElement * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04768618, XElement_set_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03036CE0, XAttribute *, Attribute, (XElement * __this, XName * name));
IL2CPP_REGISTER_METHOD(0x03036D20, IEnumerable_1_System_Xml_Linq_XAttribute_ *, Attributes, (XElement * __this));
IL2CPP_REGISTER_METHOD(0x03036D30, String *, GetPrefixOfNamespace, (XElement * __this, XNamespace * ns));
IL2CPP_REGISTER_METHODINFO(0x04733148, XElement_GetPrefixOfNamespace__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03037030, void, WriteTo, (XElement * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHODINFO(0x047298D0, XElement_WriteTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlSchema *, IXmlSerializable_GetSchema, (XElement * __this));
IL2CPP_REGISTER_METHOD(0x03037130, void, IXmlSerializable_ReadXml, (XElement * __this, XmlReader * reader));
IL2CPP_REGISTER_METHODINFO(0x047481D0, XElement_System_Xml_Serialization_IXmlSerializable_ReadXml__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C53A30, void, IXmlSerializable_WriteXml, (XElement * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x03037360, void, AddAttribute, (XElement * __this, XAttribute * a));
IL2CPP_REGISTER_METHODINFO(0x0475F120, XElement_AddAttribute__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030376C0, void, AddAttributeSkipNotify, (XElement * __this, XAttribute * a));
IL2CPP_REGISTER_METHODINFO(0x047492E0, XElement_AddAttributeSkipNotify__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030378F0, void, AppendAttribute, (XElement * __this, XAttribute * a));
IL2CPP_REGISTER_METHODINFO(0x04738E20, XElement_AppendAttribute__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03037A90, void, AppendAttributeSkipNotify, (XElement * __this, XAttribute * a));
IL2CPP_REGISTER_METHOD(0x03037AE0, XNode *, CloneNode, (XElement * __this));
IL2CPP_REGISTER_METHOD(0x03037C30, IEnumerable_1_System_Xml_Linq_XAttribute_ *, GetAttributes, (XElement * __this, XName * name));
IL2CPP_REGISTER_METHOD(0x03037DD0, String *, GetNamespaceOfPrefixInScope, (XElement * __this, String * prefix, XElement * outOfScope));
IL2CPP_REGISTER_METHOD(0x03037F10, void, ReadElementFrom, (XElement * __this, XmlReader * r, LoadOptions__Enum o));
IL2CPP_REGISTER_METHODINFO(0x0473DB80, XElement_ReadElementFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03038430, void, SetEndElementLineInfo, (XElement * __this, int32_t lineNumber, int32_t linePosition));
IL2CPP_REGISTER_METHOD(0x030385A0, void, ValidateNode, (XElement * __this, XNode * node, XNode * previous));
IL2CPP_REGISTER_METHODINFO(0x0471A3C8, XElement_ValidateNode__MethodInfo);
}
