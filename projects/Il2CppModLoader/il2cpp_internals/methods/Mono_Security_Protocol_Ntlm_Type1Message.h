using namespace app;

namespace app::methods::Mono::Security::Protocol::Ntlm::Type1Message {
IL2CPP_REGISTER_METHOD(0x02A4B920, void, __ctor, (Type1Message * __this));
IL2CPP_REGISTER_METHOD(0x02A4B9D0, void, set_Domain, (Type1Message * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02A4BAB0, void, set_Host, (Type1Message * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02A4BB90, void, Decode, (Type1Message * __this, Byte__Array * message));
IL2CPP_REGISTER_METHOD(0x02A4BCA0, Byte__Array *, GetBytes, (Type1Message * __this));
}
