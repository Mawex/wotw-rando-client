#include <interception_macros.h>

namespace app::methods::AkCallbackManager_BankCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (AkCallbackManager_BankCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x026D3B90, void, Invoke, (AkCallbackManager_BankCallback * __this, uint32_t in_bankID, void * in_InMemoryBankPtr, AKRESULT__Enum in_eLoadResult, uint32_t in_memPoolId, Object * in_Cookie));
IL2CPP_REGISTER_METHOD(0x026D4000, IAsyncResult *, BeginInvoke, (AkCallbackManager_BankCallback * __this, uint32_t in_bankID, void * in_InMemoryBankPtr, AKRESULT__Enum in_eLoadResult, uint32_t in_memPoolId, Object * in_Cookie, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (AkCallbackManager_BankCallback * __this, IAsyncResult * result));
}
