#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X509ChainStatus {
IL2CPP_REGISTER_METHOD(0x001DE2E0, void, __ctor, (X509ChainStatus__Boxed * __this, X509ChainStatusFlags__Enum flag));
IL2CPP_REGISTER_METHOD(0x0010E170, X509ChainStatusFlags__Enum, get_Status, (X509ChainStatus__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_Status, (X509ChainStatus__Boxed * __this, X509ChainStatusFlags__Enum value));
IL2CPP_REGISTER_METHOD(0x0010D3A0, void, set_StatusInformation, (X509ChainStatus__Boxed * __this, String * value));
IL2CPP_REGISTER_METHOD(0x021D4840, String *, GetInformation, (X509ChainStatusFlags__Enum flags));
}
