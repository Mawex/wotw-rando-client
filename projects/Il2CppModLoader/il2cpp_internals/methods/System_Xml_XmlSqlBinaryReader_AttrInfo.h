using namespace app;

namespace app::methods::System::Xml::XmlSqlBinaryReader_AttrInfo {
IL2CPP_REGISTER_METHOD(0x0013C710, void, Set, (XmlSqlBinaryReader_AttrInfo__Boxed * __this, XmlSqlBinaryReader_QName n, String * v));
IL2CPP_REGISTER_METHOD(0x0013C730, void, Set, (XmlSqlBinaryReader_AttrInfo__Boxed * __this, XmlSqlBinaryReader_QName n, int32_t pos));
IL2CPP_REGISTER_METHOD(0x0013C750, void, GetLocalnameAndNamespaceUri, (XmlSqlBinaryReader_AttrInfo__Boxed * __this, String * * localname, String * * namespaceUri));
IL2CPP_REGISTER_METHOD(0x0013C760, int32_t, GetLocalnameAndNamespaceUriAndHash, (XmlSqlBinaryReader_AttrInfo__Boxed * __this, SecureStringHasher * hasher, String * * localname, String * * namespaceUri));
IL2CPP_REGISTER_METHOD(0x0013C7D0, bool, MatchNS, (XmlSqlBinaryReader_AttrInfo__Boxed * __this, String * localname, String * namespaceUri));
IL2CPP_REGISTER_METHOD(0x0013C7E0, bool, MatchHashNS, (XmlSqlBinaryReader_AttrInfo__Boxed * __this, int32_t hash, String * localname, String * namespaceUri));
IL2CPP_REGISTER_METHOD(0x0013C800, void, AdjustPosition, (XmlSqlBinaryReader_AttrInfo__Boxed * __this, int32_t adj));
}
