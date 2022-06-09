#include <interception_macros.h>

namespace app::methods::System_Xml_Serialization::XmlReflectionImporter {
IL2CPP_REGISTER_METHOD(0x025A25A0, void, __ctor, (app::XmlReflectionImporter * this_ptr, app::XmlAttributeOverrides * attribute_overrides, app::String * default_namespace));
IL2CPP_REGISTER_METHOD(0x025A29F0, XmlTypeMapping *, ImportTypeMapping_1, (app::XmlReflectionImporter * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHOD(0x025A2A10, XmlTypeMapping *, ImportTypeMapping_2, (app::XmlReflectionImporter * this_ptr, app::Type * type, app::String * default_namespace));
IL2CPP_REGISTER_METHOD(0x025A2A30, XmlTypeMapping *, ImportTypeMapping_3, (app::XmlReflectionImporter * this_ptr, app::Type * type, app::XmlRootAttribute * root, app::String * default_namespace));
IL2CPP_REGISTER_METHODINFO(0x04793FF0, XmlReflectionImporter_ImportTypeMapping_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025A2C00, XmlTypeMapping *, ImportTypeMapping_4, (app::XmlReflectionImporter * this_ptr, app::TypeData * type_data, app::XmlRootAttribute * root, app::String * default_namespace));
IL2CPP_REGISTER_METHODINFO(0x04790AC0, XmlReflectionImporter_ImportTypeMapping_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025A31B0, XmlTypeMapping *, CreateTypeMapping, (app::XmlReflectionImporter * this_ptr, app::TypeData * type_data, app::XmlRootAttribute * root, app::String * default_xml_type, app::String * default_namespace));
IL2CPP_REGISTER_METHODINFO(0x0470DFD8, XmlReflectionImporter_CreateTypeMapping__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025A39D0, XmlTypeMapping *, ImportClassMapping_1, (app::XmlReflectionImporter * this_ptr, app::Type * type, app::XmlRootAttribute * root, app::String * default_namespace, bool is_base_type));
IL2CPP_REGISTER_METHOD(0x025A3AC0, XmlTypeMapping *, ImportClassMapping_2, (app::XmlReflectionImporter * this_ptr, app::TypeData * type_data, app::XmlRootAttribute * root, app::String * default_namespace, bool is_base_type));
IL2CPP_REGISTER_METHODINFO(0x04793450, XmlReflectionImporter_ImportClassMapping_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025A4C60, void, RegisterDerivedMap, (app::XmlReflectionImporter * this_ptr, app::XmlTypeMapping * map, app::XmlTypeMapping * derived_map));
IL2CPP_REGISTER_METHOD(0x025A4E00, String *, GetTypeNamespace, (app::XmlReflectionImporter * this_ptr, app::TypeData * type_data, app::XmlRootAttribute * root, app::String * default_namespace));
IL2CPP_REGISTER_METHOD(0x025A5000, XmlTypeMapping *, ImportListMapping_1, (app::XmlReflectionImporter * this_ptr, app::Type * type, app::XmlRootAttribute * root, app::String * default_namespace, app::XmlAttributes * atts, int32_t nesting_level));
IL2CPP_REGISTER_METHOD(0x025A50E0, XmlTypeMapping *, ImportListMapping_2, (app::XmlReflectionImporter * this_ptr, app::TypeData * type_data, app::XmlRootAttribute * root, app::String * default_namespace, app::XmlAttributes * atts, int32_t nesting_level));
IL2CPP_REGISTER_METHODINFO(0x04752320, XmlReflectionImporter_ImportListMapping_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025A6160, XmlTypeMapping *, ImportXmlNodeMapping, (app::XmlReflectionImporter * this_ptr, app::TypeData * type_data, app::XmlRootAttribute * root, app::String * default_namespace));
IL2CPP_REGISTER_METHOD(0x025A63A0, XmlTypeMapping *, ImportPrimitiveMapping, (app::XmlReflectionImporter * this_ptr, app::TypeData * type_data, app::XmlRootAttribute * root, app::String * default_namespace));
IL2CPP_REGISTER_METHOD(0x025A6490, XmlTypeMapping *, ImportEnumMapping, (app::XmlReflectionImporter * this_ptr, app::TypeData * type_data, app::XmlRootAttribute * root, app::String * default_namespace));
IL2CPP_REGISTER_METHOD(0x025A6C20, XmlTypeMapping *, ImportXmlSerializableMapping, (app::XmlReflectionImporter * this_ptr, app::TypeData * type_data, app::XmlRootAttribute * root, app::String * default_namespace));
IL2CPP_REGISTER_METHOD(0x025A6DB0, void, ImportIncludedTypes, (app::XmlReflectionImporter * this_ptr, app::Type * type, app::String * default_namespace));
IL2CPP_REGISTER_METHOD(0x025A6F30, List_1_System_Xml_Serialization_XmlReflectionMember_ *, GetReflectionMembers, (app::XmlReflectionImporter * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHOD(0x025A7FF0, XmlTypeMapMember *, CreateMapMember, (app::XmlReflectionImporter * this_ptr, app::Type * declaring_type, app::XmlReflectionMember * rmember, app::String * default_namespace));
IL2CPP_REGISTER_METHODINFO(0x0475B680, XmlReflectionImporter_CreateMapMember__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025A9170, XmlTypeMapElementInfoList *, ImportElementInfo, (app::XmlReflectionImporter * this_ptr, app::Type * cls, app::String * default_name, app::String * default_namespace, app::Type * default_type, app::XmlTypeMapMemberElement * member, app::XmlAttributes * atts));
IL2CPP_REGISTER_METHODINFO(0x04770FD0, XmlReflectionImporter_ImportElementInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025AA240, XmlTypeMapElementInfoList *, ImportAnyElementInfo, (app::XmlReflectionImporter * this_ptr, app::String * default_namespace, app::XmlReflectionMember * rmember, app::XmlTypeMapMemberElement * member, app::XmlAttributes * atts));
IL2CPP_REGISTER_METHODINFO(0x047397B8, XmlReflectionImporter_ImportAnyElementInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025AA8D0, void, ImportTextElementInfo, (app::XmlReflectionImporter * this_ptr, app::XmlTypeMapElementInfoList * list, app::Type * default_type, app::XmlTypeMapMemberElement * member, app::XmlAttributes * atts, app::String * default_namespace));
IL2CPP_REGISTER_METHODINFO(0x04750640, XmlReflectionImporter_ImportTextElementInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025AAE30, bool, CanBeNull, (app::XmlReflectionImporter * this_ptr, app::TypeData * type));
IL2CPP_REGISTER_METHOD(0x025AAE80, void, IncludeType, (app::XmlReflectionImporter * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHODINFO(0x0472AFA8, XmlReflectionImporter_IncludeType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025AB2C0, Object *, GetDefaultValue, (app::XmlReflectionImporter * this_ptr, app::TypeData * type_data, app::Object * default_value));
IL2CPP_REGISTER_METHODINFO(0x0476C438, XmlReflectionImporter_GetDefaultValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025AB4B0, void, __cctor, ());
}
