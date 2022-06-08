using namespace app;

namespace app::methods::System::Security::Cryptography::DESTransform {
IL2CPP_REGISTER_METHOD(0x020D1FF0, void, __ctor, (DESTransform * __this, SymmetricAlgorithm * symmAlgo, bool encryption, Byte__Array * key, Byte__Array * iv));
IL2CPP_REGISTER_METHODINFO(0x04793038, DESTransform__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D2410, uint32_t, CipherFunct, (DESTransform * __this, uint32_t r, int32_t n));
IL2CPP_REGISTER_METHOD(0x020D2850, void, Permutation, (Byte__Array * input, Byte__Array * output, UInt32__Array * permTab, bool preSwap));
IL2CPP_REGISTER_METHOD(0x020D2E10, void, BSwap, (Byte__Array * byteBuff));
IL2CPP_REGISTER_METHOD(0x020D2FB0, void, SetKey, (DESTransform * __this, Byte__Array * key));
IL2CPP_REGISTER_METHOD(0x020D34E0, void, ProcessBlock, (DESTransform * __this, Byte__Array * input, Byte__Array * output));
IL2CPP_REGISTER_METHOD(0x020D3A00, void, ECB, (DESTransform * __this, Byte__Array * input, Byte__Array * output));
IL2CPP_REGISTER_METHOD(0x020D3B10, Byte__Array *, GetStrongKey, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x020D3C60, void, __cctor, (MethodInfo * method));
}
