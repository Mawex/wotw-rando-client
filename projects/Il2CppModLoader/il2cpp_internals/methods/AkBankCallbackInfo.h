#include <interception_macros.h>

namespace app::methods::AkBankCallbackInfo {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkBankCallbackInfo * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026CBC80, void *, getCPtr, (AkBankCallbackInfo * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkBankCallbackInfo * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026CBD10, void, Finalize, (AkBankCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026CBD90, void, Dispose, (AkBankCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026CBFA0, uint32_t, get_bankID, (AkBankCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026CC0C0, void *, get_inMemoryBankPtr, (AkBankCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026CC1E0, AKRESULT__Enum, get_loadResult, (AkBankCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026CC300, int32_t, get_memPoolId, (AkBankCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026CC420, void, __ctor, (AkBankCallbackInfo * __this));
}
