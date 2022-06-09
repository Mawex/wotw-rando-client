#include <interception_macros.h>

namespace app::methods::System_Xml::XmlAsyncCheckReaderWithLineInfoNS {
IL2CPP_REGISTER_METHOD(0x01959800, void, __ctor, (app::XmlAsyncCheckReaderWithLineInfoNS * this_ptr, app::XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x019598D0, IDictionary_2_System_String_System_String_ *, IXmlNamespaceResolver_GetNamespacesInScope, (app::XmlAsyncCheckReaderWithLineInfoNS * this_ptr, app::XmlNamespaceScope__Enum scope));
IL2CPP_REGISTER_METHOD(0x01959970, String *, IXmlNamespaceResolver_LookupNamespace, (app::XmlAsyncCheckReaderWithLineInfoNS * this_ptr, app::String * prefix));
IL2CPP_REGISTER_METHOD(0x01959A20, String *, IXmlNamespaceResolver_LookupPrefix, (app::XmlAsyncCheckReaderWithLineInfoNS * this_ptr, app::String * namespace_name));
}
