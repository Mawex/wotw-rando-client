#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlReflectionImporter {
IL2CPP_REGISTER_METHOD(0x025A25A0, void, __ctor, (XmlReflectionImporter * __this, XmlAttributeOverrides * attributeOverrides, String * defaultNamespace));
IL2CPP_REGISTER_METHOD(0x025A29F0, XmlTypeMapping *, ImportTypeMapping, (XmlReflectionImporter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x025A2A10, XmlTypeMapping *, ImportTypeMapping, (XmlReflectionImporter * __this, Type * type, String * defaultNamespace));
IL2CPP_REGISTER_METHOD(0x025A2A30, XmlTypeMapping *, ImportTypeMapping, (XmlReflectionImporter * __this, Type * type, XmlRootAttribute * root, String * defaultNamespace));
IL2CPP_REGISTER_METHODINFO(0x04793FF0, XmlReflectionImporter_ImportTypeMapping_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025A2C00, XmlTypeMapping *, ImportTypeMapping, (XmlReflectionImporter * __this, TypeData * typeData, XmlRootAttribute * root, String * defaultNamespace));
IL2CPP_REGISTER_METHODINFO(0x04790AC0, XmlReflectionImporter_ImportTypeMapping_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025A31B0, XmlTypeMapping *, CreateTypeMapping, (XmlReflectionImporter * __this, TypeData * typeData, XmlRootAttribute * root, String * defaultXmlType, String * defaultNamespace));
IL2CPP_REGISTER_METHODINFO(0x0470DFD8, XmlReflectionImporter_CreateTypeMapping__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025A39D0, XmlTypeMapping *, ImportClassMapping, (XmlReflectionImporter * __this, Type * type, XmlRootAttribute * root, String * defaultNamespace, bool isBaseType));
IL2CPP_REGISTER_METHOD(0x025A3AC0, XmlTypeMapping *, ImportClassMapping, (XmlReflectionImporter * __this, TypeData * typeData, XmlRootAttribute * root, String * defaultNamespace, bool isBaseType));
IL2CPP_REGISTER_METHODINFO(0x04793450, XmlReflectionImporter_ImportClassMapping_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025A4C60, void, RegisterDerivedMap, (XmlReflectionImporter * __this, XmlTypeMapping * map, XmlTypeMapping * derivedMap));
IL2CPP_REGISTER_METHOD(0x025A4E00, String *, GetTypeNamespace, (XmlReflectionImporter * __this, TypeData * typeData, XmlRootAttribute * root, String * defaultNamespace));
IL2CPP_REGISTER_METHOD(0x025A5000, XmlTypeMapping *, ImportListMapping, (XmlReflectionImporter * __this, Type * type, XmlRootAttribute * root, String * defaultNamespace, XmlAttributes * atts, int32_t nestingLevel));
IL2CPP_REGISTER_METHOD(0x025A50E0, XmlTypeMapping *, ImportListMapping, (XmlReflectionImporter * __this, TypeData * typeData, XmlRootAttribute * root, String * defaultNamespace, XmlAttributes * atts, int32_t nestingLevel));
IL2CPP_REGISTER_METHODINFO(0x04752320, XmlReflectionImporter_ImportListMapping_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025A6160, XmlTypeMapping *, ImportXmlNodeMapping, (XmlReflectionImporter * __this, TypeData * typeData, XmlRootAttribute * root, String * defaultNamespace));
IL2CPP_REGISTER_METHOD(0x025A63A0, XmlTypeMapping *, ImportPrimitiveMapping, (XmlReflectionImporter * __this, TypeData * typeData, XmlRootAttribute * root, String * defaultNamespace));
IL2CPP_REGISTER_METHOD(0x025A6490, XmlTypeMapping *, ImportEnumMapping, (XmlReflectionImporter * __this, TypeData * typeData, XmlRootAttribute * root, String * defaultNamespace));
IL2CPP_REGISTER_METHOD(0x025A6C20, XmlTypeMapping *, ImportXmlSerializableMapping, (XmlReflectionImporter * __this, TypeData * typeData, XmlRootAttribute * root, String * defaultNamespace));
IL2CPP_REGISTER_METHOD(0x025A6DB0, void, ImportIncludedTypes, (XmlReflectionImporter * __this, Type * type, String * defaultNamespace));
IL2CPP_REGISTER_METHOD(0x025A6F30, List_1_System_Xml_Serialization_XmlReflectionMember_ *, GetReflectionMembers, (XmlReflectionImporter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x025A7FF0, XmlTypeMapMember *, CreateMapMember, (XmlReflectionImporter * __this, Type * declaringType, XmlReflectionMember * rmember, String * defaultNamespace));
IL2CPP_REGISTER_METHODINFO(0x0475B680, XmlReflectionImporter_CreateMapMember__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025A9170, XmlTypeMapElementInfoList *, ImportElementInfo, (XmlReflectionImporter * __this, Type * cls, String * defaultName, String * defaultNamespace, Type * defaultType, XmlTypeMapMemberElement * member, XmlAttributes * atts));
IL2CPP_REGISTER_METHODINFO(0x04770FD0, XmlReflectionImporter_ImportElementInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025AA240, XmlTypeMapElementInfoList *, ImportAnyElementInfo, (XmlReflectionImporter * __this, String * defaultNamespace, XmlReflectionMember * rmember, XmlTypeMapMemberElement * member, XmlAttributes * atts));
IL2CPP_REGISTER_METHODINFO(0x047397B8, XmlReflectionImporter_ImportAnyElementInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025AA8D0, void, ImportTextElementInfo, (XmlReflectionImporter * __this, XmlTypeMapElementInfoList * list, Type * defaultType, XmlTypeMapMemberElement * member, XmlAttributes * atts, String * defaultNamespace));
IL2CPP_REGISTER_METHODINFO(0x04750640, XmlReflectionImporter_ImportTextElementInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025AAE30, bool, CanBeNull, (XmlReflectionImporter * __this, TypeData * type));
IL2CPP_REGISTER_METHOD(0x025AAE80, void, IncludeType, (XmlReflectionImporter * __this, Type * type));
IL2CPP_REGISTER_METHODINFO(0x0472AFA8, XmlReflectionImporter_IncludeType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025AB2C0, Object *, GetDefaultValue, (XmlReflectionImporter * __this, TypeData * typeData, Object * defaultValue));
IL2CPP_REGISTER_METHODINFO(0x0476C438, XmlReflectionImporter_GetDefaultValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025AB4B0, void, __cctor, ());
}
