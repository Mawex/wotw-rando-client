using namespace app;

namespace app::methods::System::Security::Cryptography::AsnEncodedData {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (AsnEncodedData * __this));
IL2CPP_REGISTER_METHOD(0x021BD4B0, void, __ctor, (AsnEncodedData * __this, String * oid, Byte__Array * rawData));
IL2CPP_REGISTER_METHOD(0x021BD630, void, __ctor, (AsnEncodedData * __this, Oid * oid, Byte__Array * rawData));
IL2CPP_REGISTER_METHOD(0x002FA280, Oid *, get_Oid, (AsnEncodedData * __this));
IL2CPP_REGISTER_METHOD(0x021BD660, void, set_Oid, (AsnEncodedData * __this, Oid * value));
IL2CPP_REGISTER_METHOD(0x002FB930, Byte__Array *, get_RawData, (AsnEncodedData * __this));
IL2CPP_REGISTER_METHOD(0x021BD7D0, void, set_RawData, (AsnEncodedData * __this, Byte__Array * value));
IL2CPP_REGISTER_METHODINFO(0x0470FB58, AsnEncodedData_set_RawData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021BD950, void, CopyFrom, (AsnEncodedData * __this, AsnEncodedData * asnEncodedData));
IL2CPP_REGISTER_METHODINFO(0x0470B210, AsnEncodedData_CopyFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021BDB70, String *, Format, (AsnEncodedData * __this, bool multiLine));
IL2CPP_REGISTER_METHOD(0x021BDC50, String *, ToString, (AsnEncodedData * __this, bool multiLine));
IL2CPP_REGISTER_METHOD(0x021BDEE0, String *, Default, (AsnEncodedData * __this, bool multiLine));
IL2CPP_REGISTER_METHOD(0x021BE120, String *, BasicConstraintsExtension, (AsnEncodedData * __this, bool multiLine));
IL2CPP_REGISTER_METHOD(0x021BE2C0, String *, EnhancedKeyUsageExtension, (AsnEncodedData * __this, bool multiLine));
IL2CPP_REGISTER_METHOD(0x021BE460, String *, KeyUsageExtension, (AsnEncodedData * __this, bool multiLine));
IL2CPP_REGISTER_METHOD(0x021BE600, String *, SubjectKeyIdentifierExtension, (AsnEncodedData * __this, bool multiLine));
IL2CPP_REGISTER_METHOD(0x021BE7A0, String *, SubjectAltName, (AsnEncodedData * __this, bool multiLine));
IL2CPP_REGISTER_METHOD(0x021BEBF0, String *, NetscapeCertType, (AsnEncodedData * __this, bool multiLine));
}
