#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography::AsnEncodedData {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::AsnEncodedData * this_ptr));
IL2CPP_REGISTER_METHOD(0x021BD4B0, void, __ctor_2, (app::AsnEncodedData * this_ptr, app::String * oid, app::Byte__Array * raw_data));
IL2CPP_REGISTER_METHOD(0x021BD630, void, __ctor_3, (app::AsnEncodedData * this_ptr, app::Oid * oid, app::Byte__Array * raw_data));
IL2CPP_REGISTER_METHOD(0x002FA280, Oid *, get_Oid, (app::AsnEncodedData * this_ptr));
IL2CPP_REGISTER_METHOD(0x021BD660, void, set_Oid, (app::AsnEncodedData * this_ptr, app::Oid * value));
IL2CPP_REGISTER_METHOD(0x002FB930, Byte__Array *, get_RawData, (app::AsnEncodedData * this_ptr));
IL2CPP_REGISTER_METHOD(0x021BD7D0, void, set_RawData, (app::AsnEncodedData * this_ptr, app::Byte__Array * value));
IL2CPP_REGISTER_METHODINFO(0x0470FB58, AsnEncodedData_set_RawData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021BD950, void, CopyFrom, (app::AsnEncodedData * this_ptr, app::AsnEncodedData * asn_encoded_data));
IL2CPP_REGISTER_METHODINFO(0x0470B210, AsnEncodedData_CopyFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021BDB70, String *, Format, (app::AsnEncodedData * this_ptr, bool multi_line));
IL2CPP_REGISTER_METHOD(0x021BDC50, String *, ToString, (app::AsnEncodedData * this_ptr, bool multi_line));
IL2CPP_REGISTER_METHOD(0x021BDEE0, String *, Default, (app::AsnEncodedData * this_ptr, bool multi_line));
IL2CPP_REGISTER_METHOD(0x021BE120, String *, BasicConstraintsExtension, (app::AsnEncodedData * this_ptr, bool multi_line));
IL2CPP_REGISTER_METHOD(0x021BE2C0, String *, EnhancedKeyUsageExtension, (app::AsnEncodedData * this_ptr, bool multi_line));
IL2CPP_REGISTER_METHOD(0x021BE460, String *, KeyUsageExtension, (app::AsnEncodedData * this_ptr, bool multi_line));
IL2CPP_REGISTER_METHOD(0x021BE600, String *, SubjectKeyIdentifierExtension, (app::AsnEncodedData * this_ptr, bool multi_line));
IL2CPP_REGISTER_METHOD(0x021BE7A0, String *, SubjectAltName, (app::AsnEncodedData * this_ptr, bool multi_line));
IL2CPP_REGISTER_METHOD(0x021BEBF0, String *, NetscapeCertType, (app::AsnEncodedData * this_ptr, bool multi_line));
}
