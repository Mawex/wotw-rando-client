#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::ClassMap {
IL2CPP_REGISTER_METHOD(0x01C8AE50, void, AddMember, (ClassMap * __this, XmlTypeMapMember * member));
IL2CPP_REGISTER_METHODINFO(0x047725C0, ClassMap_AddMember__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C8BCB0, void, RegisterFlatList, (ClassMap * __this, XmlTypeMapMemberExpandable * member));
IL2CPP_REGISTER_METHOD(0x01C8BE60, XmlTypeMapMemberAttribute *, GetAttribute, (ClassMap * __this, String * name, String * ns));
IL2CPP_REGISTER_METHOD(0x01C8BF90, XmlTypeMapElementInfo *, GetElement, (ClassMap * __this, String * name, String * ns, int32_t minimalOrder));
IL2CPP_REGISTER_METHOD(0x01C8C2B0, XmlTypeMapElementInfo *, GetElement, (ClassMap * __this, String * name, String * ns));
IL2CPP_REGISTER_METHOD(0x01C8C530, String *, BuildKey, (ClassMap * __this, String * name, String * ns, int32_t explicitOrder));
IL2CPP_REGISTER_METHOD(0x01C8C620, bool, get_IsOrderDependentMap, (ClassMap * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, XmlTypeMapMemberAnyElement *, get_DefaultAnyElementMember, (ClassMap * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, XmlTypeMapMemberAnyAttribute *, get_DefaultAnyAttributeMember, (ClassMap * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, XmlTypeMapMemberNamespaces *, get_NamespaceDeclarations, (ClassMap * __this));
IL2CPP_REGISTER_METHOD(0x01C8C8D0, ICollection *, get_AttributeMembers, (ClassMap * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, ICollection *, get_ElementMembers, (ClassMap * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, ArrayList *, get_AllMembers, (ClassMap * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, ArrayList *, get_FlatLists, (ClassMap * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, ArrayList *, get_ListMembers, (ClassMap * __this));
IL2CPP_REGISTER_METHOD(0x002FBBA0, XmlTypeMapMember *, get_XmlTextCollector, (ClassMap * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, XmlTypeMapMember *, get_ReturnMember, (ClassMap * __this));
IL2CPP_REGISTER_METHOD(0x01C8CC00, XmlQualifiedName *, get_SimpleContentBaseType, (ClassMap * __this));
IL2CPP_REGISTER_METHOD(0x00674DC0, void, SetCanBeSimpleType, (ClassMap * __this, bool can));
IL2CPP_REGISTER_METHOD(0x01C8CEC0, bool, get_HasSimpleContent, (ClassMap * __this));
IL2CPP_REGISTER_METHOD(0x01C8CF70, void, __ctor, (ClassMap * __this));
}
