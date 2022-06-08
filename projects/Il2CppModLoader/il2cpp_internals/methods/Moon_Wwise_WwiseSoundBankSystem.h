#include <interception_macros.h>

namespace app::methods::Moon::Wwise::WwiseSoundBankSystem {
IL2CPP_REGISTER_METHOD(0x02716B80, void, Initialize, (WwiseSoundBankSystem * __this, AkWwiseInitializationSettings * config));
IL2CPP_REGISTER_METHOD(0x02716D40, void, LoadAll, (WwiseSoundBankSystem * __this));
IL2CPP_REGISTER_METHOD(0x02716EB0, void, Load, (WwiseSoundBankSystem * __this, String * name, bool async, uint32_t bankId));
IL2CPP_REGISTER_METHOD(0x02716FF0, void, Unload, (WwiseSoundBankSystem * __this, String * name, uint32_t bankId));
IL2CPP_REGISTER_METHOD(0x027170F0, void, LoadRequired, (WwiseSoundBankSystem * __this));
IL2CPP_REGISTER_METHOD(0x027171B0, void, UnloadAll, (WwiseSoundBankSystem * __this));
IL2CPP_REGISTER_METHOD(0x02717310, bool, BankIsGlobal, (WwiseSoundBankSystem * __this, uint32_t bankId));
IL2CPP_REGISTER_METHOD(0x027173E0, HashSet_1_System_String_ *, GetAll, (WwiseSoundBankSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (WwiseSoundBankSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (WwiseSoundBankSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (WwiseSoundBankSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
