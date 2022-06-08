#include <interception_macros.h>

namespace app::methods::System::Xml::XmlAsyncCheckReaderWithNS {
IL2CPP_REGISTER_METHOD(0x01959F90, void, __ctor, (XmlAsyncCheckReaderWithNS * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x0195A060, IDictionary_2_System_String_System_String_ *, IXmlNamespaceResolver_GetNamespacesInScope, (XmlAsyncCheckReaderWithNS * __this, XmlNamespaceScope__Enum scope));
IL2CPP_REGISTER_METHOD(0x0195A100, String *, IXmlNamespaceResolver_LookupNamespace, (XmlAsyncCheckReaderWithNS * __this, String * prefix));
IL2CPP_REGISTER_METHOD(0x0195A1B0, String *, IXmlNamespaceResolver_LookupPrefix, (XmlAsyncCheckReaderWithNS * __this, String * namespaceName));
}
