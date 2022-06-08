using namespace app;

namespace app::methods::System::Net::CredentialKey {
IL2CPP_REGISTER_METHOD(0x01EABCD0, void, __ctor, (CredentialKey * __this, Uri * uriPrefix, String * authenticationType));
IL2CPP_REGISTER_METHOD(0x01EABD30, bool, Match, (CredentialKey * __this, Uri * uri, String * authenticationType));
IL2CPP_REGISTER_METHOD(0x01EABEF0, bool, IsPrefix, (CredentialKey * __this, Uri * uri, Uri * prefixUri));
IL2CPP_REGISTER_METHOD(0x01EAC0C0, int32_t, GetHashCode, (CredentialKey * __this));
IL2CPP_REGISTER_METHOD(0x01EAC150, bool, Equals, (CredentialKey * __this, Object * comparand));
IL2CPP_REGISTER_METHOD(0x01EAC350, String *, ToString, (CredentialKey * __this));
}
