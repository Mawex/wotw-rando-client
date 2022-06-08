#include <interception_macros.h>

namespace app::methods::System::Xml::XmlTextReaderImpl_NoNamespaceManager {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XmlTextReaderImpl_NoNamespaceManager * __this));
IL2CPP_REGISTER_METHOD(0x01FBBBD0, String *, get_DefaultNamespace, (XmlTextReaderImpl_NoNamespaceManager * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PushScope, (XmlTextReaderImpl_NoNamespaceManager * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, PopScope, (XmlTextReaderImpl_NoNamespaceManager * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, AddNamespace, (XmlTextReaderImpl_NoNamespaceManager * __this, String * prefix, String * uri));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RemoveNamespace, (XmlTextReaderImpl_NoNamespaceManager * __this, String * prefix, String * uri));
IL2CPP_REGISTER_METHOD(0x00420EE0, IEnumerator *, GetEnumerator, (XmlTextReaderImpl_NoNamespaceManager * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, IDictionary_2_System_String_System_String_ *, GetNamespacesInScope, (XmlTextReaderImpl_NoNamespaceManager * __this, XmlNamespaceScope__Enum scope));
IL2CPP_REGISTER_METHOD(0x01FBBC50, String *, LookupNamespace, (XmlTextReaderImpl_NoNamespaceManager * __this, String * prefix));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, LookupPrefix, (XmlTextReaderImpl_NoNamespaceManager * __this, String * uri));
}
