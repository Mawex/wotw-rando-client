using namespace app;

namespace app::methods::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName {
IL2CPP_REGISTER_METHOD(0x02028E40, void, __ctor, (XmlAtomicValue_NamespacePrefixForQName * __this, String * prefix, String * ns));
IL2CPP_REGISTER_METHOD(0x0223D290, String *, LookupNamespace, (XmlAtomicValue_NamespacePrefixForQName * __this, String * prefix));
IL2CPP_REGISTER_METHOD(0x0223D2E0, String *, LookupPrefix, (XmlAtomicValue_NamespacePrefixForQName * __this, String * namespaceName));
IL2CPP_REGISTER_METHOD(0x0223D330, IDictionary_2_System_String_System_String_ *, GetNamespacesInScope, (XmlAtomicValue_NamespacePrefixForQName * __this, XmlNamespaceScope__Enum scope));
}
