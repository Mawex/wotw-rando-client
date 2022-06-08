using namespace app;

namespace app::methods::Mono::Security::Protocol::Ntlm::Type3Message {
IL2CPP_REGISTER_METHOD(0x02A4C830, void, __ctor, (Type3Message * __this, Type2Message * type2));
IL2CPP_REGISTER_METHOD(0x02A4CB40, void, Finalize, (Type3Message * __this));
IL2CPP_REGISTER_METHOD(0x02A4CC00, void, set_Domain, (Type3Message * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Password, (Type3Message * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Username, (Type3Message * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02A4CCE0, void, Decode, (Type3Message * __this, Byte__Array * message));
IL2CPP_REGISTER_METHOD(0x02A4CF10, String *, DecodeString, (Type3Message * __this, Byte__Array * buffer, int32_t offset, int32_t len));
IL2CPP_REGISTER_METHOD(0x02A4CF90, Byte__Array *, EncodeString, (Type3Message * __this, String * text));
IL2CPP_REGISTER_METHOD(0x02A4D070, Byte__Array *, GetBytes, (Type3Message * __this));
IL2CPP_REGISTER_METHODINFO(0x04777C78, Type3Message_GetBytes__MethodInfo);
}
