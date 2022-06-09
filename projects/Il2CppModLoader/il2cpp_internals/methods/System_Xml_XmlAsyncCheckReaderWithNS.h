#include <interception_macros.h>

namespace app::methods::System_Xml::XmlAsyncCheckReaderWithNS {
IL2CPP_REGISTER_METHOD(0x01959F90, void, __ctor, (app::XmlAsyncCheckReaderWithNS * this_ptr, app::XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x0195A060, IDictionary_2_System_String_System_String_ *, IXmlNamespaceResolver_GetNamespacesInScope, (app::XmlAsyncCheckReaderWithNS * this_ptr, app::XmlNamespaceScope__Enum scope));
IL2CPP_REGISTER_METHOD(0x0195A100, String *, IXmlNamespaceResolver_LookupNamespace, (app::XmlAsyncCheckReaderWithNS * this_ptr, app::String * prefix));
IL2CPP_REGISTER_METHOD(0x0195A1B0, String *, IXmlNamespaceResolver_LookupPrefix, (app::XmlAsyncCheckReaderWithNS * this_ptr, app::String * namespace_name));
}
