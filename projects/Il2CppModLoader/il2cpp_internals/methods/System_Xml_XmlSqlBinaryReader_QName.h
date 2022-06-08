using namespace app;

namespace app::methods::System::Xml::XmlSqlBinaryReader_QName {
IL2CPP_REGISTER_METHOD(0x0013C860, void, __ctor, (XmlSqlBinaryReader_QName__Boxed * __this, String * prefix, String * lname, String * nsUri));
IL2CPP_REGISTER_METHOD(0x0013C860, void, Set, (XmlSqlBinaryReader_QName__Boxed * __this, String * prefix, String * lname, String * nsUri));
IL2CPP_REGISTER_METHOD(0x0013C870, void, Clear, (XmlSqlBinaryReader_QName__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013C7D0, bool, MatchNs, (XmlSqlBinaryReader_QName__Boxed * __this, String * lname, String * nsUri));
IL2CPP_REGISTER_METHOD(0x0013C880, bool, MatchPrefix, (XmlSqlBinaryReader_QName__Boxed * __this, String * prefix, String * lname));
IL2CPP_REGISTER_METHOD(0x0013C890, void, CheckPrefixNS, (XmlSqlBinaryReader_QName__Boxed * __this, String * prefix, String * namespaceUri));
IL2CPP_REGISTER_METHODINFO(0x04796610, XmlSqlBinaryReader_QName_CheckPrefixNS__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0013C8A0, int32_t, GetHashCode, (XmlSqlBinaryReader_QName__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013C900, int32_t, GetNSHashCode, (XmlSqlBinaryReader_QName__Boxed * __this, SecureStringHasher * hasher));
IL2CPP_REGISTER_METHOD(0x0013C960, bool, Equals, (XmlSqlBinaryReader_QName__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0013C970, String *, ToString, (XmlSqlBinaryReader_QName__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x01714810, bool, operator___, (XmlSqlBinaryReader_QName a, XmlSqlBinaryReader_QName b));
}
