using namespace app;

namespace app::methods::Mono::Security::Protocol::Ntlm::Type2Message {
IL2CPP_REGISTER_METHOD(0x02A4C140, void, __ctor, (Type2Message * __this, Byte__Array * message));
IL2CPP_REGISTER_METHOD(0x02A4C210, void, Finalize, (Type2Message * __this));
IL2CPP_REGISTER_METHOD(0x02A4C2A0, Byte__Array *, get_Nonce, (Type2Message * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_TargetName, (Type2Message * __this));
IL2CPP_REGISTER_METHOD(0x02A4C3E0, Byte__Array *, get_TargetInfo, (Type2Message * __this));
IL2CPP_REGISTER_METHOD(0x02A4C520, void, Decode, (Type2Message * __this, Byte__Array * message));
IL2CPP_REGISTER_METHOD(0x02A4C6F0, Byte__Array *, GetBytes, (Type2Message * __this));
}
