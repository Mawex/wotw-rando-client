using namespace app;

namespace app::methods::AkBankManager_BankHandle {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (AkBankManager_BankHandle * __this, String * name));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_RefCount, (AkBankManager_BankHandle * __this));
IL2CPP_REGISTER_METHOD(0x0052A020, void, set_RefCount, (AkBankManager_BankHandle * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x026CDBC0, AKRESULT__Enum, DoLoadBank, (AkBankManager_BankHandle * __this));
IL2CPP_REGISTER_METHOD(0x026CDC70, void, LoadBank, (AkBankManager_BankHandle * __this));
IL2CPP_REGISTER_METHOD(0x026CDDC0, void, UnloadBank, (AkBankManager_BankHandle * __this));
IL2CPP_REGISTER_METHOD(0x026CDE70, void, IncRef, (AkBankManager_BankHandle * __this));
IL2CPP_REGISTER_METHOD(0x026CDE80, void, DecRef, (AkBankManager_BankHandle * __this));
IL2CPP_REGISTER_METHOD(0x026CDF50, void, LogLoadResult, (AkBankManager_BankHandle * __this, AKRESULT__Enum result));
}
