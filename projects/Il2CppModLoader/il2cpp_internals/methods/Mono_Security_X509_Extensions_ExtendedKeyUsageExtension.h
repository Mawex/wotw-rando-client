using namespace app;

namespace app::methods::Mono::Security::X509::Extensions::ExtendedKeyUsageExtension {
IL2CPP_REGISTER_METHOD(0x0291D710, void, __ctor, (ExtendedKeyUsageExtension * __this, X509Extension_2 * extension));
IL2CPP_REGISTER_METHOD(0x0291E920, void, Decode, (ExtendedKeyUsageExtension * __this));
IL2CPP_REGISTER_METHODINFO(0x04752E30, ExtendedKeyUsageExtension_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0291EC10, void, Encode, (ExtendedKeyUsageExtension * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, ArrayList *, get_KeyPurpose, (ExtendedKeyUsageExtension * __this));
IL2CPP_REGISTER_METHOD(0x0291F000, String *, get_Name, (ExtendedKeyUsageExtension * __this));
IL2CPP_REGISTER_METHOD(0x0291F080, String *, ToString, (ExtendedKeyUsageExtension * __this));
}
