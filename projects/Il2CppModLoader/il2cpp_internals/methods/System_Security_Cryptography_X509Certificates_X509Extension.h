using namespace app;

namespace app::methods::System::Security::Cryptography::X509Certificates::X509Extension {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (X509Extension_1 * __this));
IL2CPP_REGISTER_METHOD(0x021D56E0, void, __ctor, (X509Extension_1 * __this, String * oid, Byte__Array * rawData, bool critical));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Critical, (X509Extension_1 * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_Critical, (X509Extension_1 * __this, bool value));
IL2CPP_REGISTER_METHOD(0x021D5710, void, CopyFrom, (X509Extension_1 * __this, AsnEncodedData * asnEncodedData));
IL2CPP_REGISTER_METHODINFO(0x04732B40, X509Extension_1_CopyFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021D5860, String *, FormatUnkownData, (X509Extension_1 * __this, Byte__Array * data));
}
