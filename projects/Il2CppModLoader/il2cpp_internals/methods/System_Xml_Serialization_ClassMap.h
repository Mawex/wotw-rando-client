#include <interception_macros.h>

namespace app::methods::System_Xml_Serialization::ClassMap {
IL2CPP_REGISTER_METHOD(0x01C8AE50, void, AddMember, (app::ClassMap * this_ptr, app::XmlTypeMapMember * member));
IL2CPP_REGISTER_METHODINFO(0x047725C0, ClassMap_AddMember__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C8BCB0, void, RegisterFlatList, (app::ClassMap * this_ptr, app::XmlTypeMapMemberExpandable * member));
IL2CPP_REGISTER_METHOD(0x01C8BE60, XmlTypeMapMemberAttribute *, GetAttribute, (app::ClassMap * this_ptr, app::String * name, app::String * ns));
IL2CPP_REGISTER_METHOD(0x01C8BF90, XmlTypeMapElementInfo *, GetElement_1, (app::ClassMap * this_ptr, app::String * name, app::String * ns, int32_t minimal_order));
IL2CPP_REGISTER_METHOD(0x01C8C2B0, XmlTypeMapElementInfo *, GetElement_2, (app::ClassMap * this_ptr, app::String * name, app::String * ns));
IL2CPP_REGISTER_METHOD(0x01C8C530, String *, BuildKey, (app::ClassMap * this_ptr, app::String * name, app::String * ns, int32_t explicit_order));
IL2CPP_REGISTER_METHOD(0x01C8C620, bool, get_IsOrderDependentMap, (app::ClassMap * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB40, XmlTypeMapMemberAnyElement *, get_DefaultAnyElementMember, (app::ClassMap * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB60, XmlTypeMapMemberAnyAttribute *, get_DefaultAnyAttributeMember, (app::ClassMap * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB80, XmlTypeMapMemberNamespaces *, get_NamespaceDeclarations, (app::ClassMap * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C8C8D0, ICollection *, get_AttributeMembers, (app::ClassMap * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, ICollection *, get_ElementMembers, (app::ClassMap * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, ArrayList *, get_AllMembers, (app::ClassMap * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, ArrayList *, get_FlatLists, (app::ClassMap * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9F0, ArrayList *, get_ListMembers, (app::ClassMap * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBA0, XmlTypeMapMember *, get_XmlTextCollector, (app::ClassMap * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBC0, XmlTypeMapMember *, get_ReturnMember, (app::ClassMap * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C8CC00, XmlQualifiedName *, get_SimpleContentBaseType, (app::ClassMap * this_ptr));
IL2CPP_REGISTER_METHOD(0x00674DC0, void, SetCanBeSimpleType, (app::ClassMap * this_ptr, bool can));
IL2CPP_REGISTER_METHOD(0x01C8CEC0, bool, get_HasSimpleContent, (app::ClassMap * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C8CF70, void, __ctor, (app::ClassMap * this_ptr));
}
