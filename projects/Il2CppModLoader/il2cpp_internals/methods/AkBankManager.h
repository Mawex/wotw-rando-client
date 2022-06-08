using namespace app;

namespace app::methods::AkBankManager {
IL2CPP_REGISTER_METHOD(0x026CC540, void, DoUnloadBanks, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x026CC700, void, Reset, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x026CC800, void, LoadInitBank, (bool doReset));
IL2CPP_REGISTER_METHOD(0x026CC940, void, UnloadInitBank, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x026CCAE0, void, LoadBank, (String * name, bool decodeBank, bool saveDecodedBank));
IL2CPP_REGISTER_METHOD(0x026CCEF0, void, LoadBankAsync, (String * name, AkCallbackManager_BankCallback * callback));
IL2CPP_REGISTER_METHOD(0x026CD220, void, UnloadBank, (String * name));
IL2CPP_REGISTER_METHOD(0x026CD4D0, void, __cctor, (MethodInfo * method));
}
