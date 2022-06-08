using namespace app;

namespace app::methods::System::Security::Cryptography::MACTripleDES {
IL2CPP_REGISTER_METHOD(0x020DC4C0, void, __ctor, (MACTripleDES * __this));
IL2CPP_REGISTER_METHOD(0x020DC680, void, __ctor, (MACTripleDES * __this, Byte__Array * rgbKey));
IL2CPP_REGISTER_METHOD(0x020DC720, void, __ctor, (MACTripleDES * __this, String * strTripleDES, Byte__Array * rgbKey));
IL2CPP_REGISTER_METHODINFO(0x0475F228, MACTripleDES__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00650B90, void, Initialize, (MACTripleDES * __this));
IL2CPP_REGISTER_METHOD(0x020DCA60, PaddingMode__Enum, get_Padding, (MACTripleDES * __this));
IL2CPP_REGISTER_METHOD(0x020DCA90, void, set_Padding, (MACTripleDES * __this, PaddingMode__Enum value));
IL2CPP_REGISTER_METHODINFO(0x0470CDB0, MACTripleDES_set_Padding__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020DCB80, void, HashCore, (MACTripleDES * __this, Byte__Array * rgbData, int32_t ibStart, int32_t cbSize));
IL2CPP_REGISTER_METHOD(0x020DCEA0, Byte__Array *, HashFinal, (MACTripleDES * __this));
IL2CPP_REGISTER_METHOD(0x020DD2C0, void, Dispose, (MACTripleDES * __this, bool disposing));
}
