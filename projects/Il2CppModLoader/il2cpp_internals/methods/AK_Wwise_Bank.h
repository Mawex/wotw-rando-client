#include <interception_macros.h>

namespace app::methods::AK::Wwise::Bank {
IL2CPP_REGISTER_METHOD(0x00AD8BA0, WwiseObjectType__Enum, get_WwiseObjectType, (Bank * __this));
IL2CPP_REGISTER_METHOD(0x026C1180, void, Load, (Bank * __this, bool decodeBank, bool saveDecodedBank));
IL2CPP_REGISTER_METHOD(0x026C1270, void, LoadAsync, (Bank * __this, AkCallbackManager_BankCallback * callback));
IL2CPP_REGISTER_METHOD(0x026C1350, void, Unload, (Bank * __this));
IL2CPP_REGISTER_METHOD(0x026C1170, void, __ctor, (Bank * __this));
}
