using namespace app;

namespace app::methods::System::Security::Cryptography::DES {
IL2CPP_REGISTER_METHOD(0x020D07E0, void, __ctor, (DES * __this));
IL2CPP_REGISTER_METHOD(0x020D08C0, Byte__Array *, get_Key, (DES * __this));
IL2CPP_REGISTER_METHOD(0x020D0A90, void, set_Key, (DES * __this, Byte__Array * value));
IL2CPP_REGISTER_METHODINFO(0x0472A220, DES_set_Key__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D0D30, DES *, Create, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x020D0E70, DES *, Create, (String * algName));
IL2CPP_REGISTER_METHOD(0x020D0F50, bool, IsWeakKey, (Byte__Array * rgbKey));
IL2CPP_REGISTER_METHODINFO(0x04795090, DES_IsWeakKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D10E0, bool, IsSemiWeakKey, (Byte__Array * rgbKey));
IL2CPP_REGISTER_METHODINFO(0x04727078, DES_IsSemiWeakKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D12F0, bool, IsLegalKeySize, (Byte__Array * rgbKey));
IL2CPP_REGISTER_METHOD(0x020D1310, uint64_t, QuadWordFromBigEndian, (Byte__Array * block));
IL2CPP_REGISTER_METHOD(0x020D1450, void, __cctor, (MethodInfo * method));
}
