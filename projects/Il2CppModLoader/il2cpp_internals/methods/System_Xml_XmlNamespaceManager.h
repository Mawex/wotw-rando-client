#include <interception_macros.h>

namespace app::methods::System::Xml::XmlNamespaceManager {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XmlNamespaceManager * __this));
IL2CPP_REGISTER_METHOD(0x01DC2AE0, void, __ctor, (XmlNamespaceManager * __this, XmlNameTable * nameTable));
IL2CPP_REGISTER_METHOD(0x002FB950, XmlNameTable *, get_NameTable, (XmlNamespaceManager * __this));
IL2CPP_REGISTER_METHOD(0x01DC2D10, String *, get_DefaultNamespace, (XmlNamespaceManager * __this));
IL2CPP_REGISTER_METHOD(0x0131C5E0, void, PushScope, (XmlNamespaceManager * __this));
IL2CPP_REGISTER_METHOD(0x01DC2DC0, bool, PopScope, (XmlNamespaceManager * __this));
IL2CPP_REGISTER_METHOD(0x01DC2F00, void, AddNamespace, (XmlNamespaceManager * __this, String * prefix, String * uri));
IL2CPP_REGISTER_METHODINFO(0x0475F868, XmlNamespaceManager_AddNamespace__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DC3410, void, RemoveNamespace, (XmlNamespaceManager * __this, String * prefix, String * uri));
IL2CPP_REGISTER_METHODINFO(0x0470F818, XmlNamespaceManager_RemoveNamespace__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DC3680, IEnumerator *, GetEnumerator, (XmlNamespaceManager * __this));
IL2CPP_REGISTER_METHOD(0x01DC38E0, IDictionary_2_System_String_System_String_ *, GetNamespacesInScope, (XmlNamespaceManager * __this, XmlNamespaceScope__Enum scope));
IL2CPP_REGISTER_METHOD(0x01DC3BD0, String *, LookupNamespace, (XmlNamespaceManager * __this, String * prefix));
IL2CPP_REGISTER_METHOD(0x01DC3C30, int32_t, LookupNamespaceDecl, (XmlNamespaceManager * __this, String * prefix));
IL2CPP_REGISTER_METHOD(0x01DC3EC0, String *, LookupPrefix, (XmlNamespaceManager * __this, String * uri));
}
