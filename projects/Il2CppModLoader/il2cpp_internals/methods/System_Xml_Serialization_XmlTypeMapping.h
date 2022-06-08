#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlTypeMapping {
IL2CPP_REGISTER_METHOD(0x0194FA20, void, __ctor, (XmlTypeMapping * __this, String * elementName, String * ns, TypeData * typeData, String * xmlType, String * xmlTypeNamespace));
IL2CPP_REGISTER_METHOD(0x0194FBB0, String *, get_TypeFullName, (XmlTypeMapping * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, TypeData *, get_TypeData, (XmlTypeMapping * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, String *, get_XmlType, (XmlTypeMapping * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_XmlType, (XmlTypeMapping * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0194FBD0, String *, get_XmlTypeNamespace, (XmlTypeMapping * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_XmlTypeNamespace, (XmlTypeMapping * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0194FC60, bool, get_HasXmlTypeNamespace, (XmlTypeMapping * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, ArrayList *, get_DerivedTypes, (XmlTypeMapping * __this));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_MultiReferenceType, (XmlTypeMapping * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, XmlTypeMapping *, get_BaseMap, (XmlTypeMapping * __this));
IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_BaseMap, (XmlTypeMapping * __this, XmlTypeMapping * value));
IL2CPP_REGISTER_METHOD(0x00675C70, void, set_IncludeInSchema, (XmlTypeMapping * __this, bool value));
IL2CPP_REGISTER_METHOD(0x008543B0, bool, get_IsNullable, (XmlTypeMapping * __this));
IL2CPP_REGISTER_METHOD(0x00DC31D0, void, set_IsNullable, (XmlTypeMapping * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0194FC70, bool, get_IsAny, (XmlTypeMapping * __this));
IL2CPP_REGISTER_METHOD(0x0194FC80, void, set_IsAny, (XmlTypeMapping * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0194FC90, XmlTypeMapping *, GetRealTypeMap, (XmlTypeMapping * __this, Type * objectType));
IL2CPP_REGISTER_METHOD(0x0194FE50, XmlTypeMapping *, GetRealElementMap, (XmlTypeMapping * __this, String * name, String * ens));
IL2CPP_REGISTER_METHOD(0x01950110, void, UpdateRoot, (XmlTypeMapping * __this, XmlQualifiedName * qname));
}
