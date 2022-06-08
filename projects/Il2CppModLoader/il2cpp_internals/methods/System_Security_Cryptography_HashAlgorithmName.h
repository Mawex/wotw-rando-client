using namespace app;

namespace app::methods::System::Security::Cryptography::HashAlgorithmName {
IL2CPP_REGISTER_METHOD(0x020DBC10, HashAlgorithmName, get_MD5, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x020DBC90, HashAlgorithmName, get_SHA1, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x020DBD10, HashAlgorithmName, get_SHA256, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x020DBD90, HashAlgorithmName, get_SHA384, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x020DBE10, HashAlgorithmName, get_SHA512, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (HashAlgorithmName__Boxed * __this, String * name));
IL2CPP_REGISTER_METHOD(0x00107C00, String *, get_Name, (HashAlgorithmName__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DC210, String *, ToString, (HashAlgorithmName__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DC2A0, bool, Equals, (HashAlgorithmName__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x001DC3A0, bool, Equals, (HashAlgorithmName__Boxed * __this, HashAlgorithmName other));
IL2CPP_REGISTER_METHOD(0x001DC3D0, int32_t, GetHashCode, (HashAlgorithmName__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x01E27CD0, bool, operator___, (HashAlgorithmName left, HashAlgorithmName right));
IL2CPP_REGISTER_METHOD(0x01E280E0, bool, operator___, (HashAlgorithmName left, HashAlgorithmName right));
}
