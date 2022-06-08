#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::NamespaceList {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (NamespaceList * __this));
IL2CPP_REGISTER_METHOD(0x016CD950, void, __ctor, (NamespaceList * __this, String * namespaces, String * targetNamespace));
IL2CPP_REGISTER_METHOD(0x016CDD60, NamespaceList *, Clone, (NamespaceList * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, NamespaceList_ListType__Enum, get_Type, (NamespaceList * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Excluded, (NamespaceList * __this));
IL2CPP_REGISTER_METHOD(0x016CDF40, ICollection *, get_Enumerate, (NamespaceList * __this));
IL2CPP_REGISTER_METHODINFO(0x0471C220, NamespaceList_get_Enumerate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016CE010, bool, Allows, (NamespaceList * __this, String * ns));
IL2CPP_REGISTER_METHOD(0x016CE0B0, bool, Allows, (NamespaceList * __this, XmlQualifiedName * qname));
IL2CPP_REGISTER_METHOD(0x016CE0E0, String *, ToString, (NamespaceList * __this));
IL2CPP_REGISTER_METHOD(0x016CE520, bool, IsSubset, (NamespaceList * sub, NamespaceList * super));
IL2CPP_REGISTER_METHOD(0x016CE810, NamespaceList *, Union, (NamespaceList * o1, NamespaceList * o2, bool v1Compat));
IL2CPP_REGISTER_METHOD(0x016CF0F0, NamespaceList *, CompareSetToOther, (NamespaceList * __this, NamespaceList * other));
IL2CPP_REGISTER_METHOD(0x016CF3E0, NamespaceList *, Intersection, (NamespaceList * o1, NamespaceList * o2, bool v1Compat));
IL2CPP_REGISTER_METHOD(0x016CFA30, void, RemoveNamespace, (NamespaceList * __this, String * tns));
}
