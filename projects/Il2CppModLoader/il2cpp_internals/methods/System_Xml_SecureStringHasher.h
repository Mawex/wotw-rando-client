using namespace app;

namespace app::methods::System::Xml::SecureStringHasher {
IL2CPP_REGISTER_METHOD(0x01C8A800, void, __ctor, (SecureStringHasher * __this));
IL2CPP_REGISTER_METHOD(0x01C8A850, bool, Equals, (SecureStringHasher * __this, String * x, String * y));
IL2CPP_REGISTER_METHOD(0x01C8A910, int32_t, GetHashCode, (SecureStringHasher * __this, String * key));
IL2CPP_REGISTER_METHOD(0x01C8AA00, int32_t, GetHashCodeOfString, (String * key, int32_t sLen, int64_t additionalEntropy));
IL2CPP_REGISTER_METHODINFO(0x0477DAA0, SecureStringHasher_GetHashCodeOfString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C8AB30, SecureStringHasher_HashCodeOfStringDelegate *, GetHashCodeDelegate, (MethodInfo * method));
}
