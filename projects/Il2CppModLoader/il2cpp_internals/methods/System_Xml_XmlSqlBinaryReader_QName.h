#include <interception_macros.h>

namespace app::methods::System_Xml::XmlSqlBinaryReader_QName {
IL2CPP_REGISTER_METHOD(0x0013C860, void, __ctor, (app::XmlSqlBinaryReader_QName__Boxed * this_ptr, app::String * prefix, app::String * lname, app::String * ns_uri));
IL2CPP_REGISTER_METHOD(0x0013C860, void, Set, (app::XmlSqlBinaryReader_QName__Boxed * this_ptr, app::String * prefix, app::String * lname, app::String * ns_uri));
IL2CPP_REGISTER_METHOD(0x0013C870, void, Clear, (app::XmlSqlBinaryReader_QName__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x0013C7D0, bool, MatchNs, (app::XmlSqlBinaryReader_QName__Boxed * this_ptr, app::String * lname, app::String * ns_uri));
IL2CPP_REGISTER_METHOD(0x0013C880, bool, MatchPrefix, (app::XmlSqlBinaryReader_QName__Boxed * this_ptr, app::String * prefix, app::String * lname));
IL2CPP_REGISTER_METHOD(0x0013C890, void, CheckPrefixNS, (app::XmlSqlBinaryReader_QName__Boxed * this_ptr, app::String * prefix, app::String * namespace_uri));
IL2CPP_REGISTER_METHODINFO(0x04796610, XmlSqlBinaryReader_QName_CheckPrefixNS__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0013C8A0, int32_t, GetHashCode, (app::XmlSqlBinaryReader_QName__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x0013C900, int32_t, GetNSHashCode, (app::XmlSqlBinaryReader_QName__Boxed * this_ptr, app::SecureStringHasher * hasher));
IL2CPP_REGISTER_METHOD(0x0013C960, bool, Equals, (app::XmlSqlBinaryReader_QName__Boxed * this_ptr, app::Object * other));
IL2CPP_REGISTER_METHOD(0x0013C970, String *, ToString, (app::XmlSqlBinaryReader_QName__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x01714810, bool, operator___, (app::XmlSqlBinaryReader_QName a, app::XmlSqlBinaryReader_QName b));
}
