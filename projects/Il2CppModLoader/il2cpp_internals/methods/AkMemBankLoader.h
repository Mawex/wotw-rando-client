using namespace app;

namespace app::methods::AkMemBankLoader {
IL2CPP_REGISTER_METHOD(0x026F9230, void, Start, (AkMemBankLoader * __this));
IL2CPP_REGISTER_METHOD(0x026F9420, void, LoadNonLocalizedBank, (AkMemBankLoader * __this, String * in_bankFilename));
IL2CPP_REGISTER_METHOD(0x026F9520, void, LoadLocalizedBank, (AkMemBankLoader * __this, String * in_bankFilename));
IL2CPP_REGISTER_METHOD(0x026F9660, uint32_t, AllocateAlignedBuffer, (AkMemBankLoader * __this, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x0471FA28, AkMemBankLoader_AllocateAlignedBuffer__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026F97D0, IEnumerator *, LoadFile, (AkMemBankLoader * __this));
IL2CPP_REGISTER_METHOD(0x026F9920, void, DoLoadBank, (AkMemBankLoader * __this, String * in_bankPath));
IL2CPP_REGISTER_METHOD(0x026F9A70, void, OnDestroy, (AkMemBankLoader * __this));
IL2CPP_REGISTER_METHOD(0x026F9C30, void, __ctor, (AkMemBankLoader * __this));
}
