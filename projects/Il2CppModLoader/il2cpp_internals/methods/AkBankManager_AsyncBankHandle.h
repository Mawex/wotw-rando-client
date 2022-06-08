using namespace app;

namespace app::methods::AkBankManager_AsyncBankHandle {
IL2CPP_REGISTER_METHOD(0x0239A1A0, void, __ctor, (AkBankManager_AsyncBankHandle * __this, String * name, AkCallbackManager_BankCallback * callback));
IL2CPP_REGISTER_METHOD(0x026CD7F0, void, GlobalBankCallback, (uint32_t in_bankID, void * in_pInMemoryBankPtr, AKRESULT__Enum in_eLoadResult, uint32_t in_memPoolId, Object * in_Cookie));
IL2CPP_REGISTER_METHODINFO(0x0478EFA0, AkBankManager_AsyncBankHandle_GlobalBankCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026CDA20, AKRESULT__Enum, DoLoadBank, (AkBankManager_AsyncBankHandle * __this));
}
