#include <interception_macros.h>

namespace app::methods::System::Net::CredentialHostKey {
IL2CPP_REGISTER_METHOD(0x01EAB330, void, __ctor, (CredentialHostKey * __this, String * host, int32_t port, String * authenticationType));
IL2CPP_REGISTER_METHOD(0x01EAB340, bool, Match, (CredentialHostKey * __this, String * host, int32_t port, String * authenticationType));
IL2CPP_REGISTER_METHOD(0x01EAB570, int32_t, GetHashCode, (CredentialHostKey * __this));
IL2CPP_REGISTER_METHOD(0x01EAB610, bool, Equals, (CredentialHostKey * __this, Object * comparand));
IL2CPP_REGISTER_METHOD(0x01EAB8F0, String *, ToString, (CredentialHostKey * __this));
}
