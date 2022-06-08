using namespace app;

namespace app::methods::System::Security::SecureString {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01E1D750, void, __ctor, (SecureString * __this));
IL2CPP_REGISTER_METHOD(0x01E1D7E0, void, __ctor, (SecureString * __this, uint16_t * value, int32_t length));
IL2CPP_REGISTER_METHODINFO(0x04745068, SecureString__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E1D9A0, int32_t, get_Length, (SecureString * __this));
IL2CPP_REGISTER_METHODINFO(0x0477ED68, SecureString_get_Length__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E1DA50, SecureString *, Copy, (SecureString * __this));
IL2CPP_REGISTER_METHOD(0x01E1DC80, void, Dispose, (SecureString * __this));
IL2CPP_REGISTER_METHOD(0x003F8E90, void, Encrypt, (SecureString * __this));
IL2CPP_REGISTER_METHOD(0x003F8E90, void, Decrypt, (SecureString * __this));
IL2CPP_REGISTER_METHOD(0x01E1DCC0, void, Alloc, (SecureString * __this, int32_t length, bool realloc));
IL2CPP_REGISTER_METHODINFO(0x0473E488, SecureString_Alloc__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E1DE70, Byte__Array *, GetBuffer, (SecureString * __this));
}
